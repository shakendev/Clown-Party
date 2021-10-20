#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32>
struct Dictionary_2_t08AD3F0525CD3932A1E1AF1B57BF0A608CF04E01;
// System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>
struct List_1_tC40AE1C16FF97971A671A17078D932414DB50548;
// System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>
struct List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// BugsnagUnity.Payload.BreadcrumbType[]
struct BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// BugsnagUnity.ErrorTypes[]
struct ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// BugsnagUnity.BugsnagBehaviour
struct BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F;
// BugsnagUnity.Configuration
struct Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386;
// BugsnagUnity.EndpointConfiguration
struct EndpointConfiguration_t40DCD291D469FA41B27C71CD6D07B6A754A4D4E7;
// BugsnagUnity.IClient
struct IClient_t2F6161B4947F9A89711F33FBAB67179F4FD2B5A3;
// BugsnagUnity.IConfiguration
struct IConfiguration_t6A8C11DB1F22781879D29E2AEEA8BA1A1944EAF0;
// BugsnagUnity.LogTypeSeverityMapping
struct LogTypeSeverityMapping_tFE38E93468061FF8A3D7F43090FBF7F9AEA39894;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// BugsnagUnity.BugsnagBehaviour/EnumFlagsAttribute
struct EnumFlagsAttribute_t77F943C25C2A723340378B6975B8F9A9E4BD425F;
// BugsnagUnity.BugsnagBehaviour/LabelOverride
struct LabelOverride_tA7841E2A4FC0B42E4D0080B5F73CE34D2C0FA8DE;

IL2CPP_EXTERN_C RuntimeClass* BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bugsnag_tFD8CBF41994B7A55374BF818C9329CC837F1C2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC40AE1C16FF97971A671A17078D932414DB50548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE21E3CD0D6D6F4883EAD9580CF44EA6B25A52A;
IL2CPP_EXTERN_C String_t* _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE0001035D36CCCF92426705CB86FD943CE2BC213;
IL2CPP_EXTERN_C String_t* _stringLiteralED3FA9B20408EBC0D63491E6DCA0EEAFEE7BA37F;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0993DE97280299ED3964D5F5452E71CE965DD3AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8DFCDF80D85591B8E8C0CD68BDFC960979688B1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m4913E814FD38F6F5972B89C69A70D97FCBCA91EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA39CB7559090C54237EB03D5A7638CE0BF71564B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m894B6A4C0092C564430710EC64D4C2155ECE22A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB80F15F62119FC49319A0E4C345E23705123D257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m538BD86415384BCBDFE70AB2D7D495D66F448F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDE305AE9946030C6C7A41A9D8A719B039C203BB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_0_0_0_var;

struct BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2;
struct ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>
struct List_1_tC40AE1C16FF97971A671A17078D932414DB50548  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC40AE1C16FF97971A671A17078D932414DB50548, ____items_1)); }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* get__items_1() const { return ____items_1; }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC40AE1C16FF97971A671A17078D932414DB50548, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC40AE1C16FF97971A671A17078D932414DB50548, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC40AE1C16FF97971A671A17078D932414DB50548, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC40AE1C16FF97971A671A17078D932414DB50548_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC40AE1C16FF97971A671A17078D932414DB50548_StaticFields, ____emptyArray_5)); }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>
struct List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC, ____items_1)); }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* get__items_1() const { return ____items_1; }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC_StaticFields, ____emptyArray_5)); }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BugsnagUnity.Payload.BreadcrumbType
struct BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC 
{
public:
	// System.Int32 BugsnagUnity.Payload.BreadcrumbType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BugsnagUnity.ErrorTypes
struct ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C 
{
public:
	// System.Int32 BugsnagUnity.ErrorTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// BugsnagUnity.ThreadSendPolicy
struct ThreadSendPolicy_t48A65261E788D9BB21D834559EC573433BDE4A87 
{
public:
	// System.Int32 BugsnagUnity.ThreadSendPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadSendPolicy_t48A65261E788D9BB21D834559EC573433BDE4A87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// BugsnagUnity.BugsnagBehaviour/EnumFlagsAttribute
struct EnumFlagsAttribute_t77F943C25C2A723340378B6975B8F9A9E4BD425F  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// BugsnagUnity.BugsnagBehaviour/LabelOverride
struct LabelOverride_tA7841E2A4FC0B42E4D0080B5F73CE34D2C0FA8DE  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String BugsnagUnity.BugsnagBehaviour/LabelOverride::label
	String_t* ___label_0;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(LabelOverride_tA7841E2A4FC0B42E4D0080B5F73CE34D2C0FA8DE, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_0), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// BugsnagUnity.Configuration
struct Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386  : public RuntimeObject
{
public:
	// System.String BugsnagUnity.Configuration::<BundleVersion>k__BackingField
	String_t* ___U3CBundleVersionU3Ek__BackingField_0;
	// System.String BugsnagUnity.Configuration::<AppType>k__BackingField
	String_t* ___U3CAppTypeU3Ek__BackingField_1;
	// System.String[] BugsnagUnity.Configuration::<RedactedKeys>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CRedactedKeysU3Ek__BackingField_2;
	// System.Int32 BugsnagUnity.Configuration::<VersionCode>k__BackingField
	int32_t ___U3CVersionCodeU3Ek__BackingField_3;
	// System.Int64 BugsnagUnity.Configuration::<LaunchDurationMillis>k__BackingField
	int64_t ___U3CLaunchDurationMillisU3Ek__BackingField_4;
	// BugsnagUnity.ThreadSendPolicy BugsnagUnity.Configuration::<SendThreads>k__BackingField
	int32_t ___U3CSendThreadsU3Ek__BackingField_5;
	// System.Boolean BugsnagUnity.Configuration::<SendLaunchCrashesSynchronously>k__BackingField
	bool ___U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6;
	// System.Boolean BugsnagUnity.Configuration::<PersistUser>k__BackingField
	bool ___U3CPersistUserU3Ek__BackingField_7;
	// System.Boolean BugsnagUnity.Configuration::<ReportUncaughtExceptionsAsHandled>k__BackingField
	bool ___U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8;
	// System.TimeSpan BugsnagUnity.Configuration::<MaximumLogsTimePeriod>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CMaximumLogsTimePeriodU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.LogType,System.Int32> BugsnagUnity.Configuration::<MaximumTypePerTimePeriod>k__BackingField
	Dictionary_2_t08AD3F0525CD3932A1E1AF1B57BF0A608CF04E01 * ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10;
	// System.TimeSpan BugsnagUnity.Configuration::<UniqueLogsTimePeriod>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CUniqueLogsTimePeriodU3Ek__BackingField_11;
	// UnityEngine.LogType BugsnagUnity.Configuration::<BreadcrumbLogLevel>k__BackingField
	int32_t ___U3CBreadcrumbLogLevelU3Ek__BackingField_12;
	// BugsnagUnity.Payload.BreadcrumbType[] BugsnagUnity.Configuration::<EnabledBreadcrumbTypes>k__BackingField
	BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* ___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13;
	// System.String BugsnagUnity.Configuration::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_14;
	// System.Int32 BugsnagUnity.Configuration::_maximumBreadcrumbs
	int32_t ____maximumBreadcrumbs_15;
	// System.String BugsnagUnity.Configuration::<ReleaseStage>k__BackingField
	String_t* ___U3CReleaseStageU3Ek__BackingField_16;
	// System.String[] BugsnagUnity.Configuration::_enabledReleaseStages
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____enabledReleaseStages_17;
	// System.String[] BugsnagUnity.Configuration::<ProjectPackages>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CProjectPackagesU3Ek__BackingField_18;
	// System.String BugsnagUnity.Configuration::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_19;
	// BugsnagUnity.EndpointConfiguration BugsnagUnity.Configuration::<Endpoints>k__BackingField
	EndpointConfiguration_t40DCD291D469FA41B27C71CD6D07B6A754A4D4E7 * ___U3CEndpointsU3Ek__BackingField_20;
	// System.String BugsnagUnity.Configuration::<PayloadVersion>k__BackingField
	String_t* ___U3CPayloadVersionU3Ek__BackingField_21;
	// System.String BugsnagUnity.Configuration::<SessionPayloadVersion>k__BackingField
	String_t* ___U3CSessionPayloadVersionU3Ek__BackingField_22;
	// System.String BugsnagUnity.Configuration::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_23;
	// UnityEngine.LogType BugsnagUnity.Configuration::_notifyLogLevel
	int32_t ____notifyLogLevel_24;
	// System.Boolean BugsnagUnity.Configuration::_autoDetectErrors
	bool ____autoDetectErrors_25;
	// System.Boolean BugsnagUnity.Configuration::<AutoDetectAnrs>k__BackingField
	bool ___U3CAutoDetectAnrsU3Ek__BackingField_26;
	// System.Boolean BugsnagUnity.Configuration::_autoTrackSessions
	bool ____autoTrackSessions_27;
	// BugsnagUnity.LogTypeSeverityMapping BugsnagUnity.Configuration::<LogTypeSeverityMapping>k__BackingField
	LogTypeSeverityMapping_tFE38E93468061FF8A3D7F43090FBF7F9AEA39894 * ___U3CLogTypeSeverityMappingU3Ek__BackingField_28;
	// System.String BugsnagUnity.Configuration::<ScriptingBackend>k__BackingField
	String_t* ___U3CScriptingBackendU3Ek__BackingField_29;
	// System.String BugsnagUnity.Configuration::<DotnetScriptingRuntime>k__BackingField
	String_t* ___U3CDotnetScriptingRuntimeU3Ek__BackingField_30;
	// System.String BugsnagUnity.Configuration::<DotnetApiCompatibility>k__BackingField
	String_t* ___U3CDotnetApiCompatibilityU3Ek__BackingField_31;
	// BugsnagUnity.ErrorTypes[] BugsnagUnity.Configuration::<EnabledErrorTypes>k__BackingField
	ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* ___U3CEnabledErrorTypesU3Ek__BackingField_32;
	// System.UInt64 BugsnagUnity.Configuration::_appHangThresholdMillis
	uint64_t ____appHangThresholdMillis_33;
	// System.String[] BugsnagUnity.Configuration::<DiscardClasses>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CDiscardClassesU3Ek__BackingField_34;
	// System.Int32 BugsnagUnity.Configuration::<MaxPersistedEvents>k__BackingField
	int32_t ___U3CMaxPersistedEventsU3Ek__BackingField_35;

public:
	inline static int32_t get_offset_of_U3CBundleVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CBundleVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CBundleVersionU3Ek__BackingField_0() const { return ___U3CBundleVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CBundleVersionU3Ek__BackingField_0() { return &___U3CBundleVersionU3Ek__BackingField_0; }
	inline void set_U3CBundleVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CBundleVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBundleVersionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CAppTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppTypeU3Ek__BackingField_1() const { return ___U3CAppTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppTypeU3Ek__BackingField_1() { return &___U3CAppTypeU3Ek__BackingField_1; }
	inline void set_U3CAppTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRedactedKeysU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CRedactedKeysU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CRedactedKeysU3Ek__BackingField_2() const { return ___U3CRedactedKeysU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CRedactedKeysU3Ek__BackingField_2() { return &___U3CRedactedKeysU3Ek__BackingField_2; }
	inline void set_U3CRedactedKeysU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CRedactedKeysU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRedactedKeysU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CVersionCodeU3Ek__BackingField_3)); }
	inline int32_t get_U3CVersionCodeU3Ek__BackingField_3() const { return ___U3CVersionCodeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CVersionCodeU3Ek__BackingField_3() { return &___U3CVersionCodeU3Ek__BackingField_3; }
	inline void set_U3CVersionCodeU3Ek__BackingField_3(int32_t value)
	{
		___U3CVersionCodeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLaunchDurationMillisU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CLaunchDurationMillisU3Ek__BackingField_4)); }
	inline int64_t get_U3CLaunchDurationMillisU3Ek__BackingField_4() const { return ___U3CLaunchDurationMillisU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CLaunchDurationMillisU3Ek__BackingField_4() { return &___U3CLaunchDurationMillisU3Ek__BackingField_4; }
	inline void set_U3CLaunchDurationMillisU3Ek__BackingField_4(int64_t value)
	{
		___U3CLaunchDurationMillisU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSendThreadsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CSendThreadsU3Ek__BackingField_5)); }
	inline int32_t get_U3CSendThreadsU3Ek__BackingField_5() const { return ___U3CSendThreadsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CSendThreadsU3Ek__BackingField_5() { return &___U3CSendThreadsU3Ek__BackingField_5; }
	inline void set_U3CSendThreadsU3Ek__BackingField_5(int32_t value)
	{
		___U3CSendThreadsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6)); }
	inline bool get_U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6() const { return ___U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6() { return &___U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6; }
	inline void set_U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6(bool value)
	{
		___U3CSendLaunchCrashesSynchronouslyU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CPersistUserU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CPersistUserU3Ek__BackingField_7)); }
	inline bool get_U3CPersistUserU3Ek__BackingField_7() const { return ___U3CPersistUserU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CPersistUserU3Ek__BackingField_7() { return &___U3CPersistUserU3Ek__BackingField_7; }
	inline void set_U3CPersistUserU3Ek__BackingField_7(bool value)
	{
		___U3CPersistUserU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8)); }
	inline bool get_U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8() const { return ___U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8() { return &___U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8; }
	inline void set_U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8(bool value)
	{
		___U3CReportUncaughtExceptionsAsHandledU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumLogsTimePeriodU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CMaximumLogsTimePeriodU3Ek__BackingField_9)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CMaximumLogsTimePeriodU3Ek__BackingField_9() const { return ___U3CMaximumLogsTimePeriodU3Ek__BackingField_9; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CMaximumLogsTimePeriodU3Ek__BackingField_9() { return &___U3CMaximumLogsTimePeriodU3Ek__BackingField_9; }
	inline void set_U3CMaximumLogsTimePeriodU3Ek__BackingField_9(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CMaximumLogsTimePeriodU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumTypePerTimePeriodU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10)); }
	inline Dictionary_2_t08AD3F0525CD3932A1E1AF1B57BF0A608CF04E01 * get_U3CMaximumTypePerTimePeriodU3Ek__BackingField_10() const { return ___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10; }
	inline Dictionary_2_t08AD3F0525CD3932A1E1AF1B57BF0A608CF04E01 ** get_address_of_U3CMaximumTypePerTimePeriodU3Ek__BackingField_10() { return &___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10; }
	inline void set_U3CMaximumTypePerTimePeriodU3Ek__BackingField_10(Dictionary_2_t08AD3F0525CD3932A1E1AF1B57BF0A608CF04E01 * value)
	{
		___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaximumTypePerTimePeriodU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUniqueLogsTimePeriodU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CUniqueLogsTimePeriodU3Ek__BackingField_11)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CUniqueLogsTimePeriodU3Ek__BackingField_11() const { return ___U3CUniqueLogsTimePeriodU3Ek__BackingField_11; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CUniqueLogsTimePeriodU3Ek__BackingField_11() { return &___U3CUniqueLogsTimePeriodU3Ek__BackingField_11; }
	inline void set_U3CUniqueLogsTimePeriodU3Ek__BackingField_11(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CUniqueLogsTimePeriodU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CBreadcrumbLogLevelU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CBreadcrumbLogLevelU3Ek__BackingField_12)); }
	inline int32_t get_U3CBreadcrumbLogLevelU3Ek__BackingField_12() const { return ___U3CBreadcrumbLogLevelU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CBreadcrumbLogLevelU3Ek__BackingField_12() { return &___U3CBreadcrumbLogLevelU3Ek__BackingField_12; }
	inline void set_U3CBreadcrumbLogLevelU3Ek__BackingField_12(int32_t value)
	{
		___U3CBreadcrumbLogLevelU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledBreadcrumbTypesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13)); }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* get_U3CEnabledBreadcrumbTypesU3Ek__BackingField_13() const { return ___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13; }
	inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2** get_address_of_U3CEnabledBreadcrumbTypesU3Ek__BackingField_13() { return &___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13; }
	inline void set_U3CEnabledBreadcrumbTypesU3Ek__BackingField_13(BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* value)
	{
		___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledBreadcrumbTypesU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApiKeyU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CApiKeyU3Ek__BackingField_14)); }
	inline String_t* get_U3CApiKeyU3Ek__BackingField_14() const { return ___U3CApiKeyU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CApiKeyU3Ek__BackingField_14() { return &___U3CApiKeyU3Ek__BackingField_14; }
	inline void set_U3CApiKeyU3Ek__BackingField_14(String_t* value)
	{
		___U3CApiKeyU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApiKeyU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of__maximumBreadcrumbs_15() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____maximumBreadcrumbs_15)); }
	inline int32_t get__maximumBreadcrumbs_15() const { return ____maximumBreadcrumbs_15; }
	inline int32_t* get_address_of__maximumBreadcrumbs_15() { return &____maximumBreadcrumbs_15; }
	inline void set__maximumBreadcrumbs_15(int32_t value)
	{
		____maximumBreadcrumbs_15 = value;
	}

	inline static int32_t get_offset_of_U3CReleaseStageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CReleaseStageU3Ek__BackingField_16)); }
	inline String_t* get_U3CReleaseStageU3Ek__BackingField_16() const { return ___U3CReleaseStageU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CReleaseStageU3Ek__BackingField_16() { return &___U3CReleaseStageU3Ek__BackingField_16; }
	inline void set_U3CReleaseStageU3Ek__BackingField_16(String_t* value)
	{
		___U3CReleaseStageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReleaseStageU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of__enabledReleaseStages_17() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____enabledReleaseStages_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__enabledReleaseStages_17() const { return ____enabledReleaseStages_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__enabledReleaseStages_17() { return &____enabledReleaseStages_17; }
	inline void set__enabledReleaseStages_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____enabledReleaseStages_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enabledReleaseStages_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProjectPackagesU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CProjectPackagesU3Ek__BackingField_18)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CProjectPackagesU3Ek__BackingField_18() const { return ___U3CProjectPackagesU3Ek__BackingField_18; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CProjectPackagesU3Ek__BackingField_18() { return &___U3CProjectPackagesU3Ek__BackingField_18; }
	inline void set_U3CProjectPackagesU3Ek__BackingField_18(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CProjectPackagesU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProjectPackagesU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CAppVersionU3Ek__BackingField_19)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_19() const { return ___U3CAppVersionU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_19() { return &___U3CAppVersionU3Ek__BackingField_19; }
	inline void set_U3CAppVersionU3Ek__BackingField_19(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndpointsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CEndpointsU3Ek__BackingField_20)); }
	inline EndpointConfiguration_t40DCD291D469FA41B27C71CD6D07B6A754A4D4E7 * get_U3CEndpointsU3Ek__BackingField_20() const { return ___U3CEndpointsU3Ek__BackingField_20; }
	inline EndpointConfiguration_t40DCD291D469FA41B27C71CD6D07B6A754A4D4E7 ** get_address_of_U3CEndpointsU3Ek__BackingField_20() { return &___U3CEndpointsU3Ek__BackingField_20; }
	inline void set_U3CEndpointsU3Ek__BackingField_20(EndpointConfiguration_t40DCD291D469FA41B27C71CD6D07B6A754A4D4E7 * value)
	{
		___U3CEndpointsU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEndpointsU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPayloadVersionU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CPayloadVersionU3Ek__BackingField_21)); }
	inline String_t* get_U3CPayloadVersionU3Ek__BackingField_21() const { return ___U3CPayloadVersionU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CPayloadVersionU3Ek__BackingField_21() { return &___U3CPayloadVersionU3Ek__BackingField_21; }
	inline void set_U3CPayloadVersionU3Ek__BackingField_21(String_t* value)
	{
		___U3CPayloadVersionU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPayloadVersionU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionPayloadVersionU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CSessionPayloadVersionU3Ek__BackingField_22)); }
	inline String_t* get_U3CSessionPayloadVersionU3Ek__BackingField_22() const { return ___U3CSessionPayloadVersionU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSessionPayloadVersionU3Ek__BackingField_22() { return &___U3CSessionPayloadVersionU3Ek__BackingField_22; }
	inline void set_U3CSessionPayloadVersionU3Ek__BackingField_22(String_t* value)
	{
		___U3CSessionPayloadVersionU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSessionPayloadVersionU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CContextU3Ek__BackingField_23)); }
	inline String_t* get_U3CContextU3Ek__BackingField_23() const { return ___U3CContextU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CContextU3Ek__BackingField_23() { return &___U3CContextU3Ek__BackingField_23; }
	inline void set_U3CContextU3Ek__BackingField_23(String_t* value)
	{
		___U3CContextU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContextU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of__notifyLogLevel_24() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____notifyLogLevel_24)); }
	inline int32_t get__notifyLogLevel_24() const { return ____notifyLogLevel_24; }
	inline int32_t* get_address_of__notifyLogLevel_24() { return &____notifyLogLevel_24; }
	inline void set__notifyLogLevel_24(int32_t value)
	{
		____notifyLogLevel_24 = value;
	}

	inline static int32_t get_offset_of__autoDetectErrors_25() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____autoDetectErrors_25)); }
	inline bool get__autoDetectErrors_25() const { return ____autoDetectErrors_25; }
	inline bool* get_address_of__autoDetectErrors_25() { return &____autoDetectErrors_25; }
	inline void set__autoDetectErrors_25(bool value)
	{
		____autoDetectErrors_25 = value;
	}

	inline static int32_t get_offset_of_U3CAutoDetectAnrsU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CAutoDetectAnrsU3Ek__BackingField_26)); }
	inline bool get_U3CAutoDetectAnrsU3Ek__BackingField_26() const { return ___U3CAutoDetectAnrsU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CAutoDetectAnrsU3Ek__BackingField_26() { return &___U3CAutoDetectAnrsU3Ek__BackingField_26; }
	inline void set_U3CAutoDetectAnrsU3Ek__BackingField_26(bool value)
	{
		___U3CAutoDetectAnrsU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of__autoTrackSessions_27() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____autoTrackSessions_27)); }
	inline bool get__autoTrackSessions_27() const { return ____autoTrackSessions_27; }
	inline bool* get_address_of__autoTrackSessions_27() { return &____autoTrackSessions_27; }
	inline void set__autoTrackSessions_27(bool value)
	{
		____autoTrackSessions_27 = value;
	}

	inline static int32_t get_offset_of_U3CLogTypeSeverityMappingU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CLogTypeSeverityMappingU3Ek__BackingField_28)); }
	inline LogTypeSeverityMapping_tFE38E93468061FF8A3D7F43090FBF7F9AEA39894 * get_U3CLogTypeSeverityMappingU3Ek__BackingField_28() const { return ___U3CLogTypeSeverityMappingU3Ek__BackingField_28; }
	inline LogTypeSeverityMapping_tFE38E93468061FF8A3D7F43090FBF7F9AEA39894 ** get_address_of_U3CLogTypeSeverityMappingU3Ek__BackingField_28() { return &___U3CLogTypeSeverityMappingU3Ek__BackingField_28; }
	inline void set_U3CLogTypeSeverityMappingU3Ek__BackingField_28(LogTypeSeverityMapping_tFE38E93468061FF8A3D7F43090FBF7F9AEA39894 * value)
	{
		___U3CLogTypeSeverityMappingU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogTypeSeverityMappingU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScriptingBackendU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CScriptingBackendU3Ek__BackingField_29)); }
	inline String_t* get_U3CScriptingBackendU3Ek__BackingField_29() const { return ___U3CScriptingBackendU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CScriptingBackendU3Ek__BackingField_29() { return &___U3CScriptingBackendU3Ek__BackingField_29; }
	inline void set_U3CScriptingBackendU3Ek__BackingField_29(String_t* value)
	{
		___U3CScriptingBackendU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CScriptingBackendU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDotnetScriptingRuntimeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CDotnetScriptingRuntimeU3Ek__BackingField_30)); }
	inline String_t* get_U3CDotnetScriptingRuntimeU3Ek__BackingField_30() const { return ___U3CDotnetScriptingRuntimeU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CDotnetScriptingRuntimeU3Ek__BackingField_30() { return &___U3CDotnetScriptingRuntimeU3Ek__BackingField_30; }
	inline void set_U3CDotnetScriptingRuntimeU3Ek__BackingField_30(String_t* value)
	{
		___U3CDotnetScriptingRuntimeU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDotnetScriptingRuntimeU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDotnetApiCompatibilityU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CDotnetApiCompatibilityU3Ek__BackingField_31)); }
	inline String_t* get_U3CDotnetApiCompatibilityU3Ek__BackingField_31() const { return ___U3CDotnetApiCompatibilityU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CDotnetApiCompatibilityU3Ek__BackingField_31() { return &___U3CDotnetApiCompatibilityU3Ek__BackingField_31; }
	inline void set_U3CDotnetApiCompatibilityU3Ek__BackingField_31(String_t* value)
	{
		___U3CDotnetApiCompatibilityU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDotnetApiCompatibilityU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledErrorTypesU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CEnabledErrorTypesU3Ek__BackingField_32)); }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* get_U3CEnabledErrorTypesU3Ek__BackingField_32() const { return ___U3CEnabledErrorTypesU3Ek__BackingField_32; }
	inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650** get_address_of_U3CEnabledErrorTypesU3Ek__BackingField_32() { return &___U3CEnabledErrorTypesU3Ek__BackingField_32; }
	inline void set_U3CEnabledErrorTypesU3Ek__BackingField_32(ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* value)
	{
		___U3CEnabledErrorTypesU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledErrorTypesU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of__appHangThresholdMillis_33() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ____appHangThresholdMillis_33)); }
	inline uint64_t get__appHangThresholdMillis_33() const { return ____appHangThresholdMillis_33; }
	inline uint64_t* get_address_of__appHangThresholdMillis_33() { return &____appHangThresholdMillis_33; }
	inline void set__appHangThresholdMillis_33(uint64_t value)
	{
		____appHangThresholdMillis_33 = value;
	}

	inline static int32_t get_offset_of_U3CDiscardClassesU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CDiscardClassesU3Ek__BackingField_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CDiscardClassesU3Ek__BackingField_34() const { return ___U3CDiscardClassesU3Ek__BackingField_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CDiscardClassesU3Ek__BackingField_34() { return &___U3CDiscardClassesU3Ek__BackingField_34; }
	inline void set_U3CDiscardClassesU3Ek__BackingField_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CDiscardClassesU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDiscardClassesU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxPersistedEventsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386, ___U3CMaxPersistedEventsU3Ek__BackingField_35)); }
	inline int32_t get_U3CMaxPersistedEventsU3Ek__BackingField_35() const { return ___U3CMaxPersistedEventsU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CMaxPersistedEventsU3Ek__BackingField_35() { return &___U3CMaxPersistedEventsU3Ek__BackingField_35; }
	inline void set_U3CMaxPersistedEventsU3Ek__BackingField_35(int32_t value)
	{
		___U3CMaxPersistedEventsU3Ek__BackingField_35 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BugsnagUnity.BugsnagBehaviour
struct BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String BugsnagUnity.BugsnagBehaviour::APIKey
	String_t* ___APIKey_4;
	// System.Boolean BugsnagUnity.BugsnagBehaviour::AutoDetectErrors
	bool ___AutoDetectErrors_5;
	// System.Boolean BugsnagUnity.BugsnagBehaviour::AutoDetectAnrs
	bool ___AutoDetectAnrs_6;
	// System.Boolean BugsnagUnity.BugsnagBehaviour::AutoTrackSessions
	bool ___AutoTrackSessions_7;
	// UnityEngine.LogType BugsnagUnity.BugsnagBehaviour::NotifyLogLevel
	int32_t ___NotifyLogLevel_8;
	// System.Int32 BugsnagUnity.BugsnagBehaviour::SecondsPerUniqueLog
	int32_t ___SecondsPerUniqueLog_9;
	// System.Int32 BugsnagUnity.BugsnagBehaviour::MaximumBreadcrumbs
	int32_t ___MaximumBreadcrumbs_10;
	// BugsnagUnity.Payload.BreadcrumbType BugsnagUnity.BugsnagBehaviour::EnabledBreadcrumbTypes
	int32_t ___EnabledBreadcrumbTypes_11;
	// BugsnagUnity.ErrorTypes BugsnagUnity.BugsnagBehaviour::EnabledErrorTypes
	int32_t ___EnabledErrorTypes_12;

public:
	inline static int32_t get_offset_of_APIKey_4() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___APIKey_4)); }
	inline String_t* get_APIKey_4() const { return ___APIKey_4; }
	inline String_t** get_address_of_APIKey_4() { return &___APIKey_4; }
	inline void set_APIKey_4(String_t* value)
	{
		___APIKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APIKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_AutoDetectErrors_5() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___AutoDetectErrors_5)); }
	inline bool get_AutoDetectErrors_5() const { return ___AutoDetectErrors_5; }
	inline bool* get_address_of_AutoDetectErrors_5() { return &___AutoDetectErrors_5; }
	inline void set_AutoDetectErrors_5(bool value)
	{
		___AutoDetectErrors_5 = value;
	}

	inline static int32_t get_offset_of_AutoDetectAnrs_6() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___AutoDetectAnrs_6)); }
	inline bool get_AutoDetectAnrs_6() const { return ___AutoDetectAnrs_6; }
	inline bool* get_address_of_AutoDetectAnrs_6() { return &___AutoDetectAnrs_6; }
	inline void set_AutoDetectAnrs_6(bool value)
	{
		___AutoDetectAnrs_6 = value;
	}

	inline static int32_t get_offset_of_AutoTrackSessions_7() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___AutoTrackSessions_7)); }
	inline bool get_AutoTrackSessions_7() const { return ___AutoTrackSessions_7; }
	inline bool* get_address_of_AutoTrackSessions_7() { return &___AutoTrackSessions_7; }
	inline void set_AutoTrackSessions_7(bool value)
	{
		___AutoTrackSessions_7 = value;
	}

	inline static int32_t get_offset_of_NotifyLogLevel_8() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___NotifyLogLevel_8)); }
	inline int32_t get_NotifyLogLevel_8() const { return ___NotifyLogLevel_8; }
	inline int32_t* get_address_of_NotifyLogLevel_8() { return &___NotifyLogLevel_8; }
	inline void set_NotifyLogLevel_8(int32_t value)
	{
		___NotifyLogLevel_8 = value;
	}

	inline static int32_t get_offset_of_SecondsPerUniqueLog_9() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___SecondsPerUniqueLog_9)); }
	inline int32_t get_SecondsPerUniqueLog_9() const { return ___SecondsPerUniqueLog_9; }
	inline int32_t* get_address_of_SecondsPerUniqueLog_9() { return &___SecondsPerUniqueLog_9; }
	inline void set_SecondsPerUniqueLog_9(int32_t value)
	{
		___SecondsPerUniqueLog_9 = value;
	}

	inline static int32_t get_offset_of_MaximumBreadcrumbs_10() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___MaximumBreadcrumbs_10)); }
	inline int32_t get_MaximumBreadcrumbs_10() const { return ___MaximumBreadcrumbs_10; }
	inline int32_t* get_address_of_MaximumBreadcrumbs_10() { return &___MaximumBreadcrumbs_10; }
	inline void set_MaximumBreadcrumbs_10(int32_t value)
	{
		___MaximumBreadcrumbs_10 = value;
	}

	inline static int32_t get_offset_of_EnabledBreadcrumbTypes_11() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___EnabledBreadcrumbTypes_11)); }
	inline int32_t get_EnabledBreadcrumbTypes_11() const { return ___EnabledBreadcrumbTypes_11; }
	inline int32_t* get_address_of_EnabledBreadcrumbTypes_11() { return &___EnabledBreadcrumbTypes_11; }
	inline void set_EnabledBreadcrumbTypes_11(int32_t value)
	{
		___EnabledBreadcrumbTypes_11 = value;
	}

	inline static int32_t get_offset_of_EnabledErrorTypes_12() { return static_cast<int32_t>(offsetof(BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F, ___EnabledErrorTypes_12)); }
	inline int32_t get_EnabledErrorTypes_12() const { return ___EnabledErrorTypes_12; }
	inline int32_t* get_address_of_EnabledErrorTypes_12() { return &___EnabledErrorTypes_12; }
	inline void set_EnabledErrorTypes_12(int32_t value)
	{
		___EnabledErrorTypes_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// BugsnagUnity.Payload.BreadcrumbType[]
struct BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// BugsnagUnity.ErrorTypes[]
struct ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Int32Enum>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* List_1_ToArray_mD414ED8BAF5155077C8257ED0B2205491A7538BD_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);

// System.Void BugsnagUnity.Configuration::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mFBB54B1235EEF260EE0B081ADA0848365BE2A352 (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * __this, String_t* ___apiKey0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.String BugsnagUnity.BugsnagBehaviour::FindScriptingBackend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindScriptingBackend_m359ACB6B5E567CBCD3508A8F4F25ACAB03926F82 (const RuntimeMethod* method);
// System.String BugsnagUnity.BugsnagBehaviour::FindDotnetScriptingRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindDotnetScriptingRuntime_m2FAF8F360C4E01C0F9F25CE2F7C4247398FBB6FF (const RuntimeMethod* method);
// System.String BugsnagUnity.BugsnagBehaviour::FindDotnetApiCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindDotnetApiCompatibility_m7CC08681CCBF784DFBAD2F82DF5D5D7CEF92FEF2 (const RuntimeMethod* method);
// BugsnagUnity.Payload.BreadcrumbType[] BugsnagUnity.BugsnagBehaviour::GetEnabledBreadcrumbTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* BugsnagBehaviour_GetEnabledBreadcrumbTypes_mD862E7758E5B7C1C446BA62333B5921864D1C801 (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method);
// System.Void BugsnagUnity.Configuration::set_EnabledBreadcrumbTypes(BugsnagUnity.Payload.BreadcrumbType[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_EnabledBreadcrumbTypes_m3E681A9BAAB651E41B70E3BC160B6A165D69823B_inline (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * __this, BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* ___value0, const RuntimeMethod* method);
// BugsnagUnity.ErrorTypes[] BugsnagUnity.BugsnagBehaviour::GetEnabledErrorTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* BugsnagBehaviour_GetEnabledErrorTypes_m72A884ABA717FB14CC5790762A5F5D7B026699B7 (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method);
// System.Void BugsnagUnity.Configuration::set_EnabledErrorTypes(BugsnagUnity.ErrorTypes[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_EnabledErrorTypes_mA6C4D2A9B2D15755C7C3DD466AEBFAD077A7F132_inline (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * __this, ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* ___value0, const RuntimeMethod* method);
// BugsnagUnity.IClient BugsnagUnity.Bugsnag::Start(BugsnagUnity.IConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bugsnag_Start_mDE11E0E24CA993A7283A7CB4310E16F8749E1463 (RuntimeObject* ___configuration0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>::.ctor()
inline void List_1__ctor_mB80F15F62119FC49319A0E4C345E23705123D257 (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1 (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>::Add(!0)
inline void List_1_Add_m0993DE97280299ED3964D5F5452E71CE965DD3AF (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>::get_Count()
inline int32_t List_1_get_Count_m538BD86415384BCBDFE70AB2D7D495D66F448F94_inline (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<BugsnagUnity.ErrorTypes>::ToArray()
inline ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* List_1_ToArray_m4913E814FD38F6F5972B89C69A70D97FCBCA91EF (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * __this, const RuntimeMethod* method)
{
	return ((  ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* (*) (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC *, const RuntimeMethod*))List_1_ToArray_mD414ED8BAF5155077C8257ED0B2205491A7538BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>::.ctor()
inline void List_1__ctor_m894B6A4C0092C564430710EC64D4C2155ECE22A9 (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>::Add(!0)
inline void List_1_Add_m8DFCDF80D85591B8E8C0CD68BDFC960979688B1D (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>::get_Count()
inline int32_t List_1_get_Count_mDE305AE9946030C6C7A41A9D8A719B039C203BB3_inline (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<BugsnagUnity.Payload.BreadcrumbType>::ToArray()
inline BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* List_1_ToArray_mA39CB7559090C54237EB03D5A7638CE0BF71564B (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * __this, const RuntimeMethod* method)
{
	return ((  BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* (*) (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 *, const RuntimeMethod*))List_1_ToArray_mD414ED8BAF5155077C8257ED0B2205491A7538BD_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BugsnagUnity.BugsnagBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugsnagBehaviour_Awake_mDC39AE88243F79D410F09179B1E8D38668C9CC4C (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bugsnag_tFD8CBF41994B7A55374BF818C9329CC837F1C2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0001035D36CCCF92426705CB86FD943CE2BC213);
		s_Il2CppMethodInitialized = true;
	}
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B2_0 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B2_1 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B1_0 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B3_1 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B3_2 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B5_0 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B5_1 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B4_0 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B6_1 = NULL;
	Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * G_B6_2 = NULL;
	{
		// Configuration config = new Configuration(APIKey);
		String_t* L_0 = __this->get_APIKey_4();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_1 = (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 *)il2cpp_codegen_object_new(Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386_il2cpp_TypeInfo_var);
		Configuration__ctor_mFBB54B1235EEF260EE0B081ADA0848365BE2A352(L_1, L_0, /*hidden argument*/NULL);
		// config.AutoDetectErrors = AutoDetectErrors;
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_2 = L_1;
		bool L_3 = __this->get_AutoDetectErrors_5();
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(69 /* System.Void BugsnagUnity.Configuration::set_AutoDetectErrors(System.Boolean) */, L_2, L_3);
		// config.AutoDetectAnrs = AutoDetectErrors && AutoDetectAnrs;
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_4 = L_2;
		bool L_5 = __this->get_AutoDetectErrors_5();
		G_B1_0 = L_4;
		G_B1_1 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_4;
			goto IL_0028;
		}
	}
	{
		bool L_6 = __this->get_AutoDetectAnrs_6();
		G_B3_0 = ((int32_t)(L_6));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< bool >::Invoke(70 /* System.Void BugsnagUnity.Configuration::set_AutoDetectAnrs(System.Boolean) */, G_B3_1, (bool)G_B3_0);
		// config.AutoTrackSessions = AutoTrackSessions;
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_7 = G_B3_2;
		bool L_8 = __this->get_AutoTrackSessions_7();
		NullCheck(L_7);
		VirtActionInvoker1< bool >::Invoke(72 /* System.Void BugsnagUnity.Configuration::set_AutoTrackSessions(System.Boolean) */, L_7, L_8);
		// config.UniqueLogsTimePeriod = TimeSpan.FromSeconds(SecondsPerUniqueLog);
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_9 = L_7;
		int32_t L_10 = __this->get_SecondsPerUniqueLog_9();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11;
		L_11 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0(((double)((double)L_10)), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  >::Invoke(47 /* System.Void BugsnagUnity.Configuration::set_UniqueLogsTimePeriod(System.TimeSpan) */, L_9, L_11);
		// config.NotifyLogLevel = NotifyLogLevel;
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_12 = L_9;
		int32_t L_13 = __this->get_NotifyLogLevel_8();
		NullCheck(L_12);
		VirtActionInvoker1< int32_t >::Invoke(67 /* System.Void BugsnagUnity.Configuration::set_NotifyLogLevel(UnityEngine.LogType) */, L_12, L_13);
		// config.ReleaseStage = Debug.isDebugBuild ? "development" : "production";
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_14 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		G_B4_0 = L_14;
		G_B4_1 = L_14;
		if (L_15)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_14;
			goto IL_0067;
		}
	}
	{
		G_B6_0 = _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006c;
	}

IL_0067:
	{
		G_B6_0 = _stringLiteralE0001035D36CCCF92426705CB86FD943CE2BC213;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006c:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void BugsnagUnity.Configuration::set_ReleaseStage(System.String) */, G_B6_1, G_B6_0);
		// config.MaximumBreadcrumbs = MaximumBreadcrumbs;
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_16 = G_B6_2;
		int32_t L_17 = __this->get_MaximumBreadcrumbs_10();
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(55 /* System.Void BugsnagUnity.Configuration::set_MaximumBreadcrumbs(System.Int32) */, L_16, L_17);
		// config.ScriptingBackend = FindScriptingBackend();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_18 = L_16;
		String_t* L_19;
		L_19 = BugsnagBehaviour_FindScriptingBackend_m359ACB6B5E567CBCD3508A8F4F25ACAB03926F82(/*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void BugsnagUnity.Configuration::set_ScriptingBackend(System.String) */, L_18, L_19);
		// config.DotnetScriptingRuntime = FindDotnetScriptingRuntime();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_20 = L_18;
		String_t* L_21;
		L_21 = BugsnagBehaviour_FindDotnetScriptingRuntime_m2FAF8F360C4E01C0F9F25CE2F7C4247398FBB6FF(/*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(77 /* System.Void BugsnagUnity.Configuration::set_DotnetScriptingRuntime(System.String) */, L_20, L_21);
		// config.DotnetApiCompatibility = FindDotnetApiCompatibility();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_22 = L_20;
		String_t* L_23;
		L_23 = BugsnagBehaviour_FindDotnetApiCompatibility_m7CC08681CCBF784DFBAD2F82DF5D5D7CEF92FEF2(/*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(79 /* System.Void BugsnagUnity.Configuration::set_DotnetApiCompatibility(System.String) */, L_22, L_23);
		// config.EnabledBreadcrumbTypes = GetEnabledBreadcrumbTypes();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_24 = L_22;
		BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* L_25;
		L_25 = BugsnagBehaviour_GetEnabledBreadcrumbTypes_mD862E7758E5B7C1C446BA62333B5921864D1C801(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Configuration_set_EnabledBreadcrumbTypes_m3E681A9BAAB651E41B70E3BC160B6A165D69823B_inline(L_24, L_25, /*hidden argument*/NULL);
		// config.EnabledErrorTypes = GetEnabledErrorTypes();
		Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * L_26 = L_24;
		ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* L_27;
		L_27 = BugsnagBehaviour_GetEnabledErrorTypes_m72A884ABA717FB14CC5790762A5F5D7B026699B7(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Configuration_set_EnabledErrorTypes_mA6C4D2A9B2D15755C7C3DD466AEBFAD077A7F132_inline(L_26, L_27, /*hidden argument*/NULL);
		// Bugsnag.Start(config);
		IL2CPP_RUNTIME_CLASS_INIT(Bugsnag_tFD8CBF41994B7A55374BF818C9329CC837F1C2C1_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Bugsnag_Start_mDE11E0E24CA993A7283A7CB4310E16F8749E1463(L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// BugsnagUnity.ErrorTypes[] BugsnagUnity.BugsnagBehaviour::GetEnabledErrorTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* BugsnagBehaviour_GetEnabledErrorTypes_m72A884ABA717FB14CC5790762A5F5D7B026699B7 (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0993DE97280299ED3964D5F5452E71CE965DD3AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m4913E814FD38F6F5972B89C69A70D97FCBCA91EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB80F15F62119FC49319A0E4C345E23705123D257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m538BD86415384BCBDFE70AB2D7D495D66F448F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// List<ErrorTypes> selectedElements = new List<ErrorTypes>();
		List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * L_0 = (List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC *)il2cpp_codegen_object_new(List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC_il2cpp_TypeInfo_var);
		List_1__ctor_mB80F15F62119FC49319A0E4C345E23705123D257(L_0, /*hidden argument*/List_1__ctor_mB80F15F62119FC49319A0E4C345E23705123D257_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < Enum.GetValues(typeof(ErrorTypes)).Length; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_000a:
	{
		// int layer = 1 << i;
		int32_t L_1 = V_1;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		// if (((int)EnabledErrorTypes & layer) != 0)
		int32_t L_2 = __this->get_EnabledErrorTypes_12();
		int32_t L_3 = V_2;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		// var selectedType = (ErrorTypes)Enum.GetValues(typeof(ErrorTypes)).GetValue(i);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_6;
		L_6 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject * L_8;
		L_8 = Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1(L_6, L_7, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_8, ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_il2cpp_TypeInfo_var))));
		// selectedElements.Add(selectedType);
		List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_m0993DE97280299ED3964D5F5452E71CE965DD3AF(L_9, L_10, /*hidden argument*/List_1_Add_m0993DE97280299ED3964D5F5452E71CE965DD3AF_RuntimeMethod_var);
	}

IL_003d:
	{
		// for (int i = 0; i < Enum.GetValues(typeof(ErrorTypes)).Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < Enum.GetValues(typeof(ErrorTypes)).Length; i++)
		int32_t L_12 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_15;
		L_15 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_16)))
		{
			goto IL_000a;
		}
	}
	{
		// var allSelected = selectedElements.Count == Enum.GetValues(typeof(ErrorTypes)).Length;
		List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m538BD86415384BCBDFE70AB2D7D495D66F448F94_inline(L_17, /*hidden argument*/List_1_get_Count_m538BD86415384BCBDFE70AB2D7D495D66F448F94_RuntimeMethod_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (ErrorTypes_t6CB13A60287F4C7FD2E65F64833F72A3202E8A4C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_21;
		L_21 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_21, /*hidden argument*/NULL);
		// return allSelected ? null : selectedElements.ToArray();
		if (((((int32_t)L_18) == ((int32_t)L_22))? 1 : 0))
		{
			goto IL_007d;
		}
	}
	{
		List_1_tB880F03E1F44D178E8EAD319242CE0EC32DBC6DC * L_23 = V_0;
		NullCheck(L_23);
		ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* L_24;
		L_24 = List_1_ToArray_m4913E814FD38F6F5972B89C69A70D97FCBCA91EF(L_23, /*hidden argument*/List_1_ToArray_m4913E814FD38F6F5972B89C69A70D97FCBCA91EF_RuntimeMethod_var);
		return L_24;
	}

IL_007d:
	{
		return (ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650*)(NULL);
	}
}
// BugsnagUnity.Payload.BreadcrumbType[] BugsnagUnity.BugsnagBehaviour::GetEnabledBreadcrumbTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* BugsnagBehaviour_GetEnabledBreadcrumbTypes_mD862E7758E5B7C1C446BA62333B5921864D1C801 (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8DFCDF80D85591B8E8C0CD68BDFC960979688B1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA39CB7559090C54237EB03D5A7638CE0BF71564B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m894B6A4C0092C564430710EC64D4C2155ECE22A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDE305AE9946030C6C7A41A9D8A719B039C203BB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC40AE1C16FF97971A671A17078D932414DB50548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// List<BreadcrumbType> selectedElements = new List<BreadcrumbType>();
		List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * L_0 = (List_1_tC40AE1C16FF97971A671A17078D932414DB50548 *)il2cpp_codegen_object_new(List_1_tC40AE1C16FF97971A671A17078D932414DB50548_il2cpp_TypeInfo_var);
		List_1__ctor_m894B6A4C0092C564430710EC64D4C2155ECE22A9(L_0, /*hidden argument*/List_1__ctor_m894B6A4C0092C564430710EC64D4C2155ECE22A9_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < Enum.GetValues(typeof(BreadcrumbType)).Length; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_000a:
	{
		// int layer = 1 << i;
		int32_t L_1 = V_1;
		V_2 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		// if (((int)EnabledBreadcrumbTypes & layer) != 0)
		int32_t L_2 = __this->get_EnabledBreadcrumbTypes_11();
		int32_t L_3 = V_2;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		// var selectedType = (BreadcrumbType)Enum.GetValues(typeof(BreadcrumbType)).GetValue(i);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_6;
		L_6 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject * L_8;
		L_8 = Array_GetValue_m6E4274D23FFD6089882CD12B2F2EA615206792E1(L_6, L_7, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_8, BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_il2cpp_TypeInfo_var))));
		// selectedElements.Add(selectedType);
		List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * L_9 = V_0;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		List_1_Add_m8DFCDF80D85591B8E8C0CD68BDFC960979688B1D(L_9, L_10, /*hidden argument*/List_1_Add_m8DFCDF80D85591B8E8C0CD68BDFC960979688B1D_RuntimeMethod_var);
	}

IL_003d:
	{
		// for (int i = 0; i < Enum.GetValues(typeof(BreadcrumbType)).Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < Enum.GetValues(typeof(BreadcrumbType)).Length; i++)
		int32_t L_12 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_15;
		L_15 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_16)))
		{
			goto IL_000a;
		}
	}
	{
		// var allSelected = selectedElements.Count == Enum.GetValues(typeof(BreadcrumbType)).Length;
		List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mDE305AE9946030C6C7A41A9D8A719B039C203BB3_inline(L_17, /*hidden argument*/List_1_get_Count_mDE305AE9946030C6C7A41A9D8A719B039C203BB3_RuntimeMethod_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (BreadcrumbType_t59029983614116451AA0308856772EEEA90CA5EC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_21;
		L_21 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_21, /*hidden argument*/NULL);
		// return allSelected ? null : selectedElements.ToArray();
		if (((((int32_t)L_18) == ((int32_t)L_22))? 1 : 0))
		{
			goto IL_007d;
		}
	}
	{
		List_1_tC40AE1C16FF97971A671A17078D932414DB50548 * L_23 = V_0;
		NullCheck(L_23);
		BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* L_24;
		L_24 = List_1_ToArray_mA39CB7559090C54237EB03D5A7638CE0BF71564B(L_23, /*hidden argument*/List_1_ToArray_mA39CB7559090C54237EB03D5A7638CE0BF71564B_RuntimeMethod_var);
		return L_24;
	}

IL_007d:
	{
		return (BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2*)(NULL);
	}
}
// System.String BugsnagUnity.BugsnagBehaviour::FindScriptingBackend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindScriptingBackend_m359ACB6B5E567CBCD3508A8F4F25ACAB03926F82 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "IL2CPP";
		return _stringLiteralD74B600D07BCC5507E2270975151E727ED0D6CC7;
	}
}
// System.String BugsnagUnity.BugsnagBehaviour::FindDotnetScriptingRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindDotnetScriptingRuntime_m2FAF8F360C4E01C0F9F25CE2F7C4247398FBB6FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3FA9B20408EBC0D63491E6DCA0EEAFEE7BA37F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ".NET 3.5 equivalent";
		return _stringLiteralED3FA9B20408EBC0D63491E6DCA0EEAFEE7BA37F;
	}
}
// System.String BugsnagUnity.BugsnagBehaviour::FindDotnetApiCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BugsnagBehaviour_FindDotnetApiCompatibility_m7CC08681CCBF784DFBAD2F82DF5D5D7CEF92FEF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE21E3CD0D6D6F4883EAD9580CF44EA6B25A52A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ".NET 2.0";
		return _stringLiteral6EE21E3CD0D6D6F4883EAD9580CF44EA6B25A52A;
	}
}
// System.Void BugsnagUnity.BugsnagBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BugsnagBehaviour__ctor_m7BB88A6E13BDDE1C63340F1B5E141BC1A08F2D72 (BugsnagBehaviour_t6449F3F1D04DCA6C759933152D86A1C0D476414F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string APIKey = "";
		__this->set_APIKey_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool AutoDetectErrors = true;
		__this->set_AutoDetectErrors_5((bool)1);
		// public bool AutoDetectAnrs = true;
		__this->set_AutoDetectAnrs_6((bool)1);
		// public bool AutoTrackSessions = true;
		__this->set_AutoTrackSessions_7((bool)1);
		// public LogType NotifyLogLevel = LogType.Exception;
		__this->set_NotifyLogLevel_8(4);
		// public int SecondsPerUniqueLog = 5;
		__this->set_SecondsPerUniqueLog_9(5);
		// public int MaximumBreadcrumbs = 25;
		__this->set_MaximumBreadcrumbs_10(((int32_t)25));
		// public BreadcrumbType EnabledBreadcrumbTypes = (BreadcrumbType)(-1);
		__this->set_EnabledBreadcrumbTypes_11((-1));
		// public ErrorTypes EnabledErrorTypes = (ErrorTypes)(-1);
		__this->set_EnabledErrorTypes_12((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BugsnagUnity.BugsnagBehaviour/EnumFlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumFlagsAttribute__ctor_m98C1C50BF9A863996FA0793BB69EF417B8643E28 (EnumFlagsAttribute_t77F943C25C2A723340378B6975B8F9A9E4BD425F * __this, const RuntimeMethod* method)
{
	{
		// public EnumFlagsAttribute() { }
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// public EnumFlagsAttribute() { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BugsnagUnity.BugsnagBehaviour/LabelOverride::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelOverride__ctor_mCF3FDBC98B116E4CB4C79BC4C43BC8FBFB3D948C (LabelOverride_tA7841E2A4FC0B42E4D0080B5F73CE34D2C0FA8DE * __this, String_t* ___label0, const RuntimeMethod* method)
{
	{
		// public LabelOverride(string label)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.label = label;
		String_t* L_0 = ___label0;
		__this->set_label_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_EnabledBreadcrumbTypes_m3E681A9BAAB651E41B70E3BC160B6A165D69823B_inline (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * __this, BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* ___value0, const RuntimeMethod* method)
{
	{
		BreadcrumbTypeU5BU5D_t2289AD85C7B3477A42658A6A183E7417C41F2BC2* L_0 = ___value0;
		__this->set_U3CEnabledBreadcrumbTypesU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Configuration_set_EnabledErrorTypes_mA6C4D2A9B2D15755C7C3DD466AEBFAD077A7F132_inline (Configuration_t3386F9494D98C694A39D52C95DA25C44C3B16386 * __this, ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* ___value0, const RuntimeMethod* method)
{
	{
		ErrorTypesU5BU5D_tAAC7A7BE762A2B1E33FD2E7F2BAD3646D0320650* L_0 = ___value0;
		__this->set_U3CEnabledErrorTypesU3Ek__BackingField_32(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
