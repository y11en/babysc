#pragma once
using T_AcquireSRWLockExclusive = decltype(&AcquireSRWLockExclusive);
#define H_AcquireSRWLockExclusive 0x6f4e84f5
using T_AcquireSRWLockShared = decltype(&AcquireSRWLockShared);
#define H_AcquireSRWLockShared 0x31596cc2
using T_ActivateActCtx = decltype(&ActivateActCtx);
#define H_ActivateActCtx 0x7e08bb80
//using T_ActivateActCtxWorker = decltype(&ActivateActCtxWorker);
#define H_ActivateActCtxWorker 0x23b7e89e
using T_AddAtomA = decltype(&AddAtomA);
#define H_AddAtomA 0x2aebda37
using T_AddAtomW = decltype(&AddAtomW);
#define H_AddAtomW 0x2aebda4d
using T_AddConsoleAliasA = decltype(&AddConsoleAliasA);
#define H_AddConsoleAliasA 0x6167df5f
using T_AddConsoleAliasW = decltype(&AddConsoleAliasW);
#define H_AddConsoleAliasW 0x6167df75
//using T_AddDllDirectory = decltype(&AddDllDirectory);
#define H_AddDllDirectory 0x3f02cc92
using T_AddIntegrityLabelToBoundaryDescriptor = decltype(&AddIntegrityLabelToBoundaryDescriptor);
#define H_AddIntegrityLabelToBoundaryDescriptor 0x75134040
//using T_AddLocalAlternateComputerNameA = decltype(&AddLocalAlternateComputerNameA);
#define H_AddLocalAlternateComputerNameA 0x486d919f
//using T_AddLocalAlternateComputerNameW = decltype(&AddLocalAlternateComputerNameW);
#define H_AddLocalAlternateComputerNameW 0x486d91b5
using T_AddRefActCtx = decltype(&AddRefActCtx);
#define H_AddRefActCtx 0x13a83a3b
//using T_AddRefActCtxWorker = decltype(&AddRefActCtxWorker);
#define H_AddRefActCtxWorker 0x23ab8e21
//using T_AddResourceAttributeAce = decltype(&AddResourceAttributeAce);
#define H_AddResourceAttributeAce 0x02fe9d4e
using T_AddSIDToBoundaryDescriptor = decltype(&AddSIDToBoundaryDescriptor);
#define H_AddSIDToBoundaryDescriptor 0x12c6c93d
//using T_AddScopedPolicyIDAce = decltype(&AddScopedPolicyIDAce);
#define H_AddScopedPolicyIDAce 0x4b1713b5
using T_AddSecureMemoryCacheCallback = decltype(&AddSecureMemoryCacheCallback);
#define H_AddSecureMemoryCacheCallback 0x1b1b269e
using T_AddVectoredContinueHandler = decltype(&AddVectoredContinueHandler);
#define H_AddVectoredContinueHandler 0x2cc83c70
using T_AddVectoredExceptionHandler = decltype(&AddVectoredExceptionHandler);
#define H_AddVectoredExceptionHandler 0x241358a6
//using T_AdjustCalendarDate = decltype(&AdjustCalendarDate);
#define H_AdjustCalendarDate 0x60d9c97b
using T_AllocConsole = decltype(&AllocConsole);
#define H_AllocConsole 0x0f859f02
using T_AllocateUserPhysicalPages = decltype(&AllocateUserPhysicalPages);
#define H_AllocateUserPhysicalPages 0x70e354cd
using T_AllocateUserPhysicalPagesNuma = decltype(&AllocateUserPhysicalPagesNuma);
#define H_AllocateUserPhysicalPagesNuma 0x32b3135c
//using T_AppPolicyGetClrCompat = decltype(&AppPolicyGetClrCompat);
#define H_AppPolicyGetClrCompat 0x026d28c4
//using T_AppPolicyGetCreateFileAccess = decltype(&AppPolicyGetCreateFileAccess);
#define H_AppPolicyGetCreateFileAccess 0x55ba7ec7
//using T_AppPolicyGetLifecycleManagement = decltype(&AppPolicyGetLifecycleManagement);

/*
#define H_AppPolicyGetLifecycleManagement 0x782299f2
using T_AppPolicyGetMediaFoundationCodecLoading = decltype(&AppPolicyGetMediaFoundationCodecLoading);
#define H_AppPolicyGetMediaFoundationCodecLoading 0x0133e0d6
using T_AppPolicyGetProcessTerminationMethod = decltype(&AppPolicyGetProcessTerminationMethod);
#define H_AppPolicyGetProcessTerminationMethod 0x74fb33b5
using T_AppPolicyGetShowDeveloperDiagnostic = decltype(&AppPolicyGetShowDeveloperDiagnostic);
#define H_AppPolicyGetShowDeveloperDiagnostic 0x62fb73a1
using T_AppPolicyGetThreadInitializationType = decltype(&AppPolicyGetThreadInitializationType);
#define H_AppPolicyGetThreadInitializationType 0x540f13c7
using T_AppPolicyGetWindowingModel = decltype(&AppPolicyGetWindowingModel);
#define H_AppPolicyGetWindowingModel 0x4fb392ee
using T_AppXGetOSMaxVersionTested = decltype(&AppXGetOSMaxVersionTested);
*/

#define H_AppXGetOSMaxVersionTested 0x4b18e188
using T_ApplicationRecoveryFinished = decltype(&ApplicationRecoveryFinished);
#define H_ApplicationRecoveryFinished 0x0f722ccb
using T_ApplicationRecoveryInProgress = decltype(&ApplicationRecoveryInProgress);
#define H_ApplicationRecoveryInProgress 0x441178df
using T_AreFileApisANSI = decltype(&AreFileApisANSI);
#define H_AreFileApisANSI 0x4d261e24
using T_AssignProcessToJobObject = decltype(&AssignProcessToJobObject);
#define H_AssignProcessToJobObject 0x354a1911
using T_AttachConsole = decltype(&AttachConsole);
#define H_AttachConsole 0x5fd89b66
using T_BackupRead = decltype(&BackupRead);
#define H_BackupRead 0x7c6f24b4
using T_BackupSeek = decltype(&BackupSeek);
#define H_BackupSeek 0x7c917462
using T_BackupWrite = decltype(&BackupWrite);
#define H_BackupWrite 0x0664696d
/*
using T_BaseCheckAppcompatCache = decltype(&BaseCheckAppcompatCache);
#define H_BaseCheckAppcompatCache 0x38f7828e
using T_BaseCheckAppcompatCacheEx = decltype(&BaseCheckAppcompatCacheEx);
#define H_BaseCheckAppcompatCacheEx 0x47dee4c5
using T_BaseCheckAppcompatCacheExWorker = decltype(&BaseCheckAppcompatCacheExWorker);
#define H_BaseCheckAppcompatCacheExWorker 0x1b37ab1b
using T_BaseCheckAppcompatCacheWorker = decltype(&BaseCheckAppcompatCacheWorker);
#define H_BaseCheckAppcompatCacheWorker 0x6a601d7c
using T_BaseCheckElevation = decltype(&BaseCheckElevation);
#define H_BaseCheckElevation 0x536e3c9a
using T_BaseCleanupAppcompatCacheSupport = decltype(&BaseCleanupAppcompatCacheSupport);
#define H_BaseCleanupAppcompatCacheSupport 0x1b88f13d
using T_BaseCleanupAppcompatCacheSupportWorker = decltype(&BaseCleanupAppcompatCacheSupportWorker);
#define H_BaseCleanupAppcompatCacheSupportWorker 0x0758e4d3
using T_BaseDestroyVDMEnvironment = decltype(&BaseDestroyVDMEnvironment);
#define H_BaseDestroyVDMEnvironment 0x1a07452d
using T_BaseDllReadWriteIniFile = decltype(&BaseDllReadWriteIniFile);
#define H_BaseDllReadWriteIniFile 0x745f14b2
using T_BaseDumpAppcompatCache = decltype(&BaseDumpAppcompatCache);
#define H_BaseDumpAppcompatCache 0x5a03a198
using T_BaseDumpAppcompatCacheWorker = decltype(&BaseDumpAppcompatCacheWorker);
#define H_BaseDumpAppcompatCacheWorker 0x61657af6
using T_BaseElevationPostProcessing = decltype(&BaseElevationPostProcessing);
#define H_BaseElevationPostProcessing 0x57ed75d3
using T_BaseFlushAppcompatCache = decltype(&BaseFlushAppcompatCache);
#define H_BaseFlushAppcompatCache 0x119891ca
using T_BaseFlushAppcompatCacheWorker = decltype(&BaseFlushAppcompatCacheWorker);
#define H_BaseFlushAppcompatCacheWorker 0x56d75b58
using T_BaseFormatObjectAttributes = decltype(&BaseFormatObjectAttributes);
#define H_BaseFormatObjectAttributes 0x655632f6
using T_BaseFormatTimeOut = decltype(&BaseFormatTimeOut);
#define H_BaseFormatTimeOut 0x7ba939a5
using T_BaseFreeAppCompatDataForProcessWorker = decltype(&BaseFreeAppCompatDataForProcessWorker);
#define H_BaseFreeAppCompatDataForProcessWorker 0x16ecd544
using T_BaseGenerateAppCompatData = decltype(&BaseGenerateAppCompatData);
#define H_BaseGenerateAppCompatData 0x1eb109a3
using T_BaseGetNamedObjectDirectory = decltype(&BaseGetNamedObjectDirectory);
#define H_BaseGetNamedObjectDirectory 0x28df68ce
using T_BaseInitAppcompatCacheSupport = decltype(&BaseInitAppcompatCacheSupport);
#define H_BaseInitAppcompatCacheSupport 0x4d6d21a3
using T_BaseInitAppcompatCacheSupportWorker = decltype(&BaseInitAppcompatCacheSupportWorker);
#define H_BaseInitAppcompatCacheSupportWorker 0x59ffad49
using T_BaseIsAppcompatInfrastructureDisabled = decltype(&BaseIsAppcompatInfrastructureDisabled);
#define H_BaseIsAppcompatInfrastructureDisabled 0x77d3765b
using T_BaseIsAppcompatInfrastructureDisabledWorker = decltype(&BaseIsAppcompatInfrastructureDisabledWorker);
#define H_BaseIsAppcompatInfrastructureDisabledWorker 0x07f8e541
using T_BaseIsDosApplication = decltype(&BaseIsDosApplication);
#define H_BaseIsDosApplication 0x4be782a7
using T_BaseQueryModuleData = decltype(&BaseQueryModuleData);
#define H_BaseQueryModuleData 0x2baff9ed
using T_BaseReadAppCompatDataForProcessWorker = decltype(&BaseReadAppCompatDataForProcessWorker);
#define H_BaseReadAppCompatDataForProcessWorker 0x2b48a6aa
using T_BaseSetLastNTError = decltype(&BaseSetLastNTError);
#define H_BaseSetLastNTError 0x4b7536e3
using T_BaseThreadInitThunk = decltype(&BaseThreadInitThunk);
#define H_BaseThreadInitThunk 0x69ca3337
using T_BaseUpdateAppcompatCache = decltype(&BaseUpdateAppcompatCache);
#define H_BaseUpdateAppcompatCache 0x3cbe2d6d
using T_BaseUpdateAppcompatCacheWorker = decltype(&BaseUpdateAppcompatCacheWorker);
#define H_BaseUpdateAppcompatCacheWorker 0x0249f983
using T_BaseUpdateVDMEntry = decltype(&BaseUpdateVDMEntry);
#define H_BaseUpdateVDMEntry 0x29b548e9
using T_BaseVerifyUnicodeString = decltype(&BaseVerifyUnicodeString);
#define H_BaseVerifyUnicodeString 0x42447b20
using T_BaseWriteErrorElevationRequiredEvent = decltype(&BaseWriteErrorElevationRequiredEvent);
#define H_BaseWriteErrorElevationRequiredEvent 0x09b38e0c
using T_Basep8BitStringToDynamicUnicodeString = decltype(&Basep8BitStringToDynamicUnicodeString);
#define H_Basep8BitStringToDynamicUnicodeString 0x1753c94f
using T_BasepAllocateActivationContextActivationBlock = decltype(&BasepAllocateActivationContextActivationBlock);
#define H_BasepAllocateActivationContextActivationBlock 0x5be29a2e
using T_BasepAnsiStringToDynamicUnicodeString = decltype(&BasepAnsiStringToDynamicUnicodeString);
#define H_BasepAnsiStringToDynamicUnicodeString 0x3e7c03c1
using T_BasepAppContainerEnvironmentExtension = decltype(&BasepAppContainerEnvironmentExtension);
#define H_BasepAppContainerEnvironmentExtension 0x6e3a41b7
using T_BasepAppXExtension = decltype(&BasepAppXExtension);
#define H_BasepAppXExtension 0x382e4519
using T_BasepCheckAppCompat = decltype(&BasepCheckAppCompat);
#define H_BasepCheckAppCompat 0x6bbbf1d2
using T_BasepCheckWebBladeHashes = decltype(&BasepCheckWebBladeHashes);
#define H_BasepCheckWebBladeHashes 0x77ad7f3d
using T_BasepCheckWinSaferRestrictions = decltype(&BasepCheckWinSaferRestrictions);
#define H_BasepCheckWinSaferRestrictions 0x0d4ffd99
using T_BasepConstructSxsCreateProcessMessage = decltype(&BasepConstructSxsCreateProcessMessage);
#define H_BasepConstructSxsCreateProcessMessage 0x52cd541a
using T_BasepCopyEncryption = decltype(&BasepCopyEncryption);
#define H_BasepCopyEncryption 0x48ea5dab
using T_BasepFinishPackageActivationForSxS = decltype(&BasepFinishPackageActivationForSxS);
#define H_BasepFinishPackageActivationForSxS 0x5ddd2caf
using T_BasepFreeActivationContextActivationBlock = decltype(&BasepFreeActivationContextActivationBlock);
#define H_BasepFreeActivationContextActivationBlock 0x057823e1
using T_BasepFreeAppCompatData = decltype(&BasepFreeAppCompatData);
#define H_BasepFreeAppCompatData 0x186057de
using T_BasepGetAppCompatData = decltype(&BasepGetAppCompatData);
#define H_BasepGetAppCompatData 0x61018bee
using T_BasepGetComputerNameFromNtPath = decltype(&BasepGetComputerNameFromNtPath);
#define H_BasepGetComputerNameFromNtPath 0x27e5598a
using T_BasepGetExeArchType = decltype(&BasepGetExeArchType);
#define H_BasepGetExeArchType 0x73b4acff
using T_BasepGetPackageActivationTokenForSxS = decltype(&BasepGetPackageActivationTokenForSxS);
#define H_BasepGetPackageActivationTokenForSxS 0x3c56369d
using T_BasepInitAppCompatData = decltype(&BasepInitAppCompatData);
#define H_BasepInitAppCompatData 0x00fca2b6
using T_BasepIsProcessAllowed = decltype(&BasepIsProcessAllowed);
#define H_BasepIsProcessAllowed 0x36749f6a
using T_BasepMapModuleHandle = decltype(&BasepMapModuleHandle);
#define H_BasepMapModuleHandle 0x7e4dc98d
using T_BasepNotifyLoadStringResource = decltype(&BasepNotifyLoadStringResource);
#define H_BasepNotifyLoadStringResource 0x0cd8f4a9
using T_BasepPostSuccessAppXExtension = decltype(&BasepPostSuccessAppXExtension);
#define H_BasepPostSuccessAppXExtension 0x16f693a4
using T_BasepProcessInvalidImage = decltype(&BasepProcessInvalidImage);
#define H_BasepProcessInvalidImage 0x40d8a83c
using T_BasepQueryAppCompat = decltype(&BasepQueryAppCompat);
#define H_BasepQueryAppCompat 0x6ab62fea
using T_BasepQueryModuleChpeSettings = decltype(&BasepQueryModuleChpeSettings);
#define H_BasepQueryModuleChpeSettings 0x4c19c00e
using T_BasepReleaseAppXContext = decltype(&BasepReleaseAppXContext);
#define H_BasepReleaseAppXContext 0x50259884
using T_BasepReleaseSxsCreateProcessUtilityStruct = decltype(&BasepReleaseSxsCreateProcessUtilityStruct);
#define H_BasepReleaseSxsCreateProcessUtilityStruct 0x7aeca550
using T_BasepReportFault = decltype(&BasepReportFault);
#define H_BasepReportFault 0x7a802077
using T_BasepSetFileEncryptionCompression = decltype(&BasepSetFileEncryptionCompression);
#define H_BasepSetFileEncryptionCompression 0x48b113ec
*/

using T_Beep = decltype(&Beep);
#define H_Beep 0x08f2a8a2
using T_BeginUpdateResourceA = decltype(&BeginUpdateResourceA);
#define H_BeginUpdateResourceA 0x58e00871
using T_BeginUpdateResourceW = decltype(&BeginUpdateResourceW);
#define H_BeginUpdateResourceW 0x58e00887
using T_BindIoCompletionCallback = decltype(&BindIoCompletionCallback);
#define H_BindIoCompletionCallback 0x610b0b54
using T_BuildCommDCBA = decltype(&BuildCommDCBA);
#define H_BuildCommDCBA 0x457d554c
using T_BuildCommDCBAndTimeoutsA = decltype(&BuildCommDCBAndTimeoutsA);
#define H_BuildCommDCBAndTimeoutsA 0x5a4f6e0d
using T_BuildCommDCBAndTimeoutsW = decltype(&BuildCommDCBAndTimeoutsW);
#define H_BuildCommDCBAndTimeoutsW 0x5a4f6e23
using T_BuildCommDCBW = decltype(&BuildCommDCBW);
#define H_BuildCommDCBW 0x457d5562
using T_CallNamedPipeA = decltype(&CallNamedPipeA);
#define H_CallNamedPipeA 0x1a247560
using T_CallNamedPipeW = decltype(&CallNamedPipeW);
#define H_CallNamedPipeW 0x1a247576
using T_CallbackMayRunLong = decltype(&CallbackMayRunLong);
#define H_CallbackMayRunLong 0x433ef11b
using T_CancelDeviceWakeupRequest = decltype(&CancelDeviceWakeupRequest);
#define H_CancelDeviceWakeupRequest 0x7dd7b280
using T_CancelIo = decltype(&CancelIo);
#define H_CancelIo 0x21994894
using T_CancelIoEx = decltype(&CancelIoEx);
#define H_CancelIoEx 0x4c626cfb
using T_CancelSynchronousIo = decltype(&CancelSynchronousIo);
#define H_CancelSynchronousIo 0x2ffb11d5
using T_CancelThreadpoolIo = decltype(&CancelThreadpoolIo);
#define H_CancelThreadpoolIo 0x3cd38122
using T_CancelTimerQueueTimer = decltype(&CancelTimerQueueTimer);
#define H_CancelTimerQueueTimer 0x73e4918b
using T_CancelWaitableTimer = decltype(&CancelWaitableTimer);
/*
#define H_CancelWaitableTimer 0x67b60cfc
using T_CeipIsOptedIn = decltype(&CeipIsOptedIn);
#define H_CeipIsOptedIn 0x02c2b784
using T_ChangeTimerQueueTimer = decltype(&ChangeTimerQueueTimer);
#define H_ChangeTimerQueueTimer 0x5aab1d49
using T_CheckAllowDecryptedRemoteDestinationPolicy = decltype(&CheckAllowDecryptedRemoteDestinationPolicy);
#define H_CheckAllowDecryptedRemoteDestinationPolicy 0x1b3fbe2f
using T_CheckElevation = decltype(&CheckElevation);
#define H_CheckElevation 0x0ee36765
using T_CheckElevationEnabled = decltype(&CheckElevationEnabled);
#define H_CheckElevationEnabled 0x6a16e424
using T_CheckForReadOnlyResource = decltype(&CheckForReadOnlyResource);
#define H_CheckForReadOnlyResource 0x1bf7c955
using T_CheckForReadOnlyResourceFilter = decltype(&CheckForReadOnlyResourceFilter);
#define H_CheckForReadOnlyResourceFilter 0x04edda51
*/

using T_CheckNameLegalDOS8Dot3A = decltype(&CheckNameLegalDOS8Dot3A);
#define H_CheckNameLegalDOS8Dot3A 0x45e57ad9
using T_CheckNameLegalDOS8Dot3W = decltype(&CheckNameLegalDOS8Dot3W);
#define H_CheckNameLegalDOS8Dot3W 0x45e57aef
using T_CheckRemoteDebuggerPresent = decltype(&CheckRemoteDebuggerPresent);
#define H_CheckRemoteDebuggerPresent 0x799568cc
//using T_CheckTokenCapability = decltype(&CheckTokenCapability);
#define H_CheckTokenCapability 0x7da82ff1
//using T_CheckTokenMembershipEx = decltype(&CheckTokenMembershipEx);
#define H_CheckTokenMembershipEx 0x6a38d8c6
using T_ClearCommBreak = decltype(&ClearCommBreak);
#define H_ClearCommBreak 0x7038c7d2
using T_ClearCommError = decltype(&ClearCommError);
#define H_ClearCommError 0x24e5596b
//using T_CloseConsoleHandle = decltype(&CloseConsoleHandle);
#define H_CloseConsoleHandle 0x5f8f8853
using T_CloseHandle = decltype(&CloseHandle);
#define H_CloseHandle 0x0698402c
//using T_ClosePackageInfo = decltype(&ClosePackageInfo);
#define H_ClosePackageInfo 0x5cba9da8
using T_ClosePrivateNamespace = decltype(&ClosePrivateNamespace);
#define H_ClosePrivateNamespace 0x4adaa314
//using T_CloseProfileUserMapping = decltype(&CloseProfileUserMapping);
#define H_CloseProfileUserMapping 0x4ded6152
//using T_ClosePseudoConsole = decltype(&ClosePseudoConsole);
#define H_ClosePseudoConsole 0x3602f8c1
//using T_CloseState = decltype(&CloseState);
#define H_CloseState 0x7198911d
using T_CloseThreadpool = decltype(&CloseThreadpool);
#define H_CloseThreadpool 0x76bbf3aa
using T_CloseThreadpoolCleanupGroup = decltype(&CloseThreadpoolCleanupGroup);
#define H_CloseThreadpoolCleanupGroup 0x0425e381
using T_CloseThreadpoolCleanupGroupMembers = decltype(&CloseThreadpoolCleanupGroupMembers);
#define H_CloseThreadpoolCleanupGroupMembers 0x6ca42e58
using T_CloseThreadpoolIo = decltype(&CloseThreadpoolIo);
#define H_CloseThreadpoolIo 0x5d6134c4
using T_CloseThreadpoolTimer = decltype(&CloseThreadpoolTimer);
#define H_CloseThreadpoolTimer 0x0927a97b
using T_CloseThreadpoolWait = decltype(&CloseThreadpoolWait);
#define H_CloseThreadpoolWait 0x3b16f10f
using T_CloseThreadpoolWork = decltype(&CloseThreadpoolWork);
#define H_CloseThreadpoolWork 0x3b1aa01f
//using T_CmdBatNotification = decltype(&CmdBatNotification);
#define H_CmdBatNotification 0x5477a036
using T_CommConfigDialogA = decltype(&CommConfigDialogA);
#define H_CommConfigDialogA 0x2d17bd73
using T_CommConfigDialogW = decltype(&CommConfigDialogW);
#define H_CommConfigDialogW 0x2d17bd89
//using T_CompareCalendarDates = decltype(&CompareCalendarDates);
#define H_CompareCalendarDates 0x1f439482
using T_CompareFileTime = decltype(&CompareFileTime);
#define H_CompareFileTime 0x6c07a1ee
using T_CompareStringA = decltype(&CompareStringA);
#define H_CompareStringA 0x5dab5203
using T_CompareStringEx = decltype(&CompareStringEx);
#define H_CompareStringEx 0x6eaafa0d
using T_CompareStringOrdinal = decltype(&CompareStringOrdinal);
#define H_CompareStringOrdinal 0x0f2e80c3
using T_CompareStringW = decltype(&CompareStringW);
#define H_CompareStringW 0x5dab5219
using T_ConnectNamedPipe = decltype(&ConnectNamedPipe);
#define H_ConnectNamedPipe 0x109bec65
//using T_ConsoleMenuControl = decltype(&ConsoleMenuControl);
#define H_ConsoleMenuControl 0x3e1a0c43
using T_ContinueDebugEvent = decltype(&ContinueDebugEvent);
#define H_ContinueDebugEvent 0x3c09ce0e
//using T_ConvertCalDateTimeToSystemTime = decltype(&ConvertCalDateTimeToSystemTime);
#define H_ConvertCalDateTimeToSystemTime 0x228afdad
using T_ConvertDefaultLocale = decltype(&ConvertDefaultLocale);
#define H_ConvertDefaultLocale 0x308bdfa4
using T_ConvertFiberToThread = decltype(&ConvertFiberToThread);
#define H_ConvertFiberToThread 0x400a752a

//using T_ConvertNLSDayOfWeekToWin32DayOfWeek = decltype(&ConvertNLSDayOfWeekToWin32DayOfWeek);
//#define H_ConvertNLSDayOfWeekToWin32DayOfWeek 0x79cc40f8
//using T_ConvertSystemTimeToCalDateTime = decltype(&ConvertSystemTimeToCalDateTime);
//#define H_ConvertSystemTimeToCalDateTime 0x587f1bdb

using T_ConvertThreadToFiber = decltype(&ConvertThreadToFiber);
#define H_ConvertThreadToFiber 0x05d64b74
using T_ConvertThreadToFiberEx = decltype(&ConvertThreadToFiberEx);
#define H_ConvertThreadToFiberEx 0x4a4826db
//using T_CopyContext = decltype(&CopyContext);
#define H_CopyContext 0x1dff12e6
//using T_CopyFile2 = decltype(&CopyFile2);
#define H_CopyFile2 0x1f3d8099
using T_CopyFileA = decltype(&CopyFileA);
#define H_CopyFileA 0x1f3d80a8
using T_CopyFileExA = decltype(&CopyFileExA);
#define H_CopyFileExA 0x31d6c7b5
using T_CopyFileExW = decltype(&CopyFileExW);
#define H_CopyFileExW 0x31d6c7cb
using T_CopyFileTransactedA = decltype(&CopyFileTransactedA);
#define H_CopyFileTransactedA 0x7e0a81db
using T_CopyFileTransactedW = decltype(&CopyFileTransactedW);
#define H_CopyFileTransactedW 0x7e0a81f1
using T_CopyFileW = decltype(&CopyFileW);
#define H_CopyFileW 0x1f3d80be
using T_CopyLZFile = decltype(&CopyLZFile);
#define H_CopyLZFile 0x552e8973
using T_CreateActCtxA = decltype(&CreateActCtxA);
#define H_CreateActCtxA 0x105c53e8
using T_CreateActCtxW = decltype(&CreateActCtxW);
#define H_CreateActCtxW 0x105c53fe
//using T_CreateActCtxWWorker = decltype(&CreateActCtxWWorker);
#define H_CreateActCtxWWorker 0x6984756c
using T_CreateBoundaryDescriptorA = decltype(&CreateBoundaryDescriptorA);
#define H_CreateBoundaryDescriptorA 0x46a4324c
using T_CreateBoundaryDescriptorW = decltype(&CreateBoundaryDescriptorW);
#define H_CreateBoundaryDescriptorW 0x46a43262
using T_CreateConsoleScreenBuffer = decltype(&CreateConsoleScreenBuffer);
#define H_CreateConsoleScreenBuffer 0x107726db
using T_CreateDirectoryA = decltype(&CreateDirectoryA);
#define H_CreateDirectoryA 0x01147c44
using T_CreateDirectoryExA = decltype(&CreateDirectoryExA);
#define H_CreateDirectoryExA 0x663f7431
using T_CreateDirectoryExW = decltype(&CreateDirectoryExW);
#define H_CreateDirectoryExW 0x663f7447
using T_CreateDirectoryTransactedA = decltype(&CreateDirectoryTransactedA);
#define H_CreateDirectoryTransactedA 0x3a9867d7
using T_CreateDirectoryTransactedW = decltype(&CreateDirectoryTransactedW);
#define H_CreateDirectoryTransactedW 0x3a9867ed
using T_CreateDirectoryW = decltype(&CreateDirectoryW);
#define H_CreateDirectoryW 0x01147c5a
//using T_CreateEnclave = decltype(&CreateEnclave);
#define H_CreateEnclave 0x0ce65922
using T_CreateEventA = decltype(&CreateEventA);
#define H_CreateEventA 0x40955b13
using T_CreateEventExA = decltype(&CreateEventExA);
#define H_CreateEventExA 0x5c177678
using T_CreateEventExW = decltype(&CreateEventExW);
#define H_CreateEventExW 0x5c17768e
using T_CreateEventW = decltype(&CreateEventW);
#define H_CreateEventW 0x40955b29
using T_CreateFiber = decltype(&CreateFiber);
#define H_CreateFiber 0x57a13500
using T_CreateFiberEx = decltype(&CreateFiberEx);
#define H_CreateFiberEx 0x458a00c7
//using T_CreateFile2 = decltype(&CreateFile2);
#define H_CreateFile2 0x57a3d31a
using T_CreateFileA = decltype(&CreateFileA);
#define H_CreateFileA 0x57a3d329
using T_CreateFileMappingA = decltype(&CreateFileMappingA);
#define H_CreateFileMappingA 0x57177da7
//using T_CreateFileMappingFromApp = decltype(&CreateFileMappingFromApp);
#define H_CreateFileMappingFromApp 0x09a09b29
using T_CreateFileMappingNumaA = decltype(&CreateFileMappingNumaA);
#define H_CreateFileMappingNumaA 0x01baf284
using T_CreateFileMappingNumaW = decltype(&CreateFileMappingNumaW);
#define H_CreateFileMappingNumaW 0x01baf29a
using T_CreateFileMappingW = decltype(&CreateFileMappingW);
#define H_CreateFileMappingW 0x57177dbd
using T_CreateFileTransactedA = decltype(&CreateFileTransactedA);
#define H_CreateFileTransactedA 0x00700e04
using T_CreateFileTransactedW = decltype(&CreateFileTransactedW);
#define H_CreateFileTransactedW 0x00700e1a
using T_CreateFileW = decltype(&CreateFileW);
#define H_CreateFileW 0x57a3d33f
using T_CreateHardLinkA = decltype(&CreateHardLinkA);
#define H_CreateHardLinkA 0x406f8b74
using T_CreateHardLinkTransactedA = decltype(&CreateHardLinkTransactedA);
#define H_CreateHardLinkTransactedA 0x414c5e87
using T_CreateHardLinkTransactedW = decltype(&CreateHardLinkTransactedW);
#define H_CreateHardLinkTransactedW 0x414c5e9d
using T_CreateHardLinkW = decltype(&CreateHardLinkW);
#define H_CreateHardLinkW 0x406f8b8a
using T_CreateIoCompletionPort = decltype(&CreateIoCompletionPort);
#define H_CreateIoCompletionPort 0x63296e8f
using T_CreateJobObjectA = decltype(&CreateJobObjectA);
#define H_CreateJobObjectA 0x64661e45
using T_CreateJobObjectW = decltype(&CreateJobObjectW);
#define H_CreateJobObjectW 0x64661e5b
using T_CreateJobSet = decltype(&CreateJobSet);
#define H_CreateJobSet 0x2edcd5dd
using T_CreateMailslotA = decltype(&CreateMailslotA);
#define H_CreateMailslotA 0x6c9ebf5c
using T_CreateMailslotW = decltype(&CreateMailslotW);
#define H_CreateMailslotW 0x6c9ebf72
using T_CreateMemoryResourceNotification = decltype(&CreateMemoryResourceNotification);
#define H_CreateMemoryResourceNotification 0x69181dba
using T_CreateMutexA = decltype(&CreateMutexA);
#define H_CreateMutexA 0x0d2a332a
using T_CreateMutexExA = decltype(&CreateMutexExA);
#define H_CreateMutexExA 0x01e11447
using T_CreateMutexExW = decltype(&CreateMutexExW);
#define H_CreateMutexExW 0x01e1145d
using T_CreateMutexW = decltype(&CreateMutexW);
#define H_CreateMutexW 0x0d2a3340
using T_CreateNamedPipeA = decltype(&CreateNamedPipeA);
#define H_CreateNamedPipeA 0x2cb82302
using T_CreateNamedPipeW = decltype(&CreateNamedPipeW);
#define H_CreateNamedPipeW 0x2cb82318
using T_CreatePipe = decltype(&CreatePipe);
#define H_CreatePipe 0x1d5e2712
using T_CreatePrivateNamespaceA = decltype(&CreatePrivateNamespaceA);
#define H_CreatePrivateNamespaceA 0x1f74efbd
using T_CreatePrivateNamespaceW = decltype(&CreatePrivateNamespaceW);
#define H_CreatePrivateNamespaceW 0x1f74efd3
using T_CreateProcessA = decltype(&CreateProcessA);
#define H_CreateProcessA 0x3ac9e18a
using T_CreateProcessAsUserA = decltype(&CreateProcessAsUserA);
#define H_CreateProcessAsUserA 0x4aa1b34d
using T_CreateProcessAsUserW = decltype(&CreateProcessAsUserW);
#define H_CreateProcessAsUserW 0x4aa1b363
//using T_CreateProcessInternalA = decltype(&CreateProcessInternalA);
#define H_CreateProcessInternalA 0x694044d9
//using T_CreateProcessInternalW = decltype(&CreateProcessInternalW);
#define H_CreateProcessInternalW 0x694044ef
using T_CreateProcessW = decltype(&CreateProcessW);
#define H_CreateProcessW 0x3ac9e1a0
//using T_CreatePseudoConsole = decltype(&CreatePseudoConsole);
#define H_CreatePseudoConsole 0x1a886101
using T_CreateRemoteThread = decltype(&CreateRemoteThread);
#define H_CreateRemoteThread 0x71469c9c
using T_CreateRemoteThreadEx = decltype(&CreateRemoteThreadEx);
#define H_CreateRemoteThreadEx 0x76787943
using T_CreateSemaphoreA = decltype(&CreateSemaphoreA);
#define H_CreateSemaphoreA 0x51aee9c1
using T_CreateSemaphoreExA = decltype(&CreateSemaphoreExA);
#define H_CreateSemaphoreExA 0x26550496
using T_CreateSemaphoreExW = decltype(&CreateSemaphoreExW);
#define H_CreateSemaphoreExW 0x265504ac
using T_CreateSemaphoreW = decltype(&CreateSemaphoreW);
#define H_CreateSemaphoreW 0x51aee9d7
//using T_CreateSocketHandle = decltype(&CreateSocketHandle);
#define H_CreateSocketHandle 0x3b998df3
using T_CreateSymbolicLinkA = decltype(&CreateSymbolicLinkA);
#define H_CreateSymbolicLinkA 0x7292e2c1
using T_CreateSymbolicLinkTransactedA = decltype(&CreateSymbolicLinkTransactedA);
#define H_CreateSymbolicLinkTransactedA 0x6634d15c
using T_CreateSymbolicLinkTransactedW = decltype(&CreateSymbolicLinkTransactedW);
#define H_CreateSymbolicLinkTransactedW 0x6634d172
using T_CreateSymbolicLinkW = decltype(&CreateSymbolicLinkW);
#define H_CreateSymbolicLinkW 0x7292e2d7
using T_CreateTapePartition = decltype(&CreateTapePartition);
#define H_CreateTapePartition 0x628a807c
using T_CreateThread = decltype(&CreateThread);
#define H_CreateThread 0x09515a5a
using T_CreateThreadpool = decltype(&CreateThreadpool);
#define H_CreateThreadpool 0x15aad06a
using T_CreateThreadpoolCleanupGroup = decltype(&CreateThreadpoolCleanupGroup);
#define H_CreateThreadpoolCleanupGroup 0x2fcd7441
using T_CreateThreadpoolIo = decltype(&CreateThreadpoolIo);
#define H_CreateThreadpoolIo 0x778d3784
using T_CreateThreadpoolTimer = decltype(&CreateThreadpoolTimer);
#define H_CreateThreadpoolTimer 0x7c2113bb
using T_CreateThreadpoolWait = decltype(&CreateThreadpoolWait);
#define H_CreateThreadpoolWait 0x2b5b49cf
using T_CreateThreadpoolWork = decltype(&CreateThreadpoolWork);
#define H_CreateThreadpoolWork 0x2b5ef8df
using T_CreateTimerQueue = decltype(&CreateTimerQueue);
#define H_CreateTimerQueue 0x40acb92c
using T_CreateTimerQueueTimer = decltype(&CreateTimerQueueTimer);
#define H_CreateTimerQueueTimer 0x173578e1
using T_CreateToolhelp32Snapshot = decltype(&CreateToolhelp32Snapshot);
#define H_CreateToolhelp32Snapshot 0x415c63a0
using T_CreateWaitableTimerA = decltype(&CreateWaitableTimerA);
#define H_CreateWaitableTimerA 0x3d6bb4a7
using T_CreateWaitableTimerExA = decltype(&CreateWaitableTimerExA);
#define H_CreateWaitableTimerExA 0x591258ac
using T_CreateWaitableTimerExW = decltype(&CreateWaitableTimerExW);
#define H_CreateWaitableTimerExW 0x591258c2
using T_CreateWaitableTimerW = decltype(&CreateWaitableTimerW);
#define H_CreateWaitableTimerW 0x3d6bb4bd
//using T_CtrlRoutine = decltype(&CtrlRoutine);
#define H_CtrlRoutine 0x7480296d
using T_DeactivateActCtx = decltype(&DeactivateActCtx);
#define H_DeactivateActCtx 0x659e2809
//using T_DeactivateActCtxWorker = decltype(&DeactivateActCtxWorker);
#define H_DeactivateActCtxWorker 0x3559dbbf
using T_DebugActiveProcess = decltype(&DebugActiveProcess);
#define H_DebugActiveProcess 0x54da0b86
using T_DebugActiveProcessStop = decltype(&DebugActiveProcessStop);
#define H_DebugActiveProcessStop 0x273aabf8
using T_DebugBreak = decltype(&DebugBreak);
#define H_DebugBreak 0x3b8ca4fc
using T_DebugBreakProcess = decltype(&DebugBreakProcess);
#define H_DebugBreakProcess 0x68bf21c3
using T_DebugSetProcessKillOnExit = decltype(&DebugSetProcessKillOnExit);
#define H_DebugSetProcessKillOnExit 0x55550637
using T_DecodePointer = decltype(&DecodePointer);
#define H_DecodePointer 0x1d275dc3
using T_DecodeSystemPointer = decltype(&DecodeSystemPointer);
#define H_DecodeSystemPointer 0x5e9d20d4
using T_DefineDosDeviceA = decltype(&DefineDosDeviceA);
#define H_DefineDosDeviceA 0x619a19fe
using T_DefineDosDeviceW = decltype(&DefineDosDeviceW);
#define H_DefineDosDeviceW 0x619a1a14
//using T_DelayLoadFailureHook = decltype(&DelayLoadFailureHook);
#define H_DelayLoadFailureHook 0x15eb7cac
using T_DeleteAtom = decltype(&DeleteAtom);
#define H_DeleteAtom 0x3fe743cc
using T_DeleteBoundaryDescriptor = decltype(&DeleteBoundaryDescriptor);
#define H_DeleteBoundaryDescriptor 0x1ef7be08
using T_DeleteCriticalSection = decltype(&DeleteCriticalSection);
#define H_DeleteCriticalSection 0x20f16f7b
using T_DeleteFiber = decltype(&DeleteFiber);
#define H_DeleteFiber 0x099f8035
using T_DeleteFileA = decltype(&DeleteFileA);
#define H_DeleteFileA 0x09a21e5e
using T_DeleteFileTransactedA = decltype(&DeleteFileTransactedA);
#define H_DeleteFileTransactedA 0x68f98d01
using T_DeleteFileTransactedW = decltype(&DeleteFileTransactedW);
#define H_DeleteFileTransactedW 0x68f98d17
using T_DeleteFileW = decltype(&DeleteFileW);
#define H_DeleteFileW 0x09a21e74
using T_DeleteProcThreadAttributeList = decltype(&DeleteProcThreadAttributeList);
#define H_DeleteProcThreadAttributeList 0x38a9fc37
//using T_DeleteSynchronizationBarrier = decltype(&DeleteSynchronizationBarrier);
#define H_DeleteSynchronizationBarrier 0x0cdb0c16
using T_DeleteTimerQueue = decltype(&DeleteTimerQueue);
#define H_DeleteTimerQueue 0x744508fb
using T_DeleteTimerQueueEx = decltype(&DeleteTimerQueueEx);
#define H_DeleteTimerQueueEx 0x27c7259a
using T_DeleteTimerQueueTimer = decltype(&DeleteTimerQueueTimer);
#define H_DeleteTimerQueueTimer 0x7fbef7de
using T_DeleteVolumeMountPointA = decltype(&DeleteVolumeMountPointA);
#define H_DeleteVolumeMountPointA 0x34691ab5
using T_DeleteVolumeMountPointW = decltype(&DeleteVolumeMountPointW);
#define H_DeleteVolumeMountPointW 0x34691acb
using T_DeviceIoControl = decltype(&DeviceIoControl);
#define H_DeviceIoControl 0x12d25871
using T_DisableThreadLibraryCalls = decltype(&DisableThreadLibraryCalls);
#define H_DisableThreadLibraryCalls 0x795e06ac
using T_DisableThreadProfiling = decltype(&DisableThreadProfiling);
#define H_DisableThreadProfiling 0x5f3f6a70
using T_DisassociateCurrentThreadFromCallback = decltype(&DisassociateCurrentThreadFromCallback);
#define H_DisassociateCurrentThreadFromCallback 0x425317ae
//using T_DiscardVirtualMemory = decltype(&DiscardVirtualMemory);
#define H_DiscardVirtualMemory 0x490e39c6
using T_DisconnectNamedPipe = decltype(&DisconnectNamedPipe);
#define H_DisconnectNamedPipe 0x1241a0d7
using T_DnsHostnameToComputerNameA = decltype(&DnsHostnameToComputerNameA);
#define H_DnsHostnameToComputerNameA 0x595557c4
//using T_DnsHostnameToComputerNameExW = decltype(&DnsHostnameToComputerNameExW);
#define H_DnsHostnameToComputerNameExW 0x79f9abc7
using T_DnsHostnameToComputerNameW = decltype(&DnsHostnameToComputerNameW);
#define H_DnsHostnameToComputerNameW 0x595557da
using T_DosDateTimeToFileTime = decltype(&DosDateTimeToFileTime);
#define H_DosDateTimeToFileTime 0x6675ae0b
//using T_DosPathToSessionPathA = decltype(&DosPathToSessionPathA);
#define H_DosPathToSessionPathA 0x6d5c1baa
//using T_DosPathToSessionPathW = decltype(&DosPathToSessionPathW);
#define H_DosPathToSessionPathW 0x6d5c1bc0
//using T_DuplicateConsoleHandle = decltype(&DuplicateConsoleHandle);
#define H_DuplicateConsoleHandle 0x28f70208
//using T_DuplicateEncryptionInfoFileExt = decltype(&DuplicateEncryptionInfoFileExt);
#define H_DuplicateEncryptionInfoFileExt 0x69b3660d
using T_DuplicateHandle = decltype(&DuplicateHandle);
#define H_DuplicateHandle 0x678f456b
using T_EnableThreadProfiling = decltype(&EnableThreadProfiling);
#define H_EnableThreadProfiling 0x4eeb61b9
using T_EncodePointer = decltype(&EncodePointer);
#define H_EncodePointer 0x72d91d07
using T_EncodeSystemPointer = decltype(&EncodeSystemPointer);
#define H_EncodeSystemPointer 0x6e5e6d78
using T_EndUpdateResourceA = decltype(&EndUpdateResourceA);
#define H_EndUpdateResourceA 0x2ed9c25f
using T_EndUpdateResourceW = decltype(&EndUpdateResourceW);
#define H_EndUpdateResourceW 0x2ed9c275
using T_EnterCriticalSection = decltype(&EnterCriticalSection);
#define H_EnterCriticalSection 0x54392836
//using T_EnterSynchronizationBarrier = decltype(&EnterSynchronizationBarrier);
#define H_EnterSynchronizationBarrier 0x5a433c1f
using T_EnumCalendarInfoA = decltype(&EnumCalendarInfoA);
#define H_EnumCalendarInfoA 0x65bcff6c
using T_EnumCalendarInfoExA = decltype(&EnumCalendarInfoExA);
#define H_EnumCalendarInfoExA 0x0a7f8899
using T_EnumCalendarInfoExEx = decltype(&EnumCalendarInfoExEx);
#define H_EnumCalendarInfoExEx 0x5f42e8cf
using T_EnumCalendarInfoExW = decltype(&EnumCalendarInfoExW);
#define H_EnumCalendarInfoExW 0x0a7f88af
using T_EnumCalendarInfoW = decltype(&EnumCalendarInfoW);
#define H_EnumCalendarInfoW 0x65bcff82
using T_EnumDateFormatsA = decltype(&EnumDateFormatsA);
#define H_EnumDateFormatsA 0x6c1799ac
using T_EnumDateFormatsExA = decltype(&EnumDateFormatsExA);
#define H_EnumDateFormatsExA 0x7a0db4d9
using T_EnumDateFormatsExEx = decltype(&EnumDateFormatsExEx);
#define H_EnumDateFormatsExEx 0x75038d8f
using T_EnumDateFormatsExW = decltype(&EnumDateFormatsExW);
#define H_EnumDateFormatsExW 0x7a0db4ef
using T_EnumDateFormatsW = decltype(&EnumDateFormatsW);
#define H_EnumDateFormatsW 0x6c1799c2
using T_EnumLanguageGroupLocalesA = decltype(&EnumLanguageGroupLocalesA);
#define H_EnumLanguageGroupLocalesA 0x5bb4a12e
using T_EnumLanguageGroupLocalesW = decltype(&EnumLanguageGroupLocalesW);
#define H_EnumLanguageGroupLocalesW 0x5bb4a144
using T_EnumResourceLanguagesA = decltype(&EnumResourceLanguagesA);
#define H_EnumResourceLanguagesA 0x780d6b0d
using T_EnumResourceLanguagesExA = decltype(&EnumResourceLanguagesExA);
#define H_EnumResourceLanguagesExA 0x3b7e7442
using T_EnumResourceLanguagesExW = decltype(&EnumResourceLanguagesExW);
#define H_EnumResourceLanguagesExW 0x3b7e7458
using T_EnumResourceLanguagesW = decltype(&EnumResourceLanguagesW);
#define H_EnumResourceLanguagesW 0x780d6b23
using T_EnumResourceNamesA = decltype(&EnumResourceNamesA);
#define H_EnumResourceNamesA 0x0e87ee4c
using T_EnumResourceNamesExA = decltype(&EnumResourceNamesExA);
#define H_EnumResourceNamesExA 0x16268e79
using T_EnumResourceNamesExW = decltype(&EnumResourceNamesExW);
#define H_EnumResourceNamesExW 0x16268e8f
using T_EnumResourceNamesW = decltype(&EnumResourceNamesW);
#define H_EnumResourceNamesW 0x0e87ee62
using T_EnumResourceTypesA = decltype(&EnumResourceTypesA);
#define H_EnumResourceTypesA 0x1951b367
using T_EnumResourceTypesExA = decltype(&EnumResourceTypesExA);
#define H_EnumResourceTypesExA 0x45d48d6c
using T_EnumResourceTypesExW = decltype(&EnumResourceTypesExW);
#define H_EnumResourceTypesExW 0x45d48d82
using T_EnumResourceTypesW = decltype(&EnumResourceTypesW);
#define H_EnumResourceTypesW 0x1951b37d
using T_EnumSystemCodePagesA = decltype(&EnumSystemCodePagesA);
#define H_EnumSystemCodePagesA 0x08a559d2
using T_EnumSystemCodePagesW = decltype(&EnumSystemCodePagesW);
#define H_EnumSystemCodePagesW 0x08a559e8
using T_EnumSystemFirmwareTables = decltype(&EnumSystemFirmwareTables);
#define H_EnumSystemFirmwareTables 0x041fa3cc
using T_EnumSystemGeoID = decltype(&EnumSystemGeoID);
#define H_EnumSystemGeoID 0x41021068
//using T_EnumSystemGeoNames = decltype(&EnumSystemGeoNames);
#define H_EnumSystemGeoNames 0x04c35013
using T_EnumSystemLanguageGroupsA = decltype(&EnumSystemLanguageGroupsA);
#define H_EnumSystemLanguageGroupsA 0x3ab89691
using T_EnumSystemLanguageGroupsW = decltype(&EnumSystemLanguageGroupsW);
#define H_EnumSystemLanguageGroupsW 0x3ab896a7
using T_EnumSystemLocalesA = decltype(&EnumSystemLocalesA);
#define H_EnumSystemLocalesA 0x6d8269bc
using T_EnumSystemLocalesEx = decltype(&EnumSystemLocalesEx);
#define H_EnumSystemLocalesEx 0x09bc1db8
using T_EnumSystemLocalesW = decltype(&EnumSystemLocalesW);
#define H_EnumSystemLocalesW 0x6d8269d2
using T_EnumTimeFormatsA = decltype(&EnumTimeFormatsA);
#define H_EnumTimeFormatsA 0x446734ef
using T_EnumTimeFormatsEx = decltype(&EnumTimeFormatsEx);
#define H_EnumTimeFormatsEx 0x00d018d1
using T_EnumTimeFormatsW = decltype(&EnumTimeFormatsW);
#define H_EnumTimeFormatsW 0x44673505
using T_EnumUILanguagesA = decltype(&EnumUILanguagesA);
#define H_EnumUILanguagesA 0x78b08e9b
using T_EnumUILanguagesW = decltype(&EnumUILanguagesW);
#define H_EnumUILanguagesW 0x78b08eb1
//using T_EnumerateLocalComputerNamesA = decltype(&EnumerateLocalComputerNamesA);
#define H_EnumerateLocalComputerNamesA 0x0ae651ff
//using T_EnumerateLocalComputerNamesW = decltype(&EnumerateLocalComputerNamesW);
#define H_EnumerateLocalComputerNamesW 0x0ae65215
using T_EraseTape = decltype(&EraseTape);
#define H_EraseTape 0x5956401c
using T_EscapeCommFunction = decltype(&EscapeCommFunction);
#define H_EscapeCommFunction 0x314872a1
using T_ExitProcess = decltype(&ExitProcess);
#define H_ExitProcess 0x08a39be9
using T_ExitThread = decltype(&ExitThread);
#define H_ExitThread 0x6af88c3c
//using T_ExitVDM = decltype(&ExitVDM);
#define H_ExitVDM 0x5ce8f8f9
using T_ExpandEnvironmentStringsA = decltype(&ExpandEnvironmentStringsA);
#define H_ExpandEnvironmentStringsA 0x0e808f58
using T_ExpandEnvironmentStringsW = decltype(&ExpandEnvironmentStringsW);
#define H_ExpandEnvironmentStringsW 0x0e808f6e
//using T_ExpungeConsoleCommandHistoryA = decltype(&ExpungeConsoleCommandHistoryA);
#define H_ExpungeConsoleCommandHistoryA 0x7f7dc745
//using T_ExpungeConsoleCommandHistoryW = decltype(&ExpungeConsoleCommandHistoryW);
#define H_ExpungeConsoleCommandHistoryW 0x7f7dc75b
using T_FatalAppExitA = decltype(&FatalAppExitA);
#define H_FatalAppExitA 0x7b289d5a
using T_FatalAppExitW = decltype(&FatalAppExitW);
#define H_FatalAppExitW 0x7b289d70
using T_FatalExit = decltype(&FatalExit);
#define H_FatalExit 0x377d7a72
using T_FileTimeToDosDateTime = decltype(&FileTimeToDosDateTime);
#define H_FileTimeToDosDateTime 0x3d66f9ab
using T_FileTimeToLocalFileTime = decltype(&FileTimeToLocalFileTime);
#define H_FileTimeToLocalFileTime 0x70393a38
using T_FileTimeToSystemTime = decltype(&FileTimeToSystemTime);
#define H_FileTimeToSystemTime 0x789c2494
using T_FillConsoleOutputAttribute = decltype(&FillConsoleOutputAttribute);
#define H_FillConsoleOutputAttribute 0x3dd0ad8f
using T_FillConsoleOutputCharacterA = decltype(&FillConsoleOutputCharacterA);
#define H_FillConsoleOutputCharacterA 0x755eb515
using T_FillConsoleOutputCharacterW = decltype(&FillConsoleOutputCharacterW);
#define H_FillConsoleOutputCharacterW 0x755eb52b
using T_FindActCtxSectionGuid = decltype(&FindActCtxSectionGuid);
#define H_FindActCtxSectionGuid 0x2419a14c
//using T_FindActCtxSectionGuidWorker = decltype(&FindActCtxSectionGuidWorker);
#define H_FindActCtxSectionGuidWorker 0x5b05368a
using T_FindActCtxSectionStringA = decltype(&FindActCtxSectionStringA);
#define H_FindActCtxSectionStringA 0x18bf7771
using T_FindActCtxSectionStringW = decltype(&FindActCtxSectionStringW);
#define H_FindActCtxSectionStringW 0x18bf7787
//using T_FindActCtxSectionStringWWorker = decltype(&FindActCtxSectionStringWWorker);
#define H_FindActCtxSectionStringWWorker 0x1553878d
using T_FindAtomA = decltype(&FindAtomA);
#define H_FindAtomA 0x3c84fc6f
using T_FindAtomW = decltype(&FindAtomW);
#define H_FindAtomW 0x3c84fc85
using T_FindClose = decltype(&FindClose);
#define H_FindClose 0x5e8dff6f
using T_FindCloseChangeNotification = decltype(&FindCloseChangeNotification);
#define H_FindCloseChangeNotification 0x20da4676
using T_FindFirstChangeNotificationA = decltype(&FindFirstChangeNotificationA);
#define H_FindFirstChangeNotificationA 0x6e0f66a7
using T_FindFirstChangeNotificationW = decltype(&FindFirstChangeNotificationW);
#define H_FindFirstChangeNotificationW 0x6e0f66bd
using T_FindFirstFileA = decltype(&FindFirstFileA);
#define H_FindFirstFileA 0x4c0b2d76
using T_FindFirstFileExA = decltype(&FindFirstFileExA);
#define H_FindFirstFileExA 0x194bc4f3
using T_FindFirstFileExW = decltype(&FindFirstFileExW);
#define H_FindFirstFileExW 0x194bc509
using T_FindFirstFileNameTransactedW = decltype(&FindFirstFileNameTransactedW);
#define H_FindFirstFileNameTransactedW 0x48b0b874
using T_FindFirstFileNameW = decltype(&FindFirstFileNameW);
#define H_FindFirstFileNameW 0x5327af09
using T_FindFirstFileTransactedA = decltype(&FindFirstFileTransactedA);
#define H_FindFirstFileTransactedA 0x75fd7bd9
using T_FindFirstFileTransactedW = decltype(&FindFirstFileTransactedW);
#define H_FindFirstFileTransactedW 0x75fd7bef
using T_FindFirstFileW = decltype(&FindFirstFileW);
#define H_FindFirstFileW 0x4c0b2d8c
using T_FindFirstStreamTransactedW = decltype(&FindFirstStreamTransactedW);
#define H_FindFirstStreamTransactedW 0x39a52ac3
using T_FindFirstStreamW = decltype(&FindFirstStreamW);
#define H_FindFirstStreamW 0x7e668240
using T_FindFirstVolumeA = decltype(&FindFirstVolumeA);
#define H_FindFirstVolumeA 0x4bbe9094
using T_FindFirstVolumeMountPointA = decltype(&FindFirstVolumeMountPointA);
#define H_FindFirstVolumeMountPointA 0x310f084d
using T_FindFirstVolumeMountPointW = decltype(&FindFirstVolumeMountPointW);
#define H_FindFirstVolumeMountPointW 0x310f0863
using T_FindFirstVolumeW = decltype(&FindFirstVolumeW);
#define H_FindFirstVolumeW 0x4bbe90aa
using T_FindNLSString = decltype(&FindNLSString);
#define H_FindNLSString 0x774d33b5
using T_FindNLSStringEx = decltype(&FindNLSStringEx);
#define H_FindNLSStringEx 0x663f5424
using T_FindNextChangeNotification = decltype(&FindNextChangeNotification);
#define H_FindNextChangeNotification 0x27135e23
using T_FindNextFileA = decltype(&FindNextFileA);
#define H_FindNextFileA 0x01707c51
using T_FindNextFileNameW = decltype(&FindNextFileNameW);
#define H_FindNextFileNameW 0x37e45454
using T_FindNextFileW = decltype(&FindNextFileW);
#define H_FindNextFileW 0x01707c67
using T_FindNextStreamW = decltype(&FindNextStreamW);
#define H_FindNextStreamW 0x629998f3
using T_FindNextVolumeA = decltype(&FindNextVolumeA);
#define H_FindNextVolumeA 0x2ff1a747
using T_FindNextVolumeMountPointA = decltype(&FindNextVolumeMountPointA);
#define H_FindNextVolumeMountPointA 0x313b3378
using T_FindNextVolumeMountPointW = decltype(&FindNextVolumeMountPointW);
#define H_FindNextVolumeMountPointW 0x313b338e
using T_FindNextVolumeW = decltype(&FindNextVolumeW);
#define H_FindNextVolumeW 0x2ff1a75d
//using T_FindPackagesByPackageFamily = decltype(&FindPackagesByPackageFamily);
#define H_FindPackagesByPackageFamily 0x2b6181cd
using T_FindResourceA = decltype(&FindResourceA);
#define H_FindResourceA 0x2ed9e65a
using T_FindResourceExA = decltype(&FindResourceExA);
#define H_FindResourceExA 0x2cf3f0f7
using T_FindResourceExW = decltype(&FindResourceExW);
#define H_FindResourceExW 0x2cf3f10d
using T_FindResourceW = decltype(&FindResourceW);
#define H_FindResourceW 0x2ed9e670
using T_FindStringOrdinal = decltype(&FindStringOrdinal);
#define H_FindStringOrdinal 0x124b023b
using T_FindVolumeClose = decltype(&FindVolumeClose);
#define H_FindVolumeClose 0x0f89cce1
using T_FindVolumeMountPointClose = decltype(&FindVolumeMountPointClose);
#define H_FindVolumeMountPointClose 0x7c8faaba
using T_FlsAlloc = decltype(&FlsAlloc);
#define H_FlsAlloc 0x612ab028
using T_FlsFree = decltype(&FlsFree);
#define H_FlsFree 0x70ce9eb5
using T_FlsGetValue = decltype(&FlsGetValue);
#define H_FlsGetValue 0x11c86414
using T_FlsSetValue = decltype(&FlsSetValue);
#define H_FlsSetValue 0x2a8d6498
using T_FlushConsoleInputBuffer = decltype(&FlushConsoleInputBuffer);
#define H_FlushConsoleInputBuffer 0x0771920f
using T_FlushFileBuffers = decltype(&FlushFileBuffers);
#define H_FlushFileBuffers 0x5d3bd76b
using T_FlushInstructionCache = decltype(&FlushInstructionCache);
#define H_FlushInstructionCache 0x055441b0
using T_FlushProcessWriteBuffers = decltype(&FlushProcessWriteBuffers);
#define H_FlushProcessWriteBuffers 0x185deb4b
using T_FlushViewOfFile = decltype(&FlushViewOfFile);
#define H_FlushViewOfFile 0x7a9eb628
using T_FoldStringA = decltype(&FoldStringA);
#define H_FoldStringA 0x1c5e094b
using T_FoldStringW = decltype(&FoldStringW);
#define H_FoldStringW 0x1c5e0961
//using T_FormatApplicationUserModelId = decltype(&FormatApplicationUserModelId);
#define H_FormatApplicationUserModelId 0x597ce924
using T_FormatMessageA = decltype(&FormatMessageA);
#define H_FormatMessageA 0x49ba7aa5
using T_FormatMessageW = decltype(&FormatMessageW);
#define H_FormatMessageW 0x49ba7abb
using T_FreeConsole = decltype(&FreeConsole);
#define H_FreeConsole 0x663003cf
using T_FreeEnvironmentStringsA = decltype(&FreeEnvironmentStringsA);
#define H_FreeEnvironmentStringsA 0x4d878d16
using T_FreeEnvironmentStringsW = decltype(&FreeEnvironmentStringsW);
#define H_FreeEnvironmentStringsW 0x4d878d2c
using T_FreeLibrary = decltype(&FreeLibrary);
#define H_FreeLibrary 0x089338ff
using T_FreeLibraryAndExitThread = decltype(&FreeLibraryAndExitThread);
#define H_FreeLibraryAndExitThread 0x48e83ff8
using T_FreeLibraryWhenCallbackReturns = decltype(&FreeLibraryWhenCallbackReturns);
#define H_FreeLibraryWhenCallbackReturns 0x77924e35
//using T_FreeMemoryJobObject = decltype(&FreeMemoryJobObject);
#define H_FreeMemoryJobObject 0x0a574e03
using T_FreeResource = decltype(&FreeResource);
#define H_FreeResource 0x5ebc204a
using T_FreeUserPhysicalPages = decltype(&FreeUserPhysicalPages);
#define H_FreeUserPhysicalPages 0x2c752fb6
using T_GenerateConsoleCtrlEvent = decltype(&GenerateConsoleCtrlEvent);
#define H_GenerateConsoleCtrlEvent 0x536c18e5
using T_GetACP = decltype(&GetACP);
#define H_GetACP 0x3e362cf8
using T_GetActiveProcessorCount = decltype(&GetActiveProcessorCount);
#define H_GetActiveProcessorCount 0x38d61901
using T_GetActiveProcessorGroupCount = decltype(&GetActiveProcessorGroupCount);
#define H_GetActiveProcessorGroupCount 0x1916ab06
//using T_GetAppContainerAce = decltype(&GetAppContainerAce);
#define H_GetAppContainerAce 0x64d6fe0d
//using T_GetAppContainerNamedObjectPath = decltype(&GetAppContainerNamedObjectPath);
#define H_GetAppContainerNamedObjectPath 0x3f0da6f3
using T_GetApplicationRecoveryCallback = decltype(&GetApplicationRecoveryCallback);
#define H_GetApplicationRecoveryCallback 0x07fc3cbc
//using T_GetApplicationRecoveryCallbackWorker = decltype(&GetApplicationRecoveryCallbackWorker);
#define H_GetApplicationRecoveryCallbackWorker 0x0e17c87a
using T_GetApplicationRestartSettings = decltype(&GetApplicationRestartSettings);
#define H_GetApplicationRestartSettings 0x67cbcc7c
//using T_GetApplicationRestartSettingsWorker = decltype(&GetApplicationRestartSettingsWorker);
#define H_GetApplicationRestartSettingsWorker 0x6491e23a
//using T_GetApplicationUserModelId = decltype(&GetApplicationUserModelId);
#define H_GetApplicationUserModelId 0x4a6f0c2b
using T_GetAtomNameA = decltype(&GetAtomNameA);
#define H_GetAtomNameA 0x674ebabf
using T_GetAtomNameW = decltype(&GetAtomNameW);
#define H_GetAtomNameW 0x674ebad5
using T_GetBinaryType = decltype(&GetBinaryType);
#define H_GetBinaryType 0x2e2c99c5
using T_GetBinaryTypeA = decltype(&GetBinaryTypeA);
#define H_GetBinaryTypeA 0x20d2b010
using T_GetBinaryTypeW = decltype(&GetBinaryTypeW);
#define H_GetBinaryTypeW 0x20d2b026
using T_GetCPInfo = decltype(&GetCPInfo);
#define H_GetCPInfo 0x49ab8e6d
using T_GetCPInfoExA = decltype(&GetCPInfoExA);
#define H_GetCPInfoExA 0x1f425415
using T_GetCPInfoExW = decltype(&GetCPInfoExW);
#define H_GetCPInfoExW 0x1f42542b
//using T_GetCachedSigningLevel = decltype(&GetCachedSigningLevel);
#define H_GetCachedSigningLevel 0x79a17ef7
//using T_GetCalendarDateFormat = decltype(&GetCalendarDateFormat);
#define H_GetCalendarDateFormat 0x1dae1251
//using T_GetCalendarDateFormatEx = decltype(&GetCalendarDateFormatEx);
#define H_GetCalendarDateFormatEx 0x19e9fba0
//using T_GetCalendarDaysInMonth = decltype(&GetCalendarDaysInMonth);
#define H_GetCalendarDaysInMonth 0x4e5a6da8
//using T_GetCalendarDifferenceInDays = decltype(&GetCalendarDifferenceInDays);
#define H_GetCalendarDifferenceInDays 0x653c3c3d
using T_GetCalendarInfoA = decltype(&GetCalendarInfoA);
#define H_GetCalendarInfoA 0x090b6ccf
using T_GetCalendarInfoEx = decltype(&GetCalendarInfoEx);
#define H_GetCalendarInfoEx 0x20d8b071
using T_GetCalendarInfoW = decltype(&GetCalendarInfoW);
#define H_GetCalendarInfoW 0x090b6ce5
//using T_GetCalendarMonthsInYear = decltype(&GetCalendarMonthsInYear);
#define H_GetCalendarMonthsInYear 0x4627fdfd
//using T_GetCalendarSupportedDateRange = decltype(&GetCalendarSupportedDateRange);
#define H_GetCalendarSupportedDateRange 0x79b962c1
//using T_GetCalendarWeekNumber = decltype(&GetCalendarWeekNumber);
#define H_GetCalendarWeekNumber 0x3ce0c7bd
//using T_GetComPlusPackageInstallStatus = decltype(&GetComPlusPackageInstallStatus);
#define H_GetComPlusPackageInstallStatus 0x2466bd08
using T_GetCommConfig = decltype(&GetCommConfig);
#define H_GetCommConfig 0x40085648
using T_GetCommMask = decltype(&GetCommMask);
#define H_GetCommMask 0x289f4a9a
using T_GetCommModemStatus = decltype(&GetCommModemStatus);
#define H_GetCommModemStatus 0x0a2a65da
using T_GetCommProperties = decltype(&GetCommProperties);
#define H_GetCommProperties 0x73c8daf5
using T_GetCommState = decltype(&GetCommState);
#define H_GetCommState 0x355c8393
using T_GetCommTimeouts = decltype(&GetCommTimeouts);
#define H_GetCommTimeouts 0x1431b058
using T_GetCommandLineA = decltype(&GetCommandLineA);
#define H_GetCommandLineA 0x1c8c5870
using T_GetCommandLineW = decltype(&GetCommandLineW);
#define H_GetCommandLineW 0x1c8c5886
using T_GetCompressedFileSizeA = decltype(&GetCompressedFileSizeA);
#define H_GetCompressedFileSizeA 0x2d113a3d
using T_GetCompressedFileSizeTransactedA = decltype(&GetCompressedFileSizeTransactedA);
#define H_GetCompressedFileSizeTransactedA 0x6737be38
using T_GetCompressedFileSizeTransactedW = decltype(&GetCompressedFileSizeTransactedW);
#define H_GetCompressedFileSizeTransactedW 0x6737be4e
using T_GetCompressedFileSizeW = decltype(&GetCompressedFileSizeW);
#define H_GetCompressedFileSizeW 0x2d113a53
using T_GetComputerNameA = decltype(&GetComputerNameA);
#define H_GetComputerNameA 0x07b8e4c5
using T_GetComputerNameExA = decltype(&GetComputerNameExA);
#define H_GetComputerNameExA 0x2960e3ba
using T_GetComputerNameExW = decltype(&GetComputerNameExW);
#define H_GetComputerNameExW 0x2960e3d0
using T_GetComputerNameW = decltype(&GetComputerNameW);
#define H_GetComputerNameW 0x07b8e4db
using T_GetConsoleAliasA = decltype(&GetConsoleAliasA);
#define H_GetConsoleAliasA 0x03d3f88a
using T_GetConsoleAliasExesA = decltype(&GetConsoleAliasExesA);
#define H_GetConsoleAliasExesA 0x4d2ba73d
using T_GetConsoleAliasExesLengthA = decltype(&GetConsoleAliasExesLengthA);
#define H_GetConsoleAliasExesLengthA 0x1c5b4e1f
using T_GetConsoleAliasExesLengthW = decltype(&GetConsoleAliasExesLengthW);
#define H_GetConsoleAliasExesLengthW 0x1c5b4e35
using T_GetConsoleAliasExesW = decltype(&GetConsoleAliasExesW);
#define H_GetConsoleAliasExesW 0x4d2ba753
using T_GetConsoleAliasW = decltype(&GetConsoleAliasW);
#define H_GetConsoleAliasW 0x03d3f8a0
using T_GetConsoleAliasesA = decltype(&GetConsoleAliasesA);
#define H_GetConsoleAliasesA 0x1c898338
using T_GetConsoleAliasesLengthA = decltype(&GetConsoleAliasesLengthA);
#define H_GetConsoleAliasesLengthA 0x27a1bee2
using T_GetConsoleAliasesLengthW = decltype(&GetConsoleAliasesLengthW);
#define H_GetConsoleAliasesLengthW 0x27a1bef8
using T_GetConsoleAliasesW = decltype(&GetConsoleAliasesW);
#define H_GetConsoleAliasesW 0x1c89834e
using T_GetConsoleCP = decltype(&GetConsoleCP);
#define H_GetConsoleCP 0x39975b1e
/*
using T_GetConsoleCharType = decltype(&GetConsoleCharType);
#define H_GetConsoleCharType 0x02af293d
using T_GetConsoleCommandHistoryA = decltype(&GetConsoleCommandHistoryA);
#define H_GetConsoleCommandHistoryA 0x1fa87313
using T_GetConsoleCommandHistoryLengthA = decltype(&GetConsoleCommandHistoryLengthA);
#define H_GetConsoleCommandHistoryLengthA 0x4a5aa885
using T_GetConsoleCommandHistoryLengthW = decltype(&GetConsoleCommandHistoryLengthW);
#define H_GetConsoleCommandHistoryLengthW 0x4a5aa89b
using T_GetConsoleCommandHistoryW = decltype(&GetConsoleCommandHistoryW);
#define H_GetConsoleCommandHistoryW 0x1fa87329
using T_GetConsoleCursorInfo = decltype(&GetConsoleCursorInfo);
#define H_GetConsoleCursorInfo 0x5f250625
using T_GetConsoleCursorMode = decltype(&GetConsoleCursorMode);
#define H_GetConsoleCursorMode 0x5fae7e8a
using T_GetConsoleDisplayMode = decltype(&GetConsoleDisplayMode);
#define H_GetConsoleDisplayMode 0x4fdedd90
using T_GetConsoleFontInfo = decltype(&GetConsoleFontInfo);
#define H_GetConsoleFontInfo 0x4119b1a6
using T_GetConsoleFontSize = decltype(&GetConsoleFontSize);
#define H_GetConsoleFontSize 0x426f74b9
using T_GetConsoleHardwareState = decltype(&GetConsoleHardwareState);
#define H_GetConsoleHardwareState 0x282285e4
using T_GetConsoleHistoryInfo = decltype(&GetConsoleHistoryInfo);
#define H_GetConsoleHistoryInfo 0x1a1f9229
using T_GetConsoleInputExeNameA = decltype(&GetConsoleInputExeNameA);
#define H_GetConsoleInputExeNameA 0x441bc6d9
using T_GetConsoleInputExeNameW = decltype(&GetConsoleInputExeNameW);
#define H_GetConsoleInputExeNameW 0x441bc6ef
using T_GetConsoleInputWaitHandle = decltype(&GetConsoleInputWaitHandle);
#define H_GetConsoleInputWaitHandle 0x1d5734d2
using T_GetConsoleKeyboardLayoutNameA = decltype(&GetConsoleKeyboardLayoutNameA);
#define H_GetConsoleKeyboardLayoutNameA 0x08aed39c
using T_GetConsoleKeyboardLayoutNameW = decltype(&GetConsoleKeyboardLayoutNameW);
#define H_GetConsoleKeyboardLayoutNameW 0x08aed3b2
using T_GetConsoleMode = decltype(&GetConsoleMode);
#define H_GetConsoleMode 0x248a67c4
using T_GetConsoleNlsMode = decltype(&GetConsoleNlsMode);
#define H_GetConsoleNlsMode 0x4f642ddb
*/
using T_GetConsoleOriginalTitleA = decltype(&GetConsoleOriginalTitleA);
#define H_GetConsoleOriginalTitleA 0x7179d903
using T_GetConsoleOriginalTitleW = decltype(&GetConsoleOriginalTitleW);
#define H_GetConsoleOriginalTitleW 0x7179d919
using T_GetConsoleOutputCP = decltype(&GetConsoleOutputCP);
#define H_GetConsoleOutputCP 0x54a6db5f
using T_GetConsoleProcessList = decltype(&GetConsoleProcessList);
#define H_GetConsoleProcessList 0x74e6a410
using T_GetConsoleScreenBufferInfo = decltype(&GetConsoleScreenBufferInfo);
#define H_GetConsoleScreenBufferInfo 0x49897d1f
using T_GetConsoleScreenBufferInfoEx = decltype(&GetConsoleScreenBufferInfoEx);
#define H_GetConsoleScreenBufferInfoEx 0x1194a6de
using T_GetConsoleSelectionInfo = decltype(&GetConsoleSelectionInfo);
#define H_GetConsoleSelectionInfo 0x097b3e89
using T_GetConsoleTitleA = decltype(&GetConsoleTitleA);
#define H_GetConsoleTitleA 0x7b789f02
using T_GetConsoleTitleW = decltype(&GetConsoleTitleW);
#define H_GetConsoleTitleW 0x7b789f18
using T_GetConsoleWindow = decltype(&GetConsoleWindow);
#define H_GetConsoleWindow 0x6d359cc5
using T_GetCurrencyFormatA = decltype(&GetCurrencyFormatA);
#define H_GetCurrencyFormatA 0x450d555f
using T_GetCurrencyFormatEx = decltype(&GetCurrencyFormatEx);
#define H_GetCurrencyFormatEx 0x55d2b221
using T_GetCurrencyFormatW = decltype(&GetCurrencyFormatW);
#define H_GetCurrencyFormatW 0x450d5575
using T_GetCurrentActCtx = decltype(&GetCurrentActCtx);
#define H_GetCurrentActCtx 0x720f2aac
/*
using T_GetCurrentActCtxWorker = decltype(&GetCurrentActCtxWorker);
#define H_GetCurrentActCtxWorker 0x1f13c8ea
using T_GetCurrentApplicationUserModelId = decltype(&GetCurrentApplicationUserModelId);
#define H_GetCurrentApplicationUserModelId 0x3bde8ad4
*/
using T_GetCurrentConsoleFont = decltype(&GetCurrentConsoleFont);
#define H_GetCurrentConsoleFont 0x001c86df
using T_GetCurrentConsoleFontEx = decltype(&GetCurrentConsoleFontEx);
#define H_GetCurrentConsoleFontEx 0x784d3e9e
using T_GetCurrentDirectoryA = decltype(&GetCurrentDirectoryA);
#define H_GetCurrentDirectoryA 0x03b56393
using T_GetCurrentDirectoryW = decltype(&GetCurrentDirectoryW);
#define H_GetCurrentDirectoryW 0x03b563a9
//using T_GetCurrentPackageFamilyName = decltype(&GetCurrentPackageFamilyName);
//#define H_GetCurrentPackageFamilyName 0x2624788a
//using T_GetCurrentPackageFullName = decltype(&GetCurrentPackageFullName);
//#define H_GetCurrentPackageFullName 0x4519b241
//using T_GetCurrentPackageId = decltype(&GetCurrentPackageId);
//#define H_GetCurrentPackageId 0x5032800a
//using T_GetCurrentPackageInfo = decltype(&GetCurrentPackageInfo);
//#define H_GetCurrentPackageInfo 0x094bf155
//using T_GetCurrentPackagePath = decltype(&GetCurrentPackagePath);
#define H_GetCurrentPackagePath 0x0a38b040
using T_GetCurrentProcess = decltype(&GetCurrentProcess);
#define H_GetCurrentProcess 0x5d7b97a0
using T_GetCurrentProcessId = decltype(&GetCurrentProcessId);
#define H_GetCurrentProcessId 0x22075a5f
using T_GetCurrentProcessorNumber = decltype(&GetCurrentProcessorNumber);
#define H_GetCurrentProcessorNumber 0x3fa85fa8
using T_GetCurrentProcessorNumberEx = decltype(&GetCurrentProcessorNumberEx);
#define H_GetCurrentProcessorNumberEx 0x4df478af
using T_GetCurrentThread = decltype(&GetCurrentThread);
#define H_GetCurrentThread 0x746995f9
using T_GetCurrentThreadId = decltype(&GetCurrentThreadId);
#define H_GetCurrentThreadId 0x39f69680
//using T_GetCurrentThreadStackLimits = decltype(&GetCurrentThreadStackLimits);
#define H_GetCurrentThreadStackLimits 0x2f635f1b
using T_GetDateFormatA = decltype(&GetDateFormatA);
#define H_GetDateFormatA 0x6ee38ad2
//using T_GetDateFormatAWorker = decltype(&GetDateFormatAWorker);
//#define H_GetDateFormatAWorker 0x17bc4b20
//using T_GetDateFormatEx = decltype(&GetDateFormatEx);
//#define H_GetDateFormatEx 0x3e700bfa
//using T_GetDateFormatW = decltype(&GetDateFormatW);
//#define H_GetDateFormatW 0x6ee38ae8
//using T_GetDateFormatWWorker = decltype(&GetDateFormatWWorker);
#define H_GetDateFormatWWorker 0x1f15afc6
using T_GetDefaultCommConfigA = decltype(&GetDefaultCommConfigA);
#define H_GetDefaultCommConfigA 0x7abc54b8
using T_GetDefaultCommConfigW = decltype(&GetDefaultCommConfigW);
#define H_GetDefaultCommConfigW 0x7abc54ce
using T_GetDevicePowerState = decltype(&GetDevicePowerState);
#define H_GetDevicePowerState 0x034cabfc
using T_GetDiskFreeSpaceA = decltype(&GetDiskFreeSpaceA);
#define H_GetDiskFreeSpaceA 0x66261ef2
using T_GetDiskFreeSpaceExA = decltype(&GetDiskFreeSpaceExA);
#define H_GetDiskFreeSpaceExA 0x1171b64f
using T_GetDiskFreeSpaceExW = decltype(&GetDiskFreeSpaceExW);
#define H_GetDiskFreeSpaceExW 0x1171b665
using T_GetDiskFreeSpaceW = decltype(&GetDiskFreeSpaceW);
#define H_GetDiskFreeSpaceW 0x66261f08
//using T_GetDiskSpaceInformationA = decltype(&GetDiskSpaceInformationA);
#define H_GetDiskSpaceInformationA 0x283f925c
//using T_GetDiskSpaceInformationW = decltype(&GetDiskSpaceInformationW);
#define H_GetDiskSpaceInformationW 0x283f9272
using T_GetDllDirectoryA = decltype(&GetDllDirectoryA);
#define H_GetDllDirectoryA 0x60dac822
using T_GetDllDirectoryW = decltype(&GetDllDirectoryW);
#define H_GetDllDirectoryW 0x60dac838
using T_GetDriveTypeA = decltype(&GetDriveTypeA);
#define H_GetDriveTypeA 0x6adeff8f
using T_GetDriveTypeW = decltype(&GetDriveTypeW);
#define H_GetDriveTypeW 0x6adeffa5
using T_GetDurationFormat = decltype(&GetDurationFormat);
#define H_GetDurationFormat 0x290058fd
using T_GetDurationFormatEx = decltype(&GetDurationFormatEx);
#define H_GetDurationFormatEx 0x084d7bac
using T_GetDynamicTimeZoneInformation = decltype(&GetDynamicTimeZoneInformation);
#define H_GetDynamicTimeZoneInformation 0x441962b2
//cccccccccusing T_GetEnabledXStateFeatures = decltype(&GetEnabledXStateFeatures);
#define H_GetEnabledXStateFeatures 0x2a8722dd
//using T_GetEncryptedFileVersionExt = decltype(&GetEncryptedFileVersionExt);
#define H_GetEncryptedFileVersionExt 0x750b0b67
using T_GetEnvironmentStrings = decltype(&GetEnvironmentStrings);
#define H_GetEnvironmentStrings 0x22c8bec1
//using T_GetEnvironmentStringsA = decltype(&GetEnvironmentStringsA);
#define H_GetEnvironmentStringsA 0x4cb99d04
using T_GetEnvironmentStringsW = decltype(&GetEnvironmentStringsW);
#define H_GetEnvironmentStringsW 0x4cb99d1a
using T_GetEnvironmentVariableA = decltype(&GetEnvironmentVariableA);
#define H_GetEnvironmentVariableA 0x4cc26068
using T_GetEnvironmentVariableW = decltype(&GetEnvironmentVariableW);
#define H_GetEnvironmentVariableW 0x4cc2607e
//using T_GetEraNameCountedString = decltype(&GetEraNameCountedString);
#define H_GetEraNameCountedString 0x7373e8ee
using T_GetErrorMode = decltype(&GetErrorMode);
#define H_GetErrorMode 0x6728d499
using T_GetExitCodeProcess = decltype(&GetExitCodeProcess);
#define H_GetExitCodeProcess 0x5b194a22
using T_GetExitCodeThread = decltype(&GetExitCodeThread);
#define H_GetExitCodeThread 0x60da2dcf
using T_GetExpandedNameA = decltype(&GetExpandedNameA);
#define H_GetExpandedNameA 0x01e865c7
using T_GetExpandedNameW = decltype(&GetExpandedNameW);
#define H_GetExpandedNameW 0x01e865dd
using T_GetFileAttributesA = decltype(&GetFileAttributesA);
#define H_GetFileAttributesA 0x42f6d398
using T_GetFileAttributesExA = decltype(&GetFileAttributesExA);
#define H_GetFileAttributesExA 0x740f8225
using T_GetFileAttributesExW = decltype(&GetFileAttributesExW);
#define H_GetFileAttributesExW 0x740f823b
using T_GetFileAttributesTransactedA = decltype(&GetFileAttributesTransactedA);
#define H_GetFileAttributesTransactedA 0x3f67f24b
using T_GetFileAttributesTransactedW = decltype(&GetFileAttributesTransactedW);
#define H_GetFileAttributesTransactedW 0x3f67f261
using T_GetFileAttributesW = decltype(&GetFileAttributesW);
#define H_GetFileAttributesW 0x42f6d3ae
using T_GetFileBandwidthReservation = decltype(&GetFileBandwidthReservation);
#define H_GetFileBandwidthReservation 0x6a69c6f9
using T_GetFileInformationByHandle = decltype(&GetFileInformationByHandle);
#define H_GetFileInformationByHandle 0x5d4a6699
using T_GetFileInformationByHandleEx = decltype(&GetFileInformationByHandleEx);
#define H_GetFileInformationByHandleEx 0x4077ca28
using T_GetFileMUIInfo = decltype(&GetFileMUIInfo);
#define H_GetFileMUIInfo 0x23a87129
using T_GetFileMUIPath = decltype(&GetFileMUIPath);
#define H_GetFileMUIPath 0x24953014
using T_GetFileSize = decltype(&GetFileSize);
#define H_GetFileSize 0x4b7ed323
using T_GetFileSizeEx = decltype(&GetFileSizeEx);
#define H_GetFileSizeEx 0x58b7b902
using T_GetFileTime = decltype(&GetFileTime);
#define H_GetFileTime 0x4ba11a17
using T_GetFileType = decltype(&GetFileType);
#define H_GetFileType 0x4ba54c30
using T_GetFinalPathNameByHandleA = decltype(&GetFinalPathNameByHandleA);
#define H_GetFinalPathNameByHandleA 0x47caf09e
using T_GetFinalPathNameByHandleW = decltype(&GetFinalPathNameByHandleW);
#define H_GetFinalPathNameByHandleW 0x47caf0b4
using T_GetFirmwareEnvironmentVariableA = decltype(&GetFirmwareEnvironmentVariableA);
#define H_GetFirmwareEnvironmentVariableA 0x69adc17f
//using T_GetFirmwareEnvironmentVariableExA = decltype(&GetFirmwareEnvironmentVariableExA);
#define H_GetFirmwareEnvironmentVariableExA 0x30c15444
//using T_GetFirmwareEnvironmentVariableExW = decltype(&GetFirmwareEnvironmentVariableExW);
#define H_GetFirmwareEnvironmentVariableExW 0x30c1545a
using T_GetFirmwareEnvironmentVariableW = decltype(&GetFirmwareEnvironmentVariableW);
#define H_GetFirmwareEnvironmentVariableW 0x69adc195
//using T_GetFirmwareType = decltype(&GetFirmwareType);
#define H_GetFirmwareType 0x3e0dcc6b
using T_GetFullPathNameA = decltype(&GetFullPathNameA);
#define H_GetFullPathNameA 0x136aa268
using T_GetFullPathNameTransactedA = decltype(&GetFullPathNameTransactedA);
#define H_GetFullPathNameTransactedA 0x677a899b
using T_GetFullPathNameTransactedW = decltype(&GetFullPathNameTransactedW);
#define H_GetFullPathNameTransactedW 0x677a89b1
using T_GetFullPathNameW = decltype(&GetFullPathNameW);
#define H_GetFullPathNameW 0x136aa27e
using T_GetGeoInfoA = decltype(&GetGeoInfoA);
#define H_GetGeoInfoA 0x7ac475c0
//using T_GetGeoInfoEx = decltype(&GetGeoInfoEx);
#define H_GetGeoInfoEx 0x528843c4
using T_GetGeoInfoW = decltype(&GetGeoInfoW);
#define H_GetGeoInfoW 0x7ac475d6
//using T_GetHandleContext = decltype(&GetHandleContext);
#define H_GetHandleContext 0x76256891
using T_GetHandleInformation = decltype(&GetHandleInformation);
#define H_GetHandleInformation 0x4b2d256e
using T_GetLargePageMinimum = decltype(&GetLargePageMinimum);
#define H_GetLargePageMinimum 0x63fc8896
using T_GetLargestConsoleWindowSize = decltype(&GetLargestConsoleWindowSize);
#define H_GetLargestConsoleWindowSize 0x6a1471ee
using T_GetLastError = decltype(&GetLastError);
#define H_GetLastError 0x36350a50
using T_GetLocalTime = decltype(&GetLocalTime);
#define H_GetLocalTime 0x7059859a
using T_GetLocaleInfoA = decltype(&GetLocaleInfoA);
#define H_GetLocaleInfoA 0x6352029f
using T_GetLocaleInfoEx = decltype(&GetLocaleInfoEx);
#define H_GetLocaleInfoEx 0x52f759e1
using T_GetLocaleInfoW = decltype(&GetLocaleInfoW);
#define H_GetLocaleInfoW 0x635202b5
using T_GetLogicalDriveStringsA = decltype(&GetLogicalDriveStringsA);
#define H_GetLogicalDriveStringsA 0x1f4daeb2
using T_GetLogicalDriveStringsW = decltype(&GetLogicalDriveStringsW);
#define H_GetLogicalDriveStringsW 0x1f4daec8
using T_GetLogicalDrives = decltype(&GetLogicalDrives);
#define H_GetLogicalDrives 0x32026074
using T_GetLogicalProcessorInformation = decltype(&GetLogicalProcessorInformation);
#define H_GetLogicalProcessorInformation 0x479e287d
using T_GetLogicalProcessorInformationEx = decltype(&GetLogicalProcessorInformationEx);
#define H_GetLogicalProcessorInformationEx 0x6928472c
using T_GetLongPathNameA = decltype(&GetLongPathNameA);
#define H_GetLongPathNameA 0x090a198f
using T_GetLongPathNameTransactedA = decltype(&GetLongPathNameTransactedA);
#define H_GetLongPathNameTransactedA 0x1465e55a
using T_GetLongPathNameTransactedW = decltype(&GetLongPathNameTransactedW);
#define H_GetLongPathNameTransactedW 0x1465e570
using T_GetLongPathNameW = decltype(&GetLongPathNameW);
#define H_GetLongPathNameW 0x090a19a5
using T_GetMailslotInfo = decltype(&GetMailslotInfo);
#define H_GetMailslotInfo 0x4ca285d1
using T_GetMaximumProcessorCount = decltype(&GetMaximumProcessorCount);
#define H_GetMaximumProcessorCount 0x243edf7f
using T_GetMaximumProcessorGroupCount = decltype(&GetMaximumProcessorGroupCount);
#define H_GetMaximumProcessorGroupCount 0x6e46bfa0
//using T_GetMemoryErrorHandlingCapabilities = decltype(&GetMemoryErrorHandlingCapabilities);
#define H_GetMemoryErrorHandlingCapabilities 0x768bb958
using T_GetModuleFileNameA = decltype(&GetModuleFileNameA);
#define H_GetModuleFileNameA 0x70941670
using T_GetModuleFileNameW = decltype(&GetModuleFileNameW);
#define H_GetModuleFileNameW 0x70941686
using T_GetModuleHandleA = decltype(&GetModuleHandleA);
#define H_GetModuleHandleA 0x3964c68f
using T_GetModuleHandleExA = decltype(&GetModuleHandleExA);
#define H_GetModuleHandleExA 0x6483b1d4
using T_GetModuleHandleExW = decltype(&GetModuleHandleExW);
#define H_GetModuleHandleExW 0x6483b1ea
using T_GetModuleHandleW = decltype(&GetModuleHandleW);
#define H_GetModuleHandleW 0x3964c6a5
using T_GetNLSVersion = decltype(&GetNLSVersion);
#define H_GetNLSVersion 0x2d6ab75d
using T_GetNLSVersionEx = decltype(&GetNLSVersionEx);
#define H_GetNLSVersionEx 0x06bded0c
//using T_GetNamedPipeAttribute = decltype(&GetNamedPipeAttribute);
#define H_GetNamedPipeAttribute 0x6c0c350b
using T_GetNamedPipeClientComputerNameA = decltype(&GetNamedPipeClientComputerNameA);
#define H_GetNamedPipeClientComputerNameA 0x734e95e7
using T_GetNamedPipeClientComputerNameW = decltype(&GetNamedPipeClientComputerNameW);
#define H_GetNamedPipeClientComputerNameW 0x734e95fd
using T_GetNamedPipeClientProcessId = decltype(&GetNamedPipeClientProcessId);
#define H_GetNamedPipeClientProcessId 0x6d7c134e
using T_GetNamedPipeClientSessionId = decltype(&GetNamedPipeClientSessionId);
#define H_GetNamedPipeClientSessionId 0x79409de1
using T_GetNamedPipeHandleStateA = decltype(&GetNamedPipeHandleStateA);
#define H_GetNamedPipeHandleStateA 0x1ed63c59
using T_GetNamedPipeHandleStateW = decltype(&GetNamedPipeHandleStateW);
#define H_GetNamedPipeHandleStateW 0x1ed63c6f
using T_GetNamedPipeInfo = decltype(&GetNamedPipeInfo);
#define H_GetNamedPipeInfo 0x7d6ac7df
using T_GetNamedPipeServerProcessId = decltype(&GetNamedPipeServerProcessId);
#define H_GetNamedPipeServerProcessId 0x1820cf86
using T_GetNamedPipeServerSessionId = decltype(&GetNamedPipeServerSessionId);
#define H_GetNamedPipeServerSessionId 0x23e55a19
using T_GetNativeSystemInfo = decltype(&GetNativeSystemInfo);
#define H_GetNativeSystemInfo 0x6fb00d6e
//using T_GetNextVDMCommand = decltype(&GetNextVDMCommand);
#define H_GetNextVDMCommand 0x3f2bebbd
using T_GetNumaAvailableMemoryNode = decltype(&GetNumaAvailableMemoryNode);
#define H_GetNumaAvailableMemoryNode 0x39792a9f
using T_GetNumaAvailableMemoryNodeEx = decltype(&GetNumaAvailableMemoryNodeEx);
#define H_GetNumaAvailableMemoryNodeEx 0x3b6a405e
using T_GetNumaHighestNodeNumber = decltype(&GetNumaHighestNodeNumber);
#define H_GetNumaHighestNodeNumber 0x22b7be02
using T_GetNumaNodeNumberFromHandle = decltype(&GetNumaNodeNumberFromHandle);
#define H_GetNumaNodeNumberFromHandle 0x6f7afb8a
using T_GetNumaNodeProcessorMask = decltype(&GetNumaNodeProcessorMask);
#define H_GetNumaNodeProcessorMask 0x2020910b
using T_GetNumaNodeProcessorMaskEx = decltype(&GetNumaNodeProcessorMaskEx);
#define H_GetNumaNodeProcessorMaskEx 0x271b1e2a
using T_GetNumaProcessorNode = decltype(&GetNumaProcessorNode);
#define H_GetNumaProcessorNode 0x689c68cb
using T_GetNumaProcessorNodeEx = decltype(&GetNumaProcessorNodeEx);
#define H_GetNumaProcessorNodeEx 0x1cecf3ea
using T_GetNumaProximityNode = decltype(&GetNumaProximityNode);
#define H_GetNumaProximityNode 0x36959b28
using T_GetNumaProximityNodeEx = decltype(&GetNumaProximityNodeEx);
#define H_GetNumaProximityNodeEx 0x12de102f
using T_GetNumberFormatA = decltype(&GetNumberFormatA);
#define H_GetNumberFormatA 0x173989bb
using T_GetNumberFormatEx = decltype(&GetNumberFormatEx);
#define H_GetNumberFormatEx 0x62717d35
using T_GetNumberFormatW = decltype(&GetNumberFormatW);
#define H_GetNumberFormatW 0x173989d1
//using T_GetNumberOfConsoleFonts = decltype(&GetNumberOfConsoleFonts);
#define H_GetNumberOfConsoleFonts 0x708ef88b
using T_GetNumberOfConsoleInputEvents = decltype(&GetNumberOfConsoleInputEvents);
#define H_GetNumberOfConsoleInputEvents 0x34d4e4ba
using T_GetNumberOfConsoleMouseButtons = decltype(&GetNumberOfConsoleMouseButtons);
#define H_GetNumberOfConsoleMouseButtons 0x4b7e61e5
using T_GetOEMCP = decltype(&GetOEMCP);
#define H_GetOEMCP 0x53b069da
using T_GetOverlappedResult = decltype(&GetOverlappedResult);
#define H_GetOverlappedResult 0x722fc187
//using T_GetOverlappedResultEx = decltype(&GetOverlappedResultEx);
#define H_GetOverlappedResultEx 0x03544686
//using T_GetPackageApplicationIds = decltype(&GetPackageApplicationIds);
//#define H_GetPackageApplicationIds 0x1f18af48
//using T_GetPackageFamilyName = decltype(&GetPackageFamilyName);
//#define H_GetPackageFamilyName 0x673efa17
//using T_GetPackageFullName = decltype(&GetPackageFullName);
//#define H_GetPackageFullName 0x139209a6
//using T_GetPackageId = decltype(&GetPackageId);
//#define H_GetPackageId 0x61acdc77
//using T_GetPackageInfo = decltype(&GetPackageInfo);
//#define H_GetPackageInfo 0x2cc9b82a
//using T_GetPackagePath = decltype(&GetPackagePath);
//#define H_GetPackagePath 0x2db67715
//using T_GetPackagePathByFullName = decltype(&GetPackagePathByFullName);
//#define H_GetPackagePathByFullName 0x1c411a2a
//using T_GetPackagesByPackageFamily = decltype(&GetPackagesByPackageFamily);
//#define H_GetPackagesByPackageFamily 0x391fc438
using T_GetPhysicallyInstalledSystemMemory = decltype(&GetPhysicallyInstalledSystemMemory);
#define H_GetPhysicallyInstalledSystemMemory 0x7d1d3488
using T_GetPriorityClass = decltype(&GetPriorityClass);
#define H_GetPriorityClass 0x0825960a
using T_GetPrivateProfileIntA = decltype(&GetPrivateProfileIntA);
#define H_GetPrivateProfileIntA 0x505413aa
using T_GetPrivateProfileIntW = decltype(&GetPrivateProfileIntW);
#define H_GetPrivateProfileIntW 0x505413c0
using T_GetPrivateProfileSectionA = decltype(&GetPrivateProfileSectionA);
#define H_GetPrivateProfileSectionA 0x788a881c
using T_GetPrivateProfileSectionNamesA = decltype(&GetPrivateProfileSectionNamesA);
#define H_GetPrivateProfileSectionNamesA 0x59aafac2
using T_GetPrivateProfileSectionNamesW = decltype(&GetPrivateProfileSectionNamesW);
#define H_GetPrivateProfileSectionNamesW 0x59aafad8
using T_GetPrivateProfileSectionW = decltype(&GetPrivateProfileSectionW);
#define H_GetPrivateProfileSectionW 0x788a8832
using T_GetPrivateProfileStringA = decltype(&GetPrivateProfileStringA);
#define H_GetPrivateProfileStringA 0x5fd79b84
using T_GetPrivateProfileStringW = decltype(&GetPrivateProfileStringW);
#define H_GetPrivateProfileStringW 0x5fd79b9a
using T_GetPrivateProfileStructA = decltype(&GetPrivateProfileStructA);
#define H_GetPrivateProfileStructA 0x6170640c
using T_GetPrivateProfileStructW = decltype(&GetPrivateProfileStructW);
#define H_GetPrivateProfileStructW 0x61706422
using T_GetProcAddress = decltype(&GetProcAddress);
#define H_GetProcAddress 0x1ab9b854
using T_GetProcessAffinityMask = decltype(&GetProcessAffinityMask);
#define H_GetProcessAffinityMask 0x69478b0d
using T_GetProcessDEPPolicy = decltype(&GetProcessDEPPolicy);
#define H_GetProcessDEPPolicy 0x3bae0160
//using T_GetProcessDefaultCpuSets = decltype(&GetProcessDefaultCpuSets);
#define H_GetProcessDefaultCpuSets 0x6867564d
using T_GetProcessGroupAffinity = decltype(&GetProcessGroupAffinity);
#define H_GetProcessGroupAffinity 0x4b48a33e
using T_GetProcessHandleCount = decltype(&GetProcessHandleCount);
#define H_GetProcessHandleCount 0x161b2fba
using T_GetProcessHeap = decltype(&GetProcessHeap);
#define H_GetProcessHeap 0x4244f8ad
using T_GetProcessHeaps = decltype(&GetProcessHeaps);
#define H_GetProcessHeaps 0x694b40fa
using T_GetProcessId = decltype(&GetProcessId);
#define H_GetProcessId 0x3381b6cc
using T_GetProcessIdOfThread = decltype(&GetProcessIdOfThread);
#define H_GetProcessIdOfThread 0x7a515465
//using T_GetProcessInformation = decltype(&GetProcessInformation);
#define H_GetProcessInformation 0x3f40cb1f
using T_GetProcessIoCounters = decltype(&GetProcessIoCounters);
#define H_GetProcessIoCounters 0x2536701e
//using T_GetProcessMitigationPolicy = decltype(&GetProcessMitigationPolicy);
#define H_GetProcessMitigationPolicy 0x27332b9e
using T_GetProcessPreferredUILanguages = decltype(&GetProcessPreferredUILanguages);
#define H_GetProcessPreferredUILanguages 0x07c952ff
using T_GetProcessPriorityBoost = decltype(&GetProcessPriorityBoost);
#define H_GetProcessPriorityBoost 0x6b398bc2
using T_GetProcessShutdownParameters = decltype(&GetProcessShutdownParameters);
#define H_GetProcessShutdownParameters 0x1a4fc3ed
using T_GetProcessTimes = decltype(&GetProcessTimes);
#define H_GetProcessTimes 0x3c7c21fd
using T_GetProcessVersion = decltype(&GetProcessVersion);
#define H_GetProcessVersion 0x7238dbbb
using T_GetProcessWorkingSetSize = decltype(&GetProcessWorkingSetSize);
#define H_GetProcessWorkingSetSize 0x02abaac3
using T_GetProcessWorkingSetSizeEx = decltype(&GetProcessWorkingSetSizeEx);
#define H_GetProcessWorkingSetSizeEx 0x05ba2da2
using T_GetProcessorSystemCycleTime = decltype(&GetProcessorSystemCycleTime);
#define H_GetProcessorSystemCycleTime 0x3297c580
using T_GetProductInfo = decltype(&GetProductInfo);
#define H_GetProductInfo 0x5e4220e3
using T_GetProfileIntA = decltype(&GetProfileIntA);
#define H_GetProfileIntA 0x25075215
using T_GetProfileIntW = decltype(&GetProfileIntW);
#define H_GetProfileIntW 0x2507522b
using T_GetProfileSectionA = decltype(&GetProfileSectionA);
#define H_GetProfileSectionA 0x2f9059f7
using T_GetProfileSectionW = decltype(&GetProfileSectionW);
#define H_GetProfileSectionW 0x2f905a0d
using T_GetProfileStringA = decltype(&GetProfileStringA);
#define H_GetProfileStringA 0x5c5a954d
using T_GetProfileStringW = decltype(&GetProfileStringW);
#define H_GetProfileStringW 0x5c5a9563
using T_GetQueuedCompletionStatus = decltype(&GetQueuedCompletionStatus);
#define H_GetQueuedCompletionStatus 0x4a424ba7
using T_GetQueuedCompletionStatusEx = decltype(&GetQueuedCompletionStatusEx);
#define H_GetQueuedCompletionStatusEx 0x762181a6
using T_GetShortPathNameA = decltype(&GetShortPathNameA);
#define H_GetShortPathNameA 0x6afa8f8b
using T_GetShortPathNameW = decltype(&GetShortPathNameW);
#define H_GetShortPathNameW 0x6afa8fa1
//using T_GetStagedPackagePathByFullName = decltype(&GetStagedPackagePathByFullName);
//#define H_GetStagedPackagePathByFullName 0x04e06b58
//using T_GetStartupInfoA = decltype(&GetStartupInfoA);
//#define H_GetStartupInfoA 0x7e26c2fc
//using T_GetStartupInfoW = decltype(&GetStartupInfoW);
//#define H_GetStartupInfoW 0x7e26c312
//using T_GetStateFolder = decltype(&GetStateFolder);
//#define H_GetStateFolder 0x359a7ab1
using T_GetStdHandle = decltype(&GetStdHandle);
#define H_GetStdHandle 0x5bfa2769
using T_GetStringScripts = decltype(&GetStringScripts);
#define H_GetStringScripts 0x2b420a15
using T_GetStringTypeA = decltype(&GetStringTypeA);
#define H_GetStringTypeA 0x2c84e8ec
using T_GetStringTypeExA = decltype(&GetStringTypeExA);
#define H_GetStringTypeExA 0x59a33e19
using T_GetStringTypeExW = decltype(&GetStringTypeExW);
#define H_GetStringTypeExW 0x59a33e2f
using T_GetStringTypeW = decltype(&GetStringTypeW);
#define H_GetStringTypeW 0x2c84e902
//using T_GetSystemAppDataKey = decltype(&GetSystemAppDataKey);
//#define H_GetSystemAppDataKey 0x46ca2b51
//using T_GetSystemCpuSetInformation = decltype(&GetSystemCpuSetInformation);
#define H_GetSystemCpuSetInformation 0x47637351
using T_GetSystemDEPPolicy = decltype(&GetSystemDEPPolicy);
#define H_GetSystemDEPPolicy 0x076f4fd0
using T_GetSystemDefaultLCID = decltype(&GetSystemDefaultLCID);
#define H_GetSystemDefaultLCID 0x6f02ac9e
using T_GetSystemDefaultLangID = decltype(&GetSystemDefaultLangID);
#define H_GetSystemDefaultLangID 0x2ddf504d
using T_GetSystemDefaultLocaleName = decltype(&GetSystemDefaultLocaleName);
#define H_GetSystemDefaultLocaleName 0x50732295
using T_GetSystemDefaultUILanguage = decltype(&GetSystemDefaultUILanguage);
#define H_GetSystemDefaultUILanguage 0x6fa80b40
using T_GetSystemDirectoryA = decltype(&GetSystemDirectoryA);
#define H_GetSystemDirectoryA 0x4599d4e5
using T_GetSystemDirectoryW = decltype(&GetSystemDirectoryW);
#define H_GetSystemDirectoryW 0x4599d4fb
using T_GetSystemFileCacheSize = decltype(&GetSystemFileCacheSize);
#define H_GetSystemFileCacheSize 0x2117000e
using T_GetSystemFirmwareTable = decltype(&GetSystemFirmwareTable);
#define H_GetSystemFirmwareTable 0x3ba937de
using T_GetSystemInfo = decltype(&GetSystemInfo);
#define H_GetSystemInfo 0x74e75ff7
using T_GetSystemPowerStatus = decltype(&GetSystemPowerStatus);
#define H_GetSystemPowerStatus 0x63f2b5a2
using T_GetSystemPreferredUILanguages = decltype(&GetSystemPreferredUILanguages);
#define H_GetSystemPreferredUILanguages 0x57d132cf
using T_GetSystemRegistryQuota = decltype(&GetSystemRegistryQuota);
#define H_GetSystemRegistryQuota 0x7a663d6a
using T_GetSystemTime = decltype(&GetSystemTime);
#define H_GetSystemTime 0x765f69fe
using T_GetSystemTimeAdjustment = decltype(&GetSystemTimeAdjustment);
#define H_GetSystemTimeAdjustment 0x4160f217
using T_GetSystemTimeAsFileTime = decltype(&GetSystemTimeAsFileTime);
#define H_GetSystemTimeAsFileTime 0x0b716f59
//using T_GetSystemTimePreciseAsFileTime = decltype(&GetSystemTimePreciseAsFileTime);
#define H_GetSystemTimePreciseAsFileTime 0x0de818b8
using T_GetSystemTimes = decltype(&GetSystemTimes);
#define H_GetSystemTimes 0x12d33d6d
using T_GetSystemWindowsDirectoryA = decltype(&GetSystemWindowsDirectoryA);
#define H_GetSystemWindowsDirectoryA 0x4b9f5f42
using T_GetSystemWindowsDirectoryW = decltype(&GetSystemWindowsDirectoryW);
#define H_GetSystemWindowsDirectoryW 0x4b9f5f58
using T_GetSystemWow64DirectoryA = decltype(&GetSystemWow64DirectoryA);
#define H_GetSystemWow64DirectoryA 0x7943c9f8
using T_GetSystemWow64DirectoryW = decltype(&GetSystemWow64DirectoryW);
#define H_GetSystemWow64DirectoryW 0x7943ca0e
using T_GetTapeParameters = decltype(&GetTapeParameters);
#define H_GetTapeParameters 0x04f6352a
using T_GetTapePosition = decltype(&GetTapePosition);
#define H_GetTapePosition 0x3d6ec74d
using T_GetTapeStatus = decltype(&GetTapeStatus);
#define H_GetTapeStatus 0x4142a6fa
using T_GetTempFileNameA = decltype(&GetTempFileNameA);
#define H_GetTempFileNameA 0x0e6ed008
using T_GetTempFileNameW = decltype(&GetTempFileNameW);
#define H_GetTempFileNameW 0x0e6ed01e
using T_GetTempPathA = decltype(&GetTempPathA);
#define H_GetTempPathA 0x70e5931e
using T_GetTempPathW = decltype(&GetTempPathW);
#define H_GetTempPathW 0x70e59334
using T_GetThreadContext = decltype(&GetThreadContext);
#define H_GetThreadContext 0x395ca04b
//using T_GetThreadDescription = decltype(&GetThreadDescription);
#define H_GetThreadDescription 0x2e5b741c
using T_GetThreadErrorMode = decltype(&GetThreadErrorMode);
#define H_GetThreadErrorMode 0x222c22a3
using T_GetThreadGroupAffinity = decltype(&GetThreadGroupAffinity);
#define H_GetThreadGroupAffinity 0x021a57af
using T_GetThreadIOPendingFlag = decltype(&GetThreadIOPendingFlag);
#define H_GetThreadIOPendingFlag 0x0f58c5f1
using T_GetThreadId = decltype(&GetThreadId);
#define H_GetThreadId 0x055552cf
using T_GetThreadIdealProcessorEx = decltype(&GetThreadIdealProcessorEx);
#define H_GetThreadIdealProcessorEx 0x1e3e8a68
//using T_GetThreadInformation = decltype(&GetThreadInformation);
#define H_GetThreadInformation 0x5cb60348
using T_GetThreadLocale = decltype(&GetThreadLocale);
#define H_GetThreadLocale 0x74e2b656
using T_GetThreadPreferredUILanguages = decltype(&GetThreadPreferredUILanguages);
#define H_GetThreadPreferredUILanguages 0x61b5d3da
using T_GetThreadPriority = decltype(&GetThreadPriority);
#define H_GetThreadPriority 0x49089578
using T_GetThreadPriorityBoost = decltype(&GetThreadPriorityBoost);
#define H_GetThreadPriorityBoost 0x220b4033
//using T_GetThreadSelectedCpuSets = decltype(&GetThreadSelectedCpuSets);
#define H_GetThreadSelectedCpuSets 0x09e80e22
using T_GetThreadSelectorEntry = decltype(&GetThreadSelectorEntry);
#define H_GetThreadSelectorEntry 0x37adca93
using T_GetThreadTimes = decltype(&GetThreadTimes);
#define H_GetThreadTimes 0x25ee7ece
using T_GetThreadUILanguage = decltype(&GetThreadUILanguage);
#define H_GetThreadUILanguage 0x767d01b0
using T_GetTickCount = decltype(&GetTickCount);
#define H_GetTickCount 0x739b463c
using T_GetTickCount64 = decltype(&GetTickCount64);
#define H_GetTickCount64 0x33d747f2
using T_GetTimeFormatA = decltype(&GetTimeFormatA);
#define H_GetTimeFormatA 0x4b690913
/*
using T_GetTimeFormatAWorker = decltype(&GetTimeFormatAWorker);
#define H_GetTimeFormatAWorker 0x5587ab39
using T_GetTimeFormatEx = decltype(&GetTimeFormatEx);
#define H_GetTimeFormatEx 0x16bfa73d
using T_GetTimeFormatW = decltype(&GetTimeFormatW);
#define H_GetTimeFormatW 0x4b690929
using T_GetTimeFormatWWorker = decltype(&GetTimeFormatWWorker);
#define H_GetTimeFormatWWorker 0x5ce10fdf
*/
using T_GetTimeZoneInformation = decltype(&GetTimeZoneInformation);
#define H_GetTimeZoneInformation 0x3ead3c1d
using T_GetTimeZoneInformationForYear = decltype(&GetTimeZoneInformationForYear);
#define H_GetTimeZoneInformationForYear 0x254e7909
using T_GetUILanguageInfo = decltype(&GetUILanguageInfo);
#define H_GetUILanguageInfo 0x7f14cfe4
//using T_GetUserDefaultGeoName = decltype(&GetUserDefaultGeoName);
#define H_GetUserDefaultGeoName 0x21f96b0c
using T_GetUserDefaultLCID = decltype(&GetUserDefaultLCID);
#define H_GetUserDefaultLCID 0x645b21ae
using T_GetUserDefaultLangID = decltype(&GetUserDefaultLangID);
#define H_GetUserDefaultLangID 0x749e9ddd
using T_GetUserDefaultLocaleName = decltype(&GetUserDefaultLocaleName);
#define H_GetUserDefaultLocaleName 0x7c6f0d25
using T_GetUserDefaultUILanguage = decltype(&GetUserDefaultUILanguage);
#define H_GetUserDefaultUILanguage 0x1ba3f5d0
using T_GetUserGeoID = decltype(&GetUserGeoID);
#define H_GetUserGeoID 0x45878003
using T_GetUserPreferredUILanguages = decltype(&GetUserPreferredUILanguages);
#define H_GetUserPreferredUILanguages 0x660587ff
//using T_GetVDMCurrentDirectories = decltype(&GetVDMCurrentDirectories);
#define H_GetVDMCurrentDirectories 0x2857ed73
using T_GetVersion = decltype(&GetVersion);
#define H_GetVersion 0x0e4423da
using T_GetVersionExA = decltype(&GetVersionExA);
#define H_GetVersionExA 0x65109614
using T_GetVersionExW = decltype(&GetVersionExW);
#define H_GetVersionExW 0x6510962a
using T_GetVolumeInformationA = decltype(&GetVolumeInformationA);
#define H_GetVolumeInformationA 0x0d3ac349
using T_GetVolumeInformationByHandleW = decltype(&GetVolumeInformationByHandleW);
#define H_GetVolumeInformationByHandleW 0x015d1784
using T_GetVolumeInformationW = decltype(&GetVolumeInformationW);
#define H_GetVolumeInformationW 0x0d3ac35f
using T_GetVolumeNameForVolumeMountPointA = decltype(&GetVolumeNameForVolumeMountPointA);
#define H_GetVolumeNameForVolumeMountPointA 0x1f553bba
using T_GetVolumeNameForVolumeMountPointW = decltype(&GetVolumeNameForVolumeMountPointW);
#define H_GetVolumeNameForVolumeMountPointW 0x1f553bd0
using T_GetVolumePathNameA = decltype(&GetVolumePathNameA);
#define H_GetVolumePathNameA 0x1cdf98f5
using T_GetVolumePathNameW = decltype(&GetVolumePathNameW);
#define H_GetVolumePathNameW 0x1cdf990b
using T_GetVolumePathNamesForVolumeNameA = decltype(&GetVolumePathNamesForVolumeNameA);
#define H_GetVolumePathNamesForVolumeNameA 0x77cd8afe
using T_GetVolumePathNamesForVolumeNameW = decltype(&GetVolumePathNamesForVolumeNameW);
#define H_GetVolumePathNamesForVolumeNameW 0x77cd8b14
using T_GetWindowsDirectoryA = decltype(&GetWindowsDirectoryA);
#define H_GetWindowsDirectoryA 0x0f918249
using T_GetWindowsDirectoryW = decltype(&GetWindowsDirectoryW);
#define H_GetWindowsDirectoryW 0x0f91825f
using T_GetWriteWatch = decltype(&GetWriteWatch);
#define H_GetWriteWatch 0x6bdaa9e6
//using T_GetXStateFeaturesMask = decltype(&GetXStateFeaturesMask);
#define H_GetXStateFeaturesMask 0x794ccad0
using T_GlobalAddAtomA = decltype(&GlobalAddAtomA);
#define H_GlobalAddAtomA 0x169b525e
//using T_GlobalAddAtomExA = decltype(&GlobalAddAtomExA);
#define H_GlobalAddAtomExA 0x7205c91b
//using T_GlobalAddAtomExW = decltype(&GlobalAddAtomExW);
#define H_GlobalAddAtomExW 0x7205c931
using T_GlobalAddAtomW = decltype(&GlobalAddAtomW);
#define H_GlobalAddAtomW 0x169b5274
using T_GlobalAlloc = decltype(&GlobalAlloc);
#define H_GlobalAlloc 0x0dffb756
using T_GlobalCompact = decltype(&GlobalCompact);
#define H_GlobalCompact 0x589abf08
using T_GlobalDeleteAtom = decltype(&GlobalDeleteAtom);
#define H_GlobalDeleteAtom 0x7584b22b
using T_GlobalFindAtomA = decltype(&GlobalFindAtomA);
#define H_GlobalFindAtomA 0x574f7864
using T_GlobalFindAtomW = decltype(&GlobalFindAtomW);
#define H_GlobalFindAtomW 0x574f787a
using T_GlobalFix = decltype(&GlobalFix);
#define H_GlobalFix 0x2a0b2626
using T_GlobalFlags = decltype(&GlobalFlags);
#define H_GlobalFlags 0x65c16180
using T_GlobalFree = decltype(&GlobalFree);
#define H_GlobalFree 0x03b6d76f
using T_GlobalGetAtomNameA = decltype(&GlobalGetAtomNameA);
#define H_GlobalGetAtomNameA 0x7dba7916
using T_GlobalGetAtomNameW = decltype(&GlobalGetAtomNameW);
#define H_GlobalGetAtomNameW 0x7dba792c
using T_GlobalHandle = decltype(&GlobalHandle);
#define H_GlobalHandle 0x49a3ca7f
using T_GlobalLock = decltype(&GlobalLock);
#define H_GlobalLock 0x0483def6
using T_GlobalMemoryStatus = decltype(&GlobalMemoryStatus);
#define H_GlobalMemoryStatus 0x1c73ed8e
using T_GlobalMemoryStatusEx = decltype(&GlobalMemoryStatusEx);
#define H_GlobalMemoryStatusEx 0x573fa7c5
using T_GlobalReAlloc = decltype(&GlobalReAlloc);
#define H_GlobalReAlloc 0x1705495f
using T_GlobalSize = decltype(&GlobalSize);
#define H_GlobalSize 0x057277bc
using T_GlobalUnWire = decltype(&GlobalUnWire);
#define H_GlobalUnWire 0x707a3ac5
using T_GlobalUnfix = decltype(&GlobalUnfix);
#define H_GlobalUnfix 0x6d54fbad
using T_GlobalUnlock = decltype(&GlobalUnlock);
#define H_GlobalUnlock 0x734c230b
using T_GlobalWire = decltype(&GlobalWire);
#define H_GlobalWire 0x05fbaa10
using T_Heap32First = decltype(&Heap32First);
#define H_Heap32First 0x35e2b721
using T_Heap32ListFirst = decltype(&Heap32ListFirst);
#define H_Heap32ListFirst 0x767217d7
using T_Heap32ListNext = decltype(&Heap32ListNext);
#define H_Heap32ListNext 0x78337b68
using T_Heap32Next = decltype(&Heap32Next);
#define H_Heap32Next 0x5776c8d6
using T_HeapAlloc = decltype(&HeapAlloc);
#define H_HeapAlloc 0x2d1ef219
using T_HeapCompact = decltype(&HeapCompact);
#define H_HeapCompact 0x1d14d8e3
using T_HeapCreate = decltype(&HeapCreate);
#define H_HeapCreate 0x763cfef4
using T_HeapDestroy = decltype(&HeapDestroy);
#define H_HeapDestroy 0x687c7852
using T_HeapFree = decltype(&HeapFree);
#define H_HeapFree 0x63b52030
using T_HeapLock = decltype(&HeapLock);
#define H_HeapLock 0x648227b7
using T_HeapQueryInformation = decltype(&HeapQueryInformation);
#define H_HeapQueryInformation 0x5cbefa2c
using T_HeapReAlloc = decltype(&HeapReAlloc);
#define H_HeapReAlloc 0x5b7f633a
using T_HeapSetInformation = decltype(&HeapSetInformation);
#define H_HeapSetInformation 0x5fe5d54a
using T_HeapSize = decltype(&HeapSize);
#define H_HeapSize 0x6570c07d
//using T_HeapSummary = decltype(&HeapSummary);
#define H_HeapSummary 0x4cf17a06
using T_HeapUnlock = decltype(&HeapUnlock);
#define H_HeapUnlock 0x604734d4
using T_HeapValidate = decltype(&HeapValidate);
#define H_HeapValidate 0x6675d296
using T_HeapWalk = decltype(&HeapWalk);
#define H_HeapWalk 0x65f7d77d
using T_IdnToAscii = decltype(&IdnToAscii);
#define H_IdnToAscii 0x5e21e0bb
using T_IdnToNameprepUnicode = decltype(&IdnToNameprepUnicode);
#define H_IdnToNameprepUnicode 0x653cf063
using T_IdnToUnicode = decltype(&IdnToUnicode);
#define H_IdnToUnicode 0x49e6c553
using T_InitAtomTable = decltype(&InitAtomTable);
#define H_InitAtomTable 0x0b672915
using T_InitOnceBeginInitialize = decltype(&InitOnceBeginInitialize);
#define H_InitOnceBeginInitialize 0x6c6815e8
using T_InitOnceComplete = decltype(&InitOnceComplete);
#define H_InitOnceComplete 0x7cf1c7b2
using T_InitOnceExecuteOnce = decltype(&InitOnceExecuteOnce);
#define H_InitOnceExecuteOnce 0x597cea35
using T_InitOnceInitialize = decltype(&InitOnceInitialize);
#define H_InitOnceInitialize 0x4518afad
using T_InitializeConditionVariable = decltype(&InitializeConditionVariable);
#define H_InitializeConditionVariable 0x0c57f08f
//using T_InitializeContext = decltype(&InitializeContext);
#define H_InitializeContext 0x1a16d947
//using T_InitializeContext2 = decltype(&InitializeContext2);
#define H_InitializeContext2 0x59b12f87
using T_InitializeCriticalSection = decltype(&InitializeCriticalSection);
#define H_InitializeCriticalSection 0x4edf4c56
using T_InitializeCriticalSectionAndSpinCount = decltype(&InitializeCriticalSectionAndSpinCount);
#define H_InitializeCriticalSectionAndSpinCount 0x23ff512c
using T_InitializeCriticalSectionEx = decltype(&InitializeCriticalSectionEx);
#define H_InitializeCriticalSectionEx 0x36d454cd
//using T_InitializeEnclave = decltype(&InitializeEnclave);
#define H_InitializeEnclave 0x45cd75fa
using T_InitializeProcThreadAttributeList = decltype(&InitializeProcThreadAttributeList);
#define H_InitializeProcThreadAttributeList 0x4553e8f2
using T_InitializeSListHead = decltype(&InitializeSListHead);
#define H_InitializeSListHead 0x21b0608d
using T_InitializeSRWLock = decltype(&InitializeSRWLock);
#define H_InitializeSRWLock 0x4e2f1ce3
//using T_InitializeSynchronizationBarrier = decltype(&InitializeSynchronizationBarrier);
#define H_InitializeSynchronizationBarrier 0x5b1ec97f
//using T_InstallELAMCertificateInfo = decltype(&InstallELAMCertificateInfo);
#define H_InstallELAMCertificateInfo 0x317b8d53
//using T_InterlockedCompareExchange = decltype(&InterlockedCompareExchange);
//#define H_InterlockedCompareExchange 0x256f2002
//using T_InterlockedCompareExchange64 = decltype(&InterlockedCompareExchange64);
//#define H_InterlockedCompareExchange64 0x6648c1e8
//using T_InterlockedDecrement = decltype(&InterlockedDecrement);
//#define H_InterlockedDecrement 0x028dcf71
//using T_InterlockedExchange = decltype(&InterlockedExchange);
//#define H_InterlockedExchange 0x2fa01a15
//using T_InterlockedExchangeAdd = decltype(&InterlockedExchangeAdd);
//#define H_InterlockedExchangeAdd 0x74a35490
//using T_InterlockedFlushSList = decltype(&InterlockedFlushSList);
//#define H_InterlockedFlushSList 0x665ee85f
//using T_InterlockedIncrement = decltype(&InterlockedIncrement);
//#define H_InterlockedIncrement 0x3277ebf9
//using T_InterlockedPopEntrySList = decltype(&InterlockedPopEntrySList);
//#define H_InterlockedPopEntrySList 0x025e1086
//using T_InterlockedPushEntrySList = decltype(&InterlockedPushEntrySList);
//#define H_InterlockedPushEntrySList 0x6c27279b
//using T_InterlockedPushListSList = decltype(&InterlockedPushListSList);
//#define H_InterlockedPushListSList 0x3b5a05ab
//using T_InterlockedPushListSListEx = decltype(&InterlockedPushListSListEx);
//#define H_InterlockedPushListSListEx 0x25a617ca
//using T_InvalidateConsoleDIBits = decltype(&InvalidateConsoleDIBits);
//#define H_InvalidateConsoleDIBits 0x0d60f84f
using T_IsBadCodePtr = decltype(&IsBadCodePtr);
#define H_IsBadCodePtr 0x7b6661e2
using T_IsBadHugeReadPtr = decltype(&IsBadHugeReadPtr);
#define H_IsBadHugeReadPtr 0x148f59c2
using T_IsBadHugeWritePtr = decltype(&IsBadHugeWritePtr);
#define H_IsBadHugeWritePtr 0x7f2e4b15
using T_IsBadReadPtr = decltype(&IsBadReadPtr);
#define H_IsBadReadPtr 0x09e7208d
using T_IsBadStringPtrA = decltype(&IsBadStringPtrA);
#define H_IsBadStringPtrA 0x286c819b
using T_IsBadStringPtrW = decltype(&IsBadStringPtrW);
#define H_IsBadStringPtrW 0x286c81b1
using T_IsBadWritePtr = decltype(&IsBadWritePtr);
#define H_IsBadWritePtr 0x0b1904f6
//using T_IsCalendarLeapDay = decltype(&IsCalendarLeapDay);
//#define H_IsCalendarLeapDay 0x2f492868
//using T_IsCalendarLeapMonth = decltype(&IsCalendarLeapMonth);
//#define H_IsCalendarLeapMonth 0x6efea55c
//using T_IsCalendarLeapYear = decltype(&IsCalendarLeapYear);
#define H_IsCalendarLeapYear 0x35410b3d
using T_IsDBCSLeadByte = decltype(&IsDBCSLeadByte);
#define H_IsDBCSLeadByte 0x7a8d8258
using T_IsDBCSLeadByteEx = decltype(&IsDBCSLeadByteEx);
#define H_IsDBCSLeadByteEx 0x5816c0df
using T_IsDebuggerPresent = decltype(&IsDebuggerPresent);
#define H_IsDebuggerPresent 0x27f7729c
//using T_IsEnclaveTypeSupported = decltype(&IsEnclaveTypeSupported);
#define H_IsEnclaveTypeSupported 0x73128a74
using T_IsNLSDefinedString = decltype(&IsNLSDefinedString);
#define H_IsNLSDefinedString 0x5004a7e7
//using T_IsNativeVhdBoot = decltype(&IsNativeVhdBoot);
#define H_IsNativeVhdBoot 0x6eef64ef
using T_IsNormalizedString = decltype(&IsNormalizedString);
#define H_IsNormalizedString 0x0672abae
//using T_IsProcessCritical = decltype(&IsProcessCritical);
#define H_IsProcessCritical 0x6f1940e8
using T_IsProcessInJob = decltype(&IsProcessInJob);
#define H_IsProcessInJob 0x13b10ac7
using T_IsProcessorFeaturePresent = decltype(&IsProcessorFeaturePresent);
#define H_IsProcessorFeaturePresent 0x33a704f5
using T_IsSystemResumeAutomatic = decltype(&IsSystemResumeAutomatic);
#define H_IsSystemResumeAutomatic 0x29cde26d
using T_IsThreadAFiber = decltype(&IsThreadAFiber);
#define H_IsThreadAFiber 0x6ef8b5fb
using T_IsThreadpoolTimerSet = decltype(&IsThreadpoolTimerSet);
#define H_IsThreadpoolTimerSet 0x07ab76a9
//using T_IsUserCetAvailableInEnvironment = decltype(&IsUserCetAvailableInEnvironment);
//#define H_IsUserCetAvailableInEnvironment 0x79e20ab6
//using T_IsValidCalDateTime = decltype(&IsValidCalDateTime);
#define H_IsValidCalDateTime 0x05753a9b
using T_IsValidCodePage = decltype(&IsValidCodePage);
#define H_IsValidCodePage 0x697e90f2
using T_IsValidLanguageGroup = decltype(&IsValidLanguageGroup);
#define H_IsValidLanguageGroup 0x4b15dbcd
using T_IsValidLocale = decltype(&IsValidLocale);
#define H_IsValidLocale 0x09a096bc
using T_IsValidLocaleName = decltype(&IsValidLocaleName);
#define H_IsValidLocaleName 0x43129d4b
//using T_IsValidNLSVersion = decltype(&IsValidNLSVersion);
#define H_IsValidNLSVersion 0x4be62ac1
//using T_IsWow64GuestMachineSupported = decltype(&IsWow64GuestMachineSupported);
#define H_IsWow64GuestMachineSupported 0x5236d188
using T_IsWow64Process = decltype(&IsWow64Process);
#define H_IsWow64Process 0x7c88a028
//using T_IsWow64Process2 = decltype(&IsWow64Process2);
#define H_IsWow64Process2 0x39e9f4aa
//using T_K32EmptyWorkingSet = decltype(&K32EmptyWorkingSet);
#define H_K32EmptyWorkingSet 0x52bc13ec
//using T_K32EnumDeviceDrivers = decltype(&K32EnumDeviceDrivers);
#define H_K32EnumDeviceDrivers 0x3bb0baee
//using T_K32EnumPageFilesA = decltype(&K32EnumPageFilesA);
#define H_K32EnumPageFilesA 0x3aae2348
//using T_K32EnumPageFilesW = decltype(&K32EnumPageFilesW);
#define H_K32EnumPageFilesW 0x3aae235e
//using T_K32EnumProcessModules = decltype(&K32EnumProcessModules);
#define H_K32EnumProcessModules 0x052ad197
//using T_K32EnumProcessModulesEx = decltype(&K32EnumProcessModulesEx);
#define H_K32EnumProcessModulesEx 0x635c0716
//using T_K32EnumProcesses = decltype(&K32EnumProcesses);
#define H_K32EnumProcesses 0x00b3fde6
//using T_K32GetDeviceDriverBaseNameA = decltype(&K32GetDeviceDriverBaseNameA);
#define H_K32GetDeviceDriverBaseNameA 0x62ab96f7
//using T_K32GetDeviceDriverBaseNameW = decltype(&K32GetDeviceDriverBaseNameW);
#define H_K32GetDeviceDriverBaseNameW 0x62ab970d
//using T_K32GetDeviceDriverFileNameA = decltype(&K32GetDeviceDriverFileNameA);
#define H_K32GetDeviceDriverFileNameA 0x113c6ae4
//using T_K32GetDeviceDriverFileNameW = decltype(&K32GetDeviceDriverFileNameW);
#define H_K32GetDeviceDriverFileNameW 0x113c6afa
//
//using T_K32GetMappedFileNameA = decltype(&K32GetMappedFileNameA);
//#define H_K32GetMappedFileNameA 0x40f529a7
//using T_K32GetMappedFileNameW = decltype(&K32GetMappedFileNameW);
//#define H_K32GetMappedFileNameW 0x40f529bd
//using T_K32GetModuleBaseNameA = decltype(&K32GetModuleBaseNameA);
//#define H_K32GetModuleBaseNameA 0x62ae5361
//using T_K32GetModuleBaseNameW = decltype(&K32GetModuleBaseNameW);
//#define H_K32GetModuleBaseNameW 0x62ae5377
//using T_K32GetModuleFileNameExA = decltype(&K32GetModuleFileNameExA);
//#define H_K32GetModuleFileNameExA 0x2283158b
//using T_K32GetModuleFileNameExW = decltype(&K32GetModuleFileNameExW);
//#define H_K32GetModuleFileNameExW 0x228315a1
//using T_K32GetModuleInformation = decltype(&K32GetModuleInformation);
//#define H_K32GetModuleInformation 0x707cb924
//using T_K32GetPerformanceInfo = decltype(&K32GetPerformanceInfo);
//#define H_K32GetPerformanceInfo 0x0ab4dfea
//using T_K32GetProcessImageFileNameA = decltype(&K32GetProcessImageFileNameA);
//#define H_K32GetProcessImageFileNameA 0x17eb61fe
//using T_K32GetProcessImageFileNameW = decltype(&K32GetProcessImageFileNameW);
//#define H_K32GetProcessImageFileNameW 0x17eb6214
//using T_K32GetProcessMemoryInfo = decltype(&K32GetProcessMemoryInfo);
//#define H_K32GetProcessMemoryInfo 0x44ccb03e
//using T_K32GetWsChanges = decltype(&K32GetWsChanges);
//#define H_K32GetWsChanges 0x51289deb
//using T_K32GetWsChangesEx = decltype(&K32GetWsChangesEx);
//#define H_K32GetWsChangesEx 0x7bc2320a
//using T_K32InitializeProcessForWsWatch = decltype(&K32InitializeProcessForWsWatch);
//#define H_K32InitializeProcessForWsWatch 0x633e9143
//using T_K32QueryWorkingSet = decltype(&K32QueryWorkingSet);
//#define H_K32QueryWorkingSet 0x506b17df
//using T_K32QueryWorkingSetEx = decltype(&K32QueryWorkingSetEx);
//#define H_K32QueryWorkingSetEx 0x5b03579e

using T_LCIDToLocaleName = decltype(&LCIDToLocaleName);
#define H_LCIDToLocaleName 0x367571b6
using T_LCMapStringA = decltype(&LCMapStringA);
#define H_LCMapStringA 0x6df23c47
using T_LCMapStringEx = decltype(&LCMapStringEx);
#define H_LCMapStringEx 0x42f4dad9
using T_LCMapStringW = decltype(&LCMapStringW);
#define H_LCMapStringW 0x6df23c5d
using T_LZClose = decltype(&LZClose);
//#define H_LZClose 0x38358b96
//using T_LZCloseFile = decltype(&LZCloseFile);
//#define H_LZCloseFile 0x3b48bd32
//using T_LZCopy = decltype(&LZCopy);
//#define H_LZCopy 0x603018df
//using T_LZCreateFileW = decltype(&LZCreateFileW);
//#define H_LZCreateFileW 0x5afdc409
using T_LZDone = decltype(&LZDone);
#define H_LZDone 0x60526560
using T_LZInit = decltype(&LZInit);
#define H_LZInit 0x60fda3de
using T_LZOpenFileA = decltype(&LZOpenFileA);
#define H_LZOpenFileA 0x31a7bef5
using T_LZOpenFileW = decltype(&LZOpenFileW);
#define H_LZOpenFileW 0x31a7bf0b
using T_LZRead = decltype(&LZRead);
#define H_LZRead 0x622ffed8
using T_LZSeek = decltype(&LZSeek);
#define H_LZSeek 0x62524e86
using T_LZStart = decltype(&LZStart);
#define H_LZStart 0x521fb28c
using T_LeaveCriticalSection = decltype(&LeaveCriticalSection);
#define H_LeaveCriticalSection 0x7e474a8b
using T_LeaveCriticalSectionWhenCallbackReturns = decltype(&LeaveCriticalSectionWhenCallbackReturns);
#define H_LeaveCriticalSectionWhenCallbackReturns 0x1527f6f9
//using T_LoadAppInitDlls = decltype(&LoadAppInitDlls);
#define H_LoadAppInitDlls 0x6d6649de
//using T_LoadEnclaveData = decltype(&LoadEnclaveData);
#define H_LoadEnclaveData 0x7f6974c6
using T_LoadLibraryA = decltype(&LoadLibraryA);
#define H_LoadLibraryA 0x7f201f78
using T_LoadLibraryExA = decltype(&LoadLibraryExA);
#define H_LoadLibraryExA 0x605ecd05
using T_LoadLibraryExW = decltype(&LoadLibraryExW);
#define H_LoadLibraryExW 0x605ecd1b
using T_LoadLibraryW = decltype(&LoadLibraryW);
#define H_LoadLibraryW 0x7f201f8e
using T_LoadModule = decltype(&LoadModule);
#define H_LoadModule 0x6649a92a
//using T_LoadPackagedLibrary = decltype(&LoadPackagedLibrary);
#define H_LoadPackagedLibrary 0x2c52448b
using T_LoadResource = decltype(&LoadResource);
#define H_LoadResource 0x7a861504
//using T_LoadStringBaseExW = decltype(&LoadStringBaseExW);
#define H_LoadStringBaseExW 0x2b50e608
//using T_LoadStringBaseW = decltype(&LoadStringBaseW);
#define H_LoadStringBaseW 0x35bc4b53
using T_LocalAlloc = decltype(&LocalAlloc);
#define H_LocalAlloc 0x059bc922
using T_LocalCompact = decltype(&LocalCompact);
#define H_LocalCompact 0x65bfc334
using T_LocalFileTimeToFileTime = decltype(&LocalFileTimeToFileTime);
#define H_LocalFileTimeToFileTime 0x6b02d960
//using T_LocalFileTimeToLocalSystemTime = decltype(&LocalFileTimeToLocalSystemTime);
#define H_LocalFileTimeToLocalSystemTime 0x0c4e62e8
using T_LocalFlags = decltype(&LocalFlags);
#define H_LocalFlags 0x5d5d734c
using T_LocalFree = decltype(&LocalFree);
#define H_LocalFree 0x55b9fcb3
using T_LocalHandle = decltype(&LocalHandle);
#define H_LocalHandle 0x7e80e5e3
using T_LocalLock = decltype(&LocalLock);
#define H_LocalLock 0x5687043a
using T_LocalReAlloc = decltype(&LocalReAlloc);
#define H_LocalReAlloc 0x242a4d8b
using T_LocalShrink = decltype(&LocalShrink);
#define H_LocalShrink 0x489aa6b0
using T_LocalSize = decltype(&LocalSize);
#define H_LocalSize 0x57759d00
//using T_LocalSystemTimeToLocalFileTime = decltype(&LocalSystemTimeToLocalFileTime);
#define H_LocalSystemTimeToLocalFileTime 0x039d3556
using T_LocalUnlock = decltype(&LocalUnlock);
#define H_LocalUnlock 0x28293e6f
using T_LocaleNameToLCID = decltype(&LocaleNameToLCID);
#define H_LocaleNameToLCID 0x0d2e7986
//using T_LocateXStateFeature = decltype(&LocateXStateFeature);
#define H_LocateXStateFeature 0x56c34b0f
using T_LockFile = decltype(&LockFile);
#define H_LockFile 0x6f87e66b
using T_LockFileEx = decltype(&LockFileEx);
#define H_LockFileEx 0x7d153e8a
using T_LockResource = decltype(&LockResource);
#define H_LockResource 0x51ac3f31
using T_MapUserPhysicalPages = decltype(&MapUserPhysicalPages);
#define H_MapUserPhysicalPages 0x09ae23a6
using T_MapUserPhysicalPagesScatter = decltype(&MapUserPhysicalPagesScatter);
#define H_MapUserPhysicalPagesScatter 0x50239018
using T_MapViewOfFile = decltype(&MapViewOfFile);
#define H_MapViewOfFile 0x4a9dd708
using T_MapViewOfFileEx = decltype(&MapViewOfFileEx);
#define H_MapViewOfFileEx 0x6ed3cb0f
using T_MapViewOfFileExNuma = decltype(&MapViewOfFileExNuma);
#define H_MapViewOfFileExNuma 0x04356a3e
//using T_MapViewOfFileFromApp = decltype(&MapViewOfFileFromApp);
#define H_MapViewOfFileFromApp 0x3914cb0b
using T_Module32First = decltype(&Module32First);
#define H_Module32First 0x6f5e9b11
using T_Module32FirstW = decltype(&Module32FirstW);
#define H_Module32FirstW 0x7d695a0a
using T_Module32Next = decltype(&Module32Next);
#define H_Module32Next 0x4a393226
using T_Module32NextW = decltype(&Module32NextW);
#define H_Module32NextW 0x7b44a9c9
using T_MoveFileA = decltype(&MoveFileA);
#define H_MoveFileA 0x2fc3fb0c
using T_MoveFileExA = decltype(&MoveFileExA);
#define H_MoveFileExA 0x78994139
using T_MoveFileExW = decltype(&MoveFileExW);
#define H_MoveFileExW 0x7899414f
using T_MoveFileTransactedA = decltype(&MoveFileTransactedA);
#define H_MoveFileTransactedA 0x5edd81df
using T_MoveFileTransactedW = decltype(&MoveFileTransactedW);
#define H_MoveFileTransactedW 0x5edd81f5
using T_MoveFileW = decltype(&MoveFileW);
#define H_MoveFileW 0x2fc3fb22
using T_MoveFileWithProgressA = decltype(&MoveFileWithProgressA);
#define H_MoveFileWithProgressA 0x3dd51131
using T_MoveFileWithProgressW = decltype(&MoveFileWithProgressW);
#define H_MoveFileWithProgressW 0x3dd51147
using T_MulDiv = decltype(&MulDiv);
#define H_MulDiv 0x3b19c695
//using T_MultiByteToWideChar = decltype(&MultiByteToWideChar);
//#define H_MultiByteToWideChar 0x1180e70d
//using T_NeedCurrentDirectoryForExePathA = decltype(&NeedCurrentDirectoryForExePathA);
//#define H_NeedCurrentDirectoryForExePathA 0x1f424385
//using T_NeedCurrentDirectoryForExePathW = decltype(&NeedCurrentDirectoryForExePathW);
//#define H_NeedCurrentDirectoryForExePathW 0x1f42439b
//using T_NlsCheckPolicy = decltype(&NlsCheckPolicy);
//#define H_NlsCheckPolicy 0x130ec969
//using T_NlsGetCacheUpdateCount = decltype(&NlsGetCacheUpdateCount);
//#define H_NlsGetCacheUpdateCount 0x4147400d
//using T_NlsUpdateLocale = decltype(&NlsUpdateLocale);
//#define H_NlsUpdateLocale 0x71561178
//using T_NlsUpdateSystemLocale = decltype(&NlsUpdateSystemLocale);
//#define H_NlsUpdateSystemLocale 0x60575993
//using T_NormalizeString = decltype(&NormalizeString);
//#define H_NormalizeString 0x379926a2
//using T_NotifyMountMgr = decltype(&NotifyMountMgr);
//#define H_NotifyMountMgr 0x5ea7773c
//using T_NotifyUILanguageChange = decltype(&NotifyUILanguageChange);
//#define H_NotifyUILanguageChange 0x5cc03355
//using T_NtVdm64CreateProcessInternalW = decltype(&NtVdm64CreateProcessInternalW);
//#define H_NtVdm64CreateProcessInternalW 0x5197e63e
//using T_OOBEComplete = decltype(&OOBEComplete);
//#define H_OOBEComplete 0x0777d518
//using T_OfferVirtualMemory = decltype(&OfferVirtualMemory);
//#define H_OfferVirtualMemory 0x530c0ffc
//using T_OpenConsoleW = decltype(&OpenConsoleW);
//#define H_OpenConsoleW 0x73917bee
//using T_OpenConsoleWStub = decltype(&OpenConsoleWStub);
#define H_OpenConsoleWStub 0x1a772fe4
using T_OpenEventA = decltype(&OpenEventA);
#define H_OpenEventA 0x064e0689
using T_OpenEventW = decltype(&OpenEventW);
#define H_OpenEventW 0x064e069f
using T_OpenFile = decltype(&OpenFile);
#define H_OpenFile 0x361d7c3e
using T_OpenFileById = decltype(&OpenFileById);
#define H_OpenFileById 0x2ac63a94
using T_OpenFileMappingA = decltype(&OpenFileMappingA);
#define H_OpenFileMappingA 0x707d46ad
using T_OpenFileMappingW = decltype(&OpenFileMappingW);
#define H_OpenFileMappingW 0x707d46c3
using T_OpenJobObjectA = decltype(&OpenJobObjectA);
#define H_OpenJobObjectA 0x03b8429b
using T_OpenJobObjectW = decltype(&OpenJobObjectW);
#define H_OpenJobObjectW 0x03b842b1
using T_OpenMutexA = decltype(&OpenMutexA);
#define H_OpenMutexA 0x52e2dea0
using T_OpenMutexW = decltype(&OpenMutexW);
#define H_OpenMutexW 0x52e2deb6
//using T_OpenPackageInfoByFullName = decltype(&OpenPackageInfoByFullName);
#define H_OpenPackageInfoByFullName 0x403b73c7
using T_OpenPrivateNamespaceA = decltype(&OpenPrivateNamespaceA);
#define H_OpenPrivateNamespaceA 0x632aff6f
using T_OpenPrivateNamespaceW = decltype(&OpenPrivateNamespaceW);
#define H_OpenPrivateNamespaceW 0x632aff85
using T_OpenProcess = decltype(&OpenProcess);
#define H_OpenProcess 0x3d94d2a5
using T_OpenProcessToken = decltype(&OpenProcessToken);
#define H_OpenProcessToken 0x7920a8c8
//using T_OpenProfileUserMapping = decltype(&OpenProfileUserMapping);
#define H_OpenProfileUserMapping 0x328ffe28
using T_OpenSemaphoreA = decltype(&OpenSemaphoreA);
#define H_OpenSemaphoreA 0x71010e17
using T_OpenSemaphoreW = decltype(&OpenSemaphoreW);
#define H_OpenSemaphoreW 0x71010e2d
//using T_OpenState = decltype(&OpenState);
#define H_OpenState 0x16bf522f
//using T_OpenStateExplicit = decltype(&OpenStateExplicit);
#define H_OpenStateExplicit 0x4d940ef7
using T_OpenThread = decltype(&OpenThread);
#define H_OpenThread 0x4f0a05d0
using T_OpenThreadToken = decltype(&OpenThreadToken);
#define H_OpenThreadToken 0x31f03e19
using T_OpenWaitableTimerA = decltype(&OpenWaitableTimerA);
#define H_OpenWaitableTimerA 0x459c57dd
using T_OpenWaitableTimerW = decltype(&OpenWaitableTimerW);
#define H_OpenWaitableTimerW 0x459c57f3
using T_OutputDebugStringA = decltype(&OutputDebugStringA);
#define H_OutputDebugStringA 0x457dd222
using T_OutputDebugStringW = decltype(&OutputDebugStringW);
#define H_OutputDebugStringW 0x457dd238
//using T_PackageFamilyNameFromFullName = decltype(&PackageFamilyNameFromFullName);
//#define H_PackageFamilyNameFromFullName 0x4bf669ad
//using T_PackageFamilyNameFromId = decltype(&PackageFamilyNameFromId);
//#define H_PackageFamilyNameFromId 0x3283ab56
//using T_PackageFullNameFromId = decltype(&PackageFullNameFromId);
//#define H_PackageFullNameFromId 0x2dc29cbd
//using T_PackageIdFromFullName = decltype(&PackageIdFromFullName);
//#define H_PackageIdFromFullName 0x74964fcd
//using T_PackageNameAndPublisherIdFromFamilyName = decltype(&PackageNameAndPublisherIdFromFamilyName);
//#define H_PackageNameAndPublisherIdFromFamilyName 0x423cbcea
//using T_ParseApplicationUserModelId = decltype(&ParseApplicationUserModelId);
//#define H_ParseApplicationUserModelId 0x76d207ac
using T_PeekConsoleInputA = decltype(&PeekConsoleInputA);
#define H_PeekConsoleInputA 0x68a61e27
using T_PeekConsoleInputW = decltype(&PeekConsoleInputW);
#define H_PeekConsoleInputW 0x68a61e3d
using T_PeekNamedPipe = decltype(&PeekNamedPipe);
#define H_PeekNamedPipe 0x675d205c
using T_PostQueuedCompletionStatus = decltype(&PostQueuedCompletionStatus);
#define H_PostQueuedCompletionStatus 0x2760f6d9
using T_PowerClearRequest = decltype(&PowerClearRequest);
#define H_PowerClearRequest 0x18212a4b
using T_PowerCreateRequest = decltype(&PowerCreateRequest);
#define H_PowerCreateRequest 0x28d12cb6
using T_PowerSetRequest = decltype(&PowerSetRequest);
#define H_PowerSetRequest 0x2f51018a
//using T_PrefetchVirtualMemory = decltype(&PrefetchVirtualMemory);
#define H_PrefetchVirtualMemory 0x5779540d
using T_PrepareTape = decltype(&PrepareTape);
#define H_PrepareTape 0x0931cb99
//using T_PrivCopyFileExW = decltype(&PrivCopyFileExW);
//#define H_PrivCopyFileExW 0x3d16651c
//using T_PrivMoveFileIdentityW = decltype(&PrivMoveFileIdentityW);
//#define H_PrivMoveFileIdentityW 0x6435ac2d
using T_Process32First = decltype(&Process32First);
#define H_Process32First 0x27d344fe
using T_Process32FirstW = decltype(&Process32FirstW);
#define H_Process32FirstW 0x611c4e51
using T_Process32Next = decltype(&Process32Next);
#define H_Process32Next 0x313ff2f5
using T_Process32NextW = decltype(&Process32NextW);
#define H_Process32NextW 0x33b953b6
using T_ProcessIdToSessionId = decltype(&ProcessIdToSessionId);
#define H_ProcessIdToSessionId 0x5e9efc5c
//using T_PssCaptureSnapshot = decltype(&PssCaptureSnapshot);
//#define H_PssCaptureSnapshot 0x076b6932
//using T_PssDuplicateSnapshot = decltype(&PssDuplicateSnapshot);
//#define H_PssDuplicateSnapshot 0x40df8e23
//using T_PssFreeSnapshot = decltype(&PssFreeSnapshot);
//#define H_PssFreeSnapshot 0x07c6a430
//using T_PssQuerySnapshot = decltype(&PssQuerySnapshot);
//#define H_PssQuerySnapshot 0x3dec4ec4
//using T_PssWalkMarkerCreate = decltype(&PssWalkMarkerCreate);
//#define H_PssWalkMarkerCreate 0x0845ee6f
//using T_PssWalkMarkerFree = decltype(&PssWalkMarkerFree);
//#define H_PssWalkMarkerFree 0x219dcb93
//using T_PssWalkMarkerGetPosition = decltype(&PssWalkMarkerGetPosition);
//#define H_PssWalkMarkerGetPosition 0x5ab3d79c
//using T_PssWalkMarkerRewind = decltype(&PssWalkMarkerRewind);
//#define H_PssWalkMarkerRewind 0x633fa22a
//using T_PssWalkMarkerSeek = decltype(&PssWalkMarkerSeek);
//#define H_PssWalkMarkerSeek 0x23585503
//using T_PssWalkMarkerSeekToBeginning = decltype(&PssWalkMarkerSeekToBeginning);
//#define H_PssWalkMarkerSeekToBeginning 0x498a71ef
//using T_PssWalkMarkerSetPosition = decltype(&PssWalkMarkerSetPosition);
//#define H_PssWalkMarkerSetPosition 0x2caadb88
//using T_PssWalkMarkerTell = decltype(&PssWalkMarkerTell);
//#define H_PssWalkMarkerTell 0x237aa634
//using T_PssWalkSnapshot = decltype(&PssWalkSnapshot);
//#define H_PssWalkSnapshot 0x2040ac9d
//using T_PulseEvent = decltype(&PulseEvent);
//#define H_PulseEvent 0x396ea195
//using T_PurgeComm = decltype(&PurgeComm);
//#define H_PurgeComm 0x06aacfdf
//using T_QueryActCtxSettingsW = decltype(&QueryActCtxSettingsW);
//#define H_QueryActCtxSettingsW 0x25e7d86b
//using T_QueryActCtxSettingsWWorker = decltype(&QueryActCtxSettingsWWorker);
//#define H_QueryActCtxSettingsWWorker 0x5dbfb4d1
using T_QueryActCtxW = decltype(&QueryActCtxW);
#define H_QueryActCtxW 0x0be86ec6
//using T_QueryActCtxWWorker = decltype(&QueryActCtxWWorker);
#define H_QueryActCtxWWorker 0x368e40f4
using T_QueryDepthSList = decltype(&QueryDepthSList);
#define H_QueryDepthSList 0x668b64e6
using T_QueryDosDeviceA = decltype(&QueryDosDeviceA);
#define H_QueryDosDeviceA 0x5da06057
using T_QueryDosDeviceW = decltype(&QueryDosDeviceW);
#define H_QueryDosDeviceW 0x5da0606d
using T_QueryFullProcessImageNameA = decltype(&QueryFullProcessImageNameA);
#define H_QueryFullProcessImageNameA 0x21deef1f
using T_QueryFullProcessImageNameW = decltype(&QueryFullProcessImageNameW);
#define H_QueryFullProcessImageNameW 0x21deef35
using T_QueryIdleProcessorCycleTime = decltype(&QueryIdleProcessorCycleTime);
#define H_QueryIdleProcessorCycleTime 0x213071b9
using T_QueryIdleProcessorCycleTimeEx = decltype(&QueryIdleProcessorCycleTimeEx);
#define H_QueryIdleProcessorCycleTimeEx 0x58778e48
using T_QueryInformationJobObject = decltype(&QueryInformationJobObject);
#define H_QueryInformationJobObject 0x3c655d14
//using T_QueryIoRateControlInformationJobObject = decltype(&QueryIoRateControlInformationJobObject);
#define H_QueryIoRateControlInformationJobObject 0x36190997
using T_QueryMemoryResourceNotification = decltype(&QueryMemoryResourceNotification);
#define H_QueryMemoryResourceNotification 0x5b47aad2
using T_QueryPerformanceCounter = decltype(&QueryPerformanceCounter);
#define H_QueryPerformanceCounter 0x483bc93c
using T_QueryPerformanceFrequency = decltype(&QueryPerformanceFrequency);
#define H_QueryPerformanceFrequency 0x1a19da38
using T_QueryProcessAffinityUpdateMode = decltype(&QueryProcessAffinityUpdateMode);
#define H_QueryProcessAffinityUpdateMode 0x65491f6b
using T_QueryProcessCycleTime = decltype(&QueryProcessCycleTime);
#define H_QueryProcessCycleTime 0x0c83b2b4
//using T_QueryProtectedPolicy = decltype(&QueryProtectedPolicy);
#define H_QueryProtectedPolicy 0x624dffe8
using T_QueryThreadCycleTime = decltype(&QueryThreadCycleTime);
#define H_QueryThreadCycleTime 0x32e67e09
using T_QueryThreadProfiling = decltype(&QueryThreadProfiling);
#define H_QueryThreadProfiling 0x11b270b4
using T_QueryThreadpoolStackInformation = decltype(&QueryThreadpoolStackInformation);
#define H_QueryThreadpoolStackInformation 0x768fbe2e
using T_QueryUnbiasedInterruptTime = decltype(&QueryUnbiasedInterruptTime);
#define H_QueryUnbiasedInterruptTime 0x42c9c8fb
using T_QueueUserAPC = decltype(&QueueUserAPC);
#define H_QueueUserAPC 0x58534450
using T_QueueUserWorkItem = decltype(&QueueUserWorkItem);
#define H_QueueUserWorkItem 0x6d764384
//using T_QuirkGetData2Worker = decltype(&QuirkGetData2Worker);
//#define H_QuirkGetData2Worker 0x7da89176
//using T_QuirkGetDataWorker = decltype(&QuirkGetDataWorker);
//#define H_QuirkGetDataWorker 0x646ca370
//using T_QuirkIsEnabled2Worker = decltype(&QuirkIsEnabled2Worker);
//#define H_QuirkIsEnabled2Worker 0x45874817
//using T_QuirkIsEnabled3Worker = decltype(&QuirkIsEnabled3Worker);
//#define H_QuirkIsEnabled3Worker 0x7a39e3f0
//using T_QuirkIsEnabledForPackage2Worker = decltype(&QuirkIsEnabledForPackage2Worker);
//#define H_QuirkIsEnabledForPackage2Worker 0x26f375d2
//using T_QuirkIsEnabledForPackage3Worker = decltype(&QuirkIsEnabledForPackage3Worker);
//#define H_QuirkIsEnabledForPackage3Worker 0x5ba611ab
//using T_QuirkIsEnabledForPackage4Worker = decltype(&QuirkIsEnabledForPackage4Worker);
//#define H_QuirkIsEnabledForPackage4Worker 0x1058ad84
//using T_QuirkIsEnabledForPackageWorker = decltype(&QuirkIsEnabledForPackageWorker);
//#define H_QuirkIsEnabledForPackageWorker 0x1b7506e4
//using T_QuirkIsEnabledForProcessWorker = decltype(&QuirkIsEnabledForProcessWorker);
//#define H_QuirkIsEnabledForProcessWorker 0x38d789c9
//using T_QuirkIsEnabledWorker = decltype(&QuirkIsEnabledWorker);
//#define H_QuirkIsEnabledWorker 0x18c25e7b
using T_RaiseException = decltype(&RaiseException);
#define H_RaiseException 0x6d4705c3
using T_RaiseFailFastException = decltype(&RaiseFailFastException);
#define H_RaiseFailFastException 0x42853c01
//using T_RaiseInvalid16BitExeError = decltype(&RaiseInvalid16BitExeError);
#define H_RaiseInvalid16BitExeError 0x2e57a3bf
using T_ReOpenFile = decltype(&ReOpenFile);
#define H_ReOpenFile 0x74ada679
using T_ReadConsoleA = decltype(&ReadConsoleA);
#define H_ReadConsoleA 0x1ac19030
using T_ReadConsoleInputA = decltype(&ReadConsoleInputA);
#define H_ReadConsoleInputA 0x19195a80
//using T_ReadConsoleInputExA = decltype(&ReadConsoleInputExA);
//#define H_ReadConsoleInputExA 0x0494f84d
//using T_ReadConsoleInputExW = decltype(&ReadConsoleInputExW);
//#define H_ReadConsoleInputExW 0x0494f863
using T_ReadConsoleInputW = decltype(&ReadConsoleInputW);
#define H_ReadConsoleInputW 0x19195a96
using T_ReadConsoleOutputA = decltype(&ReadConsoleOutputA);
#define H_ReadConsoleOutputA 0x3a52b95b
using T_ReadConsoleOutputAttribute = decltype(&ReadConsoleOutputAttribute);
#define H_ReadConsoleOutputAttribute 0x685ab12e
using T_ReadConsoleOutputCharacterA = decltype(&ReadConsoleOutputCharacterA);
#define H_ReadConsoleOutputCharacterA 0x39fe8f72
using T_ReadConsoleOutputCharacterW = decltype(&ReadConsoleOutputCharacterW);
#define H_ReadConsoleOutputCharacterW 0x39fe8f88
using T_ReadConsoleOutputW = decltype(&ReadConsoleOutputW);
#define H_ReadConsoleOutputW 0x3a52b971
using T_ReadConsoleW = decltype(&ReadConsoleW);
#define H_ReadConsoleW 0x1ac19046
//using T_ReadDirectoryChangesExW = decltype(&ReadDirectoryChangesExW);
#define H_ReadDirectoryChangesExW 0x2dbab074
using T_ReadDirectoryChangesW = decltype(&ReadDirectoryChangesW);
#define H_ReadDirectoryChangesW 0x7ad9415f
using T_ReadFile = decltype(&ReadFile);
#define H_ReadFile 0x3b07bd16
using T_ReadFileEx = decltype(&ReadFileEx);
#define H_ReadFileEx 0x19c28b8d
using T_ReadFileScatter = decltype(&ReadFileScatter);
#define H_ReadFileScatter 0x3b4127e8
using T_ReadProcessMemory = decltype(&ReadProcessMemory);
#define H_ReadProcessMemory 0x61c556a6
using T_ReadThreadProfilingData = decltype(&ReadThreadProfilingData);
#define H_ReadThreadProfilingData 0x320a2388
//using T_ReclaimVirtualMemory = decltype(&ReclaimVirtualMemory);
#define H_ReclaimVirtualMemory 0x0762115f
using T_RegCloseKey = decltype(&RegCloseKey);
#define H_RegCloseKey 0x1355b597
using T_RegCopyTreeW = decltype(&RegCopyTreeW);
#define H_RegCopyTreeW 0x3faa3a48
using T_RegCreateKeyExA = decltype(&RegCreateKeyExA);
#define H_RegCreateKeyExA 0x76a64793
using T_RegCreateKeyExW = decltype(&RegCreateKeyExW);
#define H_RegCreateKeyExW 0x76a647a9
using T_RegDeleteKeyExA = decltype(&RegDeleteKeyExA);
#define H_RegDeleteKeyExA 0x0bc6c3b2
using T_RegDeleteKeyExW = decltype(&RegDeleteKeyExW);
#define H_RegDeleteKeyExW 0x0bc6c3c8
using T_RegDeleteTreeA = decltype(&RegDeleteTreeA);
#define H_RegDeleteTreeA 0x5a6b6f28
using T_RegDeleteTreeW = decltype(&RegDeleteTreeW);
#define H_RegDeleteTreeW 0x5a6b6f3e
using T_RegDeleteValueA = decltype(&RegDeleteValueA);
#define H_RegDeleteValueA 0x128dbf77
using T_RegDeleteValueW = decltype(&RegDeleteValueW);
#define H_RegDeleteValueW 0x128dbf8d
using T_RegDisablePredefinedCacheEx = decltype(&RegDisablePredefinedCacheEx);
#define H_RegDisablePredefinedCacheEx 0x153911ef
using T_RegEnumKeyExA = decltype(&RegEnumKeyExA);
#define H_RegEnumKeyExA 0x46221900
using T_RegEnumKeyExW = decltype(&RegEnumKeyExW);
#define H_RegEnumKeyExW 0x46221916
using T_RegEnumValueA = decltype(&RegEnumValueA);
#define H_RegEnumValueA 0x4ce914c5
using T_RegEnumValueW = decltype(&RegEnumValueW);
#define H_RegEnumValueW 0x4ce914db
using T_RegFlushKey = decltype(&RegFlushKey);
#define H_RegFlushKey 0x5f07a33b
using T_RegGetKeySecurity = decltype(&RegGetKeySecurity);
#define H_RegGetKeySecurity 0x23cbd9f1
using T_RegGetValueA = decltype(&RegGetValueA);
#define H_RegGetValueA 0x4d128ffe
using T_RegGetValueW = decltype(&RegGetValueW);
#define H_RegGetValueW 0x4d129014
using T_RegLoadKeyA = decltype(&RegLoadKeyA);
#define H_RegLoadKeyA 0x180271ac
using T_RegLoadKeyW = decltype(&RegLoadKeyW);
#define H_RegLoadKeyW 0x180271c2
using T_RegLoadMUIStringA = decltype(&RegLoadMUIStringA);
#define H_RegLoadMUIStringA 0x0dcd9249
using T_RegLoadMUIStringW = decltype(&RegLoadMUIStringW);
#define H_RegLoadMUIStringW 0x0dcd925f
using T_RegNotifyChangeKeyValue = decltype(&RegNotifyChangeKeyValue);
#define H_RegNotifyChangeKeyValue 0x4a84be17
using T_RegOpenCurrentUser = decltype(&RegOpenCurrentUser);
#define H_RegOpenCurrentUser 0x7bd682ae
using T_RegOpenKeyExA = decltype(&RegOpenKeyExA);
#define H_RegOpenKeyExA 0x7cfd8d49
using T_RegOpenKeyExW = decltype(&RegOpenKeyExW);
#define H_RegOpenKeyExW 0x7cfd8d5f
using T_RegOpenUserClassesRoot = decltype(&RegOpenUserClassesRoot);
#define H_RegOpenUserClassesRoot 0x06b1daeb
using T_RegQueryInfoKeyA = decltype(&RegQueryInfoKeyA);
#define H_RegQueryInfoKeyA 0x1d14c630
using T_RegQueryInfoKeyW = decltype(&RegQueryInfoKeyW);
#define H_RegQueryInfoKeyW 0x1d14c646
using T_RegQueryValueExA = decltype(&RegQueryValueExA);
#define H_RegQueryValueExA 0x520d276d
using T_RegQueryValueExW = decltype(&RegQueryValueExW);
#define H_RegQueryValueExW 0x520d2783
using T_RegRestoreKeyA = decltype(&RegRestoreKeyA);
#define H_RegRestoreKeyA 0x0be4e30c
using T_RegRestoreKeyW = decltype(&RegRestoreKeyW);
#define H_RegRestoreKeyW 0x0be4e322
using T_RegSaveKeyExA = decltype(&RegSaveKeyExA);
#define H_RegSaveKeyExA 0x67cf4480
using T_RegSaveKeyExW = decltype(&RegSaveKeyExW);
#define H_RegSaveKeyExW 0x67cf4496
using T_RegSetKeySecurity = decltype(&RegSetKeySecurity);
#define H_RegSetKeySecurity 0x15e135d5
using T_RegSetValueExA = decltype(&RegSetValueExA);
#define H_RegSetValueExA 0x634ed7a7
using T_RegSetValueExW = decltype(&RegSetValueExW);
#define H_RegSetValueExW 0x634ed7bd
using T_RegUnLoadKeyA = decltype(&RegUnLoadKeyA);
#define H_RegUnLoadKeyA 0x5354da79
using T_RegUnLoadKeyW = decltype(&RegUnLoadKeyW);
#define H_RegUnLoadKeyW 0x5354da8f
using T_RegisterApplicationRecoveryCallback = decltype(&RegisterApplicationRecoveryCallback);
#define H_RegisterApplicationRecoveryCallback 0x45f347d3
using T_RegisterApplicationRestart = decltype(&RegisterApplicationRestart);
#define H_RegisterApplicationRestart 0x7f140b82
//using T_RegisterBadMemoryNotification = decltype(&RegisterBadMemoryNotification);
#define H_RegisterBadMemoryNotification 0x6bea67a2
//using T_RegisterConsoleIME = decltype(&RegisterConsoleIME);
//#define H_RegisterConsoleIME 0x7f9115e9
//using T_RegisterConsoleOS2 = decltype(&RegisterConsoleOS2);
//#define H_RegisterConsoleOS2 0x7f92ab1e
//using T_RegisterConsoleVDM = decltype(&RegisterConsoleVDM);
//#define H_RegisterConsoleVDM 0x7f9478cb
//using T_RegisterWaitForInputIdle = decltype(&RegisterWaitForInputIdle);
//#define H_RegisterWaitForInputIdle 0x6d394961
//using T_RegisterWaitForSingleObject = decltype(&RegisterWaitForSingleObject);
//#define H_RegisterWaitForSingleObject 0x7e715924
//using T_RegisterWaitForSingleObjectEx = decltype(&RegisterWaitForSingleObjectEx);
//#define H_RegisterWaitForSingleObjectEx 0x1c50b20b
//using T_RegisterWaitUntilOOBECompleted = decltype(&RegisterWaitUntilOOBECompleted);
//#define H_RegisterWaitUntilOOBECompleted 0x07633246
//using T_RegisterWowBaseHandlers = decltype(&RegisterWowBaseHandlers);
//#define H_RegisterWowBaseHandlers 0x6aed5436
//using T_RegisterWowExec = decltype(&RegisterWowExec);
//#define H_RegisterWowExec 0x00308e71
//using T_ReleaseActCtx = decltype(&ReleaseActCtx);
//#define H_ReleaseActCtx 0x71e9de94
//using T_ReleaseActCtxWorker = decltype(&ReleaseActCtxWorker);
//#define H_ReleaseActCtxWorker 0x21b3c092
using T_ReleaseMutex = decltype(&ReleaseMutex);
#define H_ReleaseMutex 0x2ce2e8d0
using T_ReleaseMutexWhenCallbackReturns = decltype(&ReleaseMutexWhenCallbackReturns);
#define H_ReleaseMutexWhenCallbackReturns 0x32994680
using T_ReleaseSRWLockExclusive = decltype(&ReleaseSRWLockExclusive);
#define H_ReleaseSRWLockExclusive 0x0e2b707a
using T_ReleaseSRWLockShared = decltype(&ReleaseSRWLockShared);
#define H_ReleaseSRWLockShared 0x2da13a21
using T_ReleaseSemaphore = decltype(&ReleaseSemaphore);
#define H_ReleaseSemaphore 0x5296da3d
using T_ReleaseSemaphoreWhenCallbackReturns = decltype(&ReleaseSemaphoreWhenCallbackReturns);
#define H_ReleaseSemaphoreWhenCallbackReturns 0x44398d3f
using T_RemoveDirectoryA = decltype(&RemoveDirectoryA);
#define H_RemoveDirectoryA 0x559bb7a0
using T_RemoveDirectoryTransactedA = decltype(&RemoveDirectoryTransactedA);
#define H_RemoveDirectoryTransactedA 0x0d9b2393
using T_RemoveDirectoryTransactedW = decltype(&RemoveDirectoryTransactedW);
#define H_RemoveDirectoryTransactedW 0x0d9b23a9
using T_RemoveDirectoryW = decltype(&RemoveDirectoryW);
#define H_RemoveDirectoryW 0x559bb7b6
//using T_RemoveDllDirectory = decltype(&RemoveDllDirectory);
#define H_RemoveDllDirectory 0x4da9bd41
//using T_RemoveLocalAlternateComputerNameA = decltype(&RemoveLocalAlternateComputerNameA);
//#define H_RemoveLocalAlternateComputerNameA 0x1872b544
//using T_RemoveLocalAlternateComputerNameW = decltype(&RemoveLocalAlternateComputerNameW);
//#define H_RemoveLocalAlternateComputerNameW 0x1872b55a
using T_RemoveSecureMemoryCacheCallback = decltype(&RemoveSecureMemoryCacheCallback);
#define H_RemoveSecureMemoryCacheCallback 0x3c7d1d5b
using T_RemoveVectoredContinueHandler = decltype(&RemoveVectoredContinueHandler);
#define H_RemoveVectoredContinueHandler 0x6bcbbb85
using T_RemoveVectoredExceptionHandler = decltype(&RemoveVectoredExceptionHandler);
#define H_RemoveVectoredExceptionHandler 0x62dd6065
using T_ReplaceFile = decltype(&ReplaceFile);
#define H_ReplaceFile 0x0c7d2ea8
using T_ReplaceFileA = decltype(&ReplaceFileA);
#define H_ReplaceFileA 0x640ee039
using T_ReplaceFileW = decltype(&ReplaceFileW);
#define H_ReplaceFileW 0x640ee04f
using T_ReplacePartitionUnit = decltype(&ReplacePartitionUnit);
#define H_ReplacePartitionUnit 0x0e1c3f82
using T_RequestDeviceWakeup = decltype(&RequestDeviceWakeup);
#define H_RequestDeviceWakeup 0x40337f70
using T_RequestWakeupLatency = decltype(&RequestWakeupLatency);
#define H_RequestWakeupLatency 0x2fd3465c
using T_ResetEvent = decltype(&ResetEvent);
#define H_ResetEvent 0x6ecbb077
using T_ResetWriteWatch = decltype(&ResetWriteWatch);
#define H_ResetWriteWatch 0x7eae90d3
//using T_ResizePseudoConsole = decltype(&ResizePseudoConsole);
#define H_ResizePseudoConsole 0x2f7ca79d
//using T_ResolveDelayLoadedAPI = decltype(&ResolveDelayLoadedAPI);
//#define H_ResolveDelayLoadedAPI 0x7bc13d3e
//using T_ResolveDelayLoadsFromDll = decltype(&ResolveDelayLoadsFromDll);
//#define H_ResolveDelayLoadsFromDll 0x53aa6c68
//using T_ResolveLocaleName = decltype(&ResolveLocaleName);
//#define H_ResolveLocaleName 0x5238dee1
//using T_RestoreLastError = decltype(&RestoreLastError);
#define H_RestoreLastError 0x5a107bd0
using T_ResumeThread = decltype(&ResumeThread);
#define H_ResumeThread 0x659486ab
using T_RtlCaptureContext = decltype(&RtlCaptureContext);
#define H_RtlCaptureContext 0x4e61792b
using T_RtlCaptureStackBackTrace = decltype(&RtlCaptureStackBackTrace);
#define H_RtlCaptureStackBackTrace 0x09cb28de
//using T_RtlFillMemory = decltype(&RtlFillMemory);
//#define H_RtlFillMemory 0x7abba0c6
// using T_RtlMoveMemory = decltype(&RtlMoveMemory);

typedef void(__stdcall* T_RtlMoveMemory)(IN VOID UNALIGNED* Destination,
	IN CONST VOID UNALIGNED* Source, IN SIZE_T  Length);

#define H_RtlMoveMemory 0x1518e9c0
using T_RtlPcToFileHeader = decltype(&RtlPcToFileHeader);
#define H_RtlPcToFileHeader 0x01a3e629
using T_RtlUnwind = decltype(&RtlUnwind);
#define H_RtlUnwind 0x7adc4083
//using T_RtlZeroMemory = decltype(&RtlZeroMemory);
typedef void(__stdcall* T_RtlZeroMemory)(IN VOID UNALIGNED* Destination, IN SIZE_T  Length
	);

#define H_RtlZeroMemory 0x0db579cb
using T_ScrollConsoleScreenBufferA = decltype(&ScrollConsoleScreenBufferA);
#define H_ScrollConsoleScreenBufferA 0x756ea15f
using T_ScrollConsoleScreenBufferW = decltype(&ScrollConsoleScreenBufferW);
#define H_ScrollConsoleScreenBufferW 0x756ea175
using T_SearchPathA = decltype(&SearchPathA);
#define H_SearchPathA 0x2dacfafc
using T_SearchPathW = decltype(&SearchPathW);
#define H_SearchPathW 0x2dacfb12
//using T_SetCachedSigningLevel = decltype(&SetCachedSigningLevel);
#define H_SetCachedSigningLevel 0x226b71c3
using T_SetCalendarInfoA = decltype(&SetCalendarInfoA);
#define H_SetCalendarInfoA 0x22d853d3
using T_SetCalendarInfoW = decltype(&SetCalendarInfoW);
#define H_SetCalendarInfoW 0x22d853e9
//using T_SetComPlusPackageInstallStatus = decltype(&SetComPlusPackageInstallStatus);
#define H_SetComPlusPackageInstallStatus 0x06b9edec
using T_SetCommBreak = decltype(&SetCommBreak);
#define H_SetCommBreak 0x7c16d131
using T_SetCommConfig = decltype(&SetCommConfig);
#define H_SetCommConfig 0x47be3d94
using T_SetCommMask = decltype(&SetCommMask);
#define H_SetCommMask 0x7a964e86
using T_SetCommState = decltype(&SetCommState);
#define H_SetCommState 0x26c38557
using T_SetCommTimeouts = decltype(&SetCommTimeouts);
#define H_SetCommTimeouts 0x751fb604
using T_SetComputerNameA = decltype(&SetComputerNameA);
#define H_SetComputerNameA 0x2185cbc9
//using T_SetComputerNameEx2W = decltype(&SetComputerNameEx2W);
#define H_SetComputerNameEx2W 0x1ba89444
using T_SetComputerNameExA = decltype(&SetComputerNameExA);
#define H_SetComputerNameExA 0x320b0ede
using T_SetComputerNameExW = decltype(&SetComputerNameExW);
#define H_SetComputerNameExW 0x320b0ef4
using T_SetComputerNameW = decltype(&SetComputerNameW);
#define H_SetComputerNameW 0x2185cbdf
using T_SetConsoleActiveScreenBuffer = decltype(&SetConsoleActiveScreenBuffer);
#define H_SetConsoleActiveScreenBuffer 0x11c760b3
using T_SetConsoleCP = decltype(&SetConsoleCP);
#define H_SetConsoleCP 0x2afe5ce2
using T_SetConsoleCtrlHandler = decltype(&SetConsoleCtrlHandler);
#define H_SetConsoleCtrlHandler 0x0e44548a
//using T_SetConsoleCursor = decltype(&SetConsoleCursor);
//#define H_SetConsoleCursor 0x33de4e87
//using T_SetConsoleCursorInfo = decltype(&SetConsoleCursorInfo);
//#define H_SetConsoleCursorInfo 0x366af669
//using T_SetConsoleCursorMode = decltype(&SetConsoleCursorMode);
//#define H_SetConsoleCursorMode 0x36f46ece
//using T_SetConsoleCursorPosition = decltype(&SetConsoleCursorPosition);
//#define H_SetConsoleCursorPosition 0x5862ea78
//using T_SetConsoleDisplayMode = decltype(&SetConsoleDisplayMode);
//#define H_SetConsoleDisplayMode 0x78a8d05c
//using T_SetConsoleFont = decltype(&SetConsoleFont);
//#define H_SetConsoleFont 0x15afa998
//using T_SetConsoleHardwareState = decltype(&SetConsoleHardwareState);
//#define H_SetConsoleHardwareState 0x71c77310
//using T_SetConsoleHistoryInfo = decltype(&SetConsoleHistoryInfo);
//#define H_SetConsoleHistoryInfo 0x42e984f5
//using T_SetConsoleIcon = decltype(&SetConsoleIcon);
//#define H_SetConsoleIcon 0x16136e7a
//using T_SetConsoleInputExeNameA = decltype(&SetConsoleInputExeNameA);
//#define H_SetConsoleInputExeNameA 0x0dc0b405
//using T_SetConsoleInputExeNameW = decltype(&SetConsoleInputExeNameW);
//#define H_SetConsoleInputExeNameW 0x0dc0b41b
//using T_SetConsoleKeyShortcuts = decltype(&SetConsoleKeyShortcuts);
//#define H_SetConsoleKeyShortcuts 0x692e583b
//using T_SetConsoleLocalEUDC = decltype(&SetConsoleLocalEUDC);
//#define H_SetConsoleLocalEUDC 0x48004731
//using T_SetConsoleMaximumWindowSize = decltype(&SetConsoleMaximumWindowSize);
//#define H_SetConsoleMaximumWindowSize 0x06d1839c
//using T_SetConsoleMenuClose = decltype(&SetConsoleMenuClose);
//#define H_SetConsoleMenuClose 0x56a92a70
//using T_SetConsoleMode = decltype(&SetConsoleMode);
//#define H_SetConsoleMode 0x169fc3a8
//using T_SetConsoleNlsMode = decltype(&SetConsoleNlsMode);
//#define H_SetConsoleNlsMode 0x033e64e7
//using T_SetConsoleNumberOfCommandsA = decltype(&SetConsoleNumberOfCommandsA);
#define H_SetConsoleNumberOfCommandsA 0x24179e24
//using T_SetConsoleNumberOfCommandsW = decltype(&SetConsoleNumberOfCommandsW);
#define H_SetConsoleNumberOfCommandsW 0x24179e3a
//using T_SetConsoleOS2OemFormat = decltype(&SetConsoleOS2OemFormat);
//#define H_SetConsoleOS2OemFormat 0x247aba35
//using T_SetConsoleOutputCP = decltype(&SetConsoleOutputCP);
//#define H_SetConsoleOutputCP 0x5d510683
//using T_SetConsolePalette = decltype(&SetConsolePalette);
//#define H_SetConsolePalette 0x264d0056
using T_SetConsoleScreenBufferInfoEx = decltype(&SetConsoleScreenBufferInfoEx);
#define H_SetConsoleScreenBufferInfoEx 0x66d715a2
using T_SetConsoleScreenBufferSize = decltype(&SetConsoleScreenBufferSize);
#define H_SetConsoleScreenBufferSize 0x7ce915d6
using T_SetConsoleTextAttribute = decltype(&SetConsoleTextAttribute);
#define H_SetConsoleTextAttribute 0x5cd45896
using T_SetConsoleTitleA = decltype(&SetConsoleTitleA);
#define H_SetConsoleTitleA 0x15458606
using T_SetConsoleTitleW = decltype(&SetConsoleTitleW);
#define H_SetConsoleTitleW 0x1545861c
using T_SetConsoleWindowInfo = decltype(&SetConsoleWindowInfo);
#define H_SetConsoleWindowInfo 0x7a16bc4b
using T_SetCriticalSectionSpinCount = decltype(&SetCriticalSectionSpinCount);
#define H_SetCriticalSectionSpinCount 0x625fdfbd
using T_SetCurrentConsoleFontEx = decltype(&SetCurrentConsoleFontEx);
#define H_SetCurrentConsoleFontEx 0x41f22bca
using T_SetCurrentDirectoryA = decltype(&SetCurrentDirectoryA);
#define H_SetCurrentDirectoryA 0x5afb53d7
using T_SetCurrentDirectoryW = decltype(&SetCurrentDirectoryW);
#define H_SetCurrentDirectoryW 0x5afb53ed
using T_SetDefaultCommConfigA = decltype(&SetDefaultCommConfigA);
#define H_SetDefaultCommConfigA 0x23864784
using T_SetDefaultCommConfigW = decltype(&SetDefaultCommConfigW);
#define H_SetDefaultCommConfigW 0x2386479a
//using T_SetDefaultDllDirectories = decltype(&SetDefaultDllDirectories);
#define H_SetDefaultDllDirectories 0x6ef01b7e
using T_SetDllDirectoryA = decltype(&SetDllDirectoryA);
#define H_SetDllDirectoryA 0x7aa7af26
using T_SetDllDirectoryW = decltype(&SetDllDirectoryW);
#define H_SetDllDirectoryW 0x7aa7af3c
using T_SetDynamicTimeZoneInformation = decltype(&SetDynamicTimeZoneInformation);
#define H_SetDynamicTimeZoneInformation 0x651810fe
using T_SetEndOfFile = decltype(&SetEndOfFile);
#define H_SetEndOfFile 0x5514a8cc
using T_SetEnvironmentStringsA = decltype(&SetEnvironmentStringsA);
#define H_SetEnvironmentStringsA 0x2c10db68
using T_SetEnvironmentStringsW = decltype(&SetEnvironmentStringsW);
#define H_SetEnvironmentStringsW 0x2c10db7e
using T_SetEnvironmentVariableA = decltype(&SetEnvironmentVariableA);
#define H_SetEnvironmentVariableA 0x16674d94
using T_SetEnvironmentVariableW = decltype(&SetEnvironmentVariableW);
#define H_SetEnvironmentVariableW 0x16674daa
using T_SetErrorMode = decltype(&SetErrorMode);
#define H_SetErrorMode 0x588fd65d
using T_SetEvent = decltype(&SetEvent);
#define H_SetEvent 0x438384dc
using T_SetEventWhenCallbackReturns = decltype(&SetEventWhenCallbackReturns);
#define H_SetEventWhenCallbackReturns 0x41f2aac4
using T_SetFileApisToANSI = decltype(&SetFileApisToANSI);
#define H_SetFileApisToANSI 0x5190cf01
using T_SetFileApisToOEM = decltype(&SetFileApisToOEM);
#define H_SetFileApisToOEM 0x6e126ec5
using T_SetFileAttributesA = decltype(&SetFileAttributesA);
#define H_SetFileAttributesA 0x4ba0febc
using T_SetFileAttributesTransactedA = decltype(&SetFileAttributesTransactedA);
#define H_SetFileAttributesTransactedA 0x14aa610f
using T_SetFileAttributesTransactedW = decltype(&SetFileAttributesTransactedW);
#define H_SetFileAttributesTransactedW 0x14aa6125
using T_SetFileAttributesW = decltype(&SetFileAttributesW);
#define H_SetFileAttributesW 0x4ba0fed2
using T_SetFileBandwidthReservation = decltype(&SetFileBandwidthReservation);
#define H_SetFileBandwidthReservation 0x057219e5
using T_SetFileCompletionNotificationModes = decltype(&SetFileCompletionNotificationModes);
#define H_SetFileCompletionNotificationModes 0x1f16beaf
using T_SetFileInformationByHandle = decltype(&SetFileInformationByHandle);
#define H_SetFileInformationByHandle 0x0f543c3d
using T_SetFileIoOverlappedRange = decltype(&SetFileIoOverlappedRange);
#define H_SetFileIoOverlappedRange 0x4324d21d
using T_SetFilePointer = decltype(&SetFilePointer);
#define H_SetFilePointer 0x75f2dd83
using T_SetFilePointerEx = decltype(&SetFilePointerEx);
#define H_SetFilePointerEx 0x35833662
using T_SetFileShortNameA = decltype(&SetFileShortNameA);
#define H_SetFileShortNameA 0x3764a7ec
using T_SetFileShortNameW = decltype(&SetFileShortNameW);
#define H_SetFileShortNameW 0x3764a802
using T_SetFileTime = decltype(&SetFileTime);
#define H_SetFileTime 0x1d981e03
using T_SetFileValidData = decltype(&SetFileValidData);
#define H_SetFileValidData 0x5b90f02c
using T_SetFirmwareEnvironmentVariableA = decltype(&SetFirmwareEnvironmentVariableA);
#define H_SetFirmwareEnvironmentVariableA 0x3a3fc62b
//using T_SetFirmwareEnvironmentVariableExA = decltype(&SetFirmwareEnvironmentVariableExA);
#define H_SetFirmwareEnvironmentVariableExA 0x3d1c8250
//using T_SetFirmwareEnvironmentVariableExW = decltype(&SetFirmwareEnvironmentVariableExW);
#define H_SetFirmwareEnvironmentVariableExW 0x3d1c8266
using T_SetFirmwareEnvironmentVariableW = decltype(&SetFirmwareEnvironmentVariableW);
#define H_SetFirmwareEnvironmentVariableW 0x3a3fc641
//using T_SetHandleContext = decltype(&SetHandleContext);
#define H_SetHandleContext 0x0ff24f95
using T_SetHandleCount = decltype(&SetHandleCount);
#define H_SetHandleCount 0x351b676d
using T_SetHandleInformation = decltype(&SetHandleInformation);
#define H_SetHandleInformation 0x227315b2
using T_SetInformationJobObject = decltype(&SetInformationJobObject);
#define H_SetInformationJobObject 0x5c5412ee
//using T_SetIoRateControlInformationJobObject = decltype(&SetIoRateControlInformationJobObject);
#define H_SetIoRateControlInformationJobObject 0x26f11345
//using T_SetLastConsoleEventActive = decltype(&SetLastConsoleEventActive);
#define H_SetLastConsoleEventActive 0x7f219ba1
using T_SetLastError = decltype(&SetLastError);
#define H_SetLastError 0x279c0c14
//using T_SetLocalPrimaryComputerNameA = decltype(&SetLocalPrimaryComputerNameA);
//#define H_SetLocalPrimaryComputerNameA 0x0ce8bb66
//using T_SetLocalPrimaryComputerNameW = decltype(&SetLocalPrimaryComputerNameW);
//#define H_SetLocalPrimaryComputerNameW 0x0ce8bb7c
using T_SetLocalTime = decltype(&SetLocalTime);
#define H_SetLocalTime 0x61c0875e
using T_SetLocaleInfoA = decltype(&SetLocaleInfoA);
#define H_SetLocaleInfoA 0x55675e83
using T_SetLocaleInfoW = decltype(&SetLocaleInfoW);
#define H_SetLocaleInfoW 0x55675e99
using T_SetMailslotInfo = decltype(&SetMailslotInfo);
#define H_SetMailslotInfo 0x2d908b7d
using T_SetMessageWaitingIndicator = decltype(&SetMessageWaitingIndicator);
#define H_SetMessageWaitingIndicator 0x5d195fd3
//using T_SetNamedPipeAttribute = decltype(&SetNamedPipeAttribute);
#define H_SetNamedPipeAttribute 0x14d627d7
using T_SetNamedPipeHandleState = decltype(&SetNamedPipeHandleState);
#define H_SetNamedPipeHandleState 0x7cb05534
using T_SetPriorityClass = decltype(&SetPriorityClass);
#define H_SetPriorityClass 0x21f27d0e
using T_SetProcessAffinityMask = decltype(&SetProcessAffinityMask);
#define H_SetProcessAffinityMask 0x489ec971
using T_SetProcessAffinityUpdateMode = decltype(&SetProcessAffinityUpdateMode);
#define H_SetProcessAffinityUpdateMode 0x2f33ae59
using T_SetProcessDEPPolicy = decltype(&SetProcessDEPPolicy);
#define H_SetProcessDEPPolicy 0x2ac214cc
//using T_SetProcessDefaultCpuSets = decltype(&SetProcessDefaultCpuSets);
#define H_SetProcessDefaultCpuSets 0x17ccb3d1
//using T_SetProcessDynamicEHContinuationTargets = decltype(&SetProcessDynamicEHContinuationTargets);
#define H_SetProcessDynamicEHContinuationTargets 0x496ff54e
//using T_SetProcessInformation = decltype(&SetProcessInformation);
#define H_SetProcessInformation 0x680abdeb
//using T_SetProcessMitigationPolicy = decltype(&SetProcessMitigationPolicy);
#define H_SetProcessMitigationPolicy 0x593d0142
using T_SetProcessPreferredUILanguages = decltype(&SetProcessPreferredUILanguages);
#define H_SetProcessPreferredUILanguages 0x6a1c83e3
using T_SetProcessPriorityBoost = decltype(&SetProcessPriorityBoost);
#define H_SetProcessPriorityBoost 0x34de78ee
using T_SetProcessShutdownParameters = decltype(&SetProcessShutdownParameters);
#define H_SetProcessShutdownParameters 0x6f9232b1
using T_SetProcessWorkingSetSize = decltype(&SetProcessWorkingSetSize);
#define H_SetProcessWorkingSetSize 0x32110847
using T_SetProcessWorkingSetSizeEx = decltype(&SetProcessWorkingSetSizeEx);
#define H_SetProcessWorkingSetSizeEx 0x37c40346
//using T_SetProtectedPolicy = decltype(&SetProtectedPolicy);
#define H_SetProtectedPolicy 0x7f9bd026
using T_SetSearchPathMode = decltype(&SetSearchPathMode);
#define H_SetSearchPathMode 0x2f3420ee
using T_SetStdHandle = decltype(&SetStdHandle);
#define H_SetStdHandle 0x4d61292d
using T_SetStdHandleEx = decltype(&SetStdHandleEx);
#define H_SetStdHandleEx 0x26315d5c
using T_SetSystemFileCacheSize = decltype(&SetSystemFileCacheSize);
#define H_SetSystemFileCacheSize 0x006e3e72
using T_SetSystemPowerState = decltype(&SetSystemPowerState);
#define H_SetSystemPowerState 0x0844d441
using T_SetSystemTime = decltype(&SetSystemTime);
#define H_SetSystemTime 0x7e15514a
using T_SetSystemTimeAdjustment = decltype(&SetSystemTimeAdjustment);
#define H_SetSystemTimeAdjustment 0x0b05df43
using T_SetTapeParameters = decltype(&SetTapeParameters);
#define H_SetTapeParameters 0x38d06c36
using T_SetTapePosition = decltype(&SetTapePosition);
#define H_SetTapePosition 0x1e5cccf9
//using T_SetTermsrvAppInstallMode = decltype(&SetTermsrvAppInstallMode);
#define H_SetTermsrvAppInstallMode 0x463a3d4a
using T_SetThreadAffinityMask = decltype(&SetThreadAffinityMask);
#define H_SetThreadAffinityMask 0x250d3ad4
using T_SetThreadContext = decltype(&SetThreadContext);
#define H_SetThreadContext 0x5329874f
//using T_SetThreadDescription = decltype(&SetThreadDescription);
#define H_SetThreadDescription 0x05a16460
using T_SetThreadErrorMode = decltype(&SetThreadErrorMode);
#define H_SetThreadErrorMode 0x2ad64dc7
using T_SetThreadExecutionState = decltype(&SetThreadExecutionState);
#define H_SetThreadExecutionState 0x3d0bd755
using T_SetThreadGroupAffinity = decltype(&SetThreadGroupAffinity);
#define H_SetThreadGroupAffinity 0x61719613
using T_SetThreadIdealProcessor = decltype(&SetThreadIdealProcessor);
#define H_SetThreadIdealProcessor 0x59fee205
using T_SetThreadIdealProcessorEx = decltype(&SetThreadIdealProcessorEx);
#define H_SetThreadIdealProcessorEx 0x5f1d64f4
//using T_SetThreadInformation = decltype(&SetThreadInformation);
#define H_SetThreadInformation 0x33fbf38c
using T_SetThreadLocale = decltype(&SetThreadLocale);
#define H_SetThreadLocale 0x55d0bc02
using T_SetThreadPreferredUILanguages = decltype(&SetThreadPreferredUILanguages);
#define H_SetThreadPreferredUILanguages 0x02b48226
using T_SetThreadPriority = decltype(&SetThreadPriority);
#define H_SetThreadPriority 0x7ce2cc84
using T_SetThreadPriorityBoost = decltype(&SetThreadPriorityBoost);
#define H_SetThreadPriorityBoost 0x01627e97
//using T_SetThreadSelectedCpuSets = decltype(&SetThreadSelectedCpuSets);
#define H_SetThreadSelectedCpuSets 0x394d6ba6
using T_SetThreadStackGuarantee = decltype(&SetThreadStackGuarantee);
#define H_SetThreadStackGuarantee 0x45630040
using T_SetThreadToken = decltype(&SetThreadToken);
#define H_SetThreadToken 0x18d1263d
using T_SetThreadUILanguage = decltype(&SetThreadUILanguage);
#define H_SetThreadUILanguage 0x6591151c
using T_SetThreadpoolStackInformation = decltype(&SetThreadpoolStackInformation);
#define H_SetThreadpoolStackInformation 0x4996e1f8
using T_SetThreadpoolThreadMaximum = decltype(&SetThreadpoolThreadMaximum);
#define H_SetThreadpoolThreadMaximum 0x6eb34552
using T_SetThreadpoolThreadMinimum = decltype(&SetThreadpoolThreadMinimum);
#define H_SetThreadpoolThreadMinimum 0x1b4c81c0
using T_SetThreadpoolTimer = decltype(&SetThreadpoolTimer);
#define H_SetThreadpoolTimer 0x5f0ba3c1
//using T_SetThreadpoolTimerEx = decltype(&SetThreadpoolTimerEx);
#define H_SetThreadpoolTimerEx 0x63446890
using T_SetThreadpoolWait = decltype(&SetThreadpoolWait);
#define H_SetThreadpoolWait 0x78534ed1
//using T_SetThreadpoolWaitEx = decltype(&SetThreadpoolWaitEx);
#define H_SetThreadpoolWaitEx 0x088e9c20
using T_SetTimeZoneInformation = decltype(&SetTimeZoneInformation);
#define H_SetTimeZoneInformation 0x1e047a81
using T_SetTimerQueueTimer = decltype(&SetTimerQueueTimer);
#define H_SetTimerQueueTimer 0x7a2008e7
using T_SetUnhandledExceptionFilter = decltype(&SetUnhandledExceptionFilter);
#define H_SetUnhandledExceptionFilter 0x26c40fca
using T_SetUserGeoID = decltype(&SetUserGeoID);
#define H_SetUserGeoID 0x36ee81c7
//using T_SetUserGeoName = decltype(&SetUserGeoName);
#define H_SetUserGeoName 0x5b0cf937
//using T_SetVDMCurrentDirectories = decltype(&SetVDMCurrentDirectories);
#define H_SetVDMCurrentDirectories 0x57bd4af7
using T_SetVolumeLabelA = decltype(&SetVolumeLabelA);
#define H_SetVolumeLabelA 0x54d4f2a9
using T_SetVolumeLabelW = decltype(&SetVolumeLabelW);
#define H_SetVolumeLabelW 0x54d4f2bf
using T_SetVolumeMountPointA = decltype(&SetVolumeMountPointA);
#define H_SetVolumeMountPointA 0x69480f06
using T_SetVolumeMountPointW = decltype(&SetVolumeMountPointW);
#define H_SetVolumeMountPointW 0x69480f1c
//using T_SetVolumeMountPointWStub = decltype(&SetVolumeMountPointWStub);
#define H_SetVolumeMountPointWStub 0x44347572
using T_SetWaitableTimer = decltype(&SetWaitableTimer);
#define H_SetWaitableTimer 0x6e7dd478
using T_SetWaitableTimerEx = decltype(&SetWaitableTimerEx);
#define H_SetWaitableTimerEx 0x510803ff
//using T_SetXStateFeaturesMask = decltype(&SetXStateFeaturesMask);
#define H_SetXStateFeaturesMask 0x2216bd9c
using T_SetupComm = decltype(&SetupComm);
#define H_SetupComm 0x473acd89
//using T_ShowConsoleCursor = decltype(&ShowConsoleCursor);
#define H_ShowConsoleCursor 0x7fa09094
using T_SignalObjectAndWait = decltype(&SignalObjectAndWait);
#define H_SignalObjectAndWait 0x079f3a4d
using T_SizeofResource = decltype(&SizeofResource);
#define H_SizeofResource 0x54032ff2
using T_Sleep = decltype(&Sleep);
#define H_Sleep 0x3f858053
using T_SleepConditionVariableCS = decltype(&SleepConditionVariableCS);
#define H_SleepConditionVariableCS 0x667990b8
using T_SleepConditionVariableSRW = decltype(&SleepConditionVariableSRW);
#define H_SleepConditionVariableSRW 0x70393e8c
using T_SleepEx = decltype(&SleepEx);
#define H_SleepEx 0x2c475fb2
//using T_SortCloseHandle = decltype(&SortCloseHandle);
#define H_SortCloseHandle 0x55c54a72
//using T_SortGetHandle = decltype(&SortGetHandle);
#define H_SortGetHandle 0x78d62ab8
using T_StartThreadpoolIo = decltype(&StartThreadpoolIo);
#define H_StartThreadpoolIo 0x0d6e005a
using T_SubmitThreadpoolWork = decltype(&SubmitThreadpoolWork);
#define H_SubmitThreadpoolWork 0x195e9dab
using T_SuspendThread = decltype(&SuspendThread);
#define H_SuspendThread 0x6610e0d6
using T_SwitchToFiber = decltype(&SwitchToFiber);
#define H_SwitchToFiber 0x55ec2c95
using T_SwitchToThread = decltype(&SwitchToThread);
#define H_SwitchToThread 0x29ae0b99
using T_SystemTimeToFileTime = decltype(&SystemTimeToFileTime);
#define H_SystemTimeToFileTime 0x0a4c0a6c
using T_SystemTimeToTzSpecificLocalTime = decltype(&SystemTimeToTzSpecificLocalTime);
#define H_SystemTimeToTzSpecificLocalTime 0x42690f71
//using T_SystemTimeToTzSpecificLocalTimeEx = decltype(&SystemTimeToTzSpecificLocalTimeEx);
#define H_SystemTimeToTzSpecificLocalTimeEx 0x54bc41c0
using T_TerminateJobObject = decltype(&TerminateJobObject);
#define H_TerminateJobObject 0x5914245b
using T_TerminateProcess = decltype(&TerminateProcess);
#define H_TerminateProcess 0x090baa3a
using T_TerminateThread = decltype(&TerminateThread);
#define H_TerminateThread 0x5097a1d7

//using T_TermsrvAppInstallMode = decltype(&TermsrvAppInstallMode);
//#define H_TermsrvAppInstallMode 0x2e45a480
//using T_TermsrvConvertSysRootToUserDir = decltype(&TermsrvConvertSysRootToUserDir);
//#define H_TermsrvConvertSysRootToUserDir 0x2bfb3eb8
//using T_TermsrvCreateRegEntry = decltype(&TermsrvCreateRegEntry);
//#define H_TermsrvCreateRegEntry 0x26d51fd9
//using T_TermsrvDeleteKey = decltype(&TermsrvDeleteKey);
//#define H_TermsrvDeleteKey 0x5b65923d
//using T_TermsrvDeleteValue = decltype(&TermsrvDeleteValue);
//#define H_TermsrvDeleteValue 0x0c628f03
//using T_TermsrvGetPreSetValue = decltype(&TermsrvGetPreSetValue);
//#define H_TermsrvGetPreSetValue 0x66e8bbaf
//using T_TermsrvGetWindowsDirectoryA = decltype(&TermsrvGetWindowsDirectoryA);
//#define H_TermsrvGetWindowsDirectoryA 0x5aa794f4
//using T_TermsrvGetWindowsDirectoryW = decltype(&TermsrvGetWindowsDirectoryW);
//#define H_TermsrvGetWindowsDirectoryW 0x5aa7950a
//using T_TermsrvOpenRegEntry = decltype(&TermsrvOpenRegEntry);
//#define H_TermsrvOpenRegEntry 0x17f701a7
//using T_TermsrvOpenUserClasses = decltype(&TermsrvOpenUserClasses);
//#define H_TermsrvOpenUserClasses 0x39fae14e
//using T_TermsrvRestoreKey = decltype(&TermsrvRestoreKey);
//#define H_TermsrvRestoreKey 0x3307dc94
//using T_TermsrvSetKeySecurity = decltype(&TermsrvSetKeySecurity);
//#define H_TermsrvSetKeySecurity 0x78f0d8c0
//using T_TermsrvSetValueKey = decltype(&TermsrvSetValueKey);
//#define H_TermsrvSetValueKey 0x74715d4d
//using T_TermsrvSyncUserIniFileExt = decltype(&TermsrvSyncUserIniFileExt);
//#define H_TermsrvSyncUserIniFileExt 0x082773ee

using T_Thread32First = decltype(&Thread32First);
#define H_Thread32First 0x33745163
using T_Thread32Next = decltype(&Thread32Next);
#define H_Thread32Next 0x007bcdec
using T_TlsAlloc = decltype(&TlsAlloc);
#define H_TlsAlloc 0x68bb30c2
using T_TlsFree = decltype(&TlsFree);
#define H_TlsFree 0x52932493
using T_TlsGetValue = decltype(&TlsGetValue);
#define H_TlsGetValue 0x31689352
using T_TlsSetValue = decltype(&TlsSetValue);
#define H_TlsSetValue 0x4a2d93d6
using T_Toolhelp32ReadProcessMemory = decltype(&Toolhelp32ReadProcessMemory);
#define H_Toolhelp32ReadProcessMemory 0x20573e5e
using T_TransactNamedPipe = decltype(&TransactNamedPipe);
#define H_TransactNamedPipe 0x4cf46509
using T_TransmitCommChar = decltype(&TransmitCommChar);
#define H_TransmitCommChar 0x0742e77e
using T_TryAcquireSRWLockExclusive = decltype(&TryAcquireSRWLockExclusive);
#define H_TryAcquireSRWLockExclusive 0x7e6be796
using T_TryAcquireSRWLockShared = decltype(&TryAcquireSRWLockShared);
#define H_TryAcquireSRWLockShared 0x39e25f35
using T_TryEnterCriticalSection = decltype(&TryEnterCriticalSection);
#define H_TryEnterCriticalSection 0x5cc21aa9
using T_TrySubmitThreadpoolCallback = decltype(&TrySubmitThreadpoolCallback);
#define H_TrySubmitThreadpoolCallback 0x3d37a736
using T_TzSpecificLocalTimeToSystemTime = decltype(&TzSpecificLocalTimeToSystemTime);
#define H_TzSpecificLocalTimeToSystemTime 0x1697d373
//using T_TzSpecificLocalTimeToSystemTimeEx = decltype(&TzSpecificLocalTimeToSystemTimeEx);
#define H_TzSpecificLocalTimeToSystemTimeEx 0x07adabd2
/*
using T_UTRegister = decltype(&UTRegister);
#define H_UTRegister 0x0ddf022a
using T_UTUnRegister = decltype(&UTUnRegister);
#define H_UTUnRegister 0x0ffad1cf
using T_UnhandledExceptionFilter = decltype(&UnhandledExceptionFilter);
#define H_UnhandledExceptionFilter 0x48e2cb7c
using T_UnlockFile = decltype(&UnlockFile);
#define H_UnlockFile 0x77ef68d8
using T_UnlockFileEx = decltype(&UnlockFileEx);
#define H_UnlockFileEx 0x5fdb5b5f
using T_UnmapViewOfFile = decltype(&UnmapViewOfFile);
#define H_UnmapViewOfFile 0x03875cff
using T_UnmapViewOfFileEx = decltype(&UnmapViewOfFileEx);
#define H_UnmapViewOfFileEx 0x0d1925be
using T_UnregisterApplicationRecoveryCallback = decltype(&UnregisterApplicationRecoveryCallback);
#define H_UnregisterApplicationRecoveryCallback 0x557babf2
using T_UnregisterApplicationRestart = decltype(&UnregisterApplicationRestart);
#define H_UnregisterApplicationRestart 0x42e67897
using T_UnregisterBadMemoryNotification = decltype(&UnregisterBadMemoryNotification);
#define H_UnregisterBadMemoryNotification 0x43ebc459
using T_UnregisterConsoleIME = decltype(&UnregisterConsoleIME);
#define H_UnregisterConsoleIME 0x3b13a0de
using T_UnregisterWait = decltype(&UnregisterWait);
#define H_UnregisterWait 0x5fc50169
using T_UnregisterWaitEx = decltype(&UnregisterWaitEx);
#define H_UnregisterWaitEx 0x6d4bab78
using T_UnregisterWaitUntilOOBECompleted = decltype(&UnregisterWaitUntilOOBECompleted);
#define H_UnregisterWaitUntilOOBECompleted 0x1015a3eb
using T_UpdateCalendarDayOfWeek = decltype(&UpdateCalendarDayOfWeek);
#define H_UpdateCalendarDayOfWeek 0x3348fb68
using T_UpdateProcThreadAttribute = decltype(&UpdateProcThreadAttribute);
#define H_UpdateProcThreadAttribute 0x6eca19bb
using T_UpdateResourceA = decltype(&UpdateResourceA);
#define H_UpdateResourceA 0x5560cc96
using T_UpdateResourceW = decltype(&UpdateResourceW);
#define H_UpdateResourceW 0x5560ccac
using T_VDMConsoleOperation = decltype(&VDMConsoleOperation);
#define H_VDMConsoleOperation 0x086eaa9f
using T_VDMOperationStarted = decltype(&VDMOperationStarted);
#define H_VDMOperationStarted 0x4b61ac0d
using T_VerLanguageNameA = decltype(&VerLanguageNameA);
#define H_VerLanguageNameA 0x51d96cdb
using T_VerLanguageNameW = decltype(&VerLanguageNameW);
#define H_VerLanguageNameW 0x51d96cf1
using T_VerSetConditionMask = decltype(&VerSetConditionMask);
#define H_VerSetConditionMask 0x58ffe320
using T_VerifyConsoleIoHandle = decltype(&VerifyConsoleIoHandle);
#define H_VerifyConsoleIoHandle 0x7d7cdca4
*/
using T_VerifyScripts = decltype(&VerifyScripts);
#define H_VerifyScripts 0x2f6debeb
using T_VerifyVersionInfoA = decltype(&VerifyVersionInfoA);
#define H_VerifyVersionInfoA 0x10c0f72c
using T_VerifyVersionInfoW = decltype(&VerifyVersionInfoW);
#define H_VerifyVersionInfoW 0x10c0f742
using T_VirtualAlloc = decltype(&VirtualAlloc);
#define H_VirtualAlloc 0x5e893462
using T_VirtualAllocEx = decltype(&VirtualAllocEx);
#define H_VirtualAllocEx 0x3b88a139
using T_VirtualAllocExNuma = decltype(&VirtualAllocExNuma);
#define H_VirtualAllocExNuma 0x18d10988
using T_VirtualFree = decltype(&VirtualFree);
#define H_VirtualFree 0x06488073
using T_VirtualFreeEx = decltype(&VirtualFreeEx);
#define H_VirtualFreeEx 0x322ac0d2
using T_VirtualLock = decltype(&VirtualLock);
#define H_VirtualLock 0x071587fa
using T_VirtualProtect = decltype(&VirtualProtect);
#define H_VirtualProtect 0x6c6ec404
using T_VirtualProtectEx = decltype(&VirtualProtectEx);
#define H_VirtualProtectEx 0x4d3213eb
using T_VirtualQuery = decltype(&VirtualQuery);
#define H_VirtualQuery 0x78978045
using T_VirtualQueryEx = decltype(&VirtualQueryEx);
#define H_VirtualQueryEx 0x63e5b534
using T_VirtualUnlock = decltype(&VirtualUnlock);
#define H_VirtualUnlock 0x29a7202f
using T_WTSGetActiveConsoleSessionId = decltype(&WTSGetActiveConsoleSessionId);
#define H_WTSGetActiveConsoleSessionId 0x68b94bb4
using T_WaitCommEvent = decltype(&WaitCommEvent);
#define H_WaitCommEvent 0x737a8185
using T_WaitForDebugEvent = decltype(&WaitForDebugEvent);
#define H_WaitForDebugEvent 0x33746ee7
//using T_WaitForDebugEventEx = decltype(&WaitForDebugEventEx);
#define H_WaitForDebugEventEx 0x481e7ee6
using T_WaitForMultipleObjects = decltype(&WaitForMultipleObjects);
#define H_WaitForMultipleObjects 0x2271236c
using T_WaitForMultipleObjectsEx = decltype(&WaitForMultipleObjectsEx);
#define H_WaitForMultipleObjectsEx 0x523fa693
using T_WaitForSingleObject = decltype(&WaitForSingleObject);
#define H_WaitForSingleObject 0x2541ded7
using T_WaitForSingleObjectEx = decltype(&WaitForSingleObjectEx);
#define H_WaitForSingleObjectEx 0x0ca33e56
using T_WaitForThreadpoolIoCallbacks = decltype(&WaitForThreadpoolIoCallbacks);
#define H_WaitForThreadpoolIoCallbacks 0x6b5a6ad6
using T_WaitForThreadpoolTimerCallbacks = decltype(&WaitForThreadpoolTimerCallbacks);
#define H_WaitForThreadpoolTimerCallbacks 0x5b7c611b
using T_WaitForThreadpoolWaitCallbacks = decltype(&WaitForThreadpoolWaitCallbacks);
#define H_WaitForThreadpoolWaitCallbacks 0x6c43e0d7
using T_WaitForThreadpoolWorkCallbacks = decltype(&WaitForThreadpoolWorkCallbacks);
#define H_WaitForThreadpoolWorkCallbacks 0x4629a407
using T_WaitNamedPipeA = decltype(&WaitNamedPipeA);
#define H_WaitNamedPipeA 0x07e850b3
using T_WaitNamedPipeW = decltype(&WaitNamedPipeW);
#define H_WaitNamedPipeW 0x07e850c9
using T_WakeAllConditionVariable = decltype(&WakeAllConditionVariable);
#define H_WakeAllConditionVariable 0x64d536aa
using T_WakeConditionVariable = decltype(&WakeConditionVariable);
#define H_WakeConditionVariable 0x47f68737
/*
using T_WerGetFlags = decltype(&WerGetFlags);
#define H_WerGetFlags 0x6a91ad11
using T_WerGetFlagsWorker = decltype(&WerGetFlagsWorker);
#define H_WerGetFlagsWorker 0x78e17787
using T_WerRegisterAdditionalProcess = decltype(&WerRegisterAdditionalProcess);
#define H_WerRegisterAdditionalProcess 0x34b9165d
using T_WerRegisterAppLocalDump = decltype(&WerRegisterAppLocalDump);
#define H_WerRegisterAppLocalDump 0x578cad6d
using T_WerRegisterCustomMetadata = decltype(&WerRegisterCustomMetadata);
#define H_WerRegisterCustomMetadata 0x3cd10c87
using T_WerRegisterExcludedMemoryBlock = decltype(&WerRegisterExcludedMemoryBlock);
#define H_WerRegisterExcludedMemoryBlock 0x10abee07
using T_WerRegisterFile = decltype(&WerRegisterFile);
#define H_WerRegisterFile 0x68840a93
using T_WerRegisterFileWorker = decltype(&WerRegisterFileWorker);
#define H_WerRegisterFileWorker 0x665470b9
using T_WerRegisterMemoryBlock = decltype(&WerRegisterMemoryBlock);
#define H_WerRegisterMemoryBlock 0x384a1eb1
using T_WerRegisterMemoryBlockWorker = decltype(&WerRegisterMemoryBlockWorker);
#define H_WerRegisterMemoryBlockWorker 0x0845a827
using T_WerRegisterRuntimeExceptionModule = decltype(&WerRegisterRuntimeExceptionModule);
#define H_WerRegisterRuntimeExceptionModule 0x55cb9f16
using T_WerRegisterRuntimeExceptionModuleWorker = decltype(&WerRegisterRuntimeExceptionModuleWorker);
#define H_WerRegisterRuntimeExceptionModuleWorker 0x3e02a4c4
using T_WerSetFlags = decltype(&WerSetFlags);
#define H_WerSetFlags 0x0356ad95
using T_WerSetFlagsWorker = decltype(&WerSetFlagsWorker);
#define H_WerSetFlagsWorker 0x6af6d36b
using T_WerUnregisterAdditionalProcess = decltype(&WerUnregisterAdditionalProcess);
#define H_WerUnregisterAdditionalProcess 0x00b7d364
using T_WerUnregisterAppLocalDump = decltype(&WerUnregisterAppLocalDump);
#define H_WerUnregisterAppLocalDump 0x0927788a
using T_WerUnregisterCustomMetadata = decltype(&WerUnregisterCustomMetadata);
#define H_WerUnregisterCustomMetadata 0x7e6ac78c
using T_WerUnregisterExcludedMemoryBlock = decltype(&WerUnregisterExcludedMemoryBlock);
#define H_WerUnregisterExcludedMemoryBlock 0x68196846
using T_WerUnregisterFile = decltype(&WerUnregisterFile);
#define H_WerUnregisterFile 0x72152690
using T_WerUnregisterFileWorker = decltype(&WerUnregisterFileWorker);
#define H_WerUnregisterFileWorker 0x3831592e
using T_WerUnregisterMemoryBlock = decltype(&WerUnregisterMemoryBlock);
#define H_WerUnregisterMemoryBlock 0x1c551290
using T_WerUnregisterMemoryBlockWorker = decltype(&WerUnregisterMemoryBlockWorker);
#define H_WerUnregisterMemoryBlockWorker 0x5444652e
using T_WerUnregisterRuntimeExceptionModule = decltype(&WerUnregisterRuntimeExceptionModule);
#define H_WerUnregisterRuntimeExceptionModule 0x6f37963b
using T_WerUnregisterRuntimeExceptionModuleWorker = decltype(&WerUnregisterRuntimeExceptionModuleWorker);
#define H_WerUnregisterRuntimeExceptionModuleWorker 0x04e48a21
using T_WerpGetDebugger = decltype(&WerpGetDebugger);
#define H_WerpGetDebugger 0x278f1493
using T_WerpInitiateRemoteRecovery = decltype(&WerpInitiateRemoteRecovery);
#define H_WerpInitiateRemoteRecovery 0x568ca2d0
using T_WerpLaunchAeDebug = decltype(&WerpLaunchAeDebug);
#define H_WerpLaunchAeDebug 0x4f153684
using T_WerpNotifyLoadStringResourceWorker = decltype(&WerpNotifyLoadStringResourceWorker);
#define H_WerpNotifyLoadStringResourceWorker 0x7592c090
using T_WerpNotifyUseStringResourceWorker = decltype(&WerpNotifyUseStringResourceWorker);
*/
#define H_WerpNotifyUseStringResourceWorker 0x63da3d53
using T_WideCharToMultiByte = decltype(&WideCharToMultiByte);
#define H_WideCharToMultiByte 0x1586b38d
using T_WinExec = decltype(&WinExec);
#define H_WinExec 0x2638cac9
using T_Wow64DisableWow64FsRedirection = decltype(&Wow64DisableWow64FsRedirection);
#define H_Wow64DisableWow64FsRedirection 0x724a8b79
using T_Wow64EnableWow64FsRedirection = decltype(&Wow64EnableWow64FsRedirection);
#define H_Wow64EnableWow64FsRedirection 0x70abddea
using T_Wow64GetThreadContext = decltype(&Wow64GetThreadContext);
#define H_Wow64GetThreadContext 0x5d92204c
using T_Wow64GetThreadSelectorEntry = decltype(&Wow64GetThreadSelectorEntry);
#define H_Wow64GetThreadSelectorEntry 0x0239e66c
using T_Wow64RevertWow64FsRedirection = decltype(&Wow64RevertWow64FsRedirection);
#define H_Wow64RevertWow64FsRedirection 0x1efa8ba3
using T_Wow64SetThreadContext = decltype(&Wow64SetThreadContext);
#define H_Wow64SetThreadContext 0x775f0750
using T_Wow64SuspendThread = decltype(&Wow64SuspendThread);
#define H_Wow64SuspendThread 0x5c40b169
//using T_Wow64Transition = decltype(&Wow64Transition);
#define H_Wow64Transition 0x1996f40a
using T_WriteConsoleA = decltype(&WriteConsoleA);
#define H_WriteConsoleA 0x590ca315
using T_WriteConsoleInputA = decltype(&WriteConsoleInputA);
#define H_WriteConsoleInputA 0x586fee5f
//using T_WriteConsoleInputVDMA = decltype(&WriteConsoleInputVDMA);
#define H_WriteConsoleInputVDMA 0x61f83a48
//using T_WriteConsoleInputVDMW = decltype(&WriteConsoleInputVDMW);
#define H_WriteConsoleInputVDMW 0x61f83a5e
using T_WriteConsoleInputW = decltype(&WriteConsoleInputW);
#define H_WriteConsoleInputW 0x586fee75
using T_WriteConsoleOutputA = decltype(&WriteConsoleOutputA);
#define H_WriteConsoleOutputA 0x23a06478
using T_WriteConsoleOutputAttribute = decltype(&WriteConsoleOutputAttribute);
#define H_WriteConsoleOutputAttribute 0x433f1f6b
using T_WriteConsoleOutputCharacterA = decltype(&WriteConsoleOutputCharacterA);
#define H_WriteConsoleOutputCharacterA 0x3ce2f8a9
using T_WriteConsoleOutputCharacterW = decltype(&WriteConsoleOutputCharacterW);
#define H_WriteConsoleOutputCharacterW 0x3ce2f8bf
using T_WriteConsoleOutputW = decltype(&WriteConsoleOutputW);
#define H_WriteConsoleOutputW 0x23a0648e
using T_WriteConsoleW = decltype(&WriteConsoleW);
#define H_WriteConsoleW 0x590ca32b
using T_WriteFile = decltype(&WriteFile);
#define H_WriteFile 0x3bc8276b
using T_WriteFileEx = decltype(&WriteFileEx);
#define H_WriteFileEx 0x7c5a878a
using T_WriteFileGather = decltype(&WriteFileGather);
#define H_WriteFileGather 0x78f6ce4e
using T_WritePrivateProfileSectionA = decltype(&WritePrivateProfileSectionA);
#define H_WritePrivateProfileSectionA 0x0436f131
using T_WritePrivateProfileSectionW = decltype(&WritePrivateProfileSectionW);
#define H_WritePrivateProfileSectionW 0x0436f147
using T_WritePrivateProfileStringA = decltype(&WritePrivateProfileStringA);
#define H_WritePrivateProfileStringA 0x68b9a80b
using T_WritePrivateProfileStringW = decltype(&WritePrivateProfileStringW);
#define H_WritePrivateProfileStringW 0x68b9a821
using T_WritePrivateProfileStructA = decltype(&WritePrivateProfileStructA);
#define H_WritePrivateProfileStructA 0x6a527093
using T_WritePrivateProfileStructW = decltype(&WritePrivateProfileStructW);
#define H_WritePrivateProfileStructW 0x6a5270a9
using T_WriteProcessMemory = decltype(&WriteProcessMemory);
#define H_WriteProcessMemory 0x211bea85
using T_WriteProfileSectionA = decltype(&WriteProfileSectionA);
#define H_WriteProfileSectionA 0x15fce956
using T_WriteProfileSectionW = decltype(&WriteProfileSectionW);
#define H_WriteProfileSectionW 0x15fce96c
using T_WriteProfileStringA = decltype(&WriteProfileStringA);
#define H_WriteProfileStringA 0x0dfd9c42
using T_WriteProfileStringW = decltype(&WriteProfileStringW);
#define H_WriteProfileStringW 0x0dfd9c58
using T_WriteTapemark = decltype(&WriteTapemark);
#define H_WriteTapemark 0x660b06a2
using T_ZombifyActCtx = decltype(&ZombifyActCtx);
#define H_ZombifyActCtx 0x6c87efd7
//using T_ZombifyActCtxWorker = decltype(&ZombifyActCtxWorker);
#define H_ZombifyActCtxWorker 0x62b9f35d
using T__hread = decltype(&_hread);
#define H__hread 0x070b442f
using T__hwrite = decltype(&_hwrite);
#define H__hwrite 0x7448855e
using T__lclose = decltype(&_lclose);
#define H__lclose 0x027b34e7
using T__lcreat = decltype(&_lcreat);
#define H__lcreat 0x03465f08
using T__llseek = decltype(&_llseek);
#define H__llseek 0x2164177f
using T__lopen = decltype(&_lopen);
#define H__lopen 0x4cde181b
using T__lread = decltype(&_lread);
#define H__lread 0x4d421d73
using T__lwrite = decltype(&_lwrite);
#define H__lwrite 0x6259b32a
//using T_lstrcat = decltype(&lstrcat);
#define H_lstrcat 0x3b5eee81
//using T_lstrcatA = decltype(&lstrcatA);
#define H_lstrcatA 0x61940c44
//using T_lstrcatW = decltype(&lstrcatW);
#define H_lstrcatW 0x61940c5a
//using T_lstrcmp = decltype(&lstrcmp);
#define H_lstrcmp 0x3b5ef4a1
using T_lstrcmpA = decltype(&lstrcmpA);
#define H_lstrcmpA 0x61972ea4
using T_lstrcmpW = decltype(&lstrcmpW);
#define H_lstrcmpW 0x61972eba
//using T_lstrcmpi = decltype(&lstrcmpi);
#define H_lstrcmpi 0x61972ecc
using T_lstrcmpiA = decltype(&lstrcmpiA);
#define H_lstrcmpiA 0x705cf2a5
using T_lstrcmpiW = decltype(&lstrcmpiW);
#define H_lstrcmpiW 0x705cf2bb
//using T_lstrcpy = decltype(&lstrcpy);
#define H_lstrcpy 0x3b5ef633
//using T_lstrcpyA = decltype(&lstrcpyA);
#define H_lstrcpyA 0x6197fc5a
//using T_lstrcpyW = decltype(&lstrcpyW);
#define H_lstrcpyW 0x6197fc70
//using T_lstrcpyn = decltype(&lstrcpyn);
#define H_lstrcpyn 0x6197fc87
using T_lstrcpynA = decltype(&lstrcpynA);
#define H_lstrcpynA 0x70c63956
using T_lstrcpynW = decltype(&lstrcpynW);
#define H_lstrcpynW 0x70c6396c
//using T_lstrlen = decltype(&lstrlen);
#define H_lstrlen 0x3b614bd8
using T_lstrlenA = decltype(&lstrlenA);
#define H_lstrlenA 0x62c9cfc9
using T_lstrlenW = decltype(&lstrlenW);
#define H_lstrlenW 0x62c9cfdf
using T_timeBeginPeriod = decltype(&timeBeginPeriod);
#define H_timeBeginPeriod 0x4f467df9
using T_timeEndPeriod = decltype(&timeEndPeriod);
#define H_timeEndPeriod 0x01c7b85b
using T_timeGetDevCaps = decltype(&timeGetDevCaps);
#define H_timeGetDevCaps 0x6e5d898d
using T_timeGetSystemTime = decltype(&timeGetSystemTime);
#define H_timeGetSystemTime 0x7e038719
using T_timeGetTime = decltype(&timeGetTime);
#define H_timeGetTime 0x1b2a340e