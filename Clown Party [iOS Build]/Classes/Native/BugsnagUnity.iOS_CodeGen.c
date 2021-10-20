#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3_RuntimeMethod_var;
extern const RuntimeMethod* NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D_RuntimeMethod_var;
extern const RuntimeMethod* NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE_RuntimeMethod_var;
extern const RuntimeMethod* NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF_RuntimeMethod_var;
extern const RuntimeMethod* NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33_RuntimeMethod_var;



// 0x00000001 System.Collections.Generic.Queue`1<T> BugsnagUnity.BlockingQueue`1::get_Queue()
// 0x00000002 System.Object BugsnagUnity.BlockingQueue`1::get_QueueLock()
// 0x00000003 System.Void BugsnagUnity.BlockingQueue`1::.ctor()
// 0x00000004 System.Void BugsnagUnity.BlockingQueue`1::Enqueue(T)
// 0x00000005 T BugsnagUnity.BlockingQueue`1::Dequeue()
// 0x00000006 BugsnagUnity.IClient BugsnagUnity.Bugsnag::Start(BugsnagUnity.IConfiguration)
extern void Bugsnag_Start_mDE11E0E24CA993A7283A7CB4310E16F8749E1463 (void);
// 0x00000007 BugsnagUnity.Client BugsnagUnity.Bugsnag::get_InternalClient()
extern void Bugsnag_get_InternalClient_mBFD91C46484DA1B40FDA1ACEF8CDB799EFF550DF (void);
// 0x00000008 System.Void BugsnagUnity.Bugsnag::set_InternalClient(BugsnagUnity.Client)
extern void Bugsnag_set_InternalClient_mED81BE249F2B4C72B3C59E4F631E842C10E0D3C7 (void);
// 0x00000009 BugsnagUnity.IClient BugsnagUnity.Bugsnag::get_Client()
extern void Bugsnag_get_Client_mEB779B811F17E7CDB7231AC072725B4291EA40A7 (void);
// 0x0000000A System.Void BugsnagUnity.Bugsnag::SetApplicationState(System.Boolean)
extern void Bugsnag_SetApplicationState_m9AD7A5F2201B485CBA444682D3436CFD0C189581 (void);
// 0x0000000B System.Void BugsnagUnity.Bugsnag::.cctor()
extern void Bugsnag__cctor_m0734C6D5FCD3AAAAF5B0D33A31CA9F26ABC50391 (void);
// 0x0000000C BugsnagUnity.IConfiguration BugsnagUnity.Client::get_Configuration()
extern void Client_get_Configuration_mEED134EA72A57B8B78D69977DA45F74E1D9395E1 (void);
// 0x0000000D BugsnagUnity.IBreadcrumbs BugsnagUnity.Client::get_Breadcrumbs()
extern void Client_get_Breadcrumbs_mB2533BF8B24F955A1FF20D076152FF64D5504AB6 (void);
// 0x0000000E BugsnagUnity.ISessionTracker BugsnagUnity.Client::get_SessionTracking()
extern void Client_get_SessionTracking_m81BE720FE6D376EF3324CCBF807731AA9B199063 (void);
// 0x0000000F BugsnagUnity.Payload.User BugsnagUnity.Client::get_User()
extern void Client_get_User_m983274F511E83ED7D810D4944C05230F5720F802 (void);
// 0x00000010 BugsnagUnity.Payload.Metadata BugsnagUnity.Client::get_Metadata()
extern void Client_get_Metadata_mD1BDDE0316575EAE0950C779E11FAA1416994407 (void);
// 0x00000011 BugsnagUnity.UniqueLogThrottle BugsnagUnity.Client::get_UniqueCounter()
extern void Client_get_UniqueCounter_m51AB5F6B0644D4301EAA85A7DD34F33D63D5386E (void);
// 0x00000012 BugsnagUnity.MaximumLogTypeCounter BugsnagUnity.Client::get_LogTypeCounter()
extern void Client_get_LogTypeCounter_m2AAE9EB0968652B887CA7B0E6A039F0306471A65 (void);
// 0x00000013 BugsnagUnity.IDelivery BugsnagUnity.Client::get_Delivery()
extern void Client_get_Delivery_m3343B7B250853DA60ED2CF8ADE63CE15F290CA24 (void);
// 0x00000014 System.Collections.Generic.List`1<BugsnagUnity.Middleware> BugsnagUnity.Client::get_Middleware()
extern void Client_get_Middleware_m581ACE5FB66FC28669BFDC1D6E5451B24EF1C5E9 (void);
// 0x00000015 System.Object BugsnagUnity.Client::get_MiddlewareLock()
extern void Client_get_MiddlewareLock_mE22BD6B49781258F3A2C2810A5549F4192C250A2 (void);
// 0x00000016 BugsnagUnity.INativeClient BugsnagUnity.Client::get_NativeClient()
extern void Client_get_NativeClient_m18EC66E7A067930F6E749103593AB99144C6C039 (void);
// 0x00000017 System.Diagnostics.Stopwatch BugsnagUnity.Client::get_ForegroundStopwatch()
extern void Client_get_ForegroundStopwatch_m17DF91A841EAB6B35BF9A821819C662A682A5A90 (void);
// 0x00000018 System.Diagnostics.Stopwatch BugsnagUnity.Client::get_BackgroundStopwatch()
extern void Client_get_BackgroundStopwatch_m55CED308D6A596E090FDBAAA8E052B0F1944CB91 (void);
// 0x00000019 System.Boolean BugsnagUnity.Client::get_InForeground()
extern void Client_get_InForeground_m0DB189A4CD68485550214F034CA360C342F28C8A (void);
// 0x0000001A UnityEngine.GameObject BugsnagUnity.Client::get_TimingTrackerObject()
extern void Client_get_TimingTrackerObject_m2E3AF00BB8782D8907D9AAFD65EC89D973AFEFF7 (void);
// 0x0000001B System.Void BugsnagUnity.Client::.ctor(BugsnagUnity.INativeClient)
extern void Client__ctor_mA63404CE15AA46BFBEF8918210E0AFE0E0F0D80F (void);
// 0x0000001C System.Void BugsnagUnity.Client::CheckForMisconfiguredEndpointsWarning()
extern void Client_CheckForMisconfiguredEndpointsWarning_mF67EB23099FC831AB949FAF0641AB1F8966355A0 (void);
// 0x0000001D System.Void BugsnagUnity.Client::AddBugsnagLoadedBreadcrumb()
extern void Client_AddBugsnagLoadedBreadcrumb_m760EA8AA882524D95770936170D3238E6F95612B (void);
// 0x0000001E System.Boolean BugsnagUnity.Client::IsUsingFallback()
extern void Client_IsUsingFallback_m28FBCFE418C868BC4D7CDCC0EFBA84E9EFA47EA2 (void);
// 0x0000001F System.Void BugsnagUnity.Client::SetupSceneLoadedBreadcrumbTracking()
extern void Client_SetupSceneLoadedBreadcrumbTracking_m44E0450C37D97DBFF55C83E221B6066EB93AF57E (void);
// 0x00000020 System.Void BugsnagUnity.Client::Send(BugsnagUnity.Payload.IPayload)
extern void Client_Send_mCE9C303642F88D6B00924D7D8DC4558CEDE19F70 (void);
// 0x00000021 System.Void BugsnagUnity.Client::SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern void Client_SceneLoaded_m9294DA4980BC442ED2BF18EB93F41799FAA7B0B0 (void);
// 0x00000022 System.Void BugsnagUnity.Client::MultiThreadedNotify(System.String,System.String,UnityEngine.LogType)
extern void Client_MultiThreadedNotify_mAEF6B882BE97C44779F4206F6BA1FD7BEB408F07 (void);
// 0x00000023 System.Void BugsnagUnity.Client::Notify(System.String,System.String,UnityEngine.LogType)
extern void Client_Notify_m6957CD87BDE2FB480AD961FBA94775E1DCCA8432 (void);
// 0x00000024 System.Void BugsnagUnity.Client::Notify(BugsnagUnity.Payload.Exception[],BugsnagUnity.Payload.HandledState,BugsnagUnity.Middleware,System.Nullable`1<UnityEngine.LogType>)
extern void Client_Notify_mC2D1A1D28E49B0879441F7897DD1E7D1E311A57C (void);
// 0x00000025 System.Void BugsnagUnity.Client::RedactMetadata(BugsnagUnity.Payload.Metadata)
extern void Client_RedactMetadata_m9442765296A2DD18E05D1DD25BE218A8BE393ED1 (void);
// 0x00000026 System.Boolean BugsnagUnity.Client::ShouldAddProjectPackagesToEvent(BugsnagUnity.Payload.Event)
extern void Client_ShouldAddProjectPackagesToEvent_mAFA898568D9FD4412E05F124987305930FA97DA9 (void);
// 0x00000027 System.Boolean BugsnagUnity.Client::EventContainsDiscardedClass(BugsnagUnity.Payload.Exception[])
extern void Client_EventContainsDiscardedClass_m8CE957F5122AD6E5FA8686DD2BD568C2EC01BD16 (void);
// 0x00000028 System.Void BugsnagUnity.Client::SetApplicationState(System.Boolean)
extern void Client_SetApplicationState_mFB8242C0BB509EA0FA55FA1ABBFC893A1652D822 (void);
// 0x00000029 System.Boolean BugsnagUnity.Client::ShouldSendRequests()
extern void Client_ShouldSendRequests_m2E0EEB118CBE6A0FBBDCC1356F02AE81DA246584 (void);
// 0x0000002A System.Collections.Generic.IEnumerator`1<UnityEngine.AsyncOperation> BugsnagUnity.Client::RunInitialSessionCheck()
extern void Client_RunInitialSessionCheck_mFCF3B9FF494376BCA3F3781E1A62138A5FA9A206 (void);
// 0x0000002B System.Void BugsnagUnity.Client::.cctor()
extern void Client__cctor_mF0816F9FA2701B1139208DCAF42228A19168748C (void);
// 0x0000002C System.Void BugsnagUnity.Client::<.ctor>b__49_0(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern void Client_U3C_ctorU3Eb__49_0_m6525031F0D975BC4E3B1A34D9AE747DF74BDA305 (void);
// 0x0000002D System.Void BugsnagUnity.Client/<RunInitialSessionCheck>d__76::.ctor(System.Int32)
extern void U3CRunInitialSessionCheckU3Ed__76__ctor_mD533749D03238AA6EAFCDC670C9395367605339F (void);
// 0x0000002E System.Void BugsnagUnity.Client/<RunInitialSessionCheck>d__76::System.IDisposable.Dispose()
extern void U3CRunInitialSessionCheckU3Ed__76_System_IDisposable_Dispose_mB66ED9CCCF18A35A2146B6318C0CD215A4FF28AF (void);
// 0x0000002F System.Boolean BugsnagUnity.Client/<RunInitialSessionCheck>d__76::MoveNext()
extern void U3CRunInitialSessionCheckU3Ed__76_MoveNext_m38055B142298020901B37645A98008165A8ABB65 (void);
// 0x00000030 UnityEngine.AsyncOperation BugsnagUnity.Client/<RunInitialSessionCheck>d__76::System.Collections.Generic.IEnumerator<UnityEngine.AsyncOperation>.get_Current()
extern void U3CRunInitialSessionCheckU3Ed__76_System_Collections_Generic_IEnumeratorU3CUnityEngine_AsyncOperationU3E_get_Current_m5536217BD52567361C8F25222D04E4A9FBF16162 (void);
// 0x00000031 System.Void BugsnagUnity.Client/<RunInitialSessionCheck>d__76::System.Collections.IEnumerator.Reset()
extern void U3CRunInitialSessionCheckU3Ed__76_System_Collections_IEnumerator_Reset_m5792A768BB8AF12FBC8E73BDF5005D47B42B0D46 (void);
// 0x00000032 System.Object BugsnagUnity.Client/<RunInitialSessionCheck>d__76::System.Collections.IEnumerator.get_Current()
extern void U3CRunInitialSessionCheckU3Ed__76_System_Collections_IEnumerator_get_Current_m30407A90B5E42956D16C3E04699C0C4B0C5E933F (void);
// 0x00000033 System.String BugsnagUnity.Configuration::get_BundleVersion()
extern void Configuration_get_BundleVersion_mD1CEADB554E1DB23A3885D1FA14BF803FE211F8F (void);
// 0x00000034 System.String BugsnagUnity.Configuration::get_AppType()
extern void Configuration_get_AppType_m12900274A403C5C51FC12501E13CB920B9F396A7 (void);
// 0x00000035 System.String[] BugsnagUnity.Configuration::get_RedactedKeys()
extern void Configuration_get_RedactedKeys_mB2701BED00B9687549D50CD08DDE18B4879E19A0 (void);
// 0x00000036 System.Int64 BugsnagUnity.Configuration::get_LaunchDurationMillis()
extern void Configuration_get_LaunchDurationMillis_m7F045D0677127D03778F7B2929CDA1C63F0E14E9 (void);
// 0x00000037 BugsnagUnity.ThreadSendPolicy BugsnagUnity.Configuration::get_SendThreads()
extern void Configuration_get_SendThreads_m261C189628D3F25F95673DCCB94E8C59C6A8EB76 (void);
// 0x00000038 System.Boolean BugsnagUnity.Configuration::get_SendLaunchCrashesSynchronously()
extern void Configuration_get_SendLaunchCrashesSynchronously_m7D9BA2FD705D1D97865C2DCEB2DDD696BFCA989E (void);
// 0x00000039 System.Boolean BugsnagUnity.Configuration::get_PersistUser()
extern void Configuration_get_PersistUser_mE5BA6EB79BD322BC3DED9A8D3FD774DF62FE8FA4 (void);
// 0x0000003A System.Boolean BugsnagUnity.Configuration::KeyIsRedacted(System.String)
extern void Configuration_KeyIsRedacted_mE291FDE78F7BAD6F591EFE0BA62D8906FEADB9AA (void);
// 0x0000003B System.Void BugsnagUnity.Configuration::.ctor(System.String)
extern void Configuration__ctor_mFBB54B1235EEF260EE0B081ADA0848365BE2A352 (void);
// 0x0000003C System.Boolean BugsnagUnity.Configuration::get_ReportUncaughtExceptionsAsHandled()
extern void Configuration_get_ReportUncaughtExceptionsAsHandled_m43C94580033891D91C9C6B2E4B44B83F84FCF158 (void);
// 0x0000003D System.TimeSpan BugsnagUnity.Configuration::get_MaximumLogsTimePeriod()
extern void Configuration_get_MaximumLogsTimePeriod_m98C71D6E78F43E49AD760A6A3AD1BC923724EFD4 (void);
// 0x0000003E System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.Configuration::get_MaximumTypePerTimePeriod()
extern void Configuration_get_MaximumTypePerTimePeriod_m4D3E8513DA082BF24222E0959AF26B54B2E09ECC (void);
// 0x0000003F System.TimeSpan BugsnagUnity.Configuration::get_UniqueLogsTimePeriod()
extern void Configuration_get_UniqueLogsTimePeriod_m9629FB0DA13833DEC209C5D8F1F19BF69ABBB154 (void);
// 0x00000040 System.Void BugsnagUnity.Configuration::set_UniqueLogsTimePeriod(System.TimeSpan)
extern void Configuration_set_UniqueLogsTimePeriod_m8F4E48C2394D525F2EE1DCC7060609AF7F0DF49B (void);
// 0x00000041 UnityEngine.LogType BugsnagUnity.Configuration::get_BreadcrumbLogLevel()
extern void Configuration_get_BreadcrumbLogLevel_mCA7BB4781CC8D8D210B46B8B81B4C73F4551AB76 (void);
// 0x00000042 System.Boolean BugsnagUnity.Configuration::ShouldLeaveLogBreadcrumb(UnityEngine.LogType)
extern void Configuration_ShouldLeaveLogBreadcrumb_m63EBE9C4163BAA4B5D70DDD0CF8AA8C0539CE6C0 (void);
// 0x00000043 BugsnagUnity.Payload.BreadcrumbType[] BugsnagUnity.Configuration::get_EnabledBreadcrumbTypes()
extern void Configuration_get_EnabledBreadcrumbTypes_mAD891D3A0C83BAB136995F0E4FCF897FC142C8B8 (void);
// 0x00000044 System.Void BugsnagUnity.Configuration::set_EnabledBreadcrumbTypes(BugsnagUnity.Payload.BreadcrumbType[])
extern void Configuration_set_EnabledBreadcrumbTypes_m3E681A9BAAB651E41B70E3BC160B6A165D69823B (void);
// 0x00000045 System.Boolean BugsnagUnity.Configuration::IsBreadcrumbTypeEnabled(BugsnagUnity.Payload.BreadcrumbType)
extern void Configuration_IsBreadcrumbTypeEnabled_mCE1D5D390A8E7F591DBD8F6971DB7156F749334F (void);
// 0x00000046 System.String BugsnagUnity.Configuration::get_ApiKey()
extern void Configuration_get_ApiKey_mFA48B3FA7757891FCF3658952AF41D506DCF8C73 (void);
// 0x00000047 System.Void BugsnagUnity.Configuration::set_ApiKey(System.String)
extern void Configuration_set_ApiKey_m53AAD8FB1F866EDA34D5ECA93E7A7986267251D6 (void);
// 0x00000048 System.Int32 BugsnagUnity.Configuration::get_MaximumBreadcrumbs()
extern void Configuration_get_MaximumBreadcrumbs_m8F3F9654499CE8A1B4E7127F3BDFA78FD67EC7B0 (void);
// 0x00000049 System.Void BugsnagUnity.Configuration::set_MaximumBreadcrumbs(System.Int32)
extern void Configuration_set_MaximumBreadcrumbs_m5D390C8C955C0C247CA79B421C1170B55FE7F6F0 (void);
// 0x0000004A System.String BugsnagUnity.Configuration::get_ReleaseStage()
extern void Configuration_get_ReleaseStage_m10DF86A7BED003368262E91141B3BF736FD76035 (void);
// 0x0000004B System.Void BugsnagUnity.Configuration::set_ReleaseStage(System.String)
extern void Configuration_set_ReleaseStage_m693B4E46D0AE3E95973F253487618D9885D4953B (void);
// 0x0000004C System.String[] BugsnagUnity.Configuration::get_EnabledReleaseStages()
extern void Configuration_get_EnabledReleaseStages_m656D7F6AAE7629B8DC9211DCC8C9B769D2100B79 (void);
// 0x0000004D System.String[] BugsnagUnity.Configuration::get_ProjectPackages()
extern void Configuration_get_ProjectPackages_m7761F476C9A3EC0AF2B3AE7D3B1FB27404F4E390 (void);
// 0x0000004E System.String BugsnagUnity.Configuration::get_AppVersion()
extern void Configuration_get_AppVersion_m5086FDCE961E18F0D910D1FB34833BBBFC619597 (void);
// 0x0000004F System.Void BugsnagUnity.Configuration::set_AppVersion(System.String)
extern void Configuration_set_AppVersion_m0B0B2B1AC7FBED16E4341F15CDC4DD264044E2EF (void);
// 0x00000050 BugsnagUnity.EndpointConfiguration BugsnagUnity.Configuration::get_Endpoints()
extern void Configuration_get_Endpoints_m6FAEA1E97035DAD1C1C8851CCA7DE1EA6D628D62 (void);
// 0x00000051 System.String BugsnagUnity.Configuration::get_PayloadVersion()
extern void Configuration_get_PayloadVersion_m04E17EA34E910D6C3B158317491BBBEBAEB6E388 (void);
// 0x00000052 System.String BugsnagUnity.Configuration::get_SessionPayloadVersion()
extern void Configuration_get_SessionPayloadVersion_mE6A782605CA1DE962C9F6C57F97AAE6F1FDB31A8 (void);
// 0x00000053 System.String BugsnagUnity.Configuration::get_Context()
extern void Configuration_get_Context_m92A65D57F7E5054E2309ADD94E7999A4ECD77CD1 (void);
// 0x00000054 System.Void BugsnagUnity.Configuration::set_Context(System.String)
extern void Configuration_set_Context_mB3DE4C64B657FF5AE1F6FE9B4642B694854879ED (void);
// 0x00000055 UnityEngine.LogType BugsnagUnity.Configuration::get_NotifyLogLevel()
extern void Configuration_get_NotifyLogLevel_m66B34D40773759C7767B48E1938362BDB4267E88 (void);
// 0x00000056 System.Void BugsnagUnity.Configuration::set_NotifyLogLevel(UnityEngine.LogType)
extern void Configuration_set_NotifyLogLevel_m83D11A0C0711F6AD0AA65B1E7375394E553E89E3 (void);
// 0x00000057 System.Boolean BugsnagUnity.Configuration::get_AutoDetectErrors()
extern void Configuration_get_AutoDetectErrors_mE750C721E85B156BCEFB3FBFC690BFB7C48CB038 (void);
// 0x00000058 System.Void BugsnagUnity.Configuration::set_AutoDetectErrors(System.Boolean)
extern void Configuration_set_AutoDetectErrors_m7567357E0B2BF88B0A7407203D367BE80C08F777 (void);
// 0x00000059 System.Void BugsnagUnity.Configuration::set_AutoDetectAnrs(System.Boolean)
extern void Configuration_set_AutoDetectAnrs_m51A7060FA21BBD9E7221029D6DC167488CBF7867 (void);
// 0x0000005A System.Boolean BugsnagUnity.Configuration::get_AutoTrackSessions()
extern void Configuration_get_AutoTrackSessions_m9F08AE164F8F01B0F38C224434E3F0F3757F83B7 (void);
// 0x0000005B System.Void BugsnagUnity.Configuration::set_AutoTrackSessions(System.Boolean)
extern void Configuration_set_AutoTrackSessions_mEE95EFACC39B56CAF88DDC1DD09B18527E358B6D (void);
// 0x0000005C BugsnagUnity.LogTypeSeverityMapping BugsnagUnity.Configuration::get_LogTypeSeverityMapping()
extern void Configuration_get_LogTypeSeverityMapping_m4DD6E7AE5CAA89B511056168828EC3D5A7A23CD4 (void);
// 0x0000005D System.String BugsnagUnity.Configuration::get_ScriptingBackend()
extern void Configuration_get_ScriptingBackend_mA1DB703DA1036C76D082FAAF236B22120005757E (void);
// 0x0000005E System.Void BugsnagUnity.Configuration::set_ScriptingBackend(System.String)
extern void Configuration_set_ScriptingBackend_mB5D5C638D24688FD926EF35D7CDD253A167E536B (void);
// 0x0000005F System.String BugsnagUnity.Configuration::get_DotnetScriptingRuntime()
extern void Configuration_get_DotnetScriptingRuntime_m6F84A539DEBC14C2508D821C68E22B2690CB2443 (void);
// 0x00000060 System.Void BugsnagUnity.Configuration::set_DotnetScriptingRuntime(System.String)
extern void Configuration_set_DotnetScriptingRuntime_m923A77D8F6FE3864EE32ED79C1528F12B263FF9E (void);
// 0x00000061 System.String BugsnagUnity.Configuration::get_DotnetApiCompatibility()
extern void Configuration_get_DotnetApiCompatibility_m944AC9E9EACAF8B5F159257256C57E9C8CEC40AC (void);
// 0x00000062 System.Void BugsnagUnity.Configuration::set_DotnetApiCompatibility(System.String)
extern void Configuration_set_DotnetApiCompatibility_mB88782C1DB48037D5C5FC40FBCC8E81E8E3752DF (void);
// 0x00000063 BugsnagUnity.ErrorTypes[] BugsnagUnity.Configuration::get_EnabledErrorTypes()
extern void Configuration_get_EnabledErrorTypes_m6EEB081B87A7E1FC303C2292E13BA48A348A94D8 (void);
// 0x00000064 System.Void BugsnagUnity.Configuration::set_EnabledErrorTypes(BugsnagUnity.ErrorTypes[])
extern void Configuration_set_EnabledErrorTypes_mA6C4D2A9B2D15755C7C3DD466AEBFAD077A7F132 (void);
// 0x00000065 System.UInt64 BugsnagUnity.Configuration::get_AppHangThresholdMillis()
extern void Configuration_get_AppHangThresholdMillis_m9AD6C7ACF7640EA2158E97A325B2D5CF131DE4FE (void);
// 0x00000066 System.String[] BugsnagUnity.Configuration::get_DiscardClasses()
extern void Configuration_get_DiscardClasses_m14E31FA61382325B0E58D3DBDB69CC42D7B6A833 (void);
// 0x00000067 System.Int32 BugsnagUnity.Configuration::get_MaxPersistedEvents()
extern void Configuration_get_MaxPersistedEvents_m99C25D50819BB4249CCEFB6D562C4CA98996361C (void);
// 0x00000068 System.Boolean BugsnagUnity.Configuration::ErrorClassIsDiscarded(System.String)
extern void Configuration_ErrorClassIsDiscarded_m6A42C20725B451DA1E6B0E860A5393AB69D469EA (void);
// 0x00000069 System.Boolean BugsnagUnity.Configuration::IsErrorTypeEnabled(BugsnagUnity.ErrorTypes)
extern void Configuration_IsErrorTypeEnabled_m54AA8E71151FFB1723BF2EE1CD8762F2BB036705 (void);
// 0x0000006A System.Boolean BugsnagUnity.Configuration::IsUnityLogErrorTypeEnabled(UnityEngine.LogType)
extern void Configuration_IsUnityLogErrorTypeEnabled_m9EFCB135AF48C2917BFEA6C5365D05660D5E9FA7 (void);
// 0x0000006B System.Boolean BugsnagUnity.Configuration::IsRunningInEditor()
extern void Configuration_IsRunningInEditor_m484ED97EE713DB230147466EBE0C8D5A970C7C66 (void);
// 0x0000006C System.Boolean BugsnagUnity.EndpointConfiguration::get_NotifyIsCustom()
extern void EndpointConfiguration_get_NotifyIsCustom_m11580FE51A73239A5C314E774B3EBD520EA9EA95 (void);
// 0x0000006D System.Boolean BugsnagUnity.EndpointConfiguration::get_SessionIsCustom()
extern void EndpointConfiguration_get_SessionIsCustom_m427191EA81FF718AFC0086D0E0E4DFB7BFAF0109 (void);
// 0x0000006E System.Boolean BugsnagUnity.EndpointConfiguration::get_IsValid()
extern void EndpointConfiguration_get_IsValid_mC82BFD749A88E16288864A32A28814BA3FA3B7CA (void);
// 0x0000006F System.Void BugsnagUnity.EndpointConfiguration::.ctor()
extern void EndpointConfiguration__ctor_m77A46484A0D685F24827F3F145BAA4F43CABD8DE (void);
// 0x00000070 System.Void BugsnagUnity.IBreadcrumbs::Leave(System.String,BugsnagUnity.Payload.BreadcrumbType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000071 System.Void BugsnagUnity.IBreadcrumbs::Leave(BugsnagUnity.Payload.Breadcrumb)
// 0x00000072 BugsnagUnity.Payload.Breadcrumb[] BugsnagUnity.IBreadcrumbs::Retrieve()
// 0x00000073 System.Void BugsnagUnity.Middleware::.ctor(System.Object,System.IntPtr)
extern void Middleware__ctor_mC5B2B711749F0599CB30B8EFFC8A14616EF69B93 (void);
// 0x00000074 System.Void BugsnagUnity.Middleware::Invoke(BugsnagUnity.Payload.Report)
extern void Middleware_Invoke_m1802C89B39365681AD76F92543F58A5B683B03ED (void);
// 0x00000075 System.IAsyncResult BugsnagUnity.Middleware::BeginInvoke(BugsnagUnity.Payload.Report,System.AsyncCallback,System.Object)
extern void Middleware_BeginInvoke_m944BAB4C41BE3097AB2477EEFDE5161E789294CD (void);
// 0x00000076 System.Void BugsnagUnity.Middleware::EndInvoke(System.IAsyncResult)
extern void Middleware_EndInvoke_m035E7F39A7FEA44DCA7144923B0964CD42578216 (void);
// 0x00000077 System.Void BugsnagUnity.IClient::SetApplicationState(System.Boolean)
// 0x00000078 System.String BugsnagUnity.IConfiguration::get_ApiKey()
// 0x00000079 System.Int64 BugsnagUnity.IConfiguration::get_LaunchDurationMillis()
// 0x0000007A System.Boolean BugsnagUnity.IConfiguration::get_ReportUncaughtExceptionsAsHandled()
// 0x0000007B System.Boolean BugsnagUnity.IConfiguration::get_SendLaunchCrashesSynchronously()
// 0x0000007C System.String[] BugsnagUnity.IConfiguration::get_DiscardClasses()
// 0x0000007D System.String[] BugsnagUnity.IConfiguration::get_ProjectPackages()
// 0x0000007E System.String[] BugsnagUnity.IConfiguration::get_RedactedKeys()
// 0x0000007F BugsnagUnity.ThreadSendPolicy BugsnagUnity.IConfiguration::get_SendThreads()
// 0x00000080 System.Boolean BugsnagUnity.IConfiguration::get_PersistUser()
// 0x00000081 System.Int32 BugsnagUnity.IConfiguration::get_MaxPersistedEvents()
// 0x00000082 System.Boolean BugsnagUnity.IConfiguration::KeyIsRedacted(System.String)
// 0x00000083 System.Boolean BugsnagUnity.IConfiguration::ErrorClassIsDiscarded(System.String)
// 0x00000084 System.Boolean BugsnagUnity.IConfiguration::IsUnityLogErrorTypeEnabled(UnityEngine.LogType)
// 0x00000085 System.Boolean BugsnagUnity.IConfiguration::IsErrorTypeEnabled(BugsnagUnity.ErrorTypes)
// 0x00000086 System.TimeSpan BugsnagUnity.IConfiguration::get_MaximumLogsTimePeriod()
// 0x00000087 BugsnagUnity.Payload.BreadcrumbType[] BugsnagUnity.IConfiguration::get_EnabledBreadcrumbTypes()
// 0x00000088 System.Boolean BugsnagUnity.IConfiguration::IsBreadcrumbTypeEnabled(BugsnagUnity.Payload.BreadcrumbType)
// 0x00000089 System.Boolean BugsnagUnity.IConfiguration::ShouldLeaveLogBreadcrumb(UnityEngine.LogType)
// 0x0000008A System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.IConfiguration::get_MaximumTypePerTimePeriod()
// 0x0000008B System.TimeSpan BugsnagUnity.IConfiguration::get_UniqueLogsTimePeriod()
// 0x0000008C System.Int32 BugsnagUnity.IConfiguration::get_MaximumBreadcrumbs()
// 0x0000008D System.String BugsnagUnity.IConfiguration::get_ReleaseStage()
// 0x0000008E System.String[] BugsnagUnity.IConfiguration::get_EnabledReleaseStages()
// 0x0000008F System.String BugsnagUnity.IConfiguration::get_AppVersion()
// 0x00000090 BugsnagUnity.EndpointConfiguration BugsnagUnity.IConfiguration::get_Endpoints()
// 0x00000091 System.String BugsnagUnity.IConfiguration::get_PayloadVersion()
// 0x00000092 System.String BugsnagUnity.IConfiguration::get_SessionPayloadVersion()
// 0x00000093 System.String BugsnagUnity.IConfiguration::get_Context()
// 0x00000094 System.Void BugsnagUnity.IConfiguration::set_Context(System.String)
// 0x00000095 UnityEngine.LogType BugsnagUnity.IConfiguration::get_NotifyLogLevel()
// 0x00000096 System.Boolean BugsnagUnity.IConfiguration::get_AutoDetectErrors()
// 0x00000097 System.Boolean BugsnagUnity.IConfiguration::get_AutoTrackSessions()
// 0x00000098 BugsnagUnity.LogTypeSeverityMapping BugsnagUnity.IConfiguration::get_LogTypeSeverityMapping()
// 0x00000099 System.String BugsnagUnity.IConfiguration::get_ScriptingBackend()
// 0x0000009A System.String BugsnagUnity.IConfiguration::get_DotnetScriptingRuntime()
// 0x0000009B System.String BugsnagUnity.IConfiguration::get_DotnetApiCompatibility()
// 0x0000009C System.UInt64 BugsnagUnity.IConfiguration::get_AppHangThresholdMillis()
// 0x0000009D System.String BugsnagUnity.IConfiguration::get_BundleVersion()
// 0x0000009E System.String BugsnagUnity.IConfiguration::get_AppType()
// 0x0000009F System.Void BugsnagUnity.IDelivery::Send(BugsnagUnity.Payload.IPayload)
// 0x000000A0 System.Boolean BugsnagUnity.Delivery::get_DelayBeforeDelivery()
extern void Delivery_get_DelayBeforeDelivery_m1EF3EAFC8B6894AED502D54E7C8CD906B8029A1A (void);
// 0x000000A1 System.Void BugsnagUnity.Delivery::set_DelayBeforeDelivery(System.Boolean)
extern void Delivery_set_DelayBeforeDelivery_mDE4D29379FE16BACBAAC3A15030B268641DEFC4E (void);
// 0x000000A2 System.Threading.Thread BugsnagUnity.Delivery::get_Worker()
extern void Delivery_get_Worker_mFF28C989772430C0123FDBD7EA4AE0EEB1D7ED3A (void);
// 0x000000A3 BugsnagUnity.BlockingQueue`1<BugsnagUnity.Payload.IPayload> BugsnagUnity.Delivery::get_Queue()
extern void Delivery_get_Queue_m5ED61B03545A3086BF652E9DD7DDC0A25D8FA0FE (void);
// 0x000000A4 UnityEngine.GameObject BugsnagUnity.Delivery::get_DispatcherObject()
extern void Delivery_get_DispatcherObject_m740946F942E923118E2FA1B60852E54BB44E20D2 (void);
// 0x000000A5 System.Void BugsnagUnity.Delivery::.ctor()
extern void Delivery__ctor_mC974AF5B65CCE50049B40FCAE6DA50C58A53EDF7 (void);
// 0x000000A6 System.Void BugsnagUnity.Delivery::ProcessQueue()
extern void Delivery_ProcessQueue_mD9C70991E63E89371D7008B04A0D8DAC6D23D45D (void);
// 0x000000A7 System.Void BugsnagUnity.Delivery::SerializeAndDeliverPayload(BugsnagUnity.Payload.IPayload)
extern void Delivery_SerializeAndDeliverPayload_m55D43D58131D7BF34312124EDAFE91AB462D2846 (void);
// 0x000000A8 System.Void BugsnagUnity.Delivery::Send(BugsnagUnity.Payload.IPayload)
extern void Delivery_Send_m5FFEA0ED9DB535E2325F80E658588D056E24F495 (void);
// 0x000000A9 System.Collections.IEnumerator BugsnagUnity.Delivery::PushToServer(BugsnagUnity.Payload.IPayload,System.Byte[])
extern void Delivery_PushToServer_mD75DFB40A27FEF8AC309DC1A1ADC266C1FF8E948 (void);
// 0x000000AA System.Boolean BugsnagUnity.Delivery::CanUseThreading()
extern void Delivery_CanUseThreading_mC2C101D32BEE0EBCF9BCF02DF00B3E64A6ADEE9C (void);
// 0x000000AB System.Void BugsnagUnity.Delivery/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m3E0586AB29FF42920E64C233B20E98F1FB0D94A6 (void);
// 0x000000AC System.Void BugsnagUnity.Delivery/<>c__DisplayClass17_0::<Send>b__0()
extern void U3CU3Ec__DisplayClass17_0_U3CSendU3Eb__0_mABB558894D3BDA37072016543CD8B788F816831C (void);
// 0x000000AD System.Void BugsnagUnity.Delivery/<PushToServer>d__18::.ctor(System.Int32)
extern void U3CPushToServerU3Ed__18__ctor_mC5BFA4AE0F62D45551F6D83A27593BC63CD74BED (void);
// 0x000000AE System.Void BugsnagUnity.Delivery/<PushToServer>d__18::System.IDisposable.Dispose()
extern void U3CPushToServerU3Ed__18_System_IDisposable_Dispose_m46C0C5AFBA79D7C5E90CC41EAAC6A063DF8769EE (void);
// 0x000000AF System.Boolean BugsnagUnity.Delivery/<PushToServer>d__18::MoveNext()
extern void U3CPushToServerU3Ed__18_MoveNext_m09F2790EACD85B61D200B9AD6093F93C33219A5E (void);
// 0x000000B0 System.Void BugsnagUnity.Delivery/<PushToServer>d__18::<>m__Finally1()
extern void U3CPushToServerU3Ed__18_U3CU3Em__Finally1_m5D11D566D818E60F7DCE2DA8C2A3B1A05D09A72B (void);
// 0x000000B1 System.Object BugsnagUnity.Delivery/<PushToServer>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CPushToServerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0EA60AEDD204325326C5551432862D101935FCB5 (void);
// 0x000000B2 System.Void BugsnagUnity.Delivery/<PushToServer>d__18::System.Collections.IEnumerator.Reset()
extern void U3CPushToServerU3Ed__18_System_Collections_IEnumerator_Reset_mD7E2E48725D4DAC404797F559A3F6DA6717646F8 (void);
// 0x000000B3 System.Object BugsnagUnity.Delivery/<PushToServer>d__18::System.Collections.IEnumerator.get_Current()
extern void U3CPushToServerU3Ed__18_System_Collections_IEnumerator_get_Current_m913923B2DC105FFDD75C0E7FC53211D0369C7090 (void);
// 0x000000B4 BugsnagUnity.IConfiguration BugsnagUnity.INativeClient::get_Configuration()
// 0x000000B5 BugsnagUnity.IBreadcrumbs BugsnagUnity.INativeClient::get_Breadcrumbs()
// 0x000000B6 BugsnagUnity.IDelivery BugsnagUnity.INativeClient::get_Delivery()
// 0x000000B7 System.Void BugsnagUnity.INativeClient::PopulateApp(BugsnagUnity.Payload.App)
// 0x000000B8 System.Void BugsnagUnity.INativeClient::PopulateDevice(BugsnagUnity.Payload.Device)
// 0x000000B9 System.Void BugsnagUnity.INativeClient::SetMetadata(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
// 0x000000BA System.Void BugsnagUnity.INativeClient::StartSession()
// 0x000000BB System.Boolean BugsnagUnity.INativeClient::ResumeSession()
// 0x000000BC System.Void BugsnagUnity.INativeClient::UpdateSession(BugsnagUnity.Payload.Session)
// 0x000000BD BugsnagUnity.Payload.Session BugsnagUnity.INativeClient::GetCurrentSession()
// 0x000000BE System.Void BugsnagUnity.INativeClient::SetUser(BugsnagUnity.Payload.User)
// 0x000000BF System.Void BugsnagUnity.INativeClient::PopulateUser(BugsnagUnity.Payload.User)
// 0x000000C0 System.Void BugsnagUnity.INativeClient::PopulateMetadata(BugsnagUnity.Payload.Metadata)
// 0x000000C1 System.Void BugsnagUnity.INativeClient::SetContext(System.String)
// 0x000000C2 System.Collections.Generic.Dictionary`2<UnityEngine.LogType,BugsnagUnity.Severity> BugsnagUnity.LogTypeSeverityMapping::get_Mappings()
extern void LogTypeSeverityMapping_get_Mappings_m099EF45871E5103312A9111BECC719A7ADA1005F (void);
// 0x000000C3 System.Void BugsnagUnity.LogTypeSeverityMapping::.ctor()
extern void LogTypeSeverityMapping__ctor_mD8D55262C465D16F9F7BBDE8DCD05EEF173FA320 (void);
// 0x000000C4 BugsnagUnity.Severity BugsnagUnity.LogTypeSeverityMapping::Map(UnityEngine.LogType)
extern void LogTypeSeverityMapping_Map_m2F17AA0836A57B5C5B1FE96654DE5B99EED01C26 (void);
// 0x000000C5 System.Void BugsnagUnity.MainThreadDispatchBehaviour::Update()
extern void MainThreadDispatchBehaviour_Update_m8CF90752828D6AAF22821CA8ECB9639DA154D991 (void);
// 0x000000C6 System.Void BugsnagUnity.MainThreadDispatchBehaviour::Enqueue(System.Collections.IEnumerator)
extern void MainThreadDispatchBehaviour_Enqueue_mFACB3103D5FC198706486F2C409DAC31B0BE51EC (void);
// 0x000000C7 System.Void BugsnagUnity.MainThreadDispatchBehaviour::Enqueue(System.Action)
extern void MainThreadDispatchBehaviour_Enqueue_mC457C0ED370D917188E2A41FF28E5C95B6068155 (void);
// 0x000000C8 System.Collections.IEnumerator BugsnagUnity.MainThreadDispatchBehaviour::ActionWrapper(System.Action)
extern void MainThreadDispatchBehaviour_ActionWrapper_m93B73D265A007A18D43598842C0620B0D490E59B (void);
// 0x000000C9 System.Void BugsnagUnity.MainThreadDispatchBehaviour::EnqueueWithDelayCoroutine(System.Action,System.Single)
extern void MainThreadDispatchBehaviour_EnqueueWithDelayCoroutine_mD8311AF6474C9FC2D6D4EF288EC5CAFF3E842788 (void);
// 0x000000CA System.Collections.IEnumerator BugsnagUnity.MainThreadDispatchBehaviour::DelayAction(System.Action,System.Single)
extern void MainThreadDispatchBehaviour_DelayAction_m6D34D4CB204D45E5F7E4D98104F3E53616E681C8 (void);
// 0x000000CB System.Boolean BugsnagUnity.MainThreadDispatchBehaviour::Exists()
extern void MainThreadDispatchBehaviour_Exists_mC1C4E23BFCD18A3AD4089E0065A691C5B47018B6 (void);
// 0x000000CC BugsnagUnity.MainThreadDispatchBehaviour BugsnagUnity.MainThreadDispatchBehaviour::Instance()
extern void MainThreadDispatchBehaviour_Instance_m613AC8217FA25FC3931EBD77D664C56425A4C35A (void);
// 0x000000CD System.Void BugsnagUnity.MainThreadDispatchBehaviour::Awake()
extern void MainThreadDispatchBehaviour_Awake_m4147F0F0524A963B536899D8B99C9003EE8E376D (void);
// 0x000000CE System.Void BugsnagUnity.MainThreadDispatchBehaviour::OnDestroy()
extern void MainThreadDispatchBehaviour_OnDestroy_m12381843122C8365330E065B4A5EC39A072863E0 (void);
// 0x000000CF System.Void BugsnagUnity.MainThreadDispatchBehaviour::.ctor()
extern void MainThreadDispatchBehaviour__ctor_mD733888196ED88F5A34C1E58A4B86B1A199CEFE1 (void);
// 0x000000D0 System.Void BugsnagUnity.MainThreadDispatchBehaviour::.cctor()
extern void MainThreadDispatchBehaviour__cctor_mC776EE80B06BBD04246682AF36CE34A1585F7EAE (void);
// 0x000000D1 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mB08CE5ED8DA85AEDA1BB8839830FC3631CC8C364 (void);
// 0x000000D2 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<>c__DisplayClass2_0::<Enqueue>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m38E59739B6093F09AF8375E1F3B6E50012E4014B (void);
// 0x000000D3 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::.ctor(System.Int32)
extern void U3CActionWrapperU3Ed__4__ctor_m6B8550ABA5B2D0510EE5E405BF151A9AB4FBC842 (void);
// 0x000000D4 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::System.IDisposable.Dispose()
extern void U3CActionWrapperU3Ed__4_System_IDisposable_Dispose_m754842758934EC39032D404BCFCF71673EE079EB (void);
// 0x000000D5 System.Boolean BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::MoveNext()
extern void U3CActionWrapperU3Ed__4_MoveNext_m03A690491E52873D64808A26176CFC73E08EE78C (void);
// 0x000000D6 System.Object BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CActionWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5D081581766BBD840F8882869D4FB27EB7D4FB5 (void);
// 0x000000D7 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::System.Collections.IEnumerator.Reset()
extern void U3CActionWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m86AA5A10E20D0F4D6B8D0F2F0E76D6E149D3A320 (void);
// 0x000000D8 System.Object BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CActionWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_m36827BF0F68986431364260FF58A8D0B33D7B598 (void);
// 0x000000D9 System.Void BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::.ctor(System.Int32)
extern void U3CDelayActionU3Ed__6__ctor_m284D2A964F3150F183CA7F1E64724F152BA8447A (void);
// 0x000000DA System.Void BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::System.IDisposable.Dispose()
extern void U3CDelayActionU3Ed__6_System_IDisposable_Dispose_m50EFB1F3EDC1A1FEB37269D24D780550521369BC (void);
// 0x000000DB System.Boolean BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::MoveNext()
extern void U3CDelayActionU3Ed__6_MoveNext_m037B9AC579CE89BE4A560F8D8B537BEDC8E4F7B4 (void);
// 0x000000DC System.Object BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayActionU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA70071AC9DDD6F216025AB65FC7E152CDE1DE177 (void);
// 0x000000DD System.Void BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::System.Collections.IEnumerator.Reset()
extern void U3CDelayActionU3Ed__6_System_Collections_IEnumerator_Reset_m76381D7677236E986DCD131557778AC312FA5F64 (void);
// 0x000000DE System.Object BugsnagUnity.MainThreadDispatchBehaviour/<DelayAction>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CDelayActionU3Ed__6_System_Collections_IEnumerator_get_Current_m7E79D3196C0902EA2C4FB7F88DF8484EE0003011 (void);
// 0x000000DF BugsnagUnity.IConfiguration BugsnagUnity.MaximumLogTypeCounter::get_Configuration()
extern void MaximumLogTypeCounter_get_Configuration_mC7589AE731197000E66C60754B3791EC437B24FE (void);
// 0x000000E0 System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.MaximumLogTypeCounter::get_CurrentCounts()
extern void MaximumLogTypeCounter_get_CurrentCounts_mE226341B698ECE71349F10F695EDBDFE322F820F (void);
// 0x000000E1 System.DateTime BugsnagUnity.MaximumLogTypeCounter::get_FlushAt()
extern void MaximumLogTypeCounter_get_FlushAt_m3B70AB9C0BD73017DF935B17CBD2D1F264B3E2AB (void);
// 0x000000E2 System.Void BugsnagUnity.MaximumLogTypeCounter::set_FlushAt(System.DateTime)
extern void MaximumLogTypeCounter_set_FlushAt_m15744396351DDAFA9A6B5953584A6D7E45C0693F (void);
// 0x000000E3 System.TimeSpan BugsnagUnity.MaximumLogTypeCounter::get_MaximumLogsTimePeriod()
extern void MaximumLogTypeCounter_get_MaximumLogsTimePeriod_mB105177D7A41B5BA23D049C1DB8B666E0AAABD44 (void);
// 0x000000E4 System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.MaximumLogTypeCounter::get_MaximumTypePerTimePeriod()
extern void MaximumLogTypeCounter_get_MaximumTypePerTimePeriod_m5405C77760BD3A0F91EE0C636C484757502D29CC (void);
// 0x000000E5 System.Void BugsnagUnity.MaximumLogTypeCounter::.ctor(BugsnagUnity.IConfiguration)
extern void MaximumLogTypeCounter__ctor_m63D70B5809BE104FEE1A85EB34259237D19284B2 (void);
// 0x000000E6 System.Boolean BugsnagUnity.MaximumLogTypeCounter::ShouldSend(BugsnagUnity.UnityLogMessage)
extern void MaximumLogTypeCounter_ShouldSend_mADC13328FB577FB46FB49D240E9B048162AECAC1 (void);
// 0x000000E7 System.Void BugsnagUnity.ISessionTracker::StartSession()
// 0x000000E8 System.Boolean BugsnagUnity.ISessionTracker::ResumeSession()
// 0x000000E9 BugsnagUnity.Payload.Session BugsnagUnity.ISessionTracker::get_CurrentSession()
// 0x000000EA System.Void BugsnagUnity.ISessionTracker::AddException(BugsnagUnity.Payload.Report)
// 0x000000EB BugsnagUnity.Client BugsnagUnity.SessionTracker::get_Client()
extern void SessionTracker_get_Client_m62047DCA93564E770A5E8FCA1E9CC7DF39BB469A (void);
// 0x000000EC BugsnagUnity.Payload.Session BugsnagUnity.SessionTracker::get_CurrentSession()
extern void SessionTracker_get_CurrentSession_mFDD2C7412B9B7E2A7D2C2AC8B96BFD19165CB025 (void);
// 0x000000ED System.Void BugsnagUnity.SessionTracker::set_CurrentSession(BugsnagUnity.Payload.Session)
extern void SessionTracker_set_CurrentSession_mE7D2E3EFCBD90C1A5048F7DE63BA6E454B6EAAB8 (void);
// 0x000000EE BugsnagUnity.Payload.Session BugsnagUnity.SessionTracker::GetCurrentSession()
extern void SessionTracker_GetCurrentSession_m8B354DE2171351FF60B261418F8B1FE678538A00 (void);
// 0x000000EF System.Void BugsnagUnity.SessionTracker::.ctor(BugsnagUnity.Client)
extern void SessionTracker__ctor_mA194298BB6F18D4DC309B138CA76CA937DF3DFF3 (void);
// 0x000000F0 System.Void BugsnagUnity.SessionTracker::StartSession()
extern void SessionTracker_StartSession_m01562C31BEDAFB43DC76539D3CC2EFF529D420E6 (void);
// 0x000000F1 System.Void BugsnagUnity.SessionTracker::StartManagedSession()
extern void SessionTracker_StartManagedSession_mCD184E254C3B1185749BEEAF63C52788D10A4210 (void);
// 0x000000F2 System.Boolean BugsnagUnity.SessionTracker::ResumeSession()
extern void SessionTracker_ResumeSession_mC49A0208B70A82910363E8947EFF0EFE736E7015 (void);
// 0x000000F3 System.Boolean BugsnagUnity.SessionTracker::ResumeManagedSession()
extern void SessionTracker_ResumeManagedSession_m195420BDC00026C513B56C147A52713459408B13 (void);
// 0x000000F4 System.Void BugsnagUnity.SessionTracker::AddException(BugsnagUnity.Payload.Report)
extern void SessionTracker_AddException_mDFB4BC92E38A6D0E951ADE53900AEFAA0AD22B38 (void);
// 0x000000F5 System.Boolean BugsnagUnity.SessionTracker::ShouldManageSessions()
extern void SessionTracker_ShouldManageSessions_m735D55A0F68C7D2A0EC28590F63CDC6FF16810F8 (void);
// 0x000000F6 System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.LogTypeExtensions::get_LogTypeMapping()
extern void LogTypeExtensions_get_LogTypeMapping_m20467511115D8F0FF1AD4C451615D66E2B04CD73 (void);
// 0x000000F7 System.Boolean BugsnagUnity.LogTypeExtensions::IsGreaterThanOrEqualTo(UnityEngine.LogType,UnityEngine.LogType)
extern void LogTypeExtensions_IsGreaterThanOrEqualTo_m5F1E3AC3D3A10FAFD0A55908CC4ADFFBE6EF4598 (void);
// 0x000000F8 System.Void BugsnagUnity.LogTypeExtensions::.cctor()
extern void LogTypeExtensions__cctor_m79A710E42BAC330A0C9CFD7F16DCC2BD5DFC39A0 (void);
// 0x000000F9 System.Boolean BugsnagUnity.LogTypeExtensions/LogTypeComparer::Equals(UnityEngine.LogType,UnityEngine.LogType)
extern void LogTypeComparer_Equals_mDE0AD589170F3CB96AA6365C1FFC441EEAAF4D06 (void);
// 0x000000FA System.Int32 BugsnagUnity.LogTypeExtensions/LogTypeComparer::GetHashCode(UnityEngine.LogType)
extern void LogTypeComparer_GetHashCode_m01808326423F0E0263F58B0A1448E5F6E1F32773 (void);
// 0x000000FB System.Void BugsnagUnity.LogTypeExtensions/LogTypeComparer::.ctor()
extern void LogTypeComparer__ctor_m3A935B4F29F72387A7D5CC89D623D7F75E8C8E8F (void);
// 0x000000FC System.Void BugsnagUnity.JsonObject::.ctor()
extern void JsonObject__ctor_m39F7A6ED5EA30A5A93B1255969F87F4D50CD4C20 (void);
// 0x000000FD System.Void BugsnagUnity.JsonObject::Add(System.String,System.Object)
extern void JsonObject_Add_mBF12D1DC90D84D2916B0A90F1DDAF5FF791B3C53 (void);
// 0x000000FE System.Boolean BugsnagUnity.JsonObject::ContainsKey(System.String)
extern void JsonObject_ContainsKey_m4BC5194BB259028C3DCDA03ADE39B11B5D4CAB47 (void);
// 0x000000FF System.Collections.Generic.ICollection`1<System.String> BugsnagUnity.JsonObject::get_Keys()
extern void JsonObject_get_Keys_m42C63831BF48C5A550838DAE3C4471978FD4B0F2 (void);
// 0x00000100 System.Boolean BugsnagUnity.JsonObject::Remove(System.String)
extern void JsonObject_Remove_m504F4E4C3CEFE10E212FA5B4DFA6E15ADB58CCAE (void);
// 0x00000101 System.Boolean BugsnagUnity.JsonObject::TryGetValue(System.String,System.Object&)
extern void JsonObject_TryGetValue_m66DB5D8E357E382C1F5A9A5059DA720561B43541 (void);
// 0x00000102 System.Collections.Generic.ICollection`1<System.Object> BugsnagUnity.JsonObject::get_Values()
extern void JsonObject_get_Values_m98B3356877435E1D93A0203899C713D0F04B76F9 (void);
// 0x00000103 System.Object BugsnagUnity.JsonObject::get_Item(System.String)
extern void JsonObject_get_Item_mAEB6A8758A77E8A1ADCFA2767163CB11C801CE95 (void);
// 0x00000104 System.Void BugsnagUnity.JsonObject::set_Item(System.String,System.Object)
extern void JsonObject_set_Item_mFD11A2FF7363FFA70B7CAB50C1BF7FA726E9BA1D (void);
// 0x00000105 System.Void BugsnagUnity.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void JsonObject_Add_m26AB38DAC743C80B632CFA43B42DD4A1E7D4C62B (void);
// 0x00000106 System.Void BugsnagUnity.JsonObject::Clear()
extern void JsonObject_Clear_m61E9B83ADA4CE709B019D50554B5421C9EB96A9A (void);
// 0x00000107 System.Boolean BugsnagUnity.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void JsonObject_Contains_m5D843739FCADAC6F2FBE8FB18FDC6E9C76665921 (void);
// 0x00000108 System.Void BugsnagUnity.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern void JsonObject_CopyTo_mB7285808D74DC68AA516A59A5D4BD6E26094F8C3 (void);
// 0x00000109 System.Int32 BugsnagUnity.JsonObject::get_Count()
extern void JsonObject_get_Count_m5D71CE98BA788B61296AC8D73959EB6C8CEE952B (void);
// 0x0000010A System.Boolean BugsnagUnity.JsonObject::get_IsReadOnly()
extern void JsonObject_get_IsReadOnly_m0234F33D4A4330E9C882F6273B1C0A70700ACF27 (void);
// 0x0000010B System.Boolean BugsnagUnity.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern void JsonObject_Remove_m5071BF8C74C53D00C72E02182AD09F0A663E104A (void);
// 0x0000010C System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> BugsnagUnity.JsonObject::GetEnumerator()
extern void JsonObject_GetEnumerator_m9EB4756A24A284005D8ADF9B2CAAE73A745F031C (void);
// 0x0000010D System.Collections.IEnumerator BugsnagUnity.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern void JsonObject_System_Collections_IEnumerable_GetEnumerator_mACD35DB509AB8DB9A11001D8983632616D18806C (void);
// 0x0000010E System.Void BugsnagUnity.SimpleJson::.cctor()
extern void SimpleJson__cctor_m5067EF160946B81D0658FA94CCD5FD5FDFFE446A (void);
// 0x0000010F System.Void BugsnagUnity.SimpleJson::SerializeObject(System.Object,System.IO.StreamWriter,BugsnagUnity.IJsonSerializerStrategy,System.Collections.IDictionary,System.Collections.IDictionary)
extern void SimpleJson_SerializeObject_m6F304FAD7DB08CD51818F69CDC4E073278A239AB (void);
// 0x00000110 System.Void BugsnagUnity.SimpleJson::SerializeObject(System.Object,System.IO.StreamWriter)
extern void SimpleJson_SerializeObject_mD8A0B65717006E133780FB954BC55F4E0725574D (void);
// 0x00000111 System.Void BugsnagUnity.SimpleJson::SerializeObject(System.Object,System.IO.StreamWriter,System.Collections.IDictionary)
extern void SimpleJson_SerializeObject_mDA2034F259812891DC0CEC975B1514F1688640F6 (void);
// 0x00000112 System.Boolean BugsnagUnity.SimpleJson::SerializeValue(BugsnagUnity.IJsonSerializerStrategy,System.Object,System.IO.StreamWriter,System.Collections.IDictionary,System.Collections.IDictionary,System.Boolean)
extern void SimpleJson_SerializeValue_m97E020110544F270C5D57293A5C63C2CDEE4D6CC (void);
// 0x00000113 System.Boolean BugsnagUnity.SimpleJson::SerializeObject(BugsnagUnity.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.IO.StreamWriter,System.Collections.IDictionary,System.Collections.IDictionary,System.Boolean)
extern void SimpleJson_SerializeObject_m242458EDDEBB62FA70BF677FC0899185CB86D081 (void);
// 0x00000114 System.Boolean BugsnagUnity.SimpleJson::SerializeArray(BugsnagUnity.IJsonSerializerStrategy,System.Collections.IEnumerable,System.IO.StreamWriter,System.Collections.IDictionary,System.Collections.IDictionary,System.Boolean)
extern void SimpleJson_SerializeArray_m42C4876D92765B6BF00426A34D7DC813B87BB499 (void);
// 0x00000115 System.Boolean BugsnagUnity.SimpleJson::SerializeString(System.String,System.IO.StreamWriter)
extern void SimpleJson_SerializeString_m47F789ED3180D0BEBD309DB38E80568BCC5913C7 (void);
// 0x00000116 System.Void BugsnagUnity.SimpleJson::IntToHex(System.Int32,System.Char[])
extern void SimpleJson_IntToHex_m2547B104272826B8ED8481CD1957383DC47DEB55 (void);
// 0x00000117 System.Boolean BugsnagUnity.SimpleJson::SerializeNumber(System.Object,System.IO.StreamWriter)
extern void SimpleJson_SerializeNumber_mBEFFECD48B6636E5C76E76AC339AE9AC74ACB02A (void);
// 0x00000118 BugsnagUnity.IJsonSerializerStrategy BugsnagUnity.SimpleJson::get_CurrentJsonSerializerStrategy()
extern void SimpleJson_get_CurrentJsonSerializerStrategy_mA9E2FFDF9FA31598ABAB32956436A90E938BB348 (void);
// 0x00000119 BugsnagUnity.PocoJsonSerializerStrategy BugsnagUnity.SimpleJson::get_PocoJsonSerializerStrategy()
extern void SimpleJson_get_PocoJsonSerializerStrategy_mCC1F55344495750EF7FAF289CF0101AFA5F3E610 (void);
// 0x0000011A System.Boolean BugsnagUnity.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
// 0x0000011B System.Void BugsnagUnity.PocoJsonSerializerStrategy::.ctor()
extern void PocoJsonSerializerStrategy__ctor_m58642BB00F69061030A3F271EE8B730511BA6ACD (void);
// 0x0000011C System.String BugsnagUnity.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern void PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m5CE61106E3AF2373CA24256507821C88CCD6253A (void);
// 0x0000011D BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate BugsnagUnity.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern void PocoJsonSerializerStrategy_ContructorDelegateFactory_m6AAB956621A0E34E27A3F32B8E70B49E0C8D35F0 (void);
// 0x0000011E System.Collections.Generic.IDictionary`2<System.String,BugsnagUnity.Reflection.ReflectionUtils/GetDelegate> BugsnagUnity.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern void PocoJsonSerializerStrategy_GetterValueFactory_m836F5F197193523188EFFF3507FF96A2E8F60FB8 (void);
// 0x0000011F System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,BugsnagUnity.Reflection.ReflectionUtils/SetDelegate>> BugsnagUnity.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern void PocoJsonSerializerStrategy_SetterValueFactory_mAFCCACEC60247A2E1EBF29E624C561B6498290B9 (void);
// 0x00000120 System.Boolean BugsnagUnity.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern void PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m80D4CBF3F0A0314E9EC1BCD1EB59003AD132BC60 (void);
// 0x00000121 System.Object BugsnagUnity.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern void PocoJsonSerializerStrategy_SerializeEnum_m717D71CA3CA5CDFE01B64448CBA1C8A08AF0E4C8 (void);
// 0x00000122 System.Boolean BugsnagUnity.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern void PocoJsonSerializerStrategy_TrySerializeKnownTypes_mD2C7CE4C1CCD3FDF3ADA744871D892AF0E601E73 (void);
// 0x00000123 System.Boolean BugsnagUnity.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern void PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m84C5F34F2611BB3DD5FAA2A4942C94FEED12655B (void);
// 0x00000124 System.Void BugsnagUnity.PocoJsonSerializerStrategy::.cctor()
extern void PocoJsonSerializerStrategy__cctor_m06128BD7B08E8D33CF8001AA5F0FCE762307BB19 (void);
// 0x00000125 System.Void BugsnagUnity.TimingTrackerBehaviour::Awake()
extern void TimingTrackerBehaviour_Awake_mBF5BAD01C4366F5ECF8EAAC44513CCC3E214B169 (void);
// 0x00000126 System.Void BugsnagUnity.TimingTrackerBehaviour::OnApplicationFocus(System.Boolean)
extern void TimingTrackerBehaviour_OnApplicationFocus_mA2488547DF70BC2AB235E7002A527EC633C040EF (void);
// 0x00000127 System.Void BugsnagUnity.TimingTrackerBehaviour::OnApplicationPause(System.Boolean)
extern void TimingTrackerBehaviour_OnApplicationPause_m34EF37600EC25B6B493147BE996253E6753CA811 (void);
// 0x00000128 System.Void BugsnagUnity.TimingTrackerBehaviour::.ctor()
extern void TimingTrackerBehaviour__ctor_mD5FDBCC8EC54539A2436A45238AB459378913D2A (void);
// 0x00000129 System.String BugsnagUnity.TypeNameHelper::GetTypeDisplayName(System.Type,System.Boolean,System.Boolean)
extern void TypeNameHelper_GetTypeDisplayName_m28E4D4A0B254E140ED3311B0002A8A508F8D1CBE (void);
// 0x0000012A System.Void BugsnagUnity.TypeNameHelper::ProcessType(System.Text.StringBuilder,System.Type,BugsnagUnity.TypeNameHelper/DisplayNameOptions)
extern void TypeNameHelper_ProcessType_mEED1A2A180F24F663EA63F954AEF1AA008BBC07F (void);
// 0x0000012B System.Void BugsnagUnity.TypeNameHelper::ProcessArrayType(System.Text.StringBuilder,System.Type,BugsnagUnity.TypeNameHelper/DisplayNameOptions)
extern void TypeNameHelper_ProcessArrayType_m11C32CBD0832A4D28727485C821A7F9476F77D79 (void);
// 0x0000012C System.Void BugsnagUnity.TypeNameHelper::ProcessGenericType(System.Text.StringBuilder,System.Type,System.Type[],System.Int32,BugsnagUnity.TypeNameHelper/DisplayNameOptions)
extern void TypeNameHelper_ProcessGenericType_mC02AD3DDE63FDC37544577D6EC19EA99B05519CF (void);
// 0x0000012D System.Void BugsnagUnity.TypeNameHelper::.cctor()
extern void TypeNameHelper__cctor_m6425E667C5C319AF1CAA6EA4BE17414E25D8CBD3 (void);
// 0x0000012E System.Void BugsnagUnity.TypeNameHelper/DisplayNameOptions::.ctor(System.Boolean,System.Boolean)
extern void DisplayNameOptions__ctor_m7E99A1E3C81711A29BE33CB4754657339DAD79CC (void);
// 0x0000012F System.Boolean BugsnagUnity.TypeNameHelper/DisplayNameOptions::get_FullName()
extern void DisplayNameOptions_get_FullName_mFE86F6A03EB618897927CA4287564A6033104505 (void);
// 0x00000130 System.Boolean BugsnagUnity.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameterNames()
extern void DisplayNameOptions_get_IncludeGenericParameterNames_m092A7D883E43CCA55F7C2AB84A669301571B23CB (void);
// 0x00000131 System.Collections.Generic.Dictionary`2<BugsnagUnity.UnityLogMessage,System.Int32> BugsnagUnity.UniqueLogThrottle::get_Counter()
extern void UniqueLogThrottle_get_Counter_m89A86A0085B56E220E660D5B8990C474B8F6DCB3 (void);
// 0x00000132 System.DateTime BugsnagUnity.UniqueLogThrottle::get_FlushAt()
extern void UniqueLogThrottle_get_FlushAt_m4D0304F2E3FBBE35532BFADEC76243275E664D02 (void);
// 0x00000133 System.Void BugsnagUnity.UniqueLogThrottle::set_FlushAt(System.DateTime)
extern void UniqueLogThrottle_set_FlushAt_m6DBE2B7F20B806DC7FE4FF29FA6AC732C7F7F916 (void);
// 0x00000134 BugsnagUnity.IConfiguration BugsnagUnity.UniqueLogThrottle::get_Configuration()
extern void UniqueLogThrottle_get_Configuration_m3E777E056978F9A75CA8BAEFEED2694B1D084D0B (void);
// 0x00000135 System.TimeSpan BugsnagUnity.UniqueLogThrottle::get_UniqueLogsTimePeriod()
extern void UniqueLogThrottle_get_UniqueLogsTimePeriod_m5FD42204A80A5718E8D8FE48583B55B9905DF5A8 (void);
// 0x00000136 System.Void BugsnagUnity.UniqueLogThrottle::.ctor(BugsnagUnity.IConfiguration)
extern void UniqueLogThrottle__ctor_m5A22F4D02DC0FFC29FB815887B84524551E95704 (void);
// 0x00000137 System.Boolean BugsnagUnity.UniqueLogThrottle::ShouldSend(BugsnagUnity.UnityLogMessage)
extern void UniqueLogThrottle_ShouldSend_mE2D37122AFEDAD1083B07CC195FAAE72EEC4D93D (void);
// 0x00000138 System.Boolean BugsnagUnity.UniqueLogThrottle/UnityLogMessageEqualityComparer::Equals(BugsnagUnity.UnityLogMessage,BugsnagUnity.UnityLogMessage)
extern void UnityLogMessageEqualityComparer_Equals_m9B9FDDC0CD593FE87CDEA148EF07D3F97F047432 (void);
// 0x00000139 System.Int32 BugsnagUnity.UniqueLogThrottle/UnityLogMessageEqualityComparer::GetHashCode(BugsnagUnity.UnityLogMessage)
extern void UnityLogMessageEqualityComparer_GetHashCode_m8BD507A70BE66C187E2F408034D98DCE5BB1D0D2 (void);
// 0x0000013A System.Void BugsnagUnity.UniqueLogThrottle/UnityLogMessageEqualityComparer::.ctor()
extern void UnityLogMessageEqualityComparer__ctor_m9B9355D4AA78FE2488EB0F1FBB571ABC29A38D74 (void);
// 0x0000013B System.Void BugsnagUnity.UnityLogMessage::.ctor(System.String,System.String,UnityEngine.LogType)
extern void UnityLogMessage__ctor_mA44C9A78332C83D6A6AC9A4270199DFD2F9F2707 (void);
// 0x0000013C System.String BugsnagUnity.UnityLogMessage::get_Condition()
extern void UnityLogMessage_get_Condition_mE801A13CF5B17C9DEC3F73D20B902F5D36D24C61 (void);
// 0x0000013D System.String BugsnagUnity.UnityLogMessage::get_StackTrace()
extern void UnityLogMessage_get_StackTrace_m89C138756F1962697DDAA57968E00D2FE37136CB (void);
// 0x0000013E UnityEngine.LogType BugsnagUnity.UnityLogMessage::get_Type()
extern void UnityLogMessage_get_Type_mFC038325456C8FFFD0F5FF47B5A1A90D65C3163F (void);
// 0x0000013F System.DateTime BugsnagUnity.UnityLogMessage::get_CreatedAt()
extern void UnityLogMessage_get_CreatedAt_mFA812338C9C97D164026F0CDBFCAACE383CE7A64 (void);
// 0x00000140 System.Void BugsnagUnity.UnityMetadata::InitDefaultMetadata()
extern void UnityMetadata_InitDefaultMetadata_mE0A4698DE4AC48199F51CAF046E8D3F79563EEB3 (void);
// 0x00000141 System.Void BugsnagUnity.UnityMetadata::InitAppMetadata()
extern void UnityMetadata_InitAppMetadata_m462A0986468827C28EAD5A32B1C303A8FCA7E582 (void);
// 0x00000142 System.Void BugsnagUnity.UnityMetadata::InitDeviceMetadata()
extern void UnityMetadata_InitDeviceMetadata_m62D9148E2BCD943343BC49FFE1522158BD11C179 (void);
// 0x00000143 System.Void BugsnagUnity.UnityMetadata::.cctor()
extern void UnityMetadata__cctor_mB7371BE497AFDDF004F409C658F7E72644BAF230 (void);
// 0x00000144 System.Void BugsnagUnity.Breadcrumbs::.ctor()
extern void Breadcrumbs__ctor_mE7A4E08A6B7E912CF4FE295A1821F4FB7A07DD95 (void);
// 0x00000145 System.Void BugsnagUnity.Breadcrumbs::Leave(System.String,BugsnagUnity.Payload.BreadcrumbType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Breadcrumbs_Leave_m9AAF2935A4AE7CA3230D46DA20964E71CBEC7CD8 (void);
// 0x00000146 System.Void BugsnagUnity.Breadcrumbs::Leave(BugsnagUnity.Payload.Breadcrumb)
extern void Breadcrumbs_Leave_m027ACA92418D5DD4D9466A390C6522790BCA7114 (void);
// 0x00000147 BugsnagUnity.Payload.Breadcrumb[] BugsnagUnity.Breadcrumbs::Retrieve()
extern void Breadcrumbs_Retrieve_m1DA79FEACDC613C622468418F5902B562EF62886 (void);
// 0x00000148 System.Void BugsnagUnity.Breadcrumbs::PopulateBreadcrumb(System.IntPtr,System.String,System.String,System.String,System.String[],System.Int32,System.String[],System.Int32)
extern void Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3 (void);
// 0x00000149 BugsnagUnity.IConfiguration BugsnagUnity.NativeClient::get_Configuration()
extern void NativeClient_get_Configuration_m79CC626410871F8F81AEA882A3C4D600E41199DD (void);
// 0x0000014A BugsnagUnity.IBreadcrumbs BugsnagUnity.NativeClient::get_Breadcrumbs()
extern void NativeClient_get_Breadcrumbs_m3668CDEED427674CD2117044F54D8B4619337275 (void);
// 0x0000014B BugsnagUnity.IDelivery BugsnagUnity.NativeClient::get_Delivery()
extern void NativeClient_get_Delivery_mF0F8BB21045961F6C53612ADC26C53B456A6AAA3 (void);
// 0x0000014C System.IntPtr BugsnagUnity.NativeClient::get_NativeConfiguration()
extern void NativeClient_get_NativeConfiguration_m6BB7D7F5A5138936479ACFE10B5C10C730904189 (void);
// 0x0000014D System.Void BugsnagUnity.NativeClient::.ctor(BugsnagUnity.IConfiguration)
extern void NativeClient__ctor_mDCA3E8C1F9ECFFB74C0D2AF95874DC0F98D1BB1E (void);
// 0x0000014E System.IntPtr BugsnagUnity.NativeClient::CreateNativeConfig(BugsnagUnity.IConfiguration)
extern void NativeClient_CreateNativeConfig_mF3343F4EB5BE1DE63A33EFA0690EAD85C91154F3 (void);
// 0x0000014F System.String BugsnagUnity.NativeClient::GetAppType(BugsnagUnity.IConfiguration)
extern void NativeClient_GetAppType_m8F4CD3D6511489FC306975A1EBC09E2025AE5EFB (void);
// 0x00000150 System.Void BugsnagUnity.NativeClient::SetEnabledBreadcrumbTypes(System.IntPtr,BugsnagUnity.IConfiguration)
extern void NativeClient_SetEnabledBreadcrumbTypes_m94B90F0FF2540D3515388475CB8D3BA3858BC665 (void);
// 0x00000151 System.Void BugsnagUnity.NativeClient::SetEnabledErrorTypes(System.IntPtr,BugsnagUnity.IConfiguration)
extern void NativeClient_SetEnabledErrorTypes_m728C3AB1A8E3AF79140AE5457400A75FC4DC8CDE (void);
// 0x00000152 System.Void BugsnagUnity.NativeClient::PopulateApp(BugsnagUnity.Payload.App)
extern void NativeClient_PopulateApp_mEC178D6AAE182795EED17241548E887018B4CCF7 (void);
// 0x00000153 System.Void BugsnagUnity.NativeClient::PopulateAppData(System.IntPtr,System.String,System.String)
extern void NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D (void);
// 0x00000154 System.Void BugsnagUnity.NativeClient::PopulateDevice(BugsnagUnity.Payload.Device)
extern void NativeClient_PopulateDevice_mEF1908E832BAACAE0E4E283FD6AC9355649C0D20 (void);
// 0x00000155 System.Void BugsnagUnity.NativeClient::PopulateDeviceData(System.IntPtr,System.String,System.String)
extern void NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE (void);
// 0x00000156 System.Void BugsnagUnity.NativeClient::PopulateUser(BugsnagUnity.Payload.User)
extern void NativeClient_PopulateUser_m59A3744CA57A4E981D10116A33EBDF699BAA8E55 (void);
// 0x00000157 System.Void BugsnagUnity.NativeClient::SetMetadata(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void NativeClient_SetMetadata_mCAEAD3D8C6615A94801C73298E13A9CCBB36F7A3 (void);
// 0x00000158 System.Void BugsnagUnity.NativeClient::PopulateMetadata(BugsnagUnity.Payload.Metadata)
extern void NativeClient_PopulateMetadata_m985BEB49FE454AA6C47B8BBFAF8F79A5839EE0B6 (void);
// 0x00000159 System.Void BugsnagUnity.NativeClient::PopulateMetaDataData(System.IntPtr,System.String,System.String[],System.Int32,System.String[],System.Int32)
extern void NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF (void);
// 0x0000015A System.Void BugsnagUnity.NativeClient::SetUser(BugsnagUnity.Payload.User)
extern void NativeClient_SetUser_m50E541CFD4B88AEFD98938C62139CB4AFA30892E (void);
// 0x0000015B System.Void BugsnagUnity.NativeClient::SetContext(System.String)
extern void NativeClient_SetContext_m91C040F0D9E833823EE24BC01F19AE724487DAF3 (void);
// 0x0000015C System.Void BugsnagUnity.NativeClient::StartSession()
extern void NativeClient_StartSession_m2F48EC7EC2D9235C011CF50F57CE83E18922261E (void);
// 0x0000015D System.Boolean BugsnagUnity.NativeClient::ResumeSession()
extern void NativeClient_ResumeSession_m28BD9D7FAC18F16B2E2A0F639C4D9D9B67965514 (void);
// 0x0000015E System.Void BugsnagUnity.NativeClient::UpdateSession(BugsnagUnity.Payload.Session)
extern void NativeClient_UpdateSession_mD9A27C99EF1A06532FA1C41E3C3282FE2C66D596 (void);
// 0x0000015F BugsnagUnity.Payload.Session BugsnagUnity.NativeClient::GetCurrentSession()
extern void NativeClient_GetCurrentSession_mF5E91A0FB2CE85F1F3567DA76F88955F918BF584 (void);
// 0x00000160 System.Void BugsnagUnity.NativeClient::PopulateSession(System.IntPtr,System.String,System.String,System.Int32,System.Int32)
extern void NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33 (void);
// 0x00000161 System.Void BugsnagUnity.NativeCode::bugsnag_startBugsnagWithConfiguration(System.IntPtr,System.String)
extern void NativeCode_bugsnag_startBugsnagWithConfiguration_mEAFD766118099EEFECA721763B3517076CB26432 (void);
// 0x00000162 System.Void BugsnagUnity.NativeCode::bugsnag_setMetadata(System.IntPtr,System.String,System.String[],System.Int32)
extern void NativeCode_bugsnag_setMetadata_m2D4CCF2FDA70707426A7846B849EF5DF76AFC6CD (void);
// 0x00000163 System.Void BugsnagUnity.NativeCode::bugsnag_removeMetadata(System.IntPtr,System.String)
extern void NativeCode_bugsnag_removeMetadata_m2A5EAFCDB3211986AA239D732F917D43EECFDB9C (void);
// 0x00000164 System.Void BugsnagUnity.NativeCode::bugsnag_retrieveAppData(System.IntPtr,System.Action`3<System.IntPtr,System.String,System.String>)
extern void NativeCode_bugsnag_retrieveAppData_m5FC53DA469B73CE6A7F2D95C869D5A21229FE1E9 (void);
// 0x00000165 System.Void BugsnagUnity.NativeCode::bugsnag_retrieveDeviceData(System.IntPtr,System.Action`3<System.IntPtr,System.String,System.String>)
extern void NativeCode_bugsnag_retrieveDeviceData_m84F23E5E4D43842E41F261058B6A12C26821B78A (void);
// 0x00000166 System.Void BugsnagUnity.NativeCode::bugsnag_retrieveCurrentSession(System.IntPtr,BugsnagUnity.NativeCode/SessionInformation)
extern void NativeCode_bugsnag_retrieveCurrentSession_m7FB5C9FC59EF483ED1140A701171AD7BB29C10DA (void);
// 0x00000167 System.Void BugsnagUnity.NativeCode::bugsnag_retrieveMetaData(System.IntPtr,BugsnagUnity.NativeCode/MetadataInformation)
extern void NativeCode_bugsnag_retrieveMetaData_m6F4D935D491EEE18C55EF1D1194F785A6D5D6381 (void);
// 0x00000168 System.Void BugsnagUnity.NativeCode::bugsnag_populateUser(BugsnagUnity.NativeUser&)
extern void NativeCode_bugsnag_populateUser_m0B3FB2E1559881B15CB71DC2F8E7B2E7A0214F63 (void);
// 0x00000169 System.IntPtr BugsnagUnity.NativeCode::bugsnag_createConfiguration(System.String)
extern void NativeCode_bugsnag_createConfiguration_mBA0B4BAA27D76A9A110CB1D3088708973769E2AA (void);
// 0x0000016A System.Void BugsnagUnity.NativeCode::bugsnag_setReleaseStage(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setReleaseStage_mC82736B1AF2F9343001145FB390A9BD6EDDC63C6 (void);
// 0x0000016B System.Void BugsnagUnity.NativeCode::bugsnag_setAutoNotifyConfig(System.IntPtr,System.Boolean)
extern void NativeCode_bugsnag_setAutoNotifyConfig_mF85CA578E18084046A8B4DD0796685579C0F11C3 (void);
// 0x0000016C System.Void BugsnagUnity.NativeCode::bugsnag_setAutoTrackSessions(System.IntPtr,System.Boolean)
extern void NativeCode_bugsnag_setAutoTrackSessions_m1FF88E243B13C49EA3BA5F4DA2DC19AC1E0D5237 (void);
// 0x0000016D System.Void BugsnagUnity.NativeCode::bugsnag_setPersistUser(System.IntPtr,System.Boolean)
extern void NativeCode_bugsnag_setPersistUser_m1D5527D90C8AD826137F129318F04D9C89274349 (void);
// 0x0000016E System.Void BugsnagUnity.NativeCode::bugsnag_setSendLaunchCrashesSynchronously(System.IntPtr,System.Boolean)
extern void NativeCode_bugsnag_setSendLaunchCrashesSynchronously_m249DC6C42A1B7EC034B3E06474C7F3356871A522 (void);
// 0x0000016F System.Void BugsnagUnity.NativeCode::bugsnag_setContext(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setContext_mEB4F381A4A9A1B7D35D978A6B1C28B53913E723E (void);
// 0x00000170 System.Void BugsnagUnity.NativeCode::bugsnag_setMaxBreadcrumbs(System.IntPtr,System.Int32)
extern void NativeCode_bugsnag_setMaxBreadcrumbs_m83244ED9DA3568069E0EF86464CDFEB15C517A79 (void);
// 0x00000171 System.Void BugsnagUnity.NativeCode::bugsnag_setLaunchDurationMillis(System.IntPtr,System.UInt64)
extern void NativeCode_bugsnag_setLaunchDurationMillis_m4779B1C042C19C5D7DE26ACDD627E1E436F59288 (void);
// 0x00000172 System.Void BugsnagUnity.NativeCode::bugsnag_setMaxPersistedEvents(System.IntPtr,System.Int32)
extern void NativeCode_bugsnag_setMaxPersistedEvents_m5E7460D066275A1E596764651D097CB7CEE28CF9 (void);
// 0x00000173 System.Void BugsnagUnity.NativeCode::bugsnag_setAppHangThresholdMillis(System.IntPtr,System.UInt64)
extern void NativeCode_bugsnag_setAppHangThresholdMillis_mA4020570996DE65D9714B8E90EE3220358A0915E (void);
// 0x00000174 System.Void BugsnagUnity.NativeCode::bugsnag_setEnabledBreadcrumbTypes(System.IntPtr,System.String[],System.Int32)
extern void NativeCode_bugsnag_setEnabledBreadcrumbTypes_m4FE8522985DA3909C8441B1E3D6959909EE552DE (void);
// 0x00000175 System.Void BugsnagUnity.NativeCode::bugsnag_setEnabledErrorTypes(System.IntPtr,System.String[],System.Int32)
extern void NativeCode_bugsnag_setEnabledErrorTypes_mDA2DF50E0AF2E18926B657F94139AA559CC3A937 (void);
// 0x00000176 System.Void BugsnagUnity.NativeCode::bugsnag_setDiscardClasses(System.IntPtr,System.String[],System.Int32)
extern void NativeCode_bugsnag_setDiscardClasses_mE0CA7A4F39C6C2AEA42F285A0E43814A180CD0E9 (void);
// 0x00000177 System.Void BugsnagUnity.NativeCode::bugsnag_setRedactedKeys(System.IntPtr,System.String[],System.Int32)
extern void NativeCode_bugsnag_setRedactedKeys_m594381F4B8C60F1E7FACC20CDA29D15D17A7E15A (void);
// 0x00000178 System.Void BugsnagUnity.NativeCode::bugsnag_setContextConfig(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setContextConfig_m579B96D1134B90DF7FC573682A3F84E5CE6EBDD8 (void);
// 0x00000179 System.Void BugsnagUnity.NativeCode::bugsnag_setAppVersion(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setAppVersion_mFF4D517B373687093292F5CB7CF0731E15B78CA0 (void);
// 0x0000017A System.Void BugsnagUnity.NativeCode::bugsnag_setBundleVersion(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setBundleVersion_mCD55AEDAFFD38FE3C49576D5A411A8BE1D27E21F (void);
// 0x0000017B System.Void BugsnagUnity.NativeCode::bugsnag_setThreadSendPolicy(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setThreadSendPolicy_m28D0C82AA40E035EF1E929DAD598AA2242DFE0FB (void);
// 0x0000017C System.Void BugsnagUnity.NativeCode::bugsnag_setAppType(System.IntPtr,System.String)
extern void NativeCode_bugsnag_setAppType_m14AD8D79B7A4009D7B304656966A03A67D35FC12 (void);
// 0x0000017D System.Void BugsnagUnity.NativeCode::bugsnag_setEndpoints(System.IntPtr,System.String,System.String)
extern void NativeCode_bugsnag_setEndpoints_m2E410B21174ECB9A690E729C67EB56E0C0666425 (void);
// 0x0000017E System.Void BugsnagUnity.NativeCode::bugsnag_setNotifyReleaseStages(System.IntPtr,System.String[],System.Int32)
extern void NativeCode_bugsnag_setNotifyReleaseStages_mC37F2DB64DF62124769BE5A518C5DBADBBF4BFC3 (void);
// 0x0000017F System.Void BugsnagUnity.NativeCode::bugsnag_addBreadcrumb(System.String,System.String,System.String[],System.Int32)
extern void NativeCode_bugsnag_addBreadcrumb_mB1819EBD786FF444E9D893FEC27BE3AEDEF2047E (void);
// 0x00000180 System.Void BugsnagUnity.NativeCode::bugsnag_retrieveBreadcrumbs(System.IntPtr,BugsnagUnity.NativeCode/BreadcrumbInformation)
extern void NativeCode_bugsnag_retrieveBreadcrumbs_mDE4E6AAE677B69199A9708D6901DDC7C1CE56BF7 (void);
// 0x00000181 System.Void BugsnagUnity.NativeCode::bugsnag_setUser(System.String,System.String,System.String)
extern void NativeCode_bugsnag_setUser_mF99BA30B1EFCEF238475409B096B5CEA41919BA3 (void);
// 0x00000182 System.Void BugsnagUnity.NativeCode::bugsnag_startSession()
extern void NativeCode_bugsnag_startSession_m99412FD1B43130F35F5CD17B158B4910AB45CC0C (void);
// 0x00000183 System.Boolean BugsnagUnity.NativeCode::bugsnag_resumeSession()
extern void NativeCode_bugsnag_resumeSession_m3DC212259F921171EB3171AFEE830C0B329C3272 (void);
// 0x00000184 System.Void BugsnagUnity.NativeCode::bugsnag_registerSession(System.String,System.Int64,System.Int32,System.Int32)
extern void NativeCode_bugsnag_registerSession_m891084DDF6D5C079778258A1E1CA2C7668066412 (void);
// 0x00000185 System.Void BugsnagUnity.NativeCode/SessionInformation::.ctor(System.Object,System.IntPtr)
extern void SessionInformation__ctor_m80E5F3A5DD348E11EF0F47D67A7585359B409A21 (void);
// 0x00000186 System.Void BugsnagUnity.NativeCode/SessionInformation::Invoke(System.IntPtr,System.String,System.String,System.Int32,System.Int32)
extern void SessionInformation_Invoke_m82D11BD0F4F9BAFB9633E2A03B192B69690BAA0A (void);
// 0x00000187 System.IAsyncResult BugsnagUnity.NativeCode/SessionInformation::BeginInvoke(System.IntPtr,System.String,System.String,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SessionInformation_BeginInvoke_m06790AB6650E3A4BD875EF1E92C93F72448F367D (void);
// 0x00000188 System.Void BugsnagUnity.NativeCode/SessionInformation::EndInvoke(System.IAsyncResult)
extern void SessionInformation_EndInvoke_mA1A78332EB9539B1DD860FF6F7252C0139FBC526 (void);
// 0x00000189 System.Void BugsnagUnity.NativeCode/MetadataInformation::.ctor(System.Object,System.IntPtr)
extern void MetadataInformation__ctor_m402E31C331AF5E3C0F17B1A46E3B0BA3EF5521B8 (void);
// 0x0000018A System.Void BugsnagUnity.NativeCode/MetadataInformation::Invoke(System.IntPtr,System.String,System.String[],System.Int32,System.String[],System.Int32)
extern void MetadataInformation_Invoke_m7B2D1E89D6C4E1C24EF5544322E5505758391832 (void);
// 0x0000018B System.IAsyncResult BugsnagUnity.NativeCode/MetadataInformation::BeginInvoke(System.IntPtr,System.String,System.String[],System.Int32,System.String[],System.Int32,System.AsyncCallback,System.Object)
extern void MetadataInformation_BeginInvoke_m16DE65DC2DC567D044F3185F3260989958E34602 (void);
// 0x0000018C System.Void BugsnagUnity.NativeCode/MetadataInformation::EndInvoke(System.IAsyncResult)
extern void MetadataInformation_EndInvoke_m4BAE31330DC8A72DF5962FCD0AA66D0357A6CAA8 (void);
// 0x0000018D System.Void BugsnagUnity.NativeCode/BreadcrumbInformation::.ctor(System.Object,System.IntPtr)
extern void BreadcrumbInformation__ctor_mCD9177E11CF3D09D5CDA48E56B99E403734158F2 (void);
// 0x0000018E System.Void BugsnagUnity.NativeCode/BreadcrumbInformation::Invoke(System.IntPtr,System.String,System.String,System.String,System.String[],System.Int32,System.String[],System.Int32)
extern void BreadcrumbInformation_Invoke_mAF96670D1807562532E2CE4BB3723B25F63E1609 (void);
// 0x0000018F System.IAsyncResult BugsnagUnity.NativeCode/BreadcrumbInformation::BeginInvoke(System.IntPtr,System.String,System.String,System.String,System.String[],System.Int32,System.String[],System.Int32,System.AsyncCallback,System.Object)
extern void BreadcrumbInformation_BeginInvoke_m8614BCB15E426A4C47B9CD03C8155884240286A0 (void);
// 0x00000190 System.Void BugsnagUnity.NativeCode/BreadcrumbInformation::EndInvoke(System.IAsyncResult)
extern void BreadcrumbInformation_EndInvoke_m55850EFD8AD4186B47FFA9298F9AC376547A777C (void);
// 0x00000191 System.Type BugsnagUnity.Reflection.ReflectionUtils::GetTypeInfo(System.Type)
extern void ReflectionUtils_GetTypeInfo_m8200637566FD6148DDFF72756582FD90AAB33909 (void);
// 0x00000192 System.Boolean BugsnagUnity.Reflection.ReflectionUtils::IsValueType(System.Type)
extern void ReflectionUtils_IsValueType_mF9FBA77AB990261AD566ECAD3B7982E3F5201CF5 (void);
// 0x00000193 System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> BugsnagUnity.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern void ReflectionUtils_GetConstructors_m031A0E28223051E0201B1CECF7E5582E897A1452 (void);
// 0x00000194 System.Reflection.ConstructorInfo BugsnagUnity.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern void ReflectionUtils_GetConstructorInfo_mA96190E0CD7F393AE4B6CB0F1EDA0028138B5754 (void);
// 0x00000195 System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> BugsnagUnity.Reflection.ReflectionUtils::GetProperties(System.Type)
extern void ReflectionUtils_GetProperties_mD8A3A532855DCE939C9316270AF2F987DBBF9669 (void);
// 0x00000196 System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> BugsnagUnity.Reflection.ReflectionUtils::GetFields(System.Type)
extern void ReflectionUtils_GetFields_m2C8BF55D756CC8A5318D5B8BF3E778FE3AD3F4B7 (void);
// 0x00000197 System.Reflection.MethodInfo BugsnagUnity.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetGetterMethodInfo_m6E06D407BFC3FF1897FD05D50CE9BCD60077EAC7 (void);
// 0x00000198 System.Reflection.MethodInfo BugsnagUnity.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetSetterMethodInfo_m7CAA815B4AF1EB8E0AB696CC719FE6FA047683B0 (void);
// 0x00000199 BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate BugsnagUnity.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern void ReflectionUtils_GetContructor_mEE260A83C0DB69A7C461E17B2FFBBF617A89AE22 (void);
// 0x0000019A BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate BugsnagUnity.Reflection.ReflectionUtils::GetConstructorByExpression(System.Reflection.ConstructorInfo)
extern void ReflectionUtils_GetConstructorByExpression_m700C4250A9B8E8A887EF726AE20C13130B5AA50B (void);
// 0x0000019B BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate BugsnagUnity.Reflection.ReflectionUtils::GetConstructorByExpression(System.Type,System.Type[])
extern void ReflectionUtils_GetConstructorByExpression_m3CA39A187A6F314351301BBDA066F9A2E15CCC16 (void);
// 0x0000019C BugsnagUnity.Reflection.ReflectionUtils/GetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetGetMethod_mE390C48841E789CCFE5AD6CBE0630B6A10EA5F65 (void);
// 0x0000019D BugsnagUnity.Reflection.ReflectionUtils/GetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern void ReflectionUtils_GetGetMethod_mFFCB413358FE30277B8020BFD64EC28E25FA0554 (void);
// 0x0000019E BugsnagUnity.Reflection.ReflectionUtils/GetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetGetMethodByExpression(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetGetMethodByExpression_mEE195F4B0D88D03503FA51B2F742C579AFA58A04 (void);
// 0x0000019F BugsnagUnity.Reflection.ReflectionUtils/GetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetGetMethodByExpression(System.Reflection.FieldInfo)
extern void ReflectionUtils_GetGetMethodByExpression_mD73C1C85E4FA832C54D1C126721CA5FF51979902 (void);
// 0x000001A0 BugsnagUnity.Reflection.ReflectionUtils/SetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetSetMethod_m6C70C1452B762C1E9D04952185363D3B307F302A (void);
// 0x000001A1 BugsnagUnity.Reflection.ReflectionUtils/SetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern void ReflectionUtils_GetSetMethod_m076CD7350859D03F3B48C34C36C527D424AA2DDC (void);
// 0x000001A2 BugsnagUnity.Reflection.ReflectionUtils/SetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetSetMethodByExpression(System.Reflection.PropertyInfo)
extern void ReflectionUtils_GetSetMethodByExpression_m7B26993D4AFF1C1E4EEFCB33A271A51736E256FF (void);
// 0x000001A3 BugsnagUnity.Reflection.ReflectionUtils/SetDelegate BugsnagUnity.Reflection.ReflectionUtils::GetSetMethodByExpression(System.Reflection.FieldInfo)
extern void ReflectionUtils_GetSetMethodByExpression_m5C512D6EFEB12E113714989E665DE86C91895E59 (void);
// 0x000001A4 System.Linq.Expressions.BinaryExpression BugsnagUnity.Reflection.ReflectionUtils::Assign(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
extern void ReflectionUtils_Assign_m84D989E29B5D3551BD10688045EF9A73365A1A5C (void);
// 0x000001A5 System.Void BugsnagUnity.Reflection.ReflectionUtils::.cctor()
extern void ReflectionUtils__cctor_m352D628AF2F92D1D32FEAC5120A32447E11FAF95 (void);
// 0x000001A6 System.Void BugsnagUnity.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern void GetDelegate__ctor_m42F547A879971EAE8112BB147FFEF5B906B378AA (void);
// 0x000001A7 System.Object BugsnagUnity.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern void GetDelegate_Invoke_m4B1B57B4C90D9C43C55266794241272FA552D772 (void);
// 0x000001A8 System.IAsyncResult BugsnagUnity.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern void GetDelegate_BeginInvoke_m85E6CE07435D4699C71E744A1290BE18B2875A0B (void);
// 0x000001A9 System.Object BugsnagUnity.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern void GetDelegate_EndInvoke_mBFBF038A60A9C1C7B1A4158BEF4374857CED8EC4 (void);
// 0x000001AA System.Void BugsnagUnity.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern void SetDelegate__ctor_m06974E548F95259738E17C511584802D40E62A2F (void);
// 0x000001AB System.Void BugsnagUnity.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern void SetDelegate_Invoke_m0A256247493DA230039316FAF6645AFDD220AB2E (void);
// 0x000001AC System.IAsyncResult BugsnagUnity.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern void SetDelegate_BeginInvoke_m811041CA65EA5BF4A8E3AD765B654C96E5FD0018 (void);
// 0x000001AD System.Void BugsnagUnity.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern void SetDelegate_EndInvoke_m4ABE97C7B5C72E2D8A210EAB86C9C7B556EFEB74 (void);
// 0x000001AE System.Void BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern void ConstructorDelegate__ctor_mA07D9FAFF68BB9244CF8502F53B0016817EFE51C (void);
// 0x000001AF System.Object BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern void ConstructorDelegate_Invoke_mC8C73B9C134DDE6B3E820A460B945F8F6344F1C5 (void);
// 0x000001B0 System.IAsyncResult BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern void ConstructorDelegate_BeginInvoke_m20501AECEC449AB155D41A409F4BB22644B2476F (void);
// 0x000001B1 System.Object BugsnagUnity.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern void ConstructorDelegate_EndInvoke_m546E433E66E036CCA66A0AE9CEF22D826095162A (void);
// 0x000001B2 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::.ctor(System.Object,System.IntPtr)
// 0x000001B3 TValue BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::Invoke(TKey)
// 0x000001B4 System.IAsyncResult BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::BeginInvoke(TKey,System.AsyncCallback,System.Object)
// 0x000001B5 TValue BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::EndInvoke(System.IAsyncResult)
// 0x000001B6 T BugsnagUnity.Reflection.ReflectionUtils/Assigner`1::Assign(T&,T)
// 0x000001B7 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::.ctor(BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// 0x000001B8 TValue BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Get(TKey)
// 0x000001B9 TValue BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::AddValue(TKey)
// 0x000001BA System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(TKey,TValue)
// 0x000001BB System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::ContainsKey(TKey)
// 0x000001BC System.Collections.Generic.ICollection`1<TKey> BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Keys()
// 0x000001BD System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(TKey)
// 0x000001BE System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::TryGetValue(TKey,TValue&)
// 0x000001BF System.Collections.Generic.ICollection`1<TValue> BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Values()
// 0x000001C0 TValue BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Item(TKey)
// 0x000001C1 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::set_Item(TKey,TValue)
// 0x000001C2 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x000001C3 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Clear()
// 0x000001C4 System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x000001C5 System.Void BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// 0x000001C6 System.Int32 BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Count()
// 0x000001C7 System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_IsReadOnly()
// 0x000001C8 System.Boolean BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// 0x000001C9 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::GetEnumerator()
// 0x000001CA System.Collections.IEnumerator BugsnagUnity.Reflection.ReflectionUtils/ThreadSafeDictionary`2::System.Collections.IEnumerable.GetEnumerator()
// 0x000001CB System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass27_0::.ctor()
extern void U3CU3Ec__DisplayClass27_0__ctor_m64A5ABC83EF634C7A9B0AFE40599DED34F125FFE (void);
// 0x000001CC System.Object BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass27_0::<GetConstructorByExpression>b__0(System.Object[])
extern void U3CU3Ec__DisplayClass27_0_U3CGetConstructorByExpressionU3Eb__0_m12020B676FE808337257A9F42A182D8550655B9F (void);
// 0x000001CD System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m8608C2C048A2B1D07044331692A2755E13161661 (void);
// 0x000001CE System.Object BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass33_0::<GetGetMethodByExpression>b__0(System.Object)
extern void U3CU3Ec__DisplayClass33_0_U3CGetGetMethodByExpressionU3Eb__0_mF1B5596A7E338D270BE0313BCAEE4B33F8E3F6E8 (void);
// 0x000001CF System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_mA24B640BD0B9234F13C745F4FE405E2427F3CC3C (void);
// 0x000001D0 System.Object BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass34_0::<GetGetMethodByExpression>b__0(System.Object)
extern void U3CU3Ec__DisplayClass34_0_U3CGetGetMethodByExpressionU3Eb__0_m29388C609B7BA0AE48004AA1741FEF6D7D4C0C25 (void);
// 0x000001D1 System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_m1A99E5F0648E58FC0F50D98011FEA7F034EA954E (void);
// 0x000001D2 System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass39_0::<GetSetMethodByExpression>b__0(System.Object,System.Object)
extern void U3CU3Ec__DisplayClass39_0_U3CGetSetMethodByExpressionU3Eb__0_m5C951EB7C15931E2AF678344448CF2E5EA557C52 (void);
// 0x000001D3 System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_m3E9D73A43818BFCF453B8E32859E735B393AC549 (void);
// 0x000001D4 System.Void BugsnagUnity.Reflection.ReflectionUtils/<>c__DisplayClass40_0::<GetSetMethodByExpression>b__0(System.Object,System.Object)
extern void U3CU3Ec__DisplayClass40_0_U3CGetSetMethodByExpressionU3Eb__0_mFAA849836DB74FA844B8110F54ADC2935A1F0639 (void);
// 0x000001D5 System.Boolean BugsnagUnity.Polyfills.String::IsNullOrWhiteSpace(System.String)
extern void String_IsNullOrWhiteSpace_m01A9E2DCA5076A7AC4B22D2BAEBA5D687EFEA210 (void);
// 0x000001D6 System.Void BugsnagUnity.Payload.App::.ctor(BugsnagUnity.IConfiguration)
extern void App__ctor_m41B9BA5304B4A4B284FABB134533D9B46EFD7573 (void);
// 0x000001D7 System.Void BugsnagUnity.Payload.App::set_Version(System.String)
extern void App_set_Version_m4AC2C8772F7F5EC60329DDD376156D0C10CB7DB2 (void);
// 0x000001D8 System.Void BugsnagUnity.Payload.App::set_ReleaseStage(System.String)
extern void App_set_ReleaseStage_m245AC7AACC9D97DE816F15197C81973EE8F97D31 (void);
// 0x000001D9 System.Void BugsnagUnity.Payload.App::set_InForeground(System.Boolean)
extern void App_set_InForeground_mC3452C8182FA0BD64F497F4BACC053420B507015 (void);
// 0x000001DA System.Void BugsnagUnity.Payload.App::set_DurationInForeground(System.TimeSpan)
extern void App_set_DurationInForeground_m12D4BB2A384FFD3480CE107A83A662971FAD7492 (void);
// 0x000001DB System.String BugsnagUnity.Payload.App::GetAppType()
extern void App_GetAppType_m0DFF6AED8C83E3562A7DA1EA3C04B9DF05A63816 (void);
// 0x000001DC System.Void BugsnagUnity.Payload.App::AddDuration()
extern void App_AddDuration_m9C64485961D5F3B77118BBAD278D4DE650871893 (void);
// 0x000001DD BugsnagUnity.Payload.Breadcrumb BugsnagUnity.Payload.Breadcrumb::FromReport(BugsnagUnity.Payload.Report)
extern void Breadcrumb_FromReport_m49D19819F6E4B47B520A5FB24F649835317AA486 (void);
// 0x000001DE System.Void BugsnagUnity.Payload.Breadcrumb::.ctor(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Breadcrumb__ctor_mC463BA6C91CF5A38C35D520090478B870A2131F3 (void);
// 0x000001DF System.Void BugsnagUnity.Payload.Breadcrumb::.ctor(System.String,BugsnagUnity.Payload.BreadcrumbType,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Breadcrumb__ctor_m57AE3F7316169B0AFBDAB136129724BA16724719 (void);
// 0x000001E0 System.String BugsnagUnity.Payload.Breadcrumb::get_Name()
extern void Breadcrumb_get_Name_m04C510CD0A223A483ED52FBAA060B3489D97A0C6 (void);
// 0x000001E1 System.String BugsnagUnity.Payload.Breadcrumb::get_Type()
extern void Breadcrumb_get_Type_m26C78E197F592E7D4C5C75253FCDFD814C4F184C (void);
// 0x000001E2 System.Collections.Generic.IDictionary`2<System.String,System.String> BugsnagUnity.Payload.Breadcrumb::get_Metadata()
extern void Breadcrumb_get_Metadata_m054F2596EFAD6E8EABFD1FEA1D51683651369964 (void);
// 0x000001E3 System.Void BugsnagUnity.Payload.Device::InitUnityVersion()
extern void Device_InitUnityVersion_m4ADCE7B552F74121CD7205741F3C85232C19583F (void);
// 0x000001E4 System.Void BugsnagUnity.Payload.Device::.ctor()
extern void Device__ctor_m5D238EC1EF5613725A09DCC2B0154FC9E20FC534 (void);
// 0x000001E5 System.Void BugsnagUnity.Payload.Device::.ctor(System.String)
extern void Device__ctor_mEBED8077E01C7C88268D3A17D1A122C19619565F (void);
// 0x000001E6 System.Void BugsnagUnity.Payload.Device::AddBatteryLevel()
extern void Device_AddBatteryLevel_m52FBCEDE6C3DABB2CF2E0FFE2E39EF3E59FA0C05 (void);
// 0x000001E7 System.Void BugsnagUnity.Payload.Device::AddRuntimeVersions(BugsnagUnity.IConfiguration)
extern void Device_AddRuntimeVersions_mC66FA17E3BDC47A2997B69CC4500A9B3BA91DF03 (void);
// 0x000001E8 System.String BugsnagUnity.Payload.Device::get_Hostname()
extern void Device_get_Hostname_m061751FF2EA9F718E3B7B9B83B844C8E7C777B22 (void);
// 0x000001E9 System.String BugsnagUnity.Payload.Device::get_OsName()
extern void Device_get_OsName_mC3B0BFF6D4F83BB7982BBEA3285A6BB58F45BB9B (void);
// 0x000001EA System.String BugsnagUnity.Payload.Device::GetDeviceID()
extern void Device_GetDeviceID_mFCE1BAF5297AEB55A22C400F6697187B2BF55E01 (void);
// 0x000001EB System.Void BugsnagUnity.Payload.Event::.ctor(System.String,BugsnagUnity.Payload.Metadata,BugsnagUnity.Payload.App,BugsnagUnity.Payload.Device,BugsnagUnity.Payload.User,BugsnagUnity.Payload.Exception[],BugsnagUnity.Payload.HandledState,BugsnagUnity.Payload.Breadcrumb[],BugsnagUnity.Payload.Session,System.Nullable`1<UnityEngine.LogType>)
extern void Event__ctor_m587443DAB06E9780B29148951C27EF3D74C83BC9 (void);
// 0x000001EC System.Void BugsnagUnity.Payload.Event::AddAndroidProjectPackagesToEvent(System.String[])
extern void Event_AddAndroidProjectPackagesToEvent_mF89EBEB6377F383715B177DF0CEAFECA040AB86B (void);
// 0x000001ED BugsnagUnity.Payload.Metadata BugsnagUnity.Payload.Event::get_Metadata()
extern void Event_get_Metadata_mC75A43D3C781A72083E9145DE6239270FC246EE4 (void);
// 0x000001EE BugsnagUnity.Payload.Session BugsnagUnity.Payload.Event::get_Session()
extern void Event_get_Session_m5BD12E033CB6D04B8A936CFA21F9CDFBBD1CFF8B (void);
// 0x000001EF System.Boolean BugsnagUnity.Payload.Event::get_IsHandled()
extern void Event_get_IsHandled_mCD2BDDDD2CB48529D43548C0B8771D84E875AC56 (void);
// 0x000001F0 System.String BugsnagUnity.Payload.Event::get_Context()
extern void Event_get_Context_mA722693A442538BC24823C392640E859822D85A5 (void);
// 0x000001F1 BugsnagUnity.Payload.Exception[] BugsnagUnity.Payload.Event::get_Exceptions()
extern void Event_get_Exceptions_m4FEDD76045127ABD7F30B8C196E5E0D403E6B403 (void);
// 0x000001F2 System.Boolean BugsnagUnity.Payload.Event::IsAndroidJavaError()
extern void Event_IsAndroidJavaError_m3224B5F0DF85CF4F4F575CBE97F9FD2F13211B85 (void);
// 0x000001F3 System.Void BugsnagUnity.Payload.Event::set_HandledState(BugsnagUnity.Payload.HandledState)
extern void Event_set_HandledState_m1C0B6DB32F3B677D167B89802CB6165A712B74BF (void);
// 0x000001F4 BugsnagUnity.Payload.HandledState BugsnagUnity.Payload.Exception::get_HandledState()
extern void Exception_get_HandledState_m28785ECB037DC49F3E05FA3CFE5FDC16561C4A73 (void);
// 0x000001F5 System.Void BugsnagUnity.Payload.Exception::.ctor(System.String,System.String,BugsnagUnity.Payload.StackTraceLine[],BugsnagUnity.Payload.HandledState,System.Boolean)
extern void Exception__ctor_m86A8360EF71BD99B153063372D02094423C03A68 (void);
// 0x000001F6 System.String BugsnagUnity.Payload.Exception::get_ErrorClass()
extern void Exception_get_ErrorClass_mFE31E4229149A240611C2D88FD23C737FA52E62D (void);
// 0x000001F7 System.String BugsnagUnity.Payload.Exception::get_ErrorMessage()
extern void Exception_get_ErrorMessage_m204AB1A369D32DCC62610A791F4A1FCA5CC41661 (void);
// 0x000001F8 BugsnagUnity.Payload.Exception BugsnagUnity.Payload.Exception::FromUnityLogMessage(BugsnagUnity.UnityLogMessage,System.Diagnostics.StackFrame[],BugsnagUnity.Severity,System.Boolean)
extern void Exception_FromUnityLogMessage_m20CFE990BF3F1BCC7D26AB2FA6D9FDD1ADC7E004 (void);
// 0x000001F9 System.Boolean BugsnagUnity.Payload.Exception::ShouldSend(BugsnagUnity.UnityLogMessage)
extern void Exception_ShouldSend_m384CD02922E763A66FC6D01E84CC480A94350D0C (void);
// 0x000001FA System.Void BugsnagUnity.Payload.Exception::.cctor()
extern void Exception__cctor_m3D98B4E211D384D61B0A8AACADE4EF6AE8FEA171 (void);
// 0x000001FB BugsnagUnity.Payload.HandledState BugsnagUnity.Payload.HandledState::ForUnhandledException()
extern void HandledState_ForUnhandledException_m8C8CCBCA294A031D7CE250F5EE2C4283E8F6D6B6 (void);
// 0x000001FC BugsnagUnity.Payload.HandledState BugsnagUnity.Payload.HandledState::ForUnityLogMessage(BugsnagUnity.Severity)
extern void HandledState_ForUnityLogMessage_mBA6927B0DC28190FB9CB3BAA294DF79F8765E9B0 (void);
// 0x000001FD System.Void BugsnagUnity.Payload.HandledState::.ctor(System.Boolean,BugsnagUnity.Severity,BugsnagUnity.Payload.HandledState/SeverityReason)
extern void HandledState__ctor_m5C84927D6245CF43C2B14AE4C85F8A0B0622BE06 (void);
// 0x000001FE System.Boolean BugsnagUnity.Payload.HandledState::get_Handled()
extern void HandledState_get_Handled_mFB5330A6D85BDD2D4552628E27A89D52D9EBC9ED (void);
// 0x000001FF BugsnagUnity.Payload.HandledState/SeverityReason BugsnagUnity.Payload.HandledState/SeverityReason::ForUnhandledException()
extern void SeverityReason_ForUnhandledException_m68AB1DC05CBEB6B835F9DF95733C56900557CABF (void);
// 0x00000200 BugsnagUnity.Payload.HandledState/SeverityReason BugsnagUnity.Payload.HandledState/SeverityReason::ForHandledException()
extern void SeverityReason_ForHandledException_m1F7C53235CD0CD3FBB34B70653623B73ED8BD585 (void);
// 0x00000201 System.Void BugsnagUnity.Payload.HandledState/SeverityReason::.ctor(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void SeverityReason__ctor_m467C2882B1FCABC232DF99EA9FA08B53067729BB (void);
// 0x00000202 System.Uri BugsnagUnity.Payload.IPayload::get_Endpoint()
// 0x00000203 System.Collections.Generic.KeyValuePair`2<System.String,System.String>[] BugsnagUnity.Payload.IPayload::get_Headers()
// 0x00000204 System.Void BugsnagUnity.Payload.Metadata::.ctor()
extern void Metadata__ctor_m2B28C18C6F0C6360DB7C0789C385ED6458484181 (void);
// 0x00000205 System.Void BugsnagUnity.Payload.Metadata::.ctor(BugsnagUnity.INativeClient)
extern void Metadata__ctor_mA308EBDA76A73A36216B0F92C8C85604D747B485 (void);
// 0x00000206 System.Void BugsnagUnity.Payload.Method::.ctor(System.Reflection.MethodBase)
extern void Method__ctor_m51CC5694183D07A04776960933FEFE1483B0A84F (void);
// 0x00000207 System.String BugsnagUnity.Payload.Method::DisplayName()
extern void Method_DisplayName_m1FCF7D819672941C54B216C9201BE7B863FE8B68 (void);
// 0x00000208 System.Void BugsnagUnity.Payload.Method/<>c::.cctor()
extern void U3CU3Ec__cctor_mA88A3C5E19FFB2097C626B4308D9C991E4A75B01 (void);
// 0x00000209 System.Void BugsnagUnity.Payload.Method/<>c::.ctor()
extern void U3CU3Ec__ctor_m42AA96B9EB7B9F1C502A3710FF1A1BAB465875CC (void);
// 0x0000020A System.String BugsnagUnity.Payload.Method/<>c::<DisplayName>b__2_1(System.Type)
extern void U3CU3Ec_U3CDisplayNameU3Eb__2_1_mAEA90492AED9E4E98DA991B718D2645ABECDD1FD (void);
// 0x0000020B System.String BugsnagUnity.Payload.Method/<>c::<DisplayName>b__2_0(System.Reflection.ParameterInfo)
extern void U3CU3Ec_U3CDisplayNameU3Eb__2_0_m84433977A1889746FF907582EB4F363E42E813B7 (void);
// 0x0000020C System.Void BugsnagUnity.Payload.MethodParameter::.ctor(System.Reflection.ParameterInfo)
extern void MethodParameter__ctor_m9F2CB9654F50EC928E9F6BDF99B7CDFFDF3F8B4F (void);
// 0x0000020D System.String BugsnagUnity.Payload.MethodParameter::DisplayName()
extern void MethodParameter_DisplayName_m0C4963CD52E9B7664CC81806B43B1BC9985010BF (void);
// 0x0000020E BugsnagUnity.Payload.NotifierInfo BugsnagUnity.Payload.NotifierInfo::get_Instance()
extern void NotifierInfo_get_Instance_mAD5980B9F6E53B96C691D19C42359B21DA26C73C (void);
// 0x0000020F System.Void BugsnagUnity.Payload.NotifierInfo::.ctor()
extern void NotifierInfo__ctor_m7E0234B62716BA0011E880DE50AFC175ABC75191 (void);
// 0x00000210 System.Void BugsnagUnity.Payload.NotifierInfo::.cctor()
extern void NotifierInfo__cctor_m92B2663812AF0BADD31F7AAC4B6C533174D57720 (void);
// 0x00000211 System.Void BugsnagUnity.Payload.PayloadExtensions::AddToPayload(System.Collections.Generic.IDictionary`2<System.String,T>,System.String,T)
// 0x00000212 U BugsnagUnity.Payload.PayloadExtensions::Get(System.Collections.Generic.Dictionary`2<T,U>,T)
// 0x00000213 BugsnagUnity.IConfiguration BugsnagUnity.Payload.Report::get_Configuration()
extern void Report_get_Configuration_mCFBF9266C8D9890E405C892AF38EEDD72DAFF709 (void);
// 0x00000214 System.Uri BugsnagUnity.Payload.Report::get_Endpoint()
extern void Report_get_Endpoint_m372FDC625EEEFB11E25161EBFDD298058ECF2B07 (void);
// 0x00000215 System.Collections.Generic.KeyValuePair`2<System.String,System.String>[] BugsnagUnity.Payload.Report::get_Headers()
extern void Report_get_Headers_mFD25FC0EBA0EED4D62440927EA0275ED7F256879 (void);
// 0x00000216 System.Boolean BugsnagUnity.Payload.Report::get_Ignored()
extern void Report_get_Ignored_m9D78B9756E86569CB66CB772D24FAC3AB35F1F72 (void);
// 0x00000217 System.Void BugsnagUnity.Payload.Report::set_Ignored(System.Boolean)
extern void Report_set_Ignored_m5DFD0D3C7919958F4F0890DCD479720F9CE79582 (void);
// 0x00000218 System.Void BugsnagUnity.Payload.Report::.ctor(BugsnagUnity.IConfiguration,BugsnagUnity.Payload.Event)
extern void Report__ctor_mD48B274358B93E7D12BC830D8DC35D7C59D08670 (void);
// 0x00000219 BugsnagUnity.Payload.Event BugsnagUnity.Payload.Report::get_Event()
extern void Report_get_Event_mFB943D64F68FDB07C1A3D1FDAB62AC3FF2AA615A (void);
// 0x0000021A System.Boolean BugsnagUnity.Payload.Report::get_IsHandled()
extern void Report_get_IsHandled_m1793E8C127D675BE35EC8AAE86811EB00B9A5E3D (void);
// 0x0000021B BugsnagUnity.Payload.Session BugsnagUnity.Payload.Report::get_Session()
extern void Report_get_Session_mDEB462A5F4872A5146EA1E45C51317201953D40F (void);
// 0x0000021C System.String BugsnagUnity.Payload.Report::get_Context()
extern void Report_get_Context_mB985979CACF96D130B19FB078BB83136D0A1D9D0 (void);
// 0x0000021D BugsnagUnity.Payload.Exception[] BugsnagUnity.Payload.Report::get_Exceptions()
extern void Report_get_Exceptions_mCD79F220EA93B9EB710DFFBA951F5A1BCEFD8090 (void);
// 0x0000021E System.Guid BugsnagUnity.Payload.Session::get_Id()
extern void Session_get_Id_m5AA03AAE88A78D7B419CA9FC4AE5D02C9DFA405C (void);
// 0x0000021F System.DateTime BugsnagUnity.Payload.Session::get_StartedAt()
extern void Session_get_StartedAt_m0F447C2AAF418766688D2B9B1912D9C2323F02C3 (void);
// 0x00000220 System.Int32 BugsnagUnity.Payload.Session::HandledCount()
extern void Session_HandledCount_m715C05B265E3D3BE4A3163F796E6BE6571388D0A (void);
// 0x00000221 System.Int32 BugsnagUnity.Payload.Session::UnhandledCount()
extern void Session_UnhandledCount_m8FBB8670C4C46D102267F7DFA4D4E1A492678DA1 (void);
// 0x00000222 BugsnagUnity.Payload.SessionEvents BugsnagUnity.Payload.Session::get_Events()
extern void Session_get_Events_mA95D0EACE57A8CE5EE635DB751545865B6A7156F (void);
// 0x00000223 System.Boolean BugsnagUnity.Payload.Session::get_Stopped()
extern void Session_get_Stopped_m2723A1AF20DEA2A32543217F6E05B044259016AD (void);
// 0x00000224 System.Void BugsnagUnity.Payload.Session::set_Stopped(System.Boolean)
extern void Session_set_Stopped_mB5646C5B6A7E3BFE735B48D70AB5B3077E93BD7E (void);
// 0x00000225 System.Void BugsnagUnity.Payload.Session::.ctor()
extern void Session__ctor_m855F3D28E8CC56ABCFF255F069BF21B57698D3FB (void);
// 0x00000226 System.Void BugsnagUnity.Payload.Session::.ctor(System.DateTime,System.Int32,System.Int32)
extern void Session__ctor_m911C5FDDEF9651622DACE85B454F3DD6EE507E46 (void);
// 0x00000227 System.Void BugsnagUnity.Payload.Session::.ctor(System.String,System.DateTime,System.Int32,System.Int32)
extern void Session__ctor_m10EE3F51C23DC3213E7BDC79EDECA97B70B53737 (void);
// 0x00000228 System.Void BugsnagUnity.Payload.Session::AddException(BugsnagUnity.Payload.Report)
extern void Session_AddException_mB64061B639958292541D50151BC1A040AE849D3C (void);
// 0x00000229 BugsnagUnity.Payload.Session BugsnagUnity.Payload.Session::Copy()
extern void Session_Copy_m5D24A54550FADEA1BD726431A94556EE1931F5FC (void);
// 0x0000022A System.Void BugsnagUnity.Payload.SessionEvents::.ctor(System.Int32,System.Int32)
extern void SessionEvents__ctor_m06A826A9815D5A15CCFF11D5C943227ADBDBD63C (void);
// 0x0000022B System.Int32 BugsnagUnity.Payload.SessionEvents::get_Handled()
extern void SessionEvents_get_Handled_m60BA5FFAD5A91CA80098D68E2F90E4615B4F4CDF (void);
// 0x0000022C System.Int32 BugsnagUnity.Payload.SessionEvents::get_Unhandled()
extern void SessionEvents_get_Unhandled_mDE670CC59779CE0E361761C060FD0578E7C5DB32 (void);
// 0x0000022D System.Void BugsnagUnity.Payload.SessionEvents::IncrementHandledCount()
extern void SessionEvents_IncrementHandledCount_mB343B8E9EB2448FC73CB5906FE317C0660AF658B (void);
// 0x0000022E System.Void BugsnagUnity.Payload.SessionEvents::IncrementUnhandledCount()
extern void SessionEvents_IncrementUnhandledCount_m4E2A23D085B7964FABC8B5815E08FBDD0AF17A7E (void);
// 0x0000022F BugsnagUnity.IConfiguration BugsnagUnity.Payload.SessionReport::get_Configuration()
extern void SessionReport_get_Configuration_m16A6000CA773BA8C13CE3EB1B93A6D5D4A13BEF8 (void);
// 0x00000230 System.Uri BugsnagUnity.Payload.SessionReport::get_Endpoint()
extern void SessionReport_get_Endpoint_m3C2EE493942EF71F82A1D8EB28056F4D3C92E7E2 (void);
// 0x00000231 System.Collections.Generic.KeyValuePair`2<System.String,System.String>[] BugsnagUnity.Payload.SessionReport::get_Headers()
extern void SessionReport_get_Headers_mCA32F2E84B3794082297C32CBAFCB18301C190F3 (void);
// 0x00000232 System.Void BugsnagUnity.Payload.SessionReport::.ctor(BugsnagUnity.IConfiguration,BugsnagUnity.Payload.App,BugsnagUnity.Payload.Device,BugsnagUnity.Payload.User,BugsnagUnity.Payload.Session)
extern void SessionReport__ctor_mFF3D74D0DBD96118F01E349F4E36883471442EFA (void);
// 0x00000233 System.Void BugsnagUnity.Payload.SessionReport/Session::.ctor(BugsnagUnity.Payload.User,BugsnagUnity.Payload.Session)
extern void Session__ctor_m8BBDC5EDF1B427D1B51E794DDDE6668EAA793DEF (void);
// 0x00000234 BugsnagUnity.Payload.StackTraceLine[] BugsnagUnity.Payload.StackTrace::get_StackTraceLines()
extern void StackTrace_get_StackTraceLines_mA9224DCBDF91C0F70811432024079618B3B16C13 (void);
// 0x00000235 System.Void BugsnagUnity.Payload.StackTrace::.ctor(System.Diagnostics.StackFrame[])
extern void StackTrace__ctor_m8553D9F6141B6FAC735D2538B4A7C85CA2BF40EE (void);
// 0x00000236 System.Void BugsnagUnity.Payload.StackTrace::.ctor(System.String)
extern void StackTrace__ctor_m8BD07040FDFAFCBCC7DF13321535B0B4C82E6673 (void);
// 0x00000237 System.Void BugsnagUnity.Payload.StackTrace::.ctor(System.String,BugsnagUnity.Payload.StackTraceFormat)
extern void StackTrace__ctor_mB820A84A6E3E2FEC2F50AD4DA07DB40F3A650226 (void);
// 0x00000238 System.Collections.Generic.IEnumerator`1<BugsnagUnity.Payload.StackTraceLine> BugsnagUnity.Payload.StackTrace::GetEnumerator()
extern void StackTrace_GetEnumerator_mEF69D0B6B8681275EEED4E28E27E503B2134CE54 (void);
// 0x00000239 System.Collections.IEnumerator BugsnagUnity.Payload.StackTrace::System.Collections.IEnumerable.GetEnumerator()
extern void StackTrace_System_Collections_IEnumerable_GetEnumerator_mF135DFABA72AFEC4AF3088C3BCA699FA8C36B89A (void);
// 0x0000023A System.Void BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__6__ctor_mFE8404DC7B4C243C72E84A84294F4608EB6AACFF (void);
// 0x0000023B System.Void BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__6_System_IDisposable_Dispose_m4B616A105982FBD2319F9BD2F4385F382743C86A (void);
// 0x0000023C System.Boolean BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::MoveNext()
extern void U3CGetEnumeratorU3Ed__6_MoveNext_mD10CE1BEE0F63574579627C2D964D3795C676D2F (void);
// 0x0000023D BugsnagUnity.Payload.StackTraceLine BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::System.Collections.Generic.IEnumerator<BugsnagUnity.Payload.StackTraceLine>.get_Current()
extern void U3CGetEnumeratorU3Ed__6_System_Collections_Generic_IEnumeratorU3CBugsnagUnity_Payload_StackTraceLineU3E_get_Current_m72F7E7B5D74A1D5AE3DCF796E77F1A3BB4A8BC49 (void);
// 0x0000023E System.Void BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_Reset_m78F1F0653A23E0E8C64F388141FBEB7D3DFB0BCA (void);
// 0x0000023F System.Object BugsnagUnity.Payload.StackTrace/<GetEnumerator>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_get_Current_mBEB6651785EFD3B85CC34ACABF6B46F327F9E700 (void);
// 0x00000240 System.Text.RegularExpressions.Regex BugsnagUnity.Payload.StackTraceLine::get_StackTraceLineRegex()
extern void StackTraceLine_get_StackTraceLineRegex_m5DF908873D5D824CA3EB91A262320177277B8546 (void);
// 0x00000241 System.Text.RegularExpressions.Regex BugsnagUnity.Payload.StackTraceLine::get_StackTraceAndroidJavaLineRegex()
extern void StackTraceLine_get_StackTraceAndroidJavaLineRegex_m55689D2BE5CCCACCEFB66CA6BB4FEAF48AA55FCE (void);
// 0x00000242 BugsnagUnity.Payload.StackTraceLine BugsnagUnity.Payload.StackTraceLine::FromLogMessage(System.String)
extern void StackTraceLine_FromLogMessage_m8771E3140BAC222A8C152604788CF4F84ECA6338 (void);
// 0x00000243 BugsnagUnity.Payload.StackTraceLine BugsnagUnity.Payload.StackTraceLine::FromAndroidJavaMessage(System.String)
extern void StackTraceLine_FromAndroidJavaMessage_m3C6986D8E1BF2713DA96DB10AFCDCB662AC752D5 (void);
// 0x00000244 BugsnagUnity.Payload.StackTraceLine BugsnagUnity.Payload.StackTraceLine::FromStackFrame(System.Diagnostics.StackFrame)
extern void StackTraceLine_FromStackFrame_m4ED5ECEED0325886D308DB2A78A235F48B82B34F (void);
// 0x00000245 System.Void BugsnagUnity.Payload.StackTraceLine::.ctor(System.String,System.Nullable`1<System.Int32>,System.String)
extern void StackTraceLine__ctor_m6869D1A50C2AAD6EECE86E7CB5690B38264E95A7 (void);
// 0x00000246 System.Void BugsnagUnity.Payload.StackTraceLine::.cctor()
extern void StackTraceLine__cctor_m36A6948D08413EE88BBB9F378D31B3535D20A37B (void);
// 0x00000247 System.Void BugsnagUnity.Payload.User::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern void User_add_PropertyChanged_m7810F442F73C4A1B40A81F2AAF35FDBCD2046BDE (void);
// 0x00000248 System.Void BugsnagUnity.Payload.User::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern void User_remove_PropertyChanged_m26AC8B82B5DB9E7052EE3FD68CCB2DB340634589 (void);
// 0x00000249 System.Void BugsnagUnity.Payload.User::.ctor()
extern void User__ctor_mB61CAAECB6E87FA81645BCD6B8EB0AD50A6AC803 (void);
// 0x0000024A System.String BugsnagUnity.Payload.User::get_Id()
extern void User_get_Id_mF34E009F2157BD7C88F95A17A3208FB7918E464B (void);
// 0x0000024B System.Void BugsnagUnity.Payload.User::set_Id(System.String)
extern void User_set_Id_m561E107CB68AC815EFA94AB26ECA8B72D24281BE (void);
// 0x0000024C System.String BugsnagUnity.Payload.User::get_Name()
extern void User_get_Name_m5B313DDF5BB09990A0F9D7A263C1D2FCCFC59D2E (void);
// 0x0000024D System.Void BugsnagUnity.Payload.User::set_Name(System.String)
extern void User_set_Name_m0C2959B78D21BA31BEED943981AEB30D49C7554D (void);
// 0x0000024E System.String BugsnagUnity.Payload.User::get_Email()
extern void User_get_Email_mD60C7F89EEB6E76FD1CA60A62DEAEB8FBD5EBFC0 (void);
// 0x0000024F System.Void BugsnagUnity.Payload.User::set_Email(System.String)
extern void User_set_Email_mF01FA3513068D92682DD94AEA5393F3E3446AA68 (void);
// 0x00000250 System.Void BugsnagUnity.Payload.User::OnPropertyChanged(System.String)
extern void User_OnPropertyChanged_mB6534A6560FA71286D8BBAF7112FFBAE061DC54D (void);
static Il2CppMethodPointer s_methodPointers[592] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Bugsnag_Start_mDE11E0E24CA993A7283A7CB4310E16F8749E1463,
	Bugsnag_get_InternalClient_mBFD91C46484DA1B40FDA1ACEF8CDB799EFF550DF,
	Bugsnag_set_InternalClient_mED81BE249F2B4C72B3C59E4F631E842C10E0D3C7,
	Bugsnag_get_Client_mEB779B811F17E7CDB7231AC072725B4291EA40A7,
	Bugsnag_SetApplicationState_m9AD7A5F2201B485CBA444682D3436CFD0C189581,
	Bugsnag__cctor_m0734C6D5FCD3AAAAF5B0D33A31CA9F26ABC50391,
	Client_get_Configuration_mEED134EA72A57B8B78D69977DA45F74E1D9395E1,
	Client_get_Breadcrumbs_mB2533BF8B24F955A1FF20D076152FF64D5504AB6,
	Client_get_SessionTracking_m81BE720FE6D376EF3324CCBF807731AA9B199063,
	Client_get_User_m983274F511E83ED7D810D4944C05230F5720F802,
	Client_get_Metadata_mD1BDDE0316575EAE0950C779E11FAA1416994407,
	Client_get_UniqueCounter_m51AB5F6B0644D4301EAA85A7DD34F33D63D5386E,
	Client_get_LogTypeCounter_m2AAE9EB0968652B887CA7B0E6A039F0306471A65,
	Client_get_Delivery_m3343B7B250853DA60ED2CF8ADE63CE15F290CA24,
	Client_get_Middleware_m581ACE5FB66FC28669BFDC1D6E5451B24EF1C5E9,
	Client_get_MiddlewareLock_mE22BD6B49781258F3A2C2810A5549F4192C250A2,
	Client_get_NativeClient_m18EC66E7A067930F6E749103593AB99144C6C039,
	Client_get_ForegroundStopwatch_m17DF91A841EAB6B35BF9A821819C662A682A5A90,
	Client_get_BackgroundStopwatch_m55CED308D6A596E090FDBAAA8E052B0F1944CB91,
	Client_get_InForeground_m0DB189A4CD68485550214F034CA360C342F28C8A,
	Client_get_TimingTrackerObject_m2E3AF00BB8782D8907D9AAFD65EC89D973AFEFF7,
	Client__ctor_mA63404CE15AA46BFBEF8918210E0AFE0E0F0D80F,
	Client_CheckForMisconfiguredEndpointsWarning_mF67EB23099FC831AB949FAF0641AB1F8966355A0,
	Client_AddBugsnagLoadedBreadcrumb_m760EA8AA882524D95770936170D3238E6F95612B,
	Client_IsUsingFallback_m28FBCFE418C868BC4D7CDCC0EFBA84E9EFA47EA2,
	Client_SetupSceneLoadedBreadcrumbTracking_m44E0450C37D97DBFF55C83E221B6066EB93AF57E,
	Client_Send_mCE9C303642F88D6B00924D7D8DC4558CEDE19F70,
	Client_SceneLoaded_m9294DA4980BC442ED2BF18EB93F41799FAA7B0B0,
	Client_MultiThreadedNotify_mAEF6B882BE97C44779F4206F6BA1FD7BEB408F07,
	Client_Notify_m6957CD87BDE2FB480AD961FBA94775E1DCCA8432,
	Client_Notify_mC2D1A1D28E49B0879441F7897DD1E7D1E311A57C,
	Client_RedactMetadata_m9442765296A2DD18E05D1DD25BE218A8BE393ED1,
	Client_ShouldAddProjectPackagesToEvent_mAFA898568D9FD4412E05F124987305930FA97DA9,
	Client_EventContainsDiscardedClass_m8CE957F5122AD6E5FA8686DD2BD568C2EC01BD16,
	Client_SetApplicationState_mFB8242C0BB509EA0FA55FA1ABBFC893A1652D822,
	Client_ShouldSendRequests_m2E0EEB118CBE6A0FBBDCC1356F02AE81DA246584,
	Client_RunInitialSessionCheck_mFCF3B9FF494376BCA3F3781E1A62138A5FA9A206,
	Client__cctor_mF0816F9FA2701B1139208DCAF42228A19168748C,
	Client_U3C_ctorU3Eb__49_0_m6525031F0D975BC4E3B1A34D9AE747DF74BDA305,
	U3CRunInitialSessionCheckU3Ed__76__ctor_mD533749D03238AA6EAFCDC670C9395367605339F,
	U3CRunInitialSessionCheckU3Ed__76_System_IDisposable_Dispose_mB66ED9CCCF18A35A2146B6318C0CD215A4FF28AF,
	U3CRunInitialSessionCheckU3Ed__76_MoveNext_m38055B142298020901B37645A98008165A8ABB65,
	U3CRunInitialSessionCheckU3Ed__76_System_Collections_Generic_IEnumeratorU3CUnityEngine_AsyncOperationU3E_get_Current_m5536217BD52567361C8F25222D04E4A9FBF16162,
	U3CRunInitialSessionCheckU3Ed__76_System_Collections_IEnumerator_Reset_m5792A768BB8AF12FBC8E73BDF5005D47B42B0D46,
	U3CRunInitialSessionCheckU3Ed__76_System_Collections_IEnumerator_get_Current_m30407A90B5E42956D16C3E04699C0C4B0C5E933F,
	Configuration_get_BundleVersion_mD1CEADB554E1DB23A3885D1FA14BF803FE211F8F,
	Configuration_get_AppType_m12900274A403C5C51FC12501E13CB920B9F396A7,
	Configuration_get_RedactedKeys_mB2701BED00B9687549D50CD08DDE18B4879E19A0,
	Configuration_get_LaunchDurationMillis_m7F045D0677127D03778F7B2929CDA1C63F0E14E9,
	Configuration_get_SendThreads_m261C189628D3F25F95673DCCB94E8C59C6A8EB76,
	Configuration_get_SendLaunchCrashesSynchronously_m7D9BA2FD705D1D97865C2DCEB2DDD696BFCA989E,
	Configuration_get_PersistUser_mE5BA6EB79BD322BC3DED9A8D3FD774DF62FE8FA4,
	Configuration_KeyIsRedacted_mE291FDE78F7BAD6F591EFE0BA62D8906FEADB9AA,
	Configuration__ctor_mFBB54B1235EEF260EE0B081ADA0848365BE2A352,
	Configuration_get_ReportUncaughtExceptionsAsHandled_m43C94580033891D91C9C6B2E4B44B83F84FCF158,
	Configuration_get_MaximumLogsTimePeriod_m98C71D6E78F43E49AD760A6A3AD1BC923724EFD4,
	Configuration_get_MaximumTypePerTimePeriod_m4D3E8513DA082BF24222E0959AF26B54B2E09ECC,
	Configuration_get_UniqueLogsTimePeriod_m9629FB0DA13833DEC209C5D8F1F19BF69ABBB154,
	Configuration_set_UniqueLogsTimePeriod_m8F4E48C2394D525F2EE1DCC7060609AF7F0DF49B,
	Configuration_get_BreadcrumbLogLevel_mCA7BB4781CC8D8D210B46B8B81B4C73F4551AB76,
	Configuration_ShouldLeaveLogBreadcrumb_m63EBE9C4163BAA4B5D70DDD0CF8AA8C0539CE6C0,
	Configuration_get_EnabledBreadcrumbTypes_mAD891D3A0C83BAB136995F0E4FCF897FC142C8B8,
	Configuration_set_EnabledBreadcrumbTypes_m3E681A9BAAB651E41B70E3BC160B6A165D69823B,
	Configuration_IsBreadcrumbTypeEnabled_mCE1D5D390A8E7F591DBD8F6971DB7156F749334F,
	Configuration_get_ApiKey_mFA48B3FA7757891FCF3658952AF41D506DCF8C73,
	Configuration_set_ApiKey_m53AAD8FB1F866EDA34D5ECA93E7A7986267251D6,
	Configuration_get_MaximumBreadcrumbs_m8F3F9654499CE8A1B4E7127F3BDFA78FD67EC7B0,
	Configuration_set_MaximumBreadcrumbs_m5D390C8C955C0C247CA79B421C1170B55FE7F6F0,
	Configuration_get_ReleaseStage_m10DF86A7BED003368262E91141B3BF736FD76035,
	Configuration_set_ReleaseStage_m693B4E46D0AE3E95973F253487618D9885D4953B,
	Configuration_get_EnabledReleaseStages_m656D7F6AAE7629B8DC9211DCC8C9B769D2100B79,
	Configuration_get_ProjectPackages_m7761F476C9A3EC0AF2B3AE7D3B1FB27404F4E390,
	Configuration_get_AppVersion_m5086FDCE961E18F0D910D1FB34833BBBFC619597,
	Configuration_set_AppVersion_m0B0B2B1AC7FBED16E4341F15CDC4DD264044E2EF,
	Configuration_get_Endpoints_m6FAEA1E97035DAD1C1C8851CCA7DE1EA6D628D62,
	Configuration_get_PayloadVersion_m04E17EA34E910D6C3B158317491BBBEBAEB6E388,
	Configuration_get_SessionPayloadVersion_mE6A782605CA1DE962C9F6C57F97AAE6F1FDB31A8,
	Configuration_get_Context_m92A65D57F7E5054E2309ADD94E7999A4ECD77CD1,
	Configuration_set_Context_mB3DE4C64B657FF5AE1F6FE9B4642B694854879ED,
	Configuration_get_NotifyLogLevel_m66B34D40773759C7767B48E1938362BDB4267E88,
	Configuration_set_NotifyLogLevel_m83D11A0C0711F6AD0AA65B1E7375394E553E89E3,
	Configuration_get_AutoDetectErrors_mE750C721E85B156BCEFB3FBFC690BFB7C48CB038,
	Configuration_set_AutoDetectErrors_m7567357E0B2BF88B0A7407203D367BE80C08F777,
	Configuration_set_AutoDetectAnrs_m51A7060FA21BBD9E7221029D6DC167488CBF7867,
	Configuration_get_AutoTrackSessions_m9F08AE164F8F01B0F38C224434E3F0F3757F83B7,
	Configuration_set_AutoTrackSessions_mEE95EFACC39B56CAF88DDC1DD09B18527E358B6D,
	Configuration_get_LogTypeSeverityMapping_m4DD6E7AE5CAA89B511056168828EC3D5A7A23CD4,
	Configuration_get_ScriptingBackend_mA1DB703DA1036C76D082FAAF236B22120005757E,
	Configuration_set_ScriptingBackend_mB5D5C638D24688FD926EF35D7CDD253A167E536B,
	Configuration_get_DotnetScriptingRuntime_m6F84A539DEBC14C2508D821C68E22B2690CB2443,
	Configuration_set_DotnetScriptingRuntime_m923A77D8F6FE3864EE32ED79C1528F12B263FF9E,
	Configuration_get_DotnetApiCompatibility_m944AC9E9EACAF8B5F159257256C57E9C8CEC40AC,
	Configuration_set_DotnetApiCompatibility_mB88782C1DB48037D5C5FC40FBCC8E81E8E3752DF,
	Configuration_get_EnabledErrorTypes_m6EEB081B87A7E1FC303C2292E13BA48A348A94D8,
	Configuration_set_EnabledErrorTypes_mA6C4D2A9B2D15755C7C3DD466AEBFAD077A7F132,
	Configuration_get_AppHangThresholdMillis_m9AD6C7ACF7640EA2158E97A325B2D5CF131DE4FE,
	Configuration_get_DiscardClasses_m14E31FA61382325B0E58D3DBDB69CC42D7B6A833,
	Configuration_get_MaxPersistedEvents_m99C25D50819BB4249CCEFB6D562C4CA98996361C,
	Configuration_ErrorClassIsDiscarded_m6A42C20725B451DA1E6B0E860A5393AB69D469EA,
	Configuration_IsErrorTypeEnabled_m54AA8E71151FFB1723BF2EE1CD8762F2BB036705,
	Configuration_IsUnityLogErrorTypeEnabled_m9EFCB135AF48C2917BFEA6C5365D05660D5E9FA7,
	Configuration_IsRunningInEditor_m484ED97EE713DB230147466EBE0C8D5A970C7C66,
	EndpointConfiguration_get_NotifyIsCustom_m11580FE51A73239A5C314E774B3EBD520EA9EA95,
	EndpointConfiguration_get_SessionIsCustom_m427191EA81FF718AFC0086D0E0E4DFB7BFAF0109,
	EndpointConfiguration_get_IsValid_mC82BFD749A88E16288864A32A28814BA3FA3B7CA,
	EndpointConfiguration__ctor_m77A46484A0D685F24827F3F145BAA4F43CABD8DE,
	NULL,
	NULL,
	NULL,
	Middleware__ctor_mC5B2B711749F0599CB30B8EFFC8A14616EF69B93,
	Middleware_Invoke_m1802C89B39365681AD76F92543F58A5B683B03ED,
	Middleware_BeginInvoke_m944BAB4C41BE3097AB2477EEFDE5161E789294CD,
	Middleware_EndInvoke_m035E7F39A7FEA44DCA7144923B0964CD42578216,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Delivery_get_DelayBeforeDelivery_m1EF3EAFC8B6894AED502D54E7C8CD906B8029A1A,
	Delivery_set_DelayBeforeDelivery_mDE4D29379FE16BACBAAC3A15030B268641DEFC4E,
	Delivery_get_Worker_mFF28C989772430C0123FDBD7EA4AE0EEB1D7ED3A,
	Delivery_get_Queue_m5ED61B03545A3086BF652E9DD7DDC0A25D8FA0FE,
	Delivery_get_DispatcherObject_m740946F942E923118E2FA1B60852E54BB44E20D2,
	Delivery__ctor_mC974AF5B65CCE50049B40FCAE6DA50C58A53EDF7,
	Delivery_ProcessQueue_mD9C70991E63E89371D7008B04A0D8DAC6D23D45D,
	Delivery_SerializeAndDeliverPayload_m55D43D58131D7BF34312124EDAFE91AB462D2846,
	Delivery_Send_m5FFEA0ED9DB535E2325F80E658588D056E24F495,
	Delivery_PushToServer_mD75DFB40A27FEF8AC309DC1A1ADC266C1FF8E948,
	Delivery_CanUseThreading_mC2C101D32BEE0EBCF9BCF02DF00B3E64A6ADEE9C,
	U3CU3Ec__DisplayClass17_0__ctor_m3E0586AB29FF42920E64C233B20E98F1FB0D94A6,
	U3CU3Ec__DisplayClass17_0_U3CSendU3Eb__0_mABB558894D3BDA37072016543CD8B788F816831C,
	U3CPushToServerU3Ed__18__ctor_mC5BFA4AE0F62D45551F6D83A27593BC63CD74BED,
	U3CPushToServerU3Ed__18_System_IDisposable_Dispose_m46C0C5AFBA79D7C5E90CC41EAAC6A063DF8769EE,
	U3CPushToServerU3Ed__18_MoveNext_m09F2790EACD85B61D200B9AD6093F93C33219A5E,
	U3CPushToServerU3Ed__18_U3CU3Em__Finally1_m5D11D566D818E60F7DCE2DA8C2A3B1A05D09A72B,
	U3CPushToServerU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0EA60AEDD204325326C5551432862D101935FCB5,
	U3CPushToServerU3Ed__18_System_Collections_IEnumerator_Reset_mD7E2E48725D4DAC404797F559A3F6DA6717646F8,
	U3CPushToServerU3Ed__18_System_Collections_IEnumerator_get_Current_m913923B2DC105FFDD75C0E7FC53211D0369C7090,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LogTypeSeverityMapping_get_Mappings_m099EF45871E5103312A9111BECC719A7ADA1005F,
	LogTypeSeverityMapping__ctor_mD8D55262C465D16F9F7BBDE8DCD05EEF173FA320,
	LogTypeSeverityMapping_Map_m2F17AA0836A57B5C5B1FE96654DE5B99EED01C26,
	MainThreadDispatchBehaviour_Update_m8CF90752828D6AAF22821CA8ECB9639DA154D991,
	MainThreadDispatchBehaviour_Enqueue_mFACB3103D5FC198706486F2C409DAC31B0BE51EC,
	MainThreadDispatchBehaviour_Enqueue_mC457C0ED370D917188E2A41FF28E5C95B6068155,
	MainThreadDispatchBehaviour_ActionWrapper_m93B73D265A007A18D43598842C0620B0D490E59B,
	MainThreadDispatchBehaviour_EnqueueWithDelayCoroutine_mD8311AF6474C9FC2D6D4EF288EC5CAFF3E842788,
	MainThreadDispatchBehaviour_DelayAction_m6D34D4CB204D45E5F7E4D98104F3E53616E681C8,
	MainThreadDispatchBehaviour_Exists_mC1C4E23BFCD18A3AD4089E0065A691C5B47018B6,
	MainThreadDispatchBehaviour_Instance_m613AC8217FA25FC3931EBD77D664C56425A4C35A,
	MainThreadDispatchBehaviour_Awake_m4147F0F0524A963B536899D8B99C9003EE8E376D,
	MainThreadDispatchBehaviour_OnDestroy_m12381843122C8365330E065B4A5EC39A072863E0,
	MainThreadDispatchBehaviour__ctor_mD733888196ED88F5A34C1E58A4B86B1A199CEFE1,
	MainThreadDispatchBehaviour__cctor_mC776EE80B06BBD04246682AF36CE34A1585F7EAE,
	U3CU3Ec__DisplayClass2_0__ctor_mB08CE5ED8DA85AEDA1BB8839830FC3631CC8C364,
	U3CU3Ec__DisplayClass2_0_U3CEnqueueU3Eb__0_m38E59739B6093F09AF8375E1F3B6E50012E4014B,
	U3CActionWrapperU3Ed__4__ctor_m6B8550ABA5B2D0510EE5E405BF151A9AB4FBC842,
	U3CActionWrapperU3Ed__4_System_IDisposable_Dispose_m754842758934EC39032D404BCFCF71673EE079EB,
	U3CActionWrapperU3Ed__4_MoveNext_m03A690491E52873D64808A26176CFC73E08EE78C,
	U3CActionWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA5D081581766BBD840F8882869D4FB27EB7D4FB5,
	U3CActionWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m86AA5A10E20D0F4D6B8D0F2F0E76D6E149D3A320,
	U3CActionWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_m36827BF0F68986431364260FF58A8D0B33D7B598,
	U3CDelayActionU3Ed__6__ctor_m284D2A964F3150F183CA7F1E64724F152BA8447A,
	U3CDelayActionU3Ed__6_System_IDisposable_Dispose_m50EFB1F3EDC1A1FEB37269D24D780550521369BC,
	U3CDelayActionU3Ed__6_MoveNext_m037B9AC579CE89BE4A560F8D8B537BEDC8E4F7B4,
	U3CDelayActionU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA70071AC9DDD6F216025AB65FC7E152CDE1DE177,
	U3CDelayActionU3Ed__6_System_Collections_IEnumerator_Reset_m76381D7677236E986DCD131557778AC312FA5F64,
	U3CDelayActionU3Ed__6_System_Collections_IEnumerator_get_Current_m7E79D3196C0902EA2C4FB7F88DF8484EE0003011,
	MaximumLogTypeCounter_get_Configuration_mC7589AE731197000E66C60754B3791EC437B24FE,
	MaximumLogTypeCounter_get_CurrentCounts_mE226341B698ECE71349F10F695EDBDFE322F820F,
	MaximumLogTypeCounter_get_FlushAt_m3B70AB9C0BD73017DF935B17CBD2D1F264B3E2AB,
	MaximumLogTypeCounter_set_FlushAt_m15744396351DDAFA9A6B5953584A6D7E45C0693F,
	MaximumLogTypeCounter_get_MaximumLogsTimePeriod_mB105177D7A41B5BA23D049C1DB8B666E0AAABD44,
	MaximumLogTypeCounter_get_MaximumTypePerTimePeriod_m5405C77760BD3A0F91EE0C636C484757502D29CC,
	MaximumLogTypeCounter__ctor_m63D70B5809BE104FEE1A85EB34259237D19284B2,
	MaximumLogTypeCounter_ShouldSend_mADC13328FB577FB46FB49D240E9B048162AECAC1,
	NULL,
	NULL,
	NULL,
	NULL,
	SessionTracker_get_Client_m62047DCA93564E770A5E8FCA1E9CC7DF39BB469A,
	SessionTracker_get_CurrentSession_mFDD2C7412B9B7E2A7D2C2AC8B96BFD19165CB025,
	SessionTracker_set_CurrentSession_mE7D2E3EFCBD90C1A5048F7DE63BA6E454B6EAAB8,
	SessionTracker_GetCurrentSession_m8B354DE2171351FF60B261418F8B1FE678538A00,
	SessionTracker__ctor_mA194298BB6F18D4DC309B138CA76CA937DF3DFF3,
	SessionTracker_StartSession_m01562C31BEDAFB43DC76539D3CC2EFF529D420E6,
	SessionTracker_StartManagedSession_mCD184E254C3B1185749BEEAF63C52788D10A4210,
	SessionTracker_ResumeSession_mC49A0208B70A82910363E8947EFF0EFE736E7015,
	SessionTracker_ResumeManagedSession_m195420BDC00026C513B56C147A52713459408B13,
	SessionTracker_AddException_mDFB4BC92E38A6D0E951ADE53900AEFAA0AD22B38,
	SessionTracker_ShouldManageSessions_m735D55A0F68C7D2A0EC28590F63CDC6FF16810F8,
	LogTypeExtensions_get_LogTypeMapping_m20467511115D8F0FF1AD4C451615D66E2B04CD73,
	LogTypeExtensions_IsGreaterThanOrEqualTo_m5F1E3AC3D3A10FAFD0A55908CC4ADFFBE6EF4598,
	LogTypeExtensions__cctor_m79A710E42BAC330A0C9CFD7F16DCC2BD5DFC39A0,
	LogTypeComparer_Equals_mDE0AD589170F3CB96AA6365C1FFC441EEAAF4D06,
	LogTypeComparer_GetHashCode_m01808326423F0E0263F58B0A1448E5F6E1F32773,
	LogTypeComparer__ctor_m3A935B4F29F72387A7D5CC89D623D7F75E8C8E8F,
	JsonObject__ctor_m39F7A6ED5EA30A5A93B1255969F87F4D50CD4C20,
	JsonObject_Add_mBF12D1DC90D84D2916B0A90F1DDAF5FF791B3C53,
	JsonObject_ContainsKey_m4BC5194BB259028C3DCDA03ADE39B11B5D4CAB47,
	JsonObject_get_Keys_m42C63831BF48C5A550838DAE3C4471978FD4B0F2,
	JsonObject_Remove_m504F4E4C3CEFE10E212FA5B4DFA6E15ADB58CCAE,
	JsonObject_TryGetValue_m66DB5D8E357E382C1F5A9A5059DA720561B43541,
	JsonObject_get_Values_m98B3356877435E1D93A0203899C713D0F04B76F9,
	JsonObject_get_Item_mAEB6A8758A77E8A1ADCFA2767163CB11C801CE95,
	JsonObject_set_Item_mFD11A2FF7363FFA70B7CAB50C1BF7FA726E9BA1D,
	JsonObject_Add_m26AB38DAC743C80B632CFA43B42DD4A1E7D4C62B,
	JsonObject_Clear_m61E9B83ADA4CE709B019D50554B5421C9EB96A9A,
	JsonObject_Contains_m5D843739FCADAC6F2FBE8FB18FDC6E9C76665921,
	JsonObject_CopyTo_mB7285808D74DC68AA516A59A5D4BD6E26094F8C3,
	JsonObject_get_Count_m5D71CE98BA788B61296AC8D73959EB6C8CEE952B,
	JsonObject_get_IsReadOnly_m0234F33D4A4330E9C882F6273B1C0A70700ACF27,
	JsonObject_Remove_m5071BF8C74C53D00C72E02182AD09F0A663E104A,
	JsonObject_GetEnumerator_m9EB4756A24A284005D8ADF9B2CAAE73A745F031C,
	JsonObject_System_Collections_IEnumerable_GetEnumerator_mACD35DB509AB8DB9A11001D8983632616D18806C,
	SimpleJson__cctor_m5067EF160946B81D0658FA94CCD5FD5FDFFE446A,
	SimpleJson_SerializeObject_m6F304FAD7DB08CD51818F69CDC4E073278A239AB,
	SimpleJson_SerializeObject_mD8A0B65717006E133780FB954BC55F4E0725574D,
	SimpleJson_SerializeObject_mDA2034F259812891DC0CEC975B1514F1688640F6,
	SimpleJson_SerializeValue_m97E020110544F270C5D57293A5C63C2CDEE4D6CC,
	SimpleJson_SerializeObject_m242458EDDEBB62FA70BF677FC0899185CB86D081,
	SimpleJson_SerializeArray_m42C4876D92765B6BF00426A34D7DC813B87BB499,
	SimpleJson_SerializeString_m47F789ED3180D0BEBD309DB38E80568BCC5913C7,
	SimpleJson_IntToHex_m2547B104272826B8ED8481CD1957383DC47DEB55,
	SimpleJson_SerializeNumber_mBEFFECD48B6636E5C76E76AC339AE9AC74ACB02A,
	SimpleJson_get_CurrentJsonSerializerStrategy_mA9E2FFDF9FA31598ABAB32956436A90E938BB348,
	SimpleJson_get_PocoJsonSerializerStrategy_mCC1F55344495750EF7FAF289CF0101AFA5F3E610,
	NULL,
	PocoJsonSerializerStrategy__ctor_m58642BB00F69061030A3F271EE8B730511BA6ACD,
	PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m5CE61106E3AF2373CA24256507821C88CCD6253A,
	PocoJsonSerializerStrategy_ContructorDelegateFactory_m6AAB956621A0E34E27A3F32B8E70B49E0C8D35F0,
	PocoJsonSerializerStrategy_GetterValueFactory_m836F5F197193523188EFFF3507FF96A2E8F60FB8,
	PocoJsonSerializerStrategy_SetterValueFactory_mAFCCACEC60247A2E1EBF29E624C561B6498290B9,
	PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m80D4CBF3F0A0314E9EC1BCD1EB59003AD132BC60,
	PocoJsonSerializerStrategy_SerializeEnum_m717D71CA3CA5CDFE01B64448CBA1C8A08AF0E4C8,
	PocoJsonSerializerStrategy_TrySerializeKnownTypes_mD2C7CE4C1CCD3FDF3ADA744871D892AF0E601E73,
	PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m84C5F34F2611BB3DD5FAA2A4942C94FEED12655B,
	PocoJsonSerializerStrategy__cctor_m06128BD7B08E8D33CF8001AA5F0FCE762307BB19,
	TimingTrackerBehaviour_Awake_mBF5BAD01C4366F5ECF8EAAC44513CCC3E214B169,
	TimingTrackerBehaviour_OnApplicationFocus_mA2488547DF70BC2AB235E7002A527EC633C040EF,
	TimingTrackerBehaviour_OnApplicationPause_m34EF37600EC25B6B493147BE996253E6753CA811,
	TimingTrackerBehaviour__ctor_mD5FDBCC8EC54539A2436A45238AB459378913D2A,
	TypeNameHelper_GetTypeDisplayName_m28E4D4A0B254E140ED3311B0002A8A508F8D1CBE,
	TypeNameHelper_ProcessType_mEED1A2A180F24F663EA63F954AEF1AA008BBC07F,
	TypeNameHelper_ProcessArrayType_m11C32CBD0832A4D28727485C821A7F9476F77D79,
	TypeNameHelper_ProcessGenericType_mC02AD3DDE63FDC37544577D6EC19EA99B05519CF,
	TypeNameHelper__cctor_m6425E667C5C319AF1CAA6EA4BE17414E25D8CBD3,
	DisplayNameOptions__ctor_m7E99A1E3C81711A29BE33CB4754657339DAD79CC,
	DisplayNameOptions_get_FullName_mFE86F6A03EB618897927CA4287564A6033104505,
	DisplayNameOptions_get_IncludeGenericParameterNames_m092A7D883E43CCA55F7C2AB84A669301571B23CB,
	UniqueLogThrottle_get_Counter_m89A86A0085B56E220E660D5B8990C474B8F6DCB3,
	UniqueLogThrottle_get_FlushAt_m4D0304F2E3FBBE35532BFADEC76243275E664D02,
	UniqueLogThrottle_set_FlushAt_m6DBE2B7F20B806DC7FE4FF29FA6AC732C7F7F916,
	UniqueLogThrottle_get_Configuration_m3E777E056978F9A75CA8BAEFEED2694B1D084D0B,
	UniqueLogThrottle_get_UniqueLogsTimePeriod_m5FD42204A80A5718E8D8FE48583B55B9905DF5A8,
	UniqueLogThrottle__ctor_m5A22F4D02DC0FFC29FB815887B84524551E95704,
	UniqueLogThrottle_ShouldSend_mE2D37122AFEDAD1083B07CC195FAAE72EEC4D93D,
	UnityLogMessageEqualityComparer_Equals_m9B9FDDC0CD593FE87CDEA148EF07D3F97F047432,
	UnityLogMessageEqualityComparer_GetHashCode_m8BD507A70BE66C187E2F408034D98DCE5BB1D0D2,
	UnityLogMessageEqualityComparer__ctor_m9B9355D4AA78FE2488EB0F1FBB571ABC29A38D74,
	UnityLogMessage__ctor_mA44C9A78332C83D6A6AC9A4270199DFD2F9F2707,
	UnityLogMessage_get_Condition_mE801A13CF5B17C9DEC3F73D20B902F5D36D24C61,
	UnityLogMessage_get_StackTrace_m89C138756F1962697DDAA57968E00D2FE37136CB,
	UnityLogMessage_get_Type_mFC038325456C8FFFD0F5FF47B5A1A90D65C3163F,
	UnityLogMessage_get_CreatedAt_mFA812338C9C97D164026F0CDBFCAACE383CE7A64,
	UnityMetadata_InitDefaultMetadata_mE0A4698DE4AC48199F51CAF046E8D3F79563EEB3,
	UnityMetadata_InitAppMetadata_m462A0986468827C28EAD5A32B1C303A8FCA7E582,
	UnityMetadata_InitDeviceMetadata_m62D9148E2BCD943343BC49FFE1522158BD11C179,
	UnityMetadata__cctor_mB7371BE497AFDDF004F409C658F7E72644BAF230,
	Breadcrumbs__ctor_mE7A4E08A6B7E912CF4FE295A1821F4FB7A07DD95,
	Breadcrumbs_Leave_m9AAF2935A4AE7CA3230D46DA20964E71CBEC7CD8,
	Breadcrumbs_Leave_m027ACA92418D5DD4D9466A390C6522790BCA7114,
	Breadcrumbs_Retrieve_m1DA79FEACDC613C622468418F5902B562EF62886,
	Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3,
	NativeClient_get_Configuration_m79CC626410871F8F81AEA882A3C4D600E41199DD,
	NativeClient_get_Breadcrumbs_m3668CDEED427674CD2117044F54D8B4619337275,
	NativeClient_get_Delivery_mF0F8BB21045961F6C53612ADC26C53B456A6AAA3,
	NativeClient_get_NativeConfiguration_m6BB7D7F5A5138936479ACFE10B5C10C730904189,
	NativeClient__ctor_mDCA3E8C1F9ECFFB74C0D2AF95874DC0F98D1BB1E,
	NativeClient_CreateNativeConfig_mF3343F4EB5BE1DE63A33EFA0690EAD85C91154F3,
	NativeClient_GetAppType_m8F4CD3D6511489FC306975A1EBC09E2025AE5EFB,
	NativeClient_SetEnabledBreadcrumbTypes_m94B90F0FF2540D3515388475CB8D3BA3858BC665,
	NativeClient_SetEnabledErrorTypes_m728C3AB1A8E3AF79140AE5457400A75FC4DC8CDE,
	NativeClient_PopulateApp_mEC178D6AAE182795EED17241548E887018B4CCF7,
	NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D,
	NativeClient_PopulateDevice_mEF1908E832BAACAE0E4E283FD6AC9355649C0D20,
	NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE,
	NativeClient_PopulateUser_m59A3744CA57A4E981D10116A33EBDF699BAA8E55,
	NativeClient_SetMetadata_mCAEAD3D8C6615A94801C73298E13A9CCBB36F7A3,
	NativeClient_PopulateMetadata_m985BEB49FE454AA6C47B8BBFAF8F79A5839EE0B6,
	NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF,
	NativeClient_SetUser_m50E541CFD4B88AEFD98938C62139CB4AFA30892E,
	NativeClient_SetContext_m91C040F0D9E833823EE24BC01F19AE724487DAF3,
	NativeClient_StartSession_m2F48EC7EC2D9235C011CF50F57CE83E18922261E,
	NativeClient_ResumeSession_m28BD9D7FAC18F16B2E2A0F639C4D9D9B67965514,
	NativeClient_UpdateSession_mD9A27C99EF1A06532FA1C41E3C3282FE2C66D596,
	NativeClient_GetCurrentSession_mF5E91A0FB2CE85F1F3567DA76F88955F918BF584,
	NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33,
	NativeCode_bugsnag_startBugsnagWithConfiguration_mEAFD766118099EEFECA721763B3517076CB26432,
	NativeCode_bugsnag_setMetadata_m2D4CCF2FDA70707426A7846B849EF5DF76AFC6CD,
	NativeCode_bugsnag_removeMetadata_m2A5EAFCDB3211986AA239D732F917D43EECFDB9C,
	NativeCode_bugsnag_retrieveAppData_m5FC53DA469B73CE6A7F2D95C869D5A21229FE1E9,
	NativeCode_bugsnag_retrieveDeviceData_m84F23E5E4D43842E41F261058B6A12C26821B78A,
	NativeCode_bugsnag_retrieveCurrentSession_m7FB5C9FC59EF483ED1140A701171AD7BB29C10DA,
	NativeCode_bugsnag_retrieveMetaData_m6F4D935D491EEE18C55EF1D1194F785A6D5D6381,
	NativeCode_bugsnag_populateUser_m0B3FB2E1559881B15CB71DC2F8E7B2E7A0214F63,
	NativeCode_bugsnag_createConfiguration_mBA0B4BAA27D76A9A110CB1D3088708973769E2AA,
	NativeCode_bugsnag_setReleaseStage_mC82736B1AF2F9343001145FB390A9BD6EDDC63C6,
	NativeCode_bugsnag_setAutoNotifyConfig_mF85CA578E18084046A8B4DD0796685579C0F11C3,
	NativeCode_bugsnag_setAutoTrackSessions_m1FF88E243B13C49EA3BA5F4DA2DC19AC1E0D5237,
	NativeCode_bugsnag_setPersistUser_m1D5527D90C8AD826137F129318F04D9C89274349,
	NativeCode_bugsnag_setSendLaunchCrashesSynchronously_m249DC6C42A1B7EC034B3E06474C7F3356871A522,
	NativeCode_bugsnag_setContext_mEB4F381A4A9A1B7D35D978A6B1C28B53913E723E,
	NativeCode_bugsnag_setMaxBreadcrumbs_m83244ED9DA3568069E0EF86464CDFEB15C517A79,
	NativeCode_bugsnag_setLaunchDurationMillis_m4779B1C042C19C5D7DE26ACDD627E1E436F59288,
	NativeCode_bugsnag_setMaxPersistedEvents_m5E7460D066275A1E596764651D097CB7CEE28CF9,
	NativeCode_bugsnag_setAppHangThresholdMillis_mA4020570996DE65D9714B8E90EE3220358A0915E,
	NativeCode_bugsnag_setEnabledBreadcrumbTypes_m4FE8522985DA3909C8441B1E3D6959909EE552DE,
	NativeCode_bugsnag_setEnabledErrorTypes_mDA2DF50E0AF2E18926B657F94139AA559CC3A937,
	NativeCode_bugsnag_setDiscardClasses_mE0CA7A4F39C6C2AEA42F285A0E43814A180CD0E9,
	NativeCode_bugsnag_setRedactedKeys_m594381F4B8C60F1E7FACC20CDA29D15D17A7E15A,
	NativeCode_bugsnag_setContextConfig_m579B96D1134B90DF7FC573682A3F84E5CE6EBDD8,
	NativeCode_bugsnag_setAppVersion_mFF4D517B373687093292F5CB7CF0731E15B78CA0,
	NativeCode_bugsnag_setBundleVersion_mCD55AEDAFFD38FE3C49576D5A411A8BE1D27E21F,
	NativeCode_bugsnag_setThreadSendPolicy_m28D0C82AA40E035EF1E929DAD598AA2242DFE0FB,
	NativeCode_bugsnag_setAppType_m14AD8D79B7A4009D7B304656966A03A67D35FC12,
	NativeCode_bugsnag_setEndpoints_m2E410B21174ECB9A690E729C67EB56E0C0666425,
	NativeCode_bugsnag_setNotifyReleaseStages_mC37F2DB64DF62124769BE5A518C5DBADBBF4BFC3,
	NativeCode_bugsnag_addBreadcrumb_mB1819EBD786FF444E9D893FEC27BE3AEDEF2047E,
	NativeCode_bugsnag_retrieveBreadcrumbs_mDE4E6AAE677B69199A9708D6901DDC7C1CE56BF7,
	NativeCode_bugsnag_setUser_mF99BA30B1EFCEF238475409B096B5CEA41919BA3,
	NativeCode_bugsnag_startSession_m99412FD1B43130F35F5CD17B158B4910AB45CC0C,
	NativeCode_bugsnag_resumeSession_m3DC212259F921171EB3171AFEE830C0B329C3272,
	NativeCode_bugsnag_registerSession_m891084DDF6D5C079778258A1E1CA2C7668066412,
	SessionInformation__ctor_m80E5F3A5DD348E11EF0F47D67A7585359B409A21,
	SessionInformation_Invoke_m82D11BD0F4F9BAFB9633E2A03B192B69690BAA0A,
	SessionInformation_BeginInvoke_m06790AB6650E3A4BD875EF1E92C93F72448F367D,
	SessionInformation_EndInvoke_mA1A78332EB9539B1DD860FF6F7252C0139FBC526,
	MetadataInformation__ctor_m402E31C331AF5E3C0F17B1A46E3B0BA3EF5521B8,
	MetadataInformation_Invoke_m7B2D1E89D6C4E1C24EF5544322E5505758391832,
	MetadataInformation_BeginInvoke_m16DE65DC2DC567D044F3185F3260989958E34602,
	MetadataInformation_EndInvoke_m4BAE31330DC8A72DF5962FCD0AA66D0357A6CAA8,
	BreadcrumbInformation__ctor_mCD9177E11CF3D09D5CDA48E56B99E403734158F2,
	BreadcrumbInformation_Invoke_mAF96670D1807562532E2CE4BB3723B25F63E1609,
	BreadcrumbInformation_BeginInvoke_m8614BCB15E426A4C47B9CD03C8155884240286A0,
	BreadcrumbInformation_EndInvoke_m55850EFD8AD4186B47FFA9298F9AC376547A777C,
	ReflectionUtils_GetTypeInfo_m8200637566FD6148DDFF72756582FD90AAB33909,
	ReflectionUtils_IsValueType_mF9FBA77AB990261AD566ECAD3B7982E3F5201CF5,
	ReflectionUtils_GetConstructors_m031A0E28223051E0201B1CECF7E5582E897A1452,
	ReflectionUtils_GetConstructorInfo_mA96190E0CD7F393AE4B6CB0F1EDA0028138B5754,
	ReflectionUtils_GetProperties_mD8A3A532855DCE939C9316270AF2F987DBBF9669,
	ReflectionUtils_GetFields_m2C8BF55D756CC8A5318D5B8BF3E778FE3AD3F4B7,
	ReflectionUtils_GetGetterMethodInfo_m6E06D407BFC3FF1897FD05D50CE9BCD60077EAC7,
	ReflectionUtils_GetSetterMethodInfo_m7CAA815B4AF1EB8E0AB696CC719FE6FA047683B0,
	ReflectionUtils_GetContructor_mEE260A83C0DB69A7C461E17B2FFBBF617A89AE22,
	ReflectionUtils_GetConstructorByExpression_m700C4250A9B8E8A887EF726AE20C13130B5AA50B,
	ReflectionUtils_GetConstructorByExpression_m3CA39A187A6F314351301BBDA066F9A2E15CCC16,
	ReflectionUtils_GetGetMethod_mE390C48841E789CCFE5AD6CBE0630B6A10EA5F65,
	ReflectionUtils_GetGetMethod_mFFCB413358FE30277B8020BFD64EC28E25FA0554,
	ReflectionUtils_GetGetMethodByExpression_mEE195F4B0D88D03503FA51B2F742C579AFA58A04,
	ReflectionUtils_GetGetMethodByExpression_mD73C1C85E4FA832C54D1C126721CA5FF51979902,
	ReflectionUtils_GetSetMethod_m6C70C1452B762C1E9D04952185363D3B307F302A,
	ReflectionUtils_GetSetMethod_m076CD7350859D03F3B48C34C36C527D424AA2DDC,
	ReflectionUtils_GetSetMethodByExpression_m7B26993D4AFF1C1E4EEFCB33A271A51736E256FF,
	ReflectionUtils_GetSetMethodByExpression_m5C512D6EFEB12E113714989E665DE86C91895E59,
	ReflectionUtils_Assign_m84D989E29B5D3551BD10688045EF9A73365A1A5C,
	ReflectionUtils__cctor_m352D628AF2F92D1D32FEAC5120A32447E11FAF95,
	GetDelegate__ctor_m42F547A879971EAE8112BB147FFEF5B906B378AA,
	GetDelegate_Invoke_m4B1B57B4C90D9C43C55266794241272FA552D772,
	GetDelegate_BeginInvoke_m85E6CE07435D4699C71E744A1290BE18B2875A0B,
	GetDelegate_EndInvoke_mBFBF038A60A9C1C7B1A4158BEF4374857CED8EC4,
	SetDelegate__ctor_m06974E548F95259738E17C511584802D40E62A2F,
	SetDelegate_Invoke_m0A256247493DA230039316FAF6645AFDD220AB2E,
	SetDelegate_BeginInvoke_m811041CA65EA5BF4A8E3AD765B654C96E5FD0018,
	SetDelegate_EndInvoke_m4ABE97C7B5C72E2D8A210EAB86C9C7B556EFEB74,
	ConstructorDelegate__ctor_mA07D9FAFF68BB9244CF8502F53B0016817EFE51C,
	ConstructorDelegate_Invoke_mC8C73B9C134DDE6B3E820A460B945F8F6344F1C5,
	ConstructorDelegate_BeginInvoke_m20501AECEC449AB155D41A409F4BB22644B2476F,
	ConstructorDelegate_EndInvoke_m546E433E66E036CCA66A0AE9CEF22D826095162A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass27_0__ctor_m64A5ABC83EF634C7A9B0AFE40599DED34F125FFE,
	U3CU3Ec__DisplayClass27_0_U3CGetConstructorByExpressionU3Eb__0_m12020B676FE808337257A9F42A182D8550655B9F,
	U3CU3Ec__DisplayClass33_0__ctor_m8608C2C048A2B1D07044331692A2755E13161661,
	U3CU3Ec__DisplayClass33_0_U3CGetGetMethodByExpressionU3Eb__0_mF1B5596A7E338D270BE0313BCAEE4B33F8E3F6E8,
	U3CU3Ec__DisplayClass34_0__ctor_mA24B640BD0B9234F13C745F4FE405E2427F3CC3C,
	U3CU3Ec__DisplayClass34_0_U3CGetGetMethodByExpressionU3Eb__0_m29388C609B7BA0AE48004AA1741FEF6D7D4C0C25,
	U3CU3Ec__DisplayClass39_0__ctor_m1A99E5F0648E58FC0F50D98011FEA7F034EA954E,
	U3CU3Ec__DisplayClass39_0_U3CGetSetMethodByExpressionU3Eb__0_m5C951EB7C15931E2AF678344448CF2E5EA557C52,
	U3CU3Ec__DisplayClass40_0__ctor_m3E9D73A43818BFCF453B8E32859E735B393AC549,
	U3CU3Ec__DisplayClass40_0_U3CGetSetMethodByExpressionU3Eb__0_mFAA849836DB74FA844B8110F54ADC2935A1F0639,
	String_IsNullOrWhiteSpace_m01A9E2DCA5076A7AC4B22D2BAEBA5D687EFEA210,
	App__ctor_m41B9BA5304B4A4B284FABB134533D9B46EFD7573,
	App_set_Version_m4AC2C8772F7F5EC60329DDD376156D0C10CB7DB2,
	App_set_ReleaseStage_m245AC7AACC9D97DE816F15197C81973EE8F97D31,
	App_set_InForeground_mC3452C8182FA0BD64F497F4BACC053420B507015,
	App_set_DurationInForeground_m12D4BB2A384FFD3480CE107A83A662971FAD7492,
	App_GetAppType_m0DFF6AED8C83E3562A7DA1EA3C04B9DF05A63816,
	App_AddDuration_m9C64485961D5F3B77118BBAD278D4DE650871893,
	Breadcrumb_FromReport_m49D19819F6E4B47B520A5FB24F649835317AA486,
	Breadcrumb__ctor_mC463BA6C91CF5A38C35D520090478B870A2131F3,
	Breadcrumb__ctor_m57AE3F7316169B0AFBDAB136129724BA16724719,
	Breadcrumb_get_Name_m04C510CD0A223A483ED52FBAA060B3489D97A0C6,
	Breadcrumb_get_Type_m26C78E197F592E7D4C5C75253FCDFD814C4F184C,
	Breadcrumb_get_Metadata_m054F2596EFAD6E8EABFD1FEA1D51683651369964,
	Device_InitUnityVersion_m4ADCE7B552F74121CD7205741F3C85232C19583F,
	Device__ctor_m5D238EC1EF5613725A09DCC2B0154FC9E20FC534,
	Device__ctor_mEBED8077E01C7C88268D3A17D1A122C19619565F,
	Device_AddBatteryLevel_m52FBCEDE6C3DABB2CF2E0FFE2E39EF3E59FA0C05,
	Device_AddRuntimeVersions_mC66FA17E3BDC47A2997B69CC4500A9B3BA91DF03,
	Device_get_Hostname_m061751FF2EA9F718E3B7B9B83B844C8E7C777B22,
	Device_get_OsName_mC3B0BFF6D4F83BB7982BBEA3285A6BB58F45BB9B,
	Device_GetDeviceID_mFCE1BAF5297AEB55A22C400F6697187B2BF55E01,
	Event__ctor_m587443DAB06E9780B29148951C27EF3D74C83BC9,
	Event_AddAndroidProjectPackagesToEvent_mF89EBEB6377F383715B177DF0CEAFECA040AB86B,
	Event_get_Metadata_mC75A43D3C781A72083E9145DE6239270FC246EE4,
	Event_get_Session_m5BD12E033CB6D04B8A936CFA21F9CDFBBD1CFF8B,
	Event_get_IsHandled_mCD2BDDDD2CB48529D43548C0B8771D84E875AC56,
	Event_get_Context_mA722693A442538BC24823C392640E859822D85A5,
	Event_get_Exceptions_m4FEDD76045127ABD7F30B8C196E5E0D403E6B403,
	Event_IsAndroidJavaError_m3224B5F0DF85CF4F4F575CBE97F9FD2F13211B85,
	Event_set_HandledState_m1C0B6DB32F3B677D167B89802CB6165A712B74BF,
	Exception_get_HandledState_m28785ECB037DC49F3E05FA3CFE5FDC16561C4A73,
	Exception__ctor_m86A8360EF71BD99B153063372D02094423C03A68,
	Exception_get_ErrorClass_mFE31E4229149A240611C2D88FD23C737FA52E62D,
	Exception_get_ErrorMessage_m204AB1A369D32DCC62610A791F4A1FCA5CC41661,
	Exception_FromUnityLogMessage_m20CFE990BF3F1BCC7D26AB2FA6D9FDD1ADC7E004,
	Exception_ShouldSend_m384CD02922E763A66FC6D01E84CC480A94350D0C,
	Exception__cctor_m3D98B4E211D384D61B0A8AACADE4EF6AE8FEA171,
	HandledState_ForUnhandledException_m8C8CCBCA294A031D7CE250F5EE2C4283E8F6D6B6,
	HandledState_ForUnityLogMessage_mBA6927B0DC28190FB9CB3BAA294DF79F8765E9B0,
	HandledState__ctor_m5C84927D6245CF43C2B14AE4C85F8A0B0622BE06,
	HandledState_get_Handled_mFB5330A6D85BDD2D4552628E27A89D52D9EBC9ED,
	SeverityReason_ForUnhandledException_m68AB1DC05CBEB6B835F9DF95733C56900557CABF,
	SeverityReason_ForHandledException_m1F7C53235CD0CD3FBB34B70653623B73ED8BD585,
	SeverityReason__ctor_m467C2882B1FCABC232DF99EA9FA08B53067729BB,
	NULL,
	NULL,
	Metadata__ctor_m2B28C18C6F0C6360DB7C0789C385ED6458484181,
	Metadata__ctor_mA308EBDA76A73A36216B0F92C8C85604D747B485,
	Method__ctor_m51CC5694183D07A04776960933FEFE1483B0A84F,
	Method_DisplayName_m1FCF7D819672941C54B216C9201BE7B863FE8B68,
	U3CU3Ec__cctor_mA88A3C5E19FFB2097C626B4308D9C991E4A75B01,
	U3CU3Ec__ctor_m42AA96B9EB7B9F1C502A3710FF1A1BAB465875CC,
	U3CU3Ec_U3CDisplayNameU3Eb__2_1_mAEA90492AED9E4E98DA991B718D2645ABECDD1FD,
	U3CU3Ec_U3CDisplayNameU3Eb__2_0_m84433977A1889746FF907582EB4F363E42E813B7,
	MethodParameter__ctor_m9F2CB9654F50EC928E9F6BDF99B7CDFFDF3F8B4F,
	MethodParameter_DisplayName_m0C4963CD52E9B7664CC81806B43B1BC9985010BF,
	NotifierInfo_get_Instance_mAD5980B9F6E53B96C691D19C42359B21DA26C73C,
	NotifierInfo__ctor_m7E0234B62716BA0011E880DE50AFC175ABC75191,
	NotifierInfo__cctor_m92B2663812AF0BADD31F7AAC4B6C533174D57720,
	NULL,
	NULL,
	Report_get_Configuration_mCFBF9266C8D9890E405C892AF38EEDD72DAFF709,
	Report_get_Endpoint_m372FDC625EEEFB11E25161EBFDD298058ECF2B07,
	Report_get_Headers_mFD25FC0EBA0EED4D62440927EA0275ED7F256879,
	Report_get_Ignored_m9D78B9756E86569CB66CB772D24FAC3AB35F1F72,
	Report_set_Ignored_m5DFD0D3C7919958F4F0890DCD479720F9CE79582,
	Report__ctor_mD48B274358B93E7D12BC830D8DC35D7C59D08670,
	Report_get_Event_mFB943D64F68FDB07C1A3D1FDAB62AC3FF2AA615A,
	Report_get_IsHandled_m1793E8C127D675BE35EC8AAE86811EB00B9A5E3D,
	Report_get_Session_mDEB462A5F4872A5146EA1E45C51317201953D40F,
	Report_get_Context_mB985979CACF96D130B19FB078BB83136D0A1D9D0,
	Report_get_Exceptions_mCD79F220EA93B9EB710DFFBA951F5A1BCEFD8090,
	Session_get_Id_m5AA03AAE88A78D7B419CA9FC4AE5D02C9DFA405C,
	Session_get_StartedAt_m0F447C2AAF418766688D2B9B1912D9C2323F02C3,
	Session_HandledCount_m715C05B265E3D3BE4A3163F796E6BE6571388D0A,
	Session_UnhandledCount_m8FBB8670C4C46D102267F7DFA4D4E1A492678DA1,
	Session_get_Events_mA95D0EACE57A8CE5EE635DB751545865B6A7156F,
	Session_get_Stopped_m2723A1AF20DEA2A32543217F6E05B044259016AD,
	Session_set_Stopped_mB5646C5B6A7E3BFE735B48D70AB5B3077E93BD7E,
	Session__ctor_m855F3D28E8CC56ABCFF255F069BF21B57698D3FB,
	Session__ctor_m911C5FDDEF9651622DACE85B454F3DD6EE507E46,
	Session__ctor_m10EE3F51C23DC3213E7BDC79EDECA97B70B53737,
	Session_AddException_mB64061B639958292541D50151BC1A040AE849D3C,
	Session_Copy_m5D24A54550FADEA1BD726431A94556EE1931F5FC,
	SessionEvents__ctor_m06A826A9815D5A15CCFF11D5C943227ADBDBD63C,
	SessionEvents_get_Handled_m60BA5FFAD5A91CA80098D68E2F90E4615B4F4CDF,
	SessionEvents_get_Unhandled_mDE670CC59779CE0E361761C060FD0578E7C5DB32,
	SessionEvents_IncrementHandledCount_mB343B8E9EB2448FC73CB5906FE317C0660AF658B,
	SessionEvents_IncrementUnhandledCount_m4E2A23D085B7964FABC8B5815E08FBDD0AF17A7E,
	SessionReport_get_Configuration_m16A6000CA773BA8C13CE3EB1B93A6D5D4A13BEF8,
	SessionReport_get_Endpoint_m3C2EE493942EF71F82A1D8EB28056F4D3C92E7E2,
	SessionReport_get_Headers_mCA32F2E84B3794082297C32CBAFCB18301C190F3,
	SessionReport__ctor_mFF3D74D0DBD96118F01E349F4E36883471442EFA,
	Session__ctor_m8BBDC5EDF1B427D1B51E794DDDE6668EAA793DEF,
	StackTrace_get_StackTraceLines_mA9224DCBDF91C0F70811432024079618B3B16C13,
	StackTrace__ctor_m8553D9F6141B6FAC735D2538B4A7C85CA2BF40EE,
	StackTrace__ctor_m8BD07040FDFAFCBCC7DF13321535B0B4C82E6673,
	StackTrace__ctor_mB820A84A6E3E2FEC2F50AD4DA07DB40F3A650226,
	StackTrace_GetEnumerator_mEF69D0B6B8681275EEED4E28E27E503B2134CE54,
	StackTrace_System_Collections_IEnumerable_GetEnumerator_mF135DFABA72AFEC4AF3088C3BCA699FA8C36B89A,
	U3CGetEnumeratorU3Ed__6__ctor_mFE8404DC7B4C243C72E84A84294F4608EB6AACFF,
	U3CGetEnumeratorU3Ed__6_System_IDisposable_Dispose_m4B616A105982FBD2319F9BD2F4385F382743C86A,
	U3CGetEnumeratorU3Ed__6_MoveNext_mD10CE1BEE0F63574579627C2D964D3795C676D2F,
	U3CGetEnumeratorU3Ed__6_System_Collections_Generic_IEnumeratorU3CBugsnagUnity_Payload_StackTraceLineU3E_get_Current_m72F7E7B5D74A1D5AE3DCF796E77F1A3BB4A8BC49,
	U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_Reset_m78F1F0653A23E0E8C64F388141FBEB7D3DFB0BCA,
	U3CGetEnumeratorU3Ed__6_System_Collections_IEnumerator_get_Current_mBEB6651785EFD3B85CC34ACABF6B46F327F9E700,
	StackTraceLine_get_StackTraceLineRegex_m5DF908873D5D824CA3EB91A262320177277B8546,
	StackTraceLine_get_StackTraceAndroidJavaLineRegex_m55689D2BE5CCCACCEFB66CA6BB4FEAF48AA55FCE,
	StackTraceLine_FromLogMessage_m8771E3140BAC222A8C152604788CF4F84ECA6338,
	StackTraceLine_FromAndroidJavaMessage_m3C6986D8E1BF2713DA96DB10AFCDCB662AC752D5,
	StackTraceLine_FromStackFrame_m4ED5ECEED0325886D308DB2A78A235F48B82B34F,
	StackTraceLine__ctor_m6869D1A50C2AAD6EECE86E7CB5690B38264E95A7,
	StackTraceLine__cctor_m36A6948D08413EE88BBB9F378D31B3535D20A37B,
	User_add_PropertyChanged_m7810F442F73C4A1B40A81F2AAF35FDBCD2046BDE,
	User_remove_PropertyChanged_m26AC8B82B5DB9E7052EE3FD68CCB2DB340634589,
	User__ctor_mB61CAAECB6E87FA81645BCD6B8EB0AD50A6AC803,
	User_get_Id_mF34E009F2157BD7C88F95A17A3208FB7918E464B,
	User_set_Id_m561E107CB68AC815EFA94AB26ECA8B72D24281BE,
	User_get_Name_m5B313DDF5BB09990A0F9D7A263C1D2FCCFC59D2E,
	User_set_Name_m0C2959B78D21BA31BEED943981AEB30D49C7554D,
	User_get_Email_mD60C7F89EEB6E76FD1CA60A62DEAEB8FBD5EBFC0,
	User_set_Email_mF01FA3513068D92682DD94AEA5393F3E3446AA68,
	User_OnPropertyChanged_mB6534A6560FA71286D8BBAF7112FFBAE061DC54D,
};
extern void DisplayNameOptions__ctor_m7E99A1E3C81711A29BE33CB4754657339DAD79CC_AdjustorThunk (void);
extern void DisplayNameOptions_get_FullName_mFE86F6A03EB618897927CA4287564A6033104505_AdjustorThunk (void);
extern void DisplayNameOptions_get_IncludeGenericParameterNames_m092A7D883E43CCA55F7C2AB84A669301571B23CB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x0600012E, DisplayNameOptions__ctor_m7E99A1E3C81711A29BE33CB4754657339DAD79CC_AdjustorThunk },
	{ 0x0600012F, DisplayNameOptions_get_FullName_mFE86F6A03EB618897927CA4287564A6033104505_AdjustorThunk },
	{ 0x06000130, DisplayNameOptions_get_IncludeGenericParameterNames_m092A7D883E43CCA55F7C2AB84A669301571B23CB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[592] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	5074,
	5215,
	5172,
	5215,
	5174,
	5243,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3469,
	3438,
	2873,
	3505,
	3505,
	3469,
	3505,
	2873,
	1673,
	969,
	969,
	661,
	2873,
	2498,
	2498,
	2903,
	3469,
	3438,
	5243,
	1651,
	2856,
	3505,
	3469,
	3438,
	3505,
	3438,
	3438,
	3438,
	3438,
	3421,
	3420,
	3469,
	3469,
	2498,
	2873,
	3469,
	3492,
	3438,
	3492,
	2928,
	3420,
	2475,
	3438,
	2873,
	2475,
	3438,
	2873,
	3420,
	2856,
	3438,
	2873,
	3438,
	3438,
	3438,
	2873,
	3438,
	3438,
	3438,
	3438,
	2873,
	3420,
	2856,
	3469,
	2903,
	2903,
	3469,
	2903,
	3438,
	3438,
	2873,
	3438,
	2873,
	3438,
	2873,
	3438,
	2873,
	3421,
	3438,
	3420,
	2498,
	2475,
	2475,
	3469,
	3469,
	3469,
	3469,
	3505,
	962,
	2873,
	3438,
	1648,
	2873,
	791,
	2873,
	2903,
	3438,
	3421,
	3469,
	3469,
	3438,
	3438,
	3438,
	3420,
	3469,
	3420,
	2498,
	2498,
	2475,
	2475,
	3492,
	3438,
	2475,
	2475,
	3438,
	3492,
	3420,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	3438,
	2873,
	3420,
	3469,
	3469,
	3438,
	3438,
	3438,
	3438,
	3421,
	3438,
	3438,
	2873,
	3469,
	2903,
	3438,
	3438,
	3438,
	3505,
	3505,
	2873,
	2873,
	1158,
	3469,
	3505,
	3505,
	2856,
	3505,
	3469,
	3505,
	3438,
	3505,
	3438,
	3438,
	3438,
	3438,
	2873,
	2873,
	1651,
	3505,
	3469,
	2873,
	3438,
	2873,
	2873,
	2873,
	2873,
	3438,
	3505,
	2074,
	3505,
	2873,
	2873,
	2213,
	1656,
	1160,
	5229,
	5215,
	3505,
	3505,
	3505,
	5243,
	3505,
	3505,
	2856,
	3505,
	3469,
	3438,
	3505,
	3438,
	2856,
	3505,
	3469,
	3438,
	3505,
	3438,
	3438,
	3438,
	3390,
	2824,
	3492,
	3438,
	2873,
	2498,
	3505,
	3469,
	3438,
	2873,
	3438,
	3438,
	2873,
	3438,
	2873,
	3505,
	3505,
	3469,
	3469,
	2873,
	3469,
	5215,
	4693,
	5243,
	1243,
	2074,
	3505,
	3505,
	1651,
	2498,
	3438,
	2498,
	1261,
	3438,
	2213,
	1651,
	2753,
	3505,
	2332,
	1646,
	3420,
	3469,
	2332,
	3438,
	3438,
	5243,
	3929,
	4865,
	4465,
	3697,
	3633,
	3697,
	4713,
	4827,
	4713,
	5215,
	5215,
	1261,
	3505,
	2213,
	2213,
	2213,
	2213,
	1261,
	2213,
	1261,
	1261,
	5243,
	3505,
	2903,
	2903,
	3505,
	4291,
	4472,
	4472,
	3927,
	5243,
	1671,
	3469,
	3469,
	3438,
	3390,
	2824,
	3438,
	3492,
	2873,
	2498,
	1268,
	2090,
	3505,
	969,
	3438,
	3438,
	3420,
	3390,
	5243,
	5243,
	5243,
	5243,
	3505,
	962,
	2873,
	3438,
	3602,
	3438,
	3438,
	3438,
	3422,
	2873,
	2175,
	2213,
	1622,
	1622,
	2873,
	4436,
	2873,
	4436,
	2873,
	1651,
	2873,
	3713,
	2873,
	2873,
	3505,
	3469,
	2873,
	3438,
	3889,
	4835,
	4164,
	4835,
	4835,
	4835,
	4835,
	4835,
	5167,
	5035,
	4835,
	4836,
	4836,
	4836,
	4836,
	4835,
	4833,
	4834,
	4833,
	4834,
	4435,
	4435,
	4435,
	4435,
	4835,
	4835,
	4835,
	4835,
	4835,
	4436,
	4435,
	4185,
	4835,
	4465,
	5243,
	5229,
	4173,
	1648,
	258,
	88,
	2873,
	1648,
	169,
	54,
	2873,
	1648,
	72,
	27,
	2873,
	5074,
	5112,
	5074,
	4620,
	5074,
	5074,
	5074,
	5074,
	4620,
	5074,
	4620,
	5074,
	5074,
	5074,
	5074,
	5074,
	5074,
	5074,
	5074,
	4620,
	5243,
	1648,
	2213,
	791,
	2213,
	1648,
	1651,
	501,
	2873,
	1648,
	2213,
	791,
	2213,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3505,
	2213,
	3505,
	2213,
	3505,
	2213,
	3505,
	1651,
	3505,
	1651,
	5112,
	2873,
	2873,
	2873,
	2903,
	2928,
	3438,
	3505,
	5074,
	663,
	962,
	3438,
	3438,
	3438,
	5243,
	3505,
	2873,
	3505,
	2873,
	5215,
	5215,
	3438,
	33,
	2873,
	3438,
	3438,
	3469,
	3438,
	3438,
	3469,
	2873,
	3438,
	276,
	3438,
	3438,
	4062,
	5112,
	5243,
	5215,
	5070,
	997,
	3469,
	5215,
	5215,
	1651,
	3438,
	3438,
	3505,
	2873,
	2873,
	3438,
	5243,
	3505,
	2213,
	2213,
	2873,
	3438,
	5215,
	3505,
	5243,
	-1,
	-1,
	3438,
	3438,
	3438,
	3469,
	2903,
	1651,
	3438,
	3469,
	3438,
	3438,
	3438,
	3416,
	3390,
	3420,
	3420,
	3438,
	3469,
	2903,
	3505,
	913,
	640,
	2873,
	3438,
	1518,
	3420,
	3420,
	3505,
	3505,
	3438,
	3438,
	3438,
	275,
	1651,
	3438,
	2873,
	2873,
	1646,
	3438,
	3438,
	2856,
	3505,
	3469,
	3438,
	3505,
	3438,
	5215,
	5215,
	5074,
	5074,
	5074,
	947,
	5243,
	2873,
	2873,
	3505,
	3438,
	2873,
	3438,
	2873,
	3438,
	2873,
	2873,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[5] = 
{
	{ 0x06000148, 0,  (void**)&Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3_RuntimeMethod_var, 0 },
	{ 0x06000153, 1,  (void**)&NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D_RuntimeMethod_var, 0 },
	{ 0x06000155, 2,  (void**)&NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE_RuntimeMethod_var, 0 },
	{ 0x06000159, 3,  (void**)&NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF_RuntimeMethod_var, 0 },
	{ 0x06000160, 4,  (void**)&NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[4] = 
{
	{ 0x02000002, { 0, 7 } },
	{ 0x02000037, { 7, 15 } },
	{ 0x06000211, { 22, 2 } },
	{ 0x06000212, { 24, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[25] = 
{
	{ (Il2CppRGCTXDataType)2, 5745 },
	{ (Il2CppRGCTXDataType)3, 24604 },
	{ (Il2CppRGCTXDataType)3, 2582 },
	{ (Il2CppRGCTXDataType)3, 2581 },
	{ (Il2CppRGCTXDataType)3, 24606 },
	{ (Il2CppRGCTXDataType)3, 24607 },
	{ (Il2CppRGCTXDataType)3, 24605 },
	{ (Il2CppRGCTXDataType)3, 27688 },
	{ (Il2CppRGCTXDataType)3, 4106 },
	{ (Il2CppRGCTXDataType)3, 27680 },
	{ (Il2CppRGCTXDataType)2, 2060 },
	{ (Il2CppRGCTXDataType)3, 4102 },
	{ (Il2CppRGCTXDataType)3, 4110 },
	{ (Il2CppRGCTXDataType)3, 4103 },
	{ (Il2CppRGCTXDataType)3, 4104 },
	{ (Il2CppRGCTXDataType)3, 4108 },
	{ (Il2CppRGCTXDataType)3, 27690 },
	{ (Il2CppRGCTXDataType)3, 4109 },
	{ (Il2CppRGCTXDataType)3, 27689 },
	{ (Il2CppRGCTXDataType)3, 4107 },
	{ (Il2CppRGCTXDataType)3, 4105 },
	{ (Il2CppRGCTXDataType)2, 2509 },
	{ (Il2CppRGCTXDataType)2, 369 },
	{ (Il2CppRGCTXDataType)2, 3805 },
	{ (Il2CppRGCTXDataType)3, 3947 },
};
extern const CustomAttributesCacheGenerator g_BugsnagUnity_iOS_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_BugsnagUnity_iOS_CodeGenModule;
const Il2CppCodeGenModule g_BugsnagUnity_iOS_CodeGenModule = 
{
	"BugsnagUnity.iOS.dll",
	592,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	5,
	s_reversePInvokeIndices,
	4,
	s_rgctxIndices,
	25,
	s_rgctxValues,
	NULL,
	g_BugsnagUnity_iOS_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
