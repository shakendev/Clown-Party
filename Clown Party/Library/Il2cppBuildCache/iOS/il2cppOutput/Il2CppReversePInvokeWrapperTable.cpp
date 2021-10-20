#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3(intptr_t ___instance0, char* ___name1, char* ___timestamp2, char* ___type3, char** ___keys4, int32_t ___keysSize5, char** ___values6, int32_t ___valuesSize7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D(intptr_t ___instance0, char* ___key1, char* ___value2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE(intptr_t ___instance0, char* ___key1, char* ___value2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF(intptr_t ___instance0, char* ___tab1, char** ___keys2, int32_t ___keysSize3, char** ___values4, int32_t ___valuesSize5);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33(intptr_t ___instance0, char* ___sessionId1, char* ___startedAt2, int32_t ___handled3, int32_t ___unhandled4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[6] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Breadcrumbs_PopulateBreadcrumb_m2DAEE04399B5795AA8A244BDFFDAE4F0D3148ED3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeClient_PopulateAppData_m3214B92897F50DCBB4560C363F9A40B6C487443D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeClient_PopulateDeviceData_m576842721B552FD27EA3DBA54DED723175733CCE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeClient_PopulateMetaDataData_m2A550CB4AB068C95AC6B0DCFC1CD4AC56DC4FAAF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeClient_PopulateSession_m2A9E289730AAD2DD00F4ABE4E65672E7EACB0C33),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
};
