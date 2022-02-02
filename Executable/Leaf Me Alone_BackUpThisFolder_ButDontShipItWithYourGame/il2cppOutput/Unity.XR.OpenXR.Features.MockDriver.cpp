#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver
struct MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate
struct ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptEvent_tA81311951D5C2E7C1929F4B9D4BA3FF14C3C824F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1FDC7B050699D12543255FBE775FDDC07F9A1BF3;
IL2CPP_EXTERN_C String_t* _stringLiteral3BFAF67BC1D43F33C94D76E23C8F313BD41DDBFF;
IL2CPP_EXTERN_C const RuntimeMethod* MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC73534E9AD663B095CF9C60F9C749B6802A17739 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent
struct ScriptEvent_tA81311951D5C2E7C1929F4B9D4BA3FF14C3C824F 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScriptEvent_tA81311951D5C2E7C1929F4B9D4BA3FF14C3C824F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrReferenceSpaceType
struct XrReferenceSpaceType_t6B2E244095E7092E0951F8017620159C39FE76E8 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrReferenceSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrReferenceSpaceType_t6B2E244095E7092E0951F8017620159C39FE76E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult
struct XrResult_tF77146A73E185AD8F8E819BD2594ABB23963D377 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrResult_tF77146A73E185AD8F8E819BD2594ABB23963D377, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSessionState
struct XrSessionState_tC70FDAC8A29DBA216D5F0AD647D517BFC65DAB07 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrSessionState_tC70FDAC8A29DBA216D5F0AD647D517BFC65DAB07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSpaceLocationFlags
struct XrSpaceLocationFlags_t38EFB6B836CCDA335449EDE431C293C3EA7594C4 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSpaceLocationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrSpaceLocationFlags_t38EFB6B836CCDA335449EDE431C293C3EA7594C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewConfigurationType
struct XrViewConfigurationType_t04F6747D133D0D0CCF9BC3B648E0C18FA75532A7 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewConfigurationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrViewConfigurationType_t04F6747D133D0D0CCF9BC3B648E0C18FA75532A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewStateFlags
struct XrViewStateFlags_t33EB51930377C244468A9D7E75BEB092CC226F72 
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XrViewStateFlags_t33EB51930377C244468A9D7E75BEB092CC226F72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureIdInternal_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___featureIdInternal_9)); }
	inline String_t* get_featureIdInternal_9() const { return ___featureIdInternal_9; }
	inline String_t** get_address_of_featureIdInternal_9() { return &___featureIdInternal_9; }
	inline void set_featureIdInternal_9(String_t* value)
	{
		___featureIdInternal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureIdInternal_9), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_10)); }
	inline String_t* get_openxrExtensionStrings_10() const { return ___openxrExtensionStrings_10; }
	inline String_t** get_address_of_openxrExtensionStrings_10() { return &___openxrExtensionStrings_10; }
	inline void set_openxrExtensionStrings_10(String_t* value)
	{
		___openxrExtensionStrings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_10), (void*)value);
	}

	inline static int32_t get_offset_of_company_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_11)); }
	inline String_t* get_company_11() const { return ___company_11; }
	inline String_t** get_address_of_company_11() { return &___company_11; }
	inline void set_company_11(String_t* value)
	{
		___company_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_11), (void*)value);
	}

	inline static int32_t get_offset_of_priority_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_12)); }
	inline int32_t get_priority_12() const { return ___priority_12; }
	inline int32_t* get_address_of_priority_12() { return &___priority_12; }
	inline void set_priority_12(int32_t value)
	{
		___priority_12 = value;
	}

	inline static int32_t get_offset_of_required_13() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_13)); }
	inline bool get_required_13() const { return ___required_13; }
	inline bool* get_address_of_required_13() { return &___required_13; }
	inline void set_required_13(bool value)
	{
		___required_13 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate
struct ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.OpenXR.Features.Mock.MockDriver
struct MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:

public:
};

struct MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields
{
public:
	// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate UnityEngine.XR.OpenXR.Features.Mock.MockDriver::onScriptEvent
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * ___onScriptEvent_16;

public:
	inline static int32_t get_offset_of_onScriptEvent_16() { return static_cast<int32_t>(offsetof(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields, ___onScriptEvent_16)); }
	inline ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * get_onScriptEvent_16() const { return ___onScriptEvent_16; }
	inline ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF ** get_address_of_onScriptEvent_16() { return &___onScriptEvent_16; }
	inline void set_onScriptEvent_16(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * value)
	{
		___onScriptEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onScriptEvent_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_m216B57E059844D84AEB44811B133A54A8A835DA5 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::IsExtensionEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_IsExtensionEnabled_mC740857A4DF035AF82C46FDC30CE145E7C6C581F (String_t* ___extensionName0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_xrGetInstanceProcAddr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRFeature_get_xrGetInstanceProcAddr_mCE13D33E6318D9E8F79E3B5854B0F3E6C28BD6A0 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::InitializeNative(System.IntPtr,System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MockDriver_InitializeNative_mC501DAEF723078EAF3DD5D03822DBEEE9779A537 (intptr_t ___xrGetInstanceProcAddr0, uint64_t ___xrInstance1, uint64_t ___session2, uint64_t ___sceneSpace3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate__ctor_mC1611BAEB62F55C7EA653372F38301AD0067D6E1 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::MockDriver_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_MockDriver_RegisterScriptEventCallback_mB737E196892BA358B07EDBEE01DBF91442F727AD (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * ___callback0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ShutdownNative(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MockDriver_ShutdownNative_mE7AD1C7F10316F0A45B844600B9F0BEEBDDEC8A8 (uint64_t ___xrInstance0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL script_initialize(intptr_t, uint64_t, uint64_t, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL script_shutdown(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_TransitionMockToState(uint64_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockDriver_SetReturnCodeForFunction(char*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockDriver_RequestExitSession(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockDriver_SetBlendModeOpaque(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockDriver_SetReferenceSpaceBoundsRect(uint64_t, int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL MockDriver_CauseInstanceLoss(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_SetSpacePose(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_SetViewPose(int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_GetEndFrameStats(int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_ActivateSecondaryView(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL MockDriver_RegisterScriptEventCallback(Il2CppMethodPointer);
#endif
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A(int32_t ___evt0, uint64_t ___param1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A(___evt0, ___param1, NULL);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::add_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_add_onScriptEvent_m9B131A3D4D968188DA355BC81861FF6659DC2DF1 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_0 = NULL;
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_1 = NULL;
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_2 = NULL;
	{
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_0 = ((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->get_onScriptEvent_16();
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_2 = V_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var));
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_5 = V_2;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_6 = V_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *>((ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF **)(((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->get_address_of_onScriptEvent_16()), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_8 = V_0;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)L_8) == ((RuntimeObject*)(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::remove_onScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_remove_onScriptEvent_m8583B70B5D41E9393E2F0BA803A4ADB4D43556FD (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_0 = NULL;
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_1 = NULL;
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * V_2 = NULL;
	{
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_0 = ((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->get_onScriptEvent_16();
		V_0 = L_0;
	}

IL_0006:
	{
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_1 = V_0;
		V_1 = L_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_2 = V_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)CastclassSealed((RuntimeObject*)L_4, ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var));
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_5 = V_2;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_6 = V_1;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_7;
		L_7 = InterlockedCompareExchangeImpl<ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *>((ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF **)(((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->get_address_of_onScriptEvent_16()), L_5, L_6);
		V_0 = L_7;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_8 = V_0;
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_9 = V_1;
		if ((!(((RuntimeObject*)(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)L_8) == ((RuntimeObject*)(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ReceiveScriptEvent(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A (int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * G_B2_0 = NULL;
	ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * G_B1_0 = NULL;
	{
		// private static void ReceiveScriptEvent (ScriptEvent evt, ulong param) => onScriptEvent?.Invoke(evt, param);
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_0 = ((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->get_onScriptEvent_16();
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___evt0;
		uint64_t L_3 = ___param1;
		NullCheck(G_B2_0);
		ScriptEventDelegate_Invoke_m216B57E059844D84AEB44811B133A54A8A835DA5(G_B2_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ResetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_ResetDefaults_m6D0DD11B8D743509C123C5229A7B70F041CA171B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onScriptEvent = null;
		((MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_StaticFields*)il2cpp_codegen_static_fields_for(MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A_il2cpp_TypeInfo_var))->set_onScriptEvent_16((ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockDriver::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MockDriver_OnInstanceCreate_m0176A3A6B56066726DD78447C006DF01646ED338 (MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A * __this, uint64_t ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FDC7B050699D12543255FBE775FDDC07F9A1BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BFAF67BC1D43F33C94D76E23C8F313BD41DDBFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!OpenXRRuntime.IsExtensionEnabled("XR_UNITY_mock_driver"))
		bool L_0;
		L_0 = OpenXRRuntime_IsExtensionEnabled_mC740857A4DF035AF82C46FDC30CE145E7C6C581F(_stringLiteral3BFAF67BC1D43F33C94D76E23C8F313BD41DDBFF, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning("XR_UNITY_mock_driver is not enabled, disabling Mock Driver.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1FDC7B050699D12543255FBE775FDDC07F9A1BF3, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0018:
	{
		// InitializeNative(xrGetInstanceProcAddr, instance, 0ul, 0ul);
		intptr_t L_1;
		L_1 = OpenXRFeature_get_xrGetInstanceProcAddr_mCE13D33E6318D9E8F79E3B5854B0F3E6C28BD6A0(/*hidden argument*/NULL);
		uint64_t L_2 = ___instance0;
		intptr_t L_3;
		L_3 = MockDriver_InitializeNative_mC501DAEF723078EAF3DD5D03822DBEEE9779A537((intptr_t)L_1, L_2, ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// MockDriver_RegisterScriptEventCallback(ReceiveScriptEvent);
		ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * L_4 = (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF *)il2cpp_codegen_object_new(ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF_il2cpp_TypeInfo_var);
		ScriptEventDelegate__ctor_mC1611BAEB62F55C7EA653372F38301AD0067D6E1(L_4, NULL, (intptr_t)((intptr_t)MockDriver_ReceiveScriptEvent_mB16599688141C2AE802A35DE7BBC274BF778161A_RuntimeMethod_var), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = MockDriver_MockDriver_RegisterScriptEventCallback_mB737E196892BA358B07EDBEE01DBF91442F727AD(L_4, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_OnInstanceDestroy_m2453DDBB6CC69EDB97EB5F9B6999A8A1619E1F2F (MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A * __this, uint64_t ___xrInstance0, const RuntimeMethod* method)
{
	{
		// ShutdownNative(0);
		intptr_t L_0;
		L_0 = MockDriver_ShutdownNative_mE7AD1C7F10316F0A45B844600B9F0BEEBDDEC8A8(((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::InitializeNative(System.IntPtr,System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MockDriver_InitializeNative_mC501DAEF723078EAF3DD5D03822DBEEE9779A537 (intptr_t ___xrGetInstanceProcAddr0, uint64_t ___xrInstance1, uint64_t ___session2, uint64_t ___sceneSpace3, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint64_t, uint64_t, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(uint64_t) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "script_initialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(script_initialize)(___xrGetInstanceProcAddr0, ___xrInstance1, ___session2, ___sceneSpace3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___xrGetInstanceProcAddr0, ___xrInstance1, ___session2, ___sceneSpace3);
	#endif

	return returnValue;
}
// System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ShutdownNative(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MockDriver_ShutdownNative_mE7AD1C7F10316F0A45B844600B9F0BEEBDDEC8A8 (uint64_t ___xrInstance0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "script_shutdown", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(script_shutdown)(___xrInstance0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___xrInstance0);
	#endif

	return returnValue;
}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::TransitionToState(System.UInt64,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSessionState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_TransitionToState_mC9A2FEB00024B78C5025EB8A9E1AF4AD31F839E0 (uint64_t ___xrSession0, int32_t ___state1, bool ___forceTransition2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint64_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_TransitionMockToState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_TransitionMockToState)(___xrSession0, ___state1, static_cast<int32_t>(___forceTransition2));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___xrSession0, ___state1, static_cast<int32_t>(___forceTransition2));
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetReturnCodeForFunction(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_SetReturnCodeForFunction_m06F0F6CD4C925E9F33823D878A20C3ABEA10A83E (String_t* ___functionName0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_SetReturnCodeForFunction", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___functionName0' to native representation
	char* ____functionName0_marshaled = NULL;
	____functionName0_marshaled = il2cpp_codegen_marshal_string(___functionName0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockDriver_SetReturnCodeForFunction)(____functionName0_marshaled, ___result1);
	#else
	il2cppPInvokeFunc(____functionName0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___functionName0' native representation
	il2cpp_codegen_marshal_free(____functionName0_marshaled);
	____functionName0_marshaled = NULL;

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::RequestExitSession(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_RequestExitSession_m98CC0691DECE965334608C8E8B66C23DBB299C00 (uint64_t ___session0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_RequestExitSession", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockDriver_RequestExitSession)(___session0);
	#else
	il2cppPInvokeFunc(___session0);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetBlendModeOpaque(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_SetBlendModeOpaque_m1AFCB088A8726D81E64A1FBC0F6CDD77D0AB0410 (bool ___opaque0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_SetBlendModeOpaque", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockDriver_SetBlendModeOpaque)(static_cast<int32_t>(___opaque0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___opaque0));
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetReferenceSpaceBoundsRect(System.UInt64,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrReferenceSpaceType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_SetReferenceSpaceBoundsRect_m62B44D59FD81B91E9F01FCEA2D94D286AC8E89A5 (uint64_t ___session0, int32_t ___referenceSpace1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___bounds2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t, int32_t, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(int32_t) + sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_SetReferenceSpaceBoundsRect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockDriver_SetReferenceSpaceBoundsRect)(___session0, ___referenceSpace1, ___bounds2);
	#else
	il2cppPInvokeFunc(___session0, ___referenceSpace1, ___bounds2);
	#endif

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::CauseInstanceLoss(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver_CauseInstanceLoss_mDBB9AFE0EB0A80E4F8AC3DF9B47C18DB0D09CC29 (uint64_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_CauseInstanceLoss", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	reinterpret_cast<PInvokeFunc>(MockDriver_CauseInstanceLoss)(___instance0);
	#else
	il2cppPInvokeFunc(___instance0);
	#endif

}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetSpacePose(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSpaceLocationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_SetSpacePose_m06EB68CFD549423EDDC5A13D107033D8BA985C71 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, int32_t ___locationSpaceFlags2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_SetSpacePose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_SetSpacePose)(___orientation0, ___position1, ___locationSpaceFlags2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___orientation0, ___position1, ___locationSpaceFlags2);
	#endif

	return returnValue;
}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetViewPose(System.Int32,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewStateFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_SetViewPose_m862B4E7FBFF575930A0D8E27BC43C33B97AB65B2 (int32_t ___viewIndex0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position2, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___fov3, int32_t ___viewStateFlags4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ) + sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_SetViewPose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_SetViewPose)(___viewIndex0, ___orientation1, ___position2, ___fov3, ___viewStateFlags4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___viewIndex0, ___orientation1, ___position2, ___fov3, ___viewStateFlags4);
	#endif

	return returnValue;
}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::GetEndFrameStats(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_GetEndFrameStats_mBCB9698EAEC683EE03CA8C0CE50016F2851B8C3F (int32_t* ___primaryLayerCount0, int32_t* ___secondaryLayerCount1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_GetEndFrameStats", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_GetEndFrameStats)(___primaryLayerCount0, ___secondaryLayerCount1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___primaryLayerCount0, ___secondaryLayerCount1);
	#endif

	return returnValue;
}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ActivateSecondaryView(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewConfigurationType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_ActivateSecondaryView_mDF30AE244B69084E1B1FE851B3FADF400E2E823E (int32_t ___viewConfigurationType0, bool ___activate1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_ActivateSecondaryView", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_ActivateSecondaryView)(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#else
	int32_t returnValue = il2cppPInvokeFunc(___viewConfigurationType0, static_cast<int32_t>(___activate1));
	#endif

	return returnValue;
}
// UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::MockDriver_RegisterScriptEventCallback(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MockDriver_MockDriver_RegisterScriptEventCallback_mB737E196892BA358B07EDBEE01DBF91442F727AD (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * ___callback0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_mock_driver_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mock_driver"), "MockDriver_RegisterScriptEventCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_mock_driver_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(MockDriver_RegisterScriptEventCallback)(____callback0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled);
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MockDriver__ctor_m40E6EFD71A973E8CDAFE73AB42875BA6DB9D1B1E (MockDriver_t2FED9AE481D4DFF95EB440EAA8BF0AF218DED00A * __this, const RuntimeMethod* method)
{
	{
		OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___evt0, ___param1);

}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate__ctor_mC1611BAEB62F55C7EA653372F38301AD0067D6E1 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::Invoke(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_Invoke_m216B57E059844D84AEB44811B133A54A8A835DA5 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, int32_t ___evt0, uint64_t ___param1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___evt0, ___param1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___evt0, ___param1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___evt0, ___param1);
					else
						GenericVirtActionInvoker2< int32_t, uint64_t >::Invoke(targetMethod, targetThis, ___evt0, ___param1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___evt0, ___param1);
					else
						VirtActionInvoker2< int32_t, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___evt0, ___param1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___evt0) - 1), ___param1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___evt0, ___param1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::BeginInvoke(UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEvent,System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptEventDelegate_BeginInvoke_mFC84C6ADF5FF098F0CD1F980B7058B3433277EC7 (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, int32_t ___evt0, uint64_t ___param1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptEvent_tA81311951D5C2E7C1929F4B9D4BA3FF14C3C824F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ScriptEvent_tA81311951D5C2E7C1929F4B9D4BA3FF14C3C824F_il2cpp_TypeInfo_var, &___evt0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___param1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver/ScriptEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptEventDelegate_EndInvoke_m202AB88E94730DACA7C65F5EB049E784CA29712C (ScriptEventDelegate_tD479F8F0EA414C9AE94C5EBAE00960A1134667EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
