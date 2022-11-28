#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE;
// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Gpm.Communicator.Internal.GameObjectManager/GameObjectType>
struct IEqualityComparer_1_tBAD42D1C2F4AA87FAE995A018B694912553595DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct KeyCollection_t7E99353414E269C3B79559089DE872AADE4CDE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct KeyCollection_tE0A68D53685058162D67ADC1D0E7506FF14D726E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct ValueCollection_tB04B83758270E7547C6D21DAA734966B2579F06A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct ValueCollection_t1E6E697AAA0F202B78C08FE55756A1A31F5CD0AD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>[]
struct EntryU5BU5D_t6B2A9B9E934D2AAAAF17620B955D5AC5BE0F1162;
// System.Collections.Generic.Dictionary`2/Entry<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>[]
struct EntryU5BU5D_tA02BD6EAFC2B596FE58518FF76176F957E8A4CDD;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Gpm.Communicator.Internal.Android.AndroidMessageSender
struct AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Gpm.Communicator.Internal.Communicator
struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F;
// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA;
// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888;
// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE;
// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Gpm.Communicator.Internal.INativeMessageSender
struct INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA14C604FC111AFB8666392F16C66ACA161B9BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0;
IL2CPP_EXTERN_C String_t* _stringLiteral9C13E73639856F799F682DDAB93967312F44069F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863;
IL2CPP_EXTERN_C String_t* _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076;
IL2CPP_EXTERN_C String_t* _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F;
IL2CPP_EXTERN_C String_t* _stringLiteralCD65A2C2BA76DD91F86B63EF2249F8D06674416F;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE2480B96B9B55425DC4E0DE241398A000E70A0;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866;
IL2CPP_EXTERN_C String_t* _stringLiteralD24905EB47E7248E0805A363B5946C70D511FCE6;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3;
IL2CPP_EXTERN_C String_t* _stringLiteralDF5F32E3CD38F3D7DD2CDEF6B37764C721FF06D8;
IL2CPP_EXTERN_C String_t* _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m8E6041B1520E1E0B3939B14C7DAD21B624651997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t60A7A076F87C8A44202D81FB015941BA264BFBF1 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6B2A9B9E934D2AAAAF17620B955D5AC5BE0F1162* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7E99353414E269C3B79559089DE872AADE4CDE08* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB04B83758270E7547C6D21DAA734966B2579F06A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA02BD6EAFC2B596FE58518FF76176F957E8A4CDD* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE0A68D53685058162D67ADC1D0E7506FF14D726E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1E6E697AAA0F202B78C08FE55756A1A31F5CD0AD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Gpm.Communicator.Internal.Android.AndroidMessageSender
struct AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass Gpm.Communicator.Internal.Android.AndroidMessageSender::jc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___jc_2;
};

struct AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_StaticFields
{
	// Gpm.Communicator.Internal.Android.AndroidMessageSender Gpm.Communicator.Internal.Android.AndroidMessageSender::instance
	AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* ___instance_0;
};
struct Il2CppArrayBounds;

// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA  : public RuntimeObject
{
	// Gpm.Communicator.Internal.Communicator Gpm.Communicator.Internal.CommunicatorImplementation::communicator
	Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* ___communicator_1;
};

struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields
{
	// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::instance
	CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* ___instance_0;
};

// Gpm.Communicator.Internal.Log.CommunicatorLogger
struct CommunicatorLogger_t702F97A81108CDA0E0C12AB0660FA73A2A0C3593  : public RuntimeObject
{
};

// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786  : public RuntimeObject
{
};

// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9  : public RuntimeObject
{
};

struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject> Gpm.Communicator.Internal.GameObjectManager::gameObjectDictionary
	Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* ___gameObjectDictionary_0;
};

// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888  : public RuntimeObject
{
};

// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE  : public RuntimeObject
{
};

// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD  : public RuntimeObject
{
	// System.String Gpm.Communicator.GpmCommunicatorVO/Configuration::className
	String_t* ___className_0;
};

// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A  : public RuntimeObject
{
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::domain
	String_t* ___domain_0;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::data
	String_t* ___data_1;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::extra
	String_t* ___extra_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Gpm.Communicator.Internal.Communicator
struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Gpm.Communicator.Internal.INativeMessageSender Gpm.Communicator.Internal.Communicator::messageSender
	RuntimeObject* ___messageSender_4;
	// System.String Gpm.Communicator.Internal.Communicator::methodName
	String_t* ___methodName_5;
};

struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback> Gpm.Communicator.Internal.Communicator::receiverDictionary
	Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* ___receiverDictionary_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<System.Object>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentManager_AddComponent_TisRuntimeObject_m5FDFDDA25329E9CEBD02936EF3FCBF5E2012B826_gshared (int32_t ___gameObjectType0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;

// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline (const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Gpm.Communicator.Internal.Android.AndroidMessageSender Gpm.Communicator.Internal.Android.AndroidMessageSender::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* AndroidMessageSender_get_Instance_mBB399CE2CB695242C7EBDE64CEF959ED35012B4C_inline (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::Add(TKey,TValue)
inline void Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84 (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___key0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_m71AD77437A6539B6560D530BA60A01587B7E8997 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::get_Item(TKey)
inline CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::.ctor()
inline void Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434 (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503 (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___key0, method);
}
// System.Boolean Gpm.Communicator.Internal.GameObjectManager::ContainsGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_m03A2C0ADBD1C799C90E1417342454B15EDFDBA0F (int32_t ___gameObjectType0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_CreateGameObject_m66BF658D712F3E1F4D992264317EABE818F458C8 (int32_t ___gameObjectType0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<Gpm.Communicator.Internal.Communicator>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
inline Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m8E6041B1520E1E0B3939B14C7DAD21B624651997 (int32_t ___gameObjectType0, const RuntimeMethod* method)
{
	return ((  Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* (*) (int32_t, const RuntimeMethod*))ComponentManager_AddComponent_TisRuntimeObject_m5FDFDDA25329E9CEBD02936EF3FCBF5E2012B826_gshared)(___gameObjectType0, method);
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender__ctor_m772BC2E7C1158B5CA1554C9D1A0C7341E12268E3 (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Gpm.Communicator.Internal.Log.CommunicatorLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_m6934ED61B396855F8C79288FB01EC37982A5BDE5 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
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
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m9425E88D1521BAA1D332358A5D276E04F56BE6DF (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.InitializeClass(configuration);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline(NULL);
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = ___configuration0;
		NullCheck(L_0);
		CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_mDD0B71851E6E9B1DEDEB75761F7A1AE794282A40 (String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.AddReceiver(domain, callback);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline(NULL);
		String_t* L_1 = ___domain0;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_2 = ___callback1;
		NullCheck(L_0);
		CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* GpmCommunicator_CallSync_mBD84ACC63965EBF167953E954A20569CDB8A1A0E (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CommunicatorImplementation.Instance.CallSync(message);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline(NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___message0;
		NullCheck(L_0);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2;
		L_2 = CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_mEC96CE899A8F3ACAAE719DC3FE7967F4F2CEB86C (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.CallAsync(message);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline(NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___message0;
		NullCheck(L_0);
		CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator__ctor_mDC6FD3B49C23464C7AA1498A510A1C42C7635B63 (GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorCallback__ctor_m2F5FB8F89A845814A05C05215CCBC35EBAEB7672 (GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Multicast(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* currentDelegate = reinterpret_cast<CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Open(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStaticInvoker(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_ClosedStaticInvoker(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenVirtual(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___message0);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInterface(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___message0);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericVirtual(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___message0);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericInterface(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___message0);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Multicast;
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::BeginInvoke(Gpm.Communicator.GpmCommunicatorVO/Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommunicatorCallback_BeginInvoke_mEDA0E57AA22233A87FFA4083B891C896ECB71F5E (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_EndInvoke_m90B6BD6FD638C9F00959AE659133EDB428499811 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Gpm.Communicator.GpmCommunicatorVO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorVO__ctor_m8DB2F47C52706D3725080C4D811F14D5A5347EA9 (GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.Internal.Communicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__ctor_mF5873BEA01E89CCC1E9769428199078E8503BCAC (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string methodName = "OnAsyncEvent";
		__this->___methodName_5 = _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodName_5), (void*)_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		// private Communicator()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// messageSender = Android.AndroidMessageSender.Instance;
		il2cpp_codegen_runtime_class_init_inline(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* L_0;
		L_0 = AndroidMessageSender_get_Instance_mBB399CE2CB695242C7EBDE64CEF959ED35012B4C_inline(NULL);
		__this->___messageSender_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageSender_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "Initialize");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.Initialize(GameObjectManager.GameObjectType.CORE_TYPE.ToString(), methodName);
		RuntimeObject* L_2 = __this->___messageSender_4;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_3(GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5 = __this->___methodName_5;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::Initialize(System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "InitializeClass");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.InitializeClass(configuration.className);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_3 = ___configuration0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___className_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::InitializeClass(System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(receiverDictionary.ContainsKey(domain) == true)
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_0 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_1 = ___domain0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B(L_0, L_1, Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// CommunicatorLogger.Error(
		//     string.Format(
		//         "The receiver is already registered : {0}",
		//         domain),
		//     "GpmCommunicator",
		//     GetType(),
		//     "AddReceiver");
		String_t* L_3 = ___domain0;
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE, L_3, NULL);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420(L_4, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_5, _stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// receiverDictionary.Add(domain, callback);
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_6 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_7 = ___domain0;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_8 = ___callback1;
		NullCheck(L_6);
		Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84(L_6, L_7, L_8, Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallSync");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, NULL);
		// return null;
		return (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)NULL;
	}

IL_0024:
	{
		// string responseString = messageSender.CallSync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___domain_0;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5 = ___message0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_7 = ___message0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___extra_2;
		NullCheck(L_2);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(2 /* System.String Gpm.Communicator.Internal.INativeMessageSender::CallSync(System.String,System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		V_0 = L_9;
		// GpmCommunicatorVO.Message responseMessage = null;
		V_1 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)NULL;
		// if(string.IsNullOrEmpty(responseString) == true)
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_12 = V_1;
		return L_12;
	}

IL_004e:
	{
		// string[] messageData = responseString.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_13 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_13, L_15, 0, NULL);
		V_2 = L_16;
		// if (messageData == null || messageData.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_2;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_2;
		NullCheck(L_18);
		if ((((RuntimeArray*)L_18)->max_length))
		{
			goto IL_006d;
		}
	}

IL_006b:
	{
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_19 = V_1;
		return L_19;
	}

IL_006d:
	{
		// responseMessage = new GpmCommunicatorVO.Message();
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_20 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_20, NULL);
		V_1 = L_20;
		// responseMessage.domain = messageData[0];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		L_21->___domain_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___domain_0), (void*)L_24);
		// responseMessage.data = messageData[1];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		L_25->___data_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___data_1), (void*)L_28);
		// responseMessage.extra = messageData[2];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_29 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		L_29->___extra_2 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___extra_2), (void*)L_32);
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_33 = V_1;
		return L_33;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallAsync");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.CallAsync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___domain_0;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5 = ___message0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_7 = ___message0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___extra_2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::CallAsync(System.String,System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::OnAsyncEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_OnAsyncEvent_m2D3348E9BCF920763F7444DB0E8B3158D5BA59FC (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B7_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B6_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B9_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B8_0 = NULL;
	{
		// string[] messageData = message.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_0 = ___message0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_0, L_2, 0, NULL);
		V_0 = L_3;
		// if(messageData == null || messageData.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// string domain = messageData[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// string data = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_9;
		// string extra = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_10;
		// if (receiverDictionary.ContainsKey(domain) == false)
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_11 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B(L_11, L_12, Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		// CommunicatorLogger.Warn(
		//     string.Format(
		//         "There is no registered receiver : {0}",
		//         domain),
		//     "GpmCommunicator",
		//     GetType(),
		//     "OnAsyncEvent");
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206, L_14, NULL);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Warn_m71AD77437A6539B6560D530BA60A01587B7E8997(L_15, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_16, _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE, NULL);
		// return;
		return;
	}

IL_005c:
	{
		// GpmCommunicatorCallback.CommunicatorCallback callback = receiverDictionary[domain];
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_17 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_19;
		L_19 = Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B(L_17, L_18, Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var);
		// if(messageData.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		NullCheck(L_20);
		G_B6_0 = L_19;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) <= ((int32_t)1)))
		{
			G_B7_0 = L_19;
			goto IL_0071;
		}
	}
	{
		// data = messageData[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		G_B7_0 = G_B6_0;
	}

IL_0071:
	{
		// if(messageData.Length > 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_0;
		NullCheck(L_24);
		G_B8_0 = G_B7_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))) <= ((int32_t)2)))
		{
			G_B9_0 = G_B7_0;
			goto IL_007b;
		}
	}
	{
		// extra = messageData[2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 2;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		G_B9_0 = G_B8_0;
	}

IL_007b:
	{
		// callback(new GpmCommunicatorVO.Message()
		// {
		//     domain = domain,
		//     data = data,
		//     extra = extra
		// });
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_28 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_28, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_29 = L_28;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		L_29->___domain_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___domain_0), (void*)L_30);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_31 = L_29;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		L_31->___data_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___data_1), (void*)L_32);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_33 = L_31;
		String_t* L_34 = V_3;
		NullCheck(L_33);
		L_33->___extra_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___extra_2), (void*)L_34);
		NullCheck(G_B9_0);
		CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline(G_B9_0, L_33, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__cctor_m8329D1752817CF56341D58F7F644E93B8206ACB4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback> receiverDictionary = new Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback>();
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_0 = (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*)il2cpp_codegen_object_new(Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434(L_0, Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var);
		((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7), (void*)L_0);
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
// System.Void Gpm.Communicator.Internal.ComponentManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentManager__ctor_mFDBE15720B15A97EDC7152607DF12A761AC27D17 (ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Gpm.Communicator.Internal.GameObjectManager::ContainsGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_m03A2C0ADBD1C799C90E1417342454B15EDFDBA0F (int32_t ___gameObjectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectDictionary.ContainsKey(gameObjectType);
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_1 = ___gameObjectType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503(L_0, L_1, Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::GetGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_GetGameObject_m5BDE5E51A18337392818B637E0CC7310E6C6381B (int32_t ___gameObjectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (false == ContainsGameObject(gameObjectType))
		int32_t L_0 = ___gameObjectType0;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GameObjectManager_ContainsGameObject_m03A2C0ADBD1C799C90E1417342454B15EDFDBA0F(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return CreateGameObject(gameObjectType);
		int32_t L_2 = ___gameObjectType0;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObjectManager_CreateGameObject_m66BF658D712F3E1F4D992264317EABE818F458C8(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		// return gameObjectDictionary[gameObjectType].gameObject;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_4 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_5 = ___gameObjectType0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD(L_4, L_5, Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		return L_7;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_CreateGameObject_m66BF658D712F3E1F4D992264317EABE818F458C8 (int32_t ___gameObjectType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (true == gameObjectDictionary.ContainsKey(gameObjectType))
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_1 = ___gameObjectType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503(L_0, L_1, Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return gameObjectDictionary[gameObjectType];
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_3 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_4 = ___gameObjectType0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD(L_3, L_4, Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// GameObject gameObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_6, NULL);
		V_0 = L_6;
		// gameObject.name = gameObjectType.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Il2CppFakeBox<int32_t> L_8(GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var, (&___gameObjectType0));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_7, L_9, NULL);
		// GameObject.DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_10, NULL);
		// gameObjectDictionary.Add(gameObjectType, gameObject);
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_11 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_12 = ___gameObjectType0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E(L_11, L_12, L_13, Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var);
		// return gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__ctor_mA30231CBCC9E7E8F3CFF71BBC70CC4DB0DAFA951 (GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__cctor_m0BC6819F5E1B8EB5C750DB12E3EF5DFFC2E5CED1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private Dictionary<GameObjectType, GameObject> gameObjectDictionary = new Dictionary<GameObjectType, GameObject>();
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*)il2cpp_codegen_object_new(Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C(L_0, Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var);
		((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0), (void*)L_0);
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
// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = ((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m8E6041B1520E1E0B3939B14C7DAD21B624651997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CommunicatorImplementation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// communicator = ComponentManager.AddComponent<Communicator>(GameObjectManager.GameObjectType.CORE_TYPE);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0;
		L_0 = ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m8E6041B1520E1E0B3939B14C7DAD21B624651997(0, ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m8E6041B1520E1E0B3939B14C7DAD21B624651997_RuntimeMethod_var);
		__this->___communicator_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___communicator_1), (void*)L_0);
		// communicator.Initialize();
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_1 = __this->___communicator_1;
		NullCheck(L_1);
		Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80(L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) 
{
	{
		// communicator.InitializeClass(configuration);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = ___configuration0;
		NullCheck(L_0);
		Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) 
{
	{
		// communicator.AddReceiver(domain, callback);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		String_t* L_1 = ___domain0;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_2 = ___callback1;
		NullCheck(L_0);
		Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	{
		// return communicator.CallSync(message);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___message0;
		NullCheck(L_0);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2;
		L_2 = Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	{
		// communicator.CallAsync(message);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___message0;
		NullCheck(L_0);
		Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__cctor_m4C29F2A81A134396A41FE0A7B4E0C9EF269138EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly CommunicatorImplementation instance = new CommunicatorImplementation();
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA*)il2cpp_codegen_object_new(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF(L_0, NULL);
		((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// Gpm.Communicator.Internal.Android.AndroidMessageSender Gpm.Communicator.Internal.Android.AndroidMessageSender::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* AndroidMessageSender_get_Instance_mBB399CE2CB695242C7EBDE64CEF959ED35012B4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* L_0 = ((AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_StaticFields*)il2cpp_codegen_static_fields_for(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender__ctor_m772BC2E7C1158B5CA1554C9D1A0C7341E12268E3 (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD65A2C2BA76DD91F86B63EF2249F8D06674416F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AndroidMessageSender()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (jc == null)
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___jc_2;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// jc = new AndroidJavaClass(GAMEBASE_ANDROID_PLUGIN_CLASS);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralCD65A2C2BA76DD91F86B63EF2249F8D06674416F, NULL);
		__this->___jc_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jc_2), (void*)L_1);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender_Initialize_m01D4FA60FE4FEA85572AE44FFEBC702B2A6CE1DB (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF5F32E3CD38F3D7DD2CDEF6B37764C721FF06D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jc.CallStatic("initializeUnityObject", gameObjectName, methodName);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___jc_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___gameObjectName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___methodName1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralDF5F32E3CD38F3D7DD2CDEF6B37764C721FF06D8, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender_InitializeClass_m0B7176776DDC37DDD28519EA13F57BB175890F1D (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, String_t* ___className0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA14C604FC111AFB8666392F16C66ACA161B9BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jc.CallStatic("initializeClass", className);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___jc_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___className0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1CA14C604FC111AFB8666392F16C66ACA161B9BC, L_2, NULL);
		// }
		return;
	}
}
// System.String Gpm.Communicator.Internal.Android.AndroidMessageSender::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidMessageSender_CallSync_mB3252224BF936A2CAFE2AD508D63252A50B6FC01 (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24905EB47E7248E0805A363B5946C70D511FCE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string retValue = jc.CallStatic<string>("onRequestSync", domain, data, extra);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___jc_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___domain0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___data1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___extra2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		String_t* L_8;
		L_8 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD24905EB47E7248E0805A363B5946C70D511FCE6, L_6, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		// return retValue;
		return L_8;
	}
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender_CallAsync_mB478B2B8A8FD6073656E4628FD9574899C8F17E4 (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE2480B96B9B55425DC4E0DE241398A000E70A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jc.CallStatic("onRequestAsync", domain, data, extra);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___jc_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___domain0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___data1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___extra2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralCEE2480B96B9B55425DC4E0DE241398A000E70A0, L_6, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Android.AndroidMessageSender::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidMessageSender__cctor_mB9AF7DE1A8887A1C071C4E95210664A6292C54EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly AndroidMessageSender instance = new AndroidMessageSender();
		AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* L_0 = (AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105*)il2cpp_codegen_object_new(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidMessageSender__ctor_m772BC2E7C1158B5CA1554C9D1A0C7341E12268E3(L_0, NULL);
		((AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_StaticFields*)il2cpp_codegen_static_fields_for(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_StaticFields*)il2cpp_codegen_static_fields_for(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.String Gpm.Communicator.Internal.Log.CommunicatorLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_m6934ED61B396855F8C79288FB01EC37982A5BDE5 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C13E73639856F799F682DDAB93967312F44069F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder log = new StringBuilder("[GPM]");
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863, NULL);
		// log.AppendFormat("[{0}]", serviceName);
		StringBuilder_t* L_1 = L_0;
		String_t* L_2 = ___serviceName1;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE, L_2, NULL);
		// log.AppendFormat("[{0}", classType.Name);
		StringBuilder_t* L_4 = L_1;
		Type_t* L_5 = ___classType2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, _stringLiteral9C13E73639856F799F682DDAB93967312F44069F, L_6, NULL);
		// log.AppendFormat("::{0}]", methodName);
		StringBuilder_t* L_8 = L_4;
		String_t* L_9 = ___methodName3;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_8, _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076, L_9, NULL);
		// log.AppendFormat(" {0}", message);
		StringBuilder_t* L_11 = L_8;
		RuntimeObject* L_12 = ___message0;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_12, NULL);
		// return log.ToString();
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Debug(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Debug_m46A6E2CBF1D07D90632ADA161F37D15784A1ABE6 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t* L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6934ED61B396855F8C79288FB01EC37982A5BDE5(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_m71AD77437A6539B6560D530BA60A01587B7E8997 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t* L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6934ED61B396855F8C79288FB01EC37982A5BDE5(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_mDF5E5A347B416648CBDF36B149E210917CDBE420 (RuntimeObject* ___message0, String_t* ___serviceName1, Type_t* ___classType2, String_t* ___methodName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t* L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6934ED61B396855F8C79288FB01EC37982A5BDE5(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_m45E4444E0F488A993A9FB93F4BB4EC00DA58069A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = ((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* AndroidMessageSender_get_Instance_mBB399CE2CB695242C7EBDE64CEF959ED35012B4C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var);
		AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105* L_0 = ((AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_StaticFields*)il2cpp_codegen_static_fields_for(AndroidMessageSender_tA883392EAAEAD9776B3A7FC778F2192E02721105_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
