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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.Object>
struct GpmWebViewDelegate_1_t9E79ADAB3F134DEE48455355590DE36AB1127C5F;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>
struct GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6;
// Gpm.WebView.Internal.IWebView
struct IWebView_t56600E03EB01EE205F830A1160159112BD884651;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1;
// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SampleWebView
struct SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate
struct GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D;
// Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate
struct GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71;
// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D;
// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191;
// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3;
// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB;
// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2;
// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t270EA20F5BD7C97729951399753CABF1D1D7140F;
// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1;
// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A;
// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F;
// Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated
struct ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6;
// Gpm.WebView.Internal.NativeRequest/Size
struct Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00385562BDE4AA1CF80C9A217C3F9F41B774AD1E;
IL2CPP_EXTERN_C String_t* _stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447;
IL2CPP_EXTERN_C String_t* _stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE16D6C904C247BFCF360639482E1571AD1185E;
IL2CPP_EXTERN_C String_t* _stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593;
IL2CPP_EXTERN_C String_t* _stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98;
IL2CPP_EXTERN_C String_t* _stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04;
IL2CPP_EXTERN_C String_t* _stringLiteral27D6A5BB052E36A66662C2E528ABEE0C5E20D7D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67;
IL2CPP_EXTERN_C String_t* _stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571;
IL2CPP_EXTERN_C String_t* _stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819;
IL2CPP_EXTERN_C String_t* _stringLiteral3537900A966F6526B545496171B453540EA156E2;
IL2CPP_EXTERN_C String_t* _stringLiteral437495827EE2F417C6EF6D171D77428822A383BC;
IL2CPP_EXTERN_C String_t* _stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249;
IL2CPP_EXTERN_C String_t* _stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445;
IL2CPP_EXTERN_C String_t* _stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5;
IL2CPP_EXTERN_C String_t* _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850;
IL2CPP_EXTERN_C String_t* _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0;
IL2CPP_EXTERN_C String_t* _stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732;
IL2CPP_EXTERN_C String_t* _stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23;
IL2CPP_EXTERN_C String_t* _stringLiteral84445DED3F38F40E166E8658E59ED855104487FA;
IL2CPP_EXTERN_C String_t* _stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F;
IL2CPP_EXTERN_C String_t* _stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301;
IL2CPP_EXTERN_C String_t* _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
IL2CPP_EXTERN_C String_t* _stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856;
IL2CPP_EXTERN_C String_t* _stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1;
IL2CPP_EXTERN_C String_t* _stringLiteralA4B945665E40B2A646BC1B622C015F4F5E59B854;
IL2CPP_EXTERN_C String_t* _stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA;
IL2CPP_EXTERN_C String_t* _stringLiteralBA367DADB20563FAA5E6B4BF794BB0C49CE6A906;
IL2CPP_EXTERN_C String_t* _stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE;
IL2CPP_EXTERN_C String_t* _stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD;
IL2CPP_EXTERN_C String_t* _stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306;
IL2CPP_EXTERN_C String_t* _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860;
IL2CPP_EXTERN_C String_t* _stringLiteralEE98C89BE724D2286EAC3C5213DB2E5177E8116C;
IL2CPP_EXTERN_C String_t* _stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D1FC194A5FD9B15867585946A6B56D9A3C267D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBDF8D952E0D020D50E773F9AE5EEE30044A6C1C;
IL2CPP_EXTERN_C String_t* _stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_mC4D593B26B5A6890FC06B3A6A406F9EA3441E967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769_m9566F835888DCD59B0ABD3FD30B8C77C6CAD1E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mD349368CFDBB174411AA6015C50A085CA0C7E30D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCallbackHandler_GetCallback_TisGpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71_mD02C66777FB742F240C3E4BDD241B8A5E8927B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB70C7FE397245F8C25BCAFD9318274CCA346C179 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
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
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Gpm.WebView.Internal.DefaultWebView
struct DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583  : public RuntimeObject
{
};

// Gpm.WebView.GpmOrientation
struct GpmOrientation_tED11E80DF35B03178514F6F9CD3F2D386C372C6C  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebView
struct GpmWebView_t3C2CB34A03D1AA8B1B6BA9C891FE597A6E2E2890  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewCallback
struct GpmWebViewCallback_t7BA400E59E69317675C4BB6F04CBED56934C3DA1  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewContentMode
struct GpmWebViewContentMode_t3B5849CC38CD635050B832A5DD9E31C6E8B12D69  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewError
struct GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84  : public RuntimeObject
{
	// System.String Gpm.WebView.GpmWebViewError::domain
	String_t* ___domain_0;
	// System.Int32 Gpm.WebView.GpmWebViewError::code
	int32_t ___code_1;
	// System.String Gpm.WebView.GpmWebViewError::message
	String_t* ___message_2;
	// Gpm.WebView.GpmWebViewError Gpm.WebView.GpmWebViewError::error
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error_3;
};

// Gpm.WebView.GpmWebViewErrorCode
struct GpmWebViewErrorCode_t69A2A1C228054728DC27A5FB1C1A25E89850462E  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewRequest
struct GpmWebViewRequest_t4311A4FDEF7A06996D9CDFE2B007AEB2E5090E25  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewSafeBrowsing
struct GpmWebViewSafeBrowsing_tD10E76434D79797F28C109FF88D7213FFFEE0441  : public RuntimeObject
{
};

// Gpm.WebView.GpmWebViewStyle
struct GpmWebViewStyle_t095DEB05284A009211D21090F702FE47B8273B15  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeCallbackHandler
struct NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592  : public RuntimeObject
{
};

struct NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields
{
	// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::handle
	int32_t ___handle_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Gpm.WebView.Internal.NativeCallbackHandler::callbackDic
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___callbackDic_1;
};

// Gpm.WebView.Internal.NativeMessage
struct NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeMessage::scheme
	String_t* ___scheme_0;
	// System.String Gpm.WebView.Internal.NativeMessage::error
	String_t* ___error_1;
	// System.String Gpm.WebView.Internal.NativeMessage::data
	String_t* ___data_2;
	// System.String Gpm.WebView.Internal.NativeMessage::extra
	String_t* ___extra_3;
	// System.Int32 Gpm.WebView.Internal.NativeMessage::callback
	int32_t ___callback_4;
	// System.Int32 Gpm.WebView.Internal.NativeMessage::callbackType
	int32_t ___callbackType_5;
};

// Gpm.WebView.Internal.NativeRequest
struct NativeRequest_tB0FE38874DA99CC607B0DCF0746272E762C0D3F9  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeWebView
struct NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeWebView::CLASS_NAME
	String_t* ___CLASS_NAME_3;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToPortrait
	bool ___isAutorotateToPortrait_5;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToPortraitUpsideDown
	bool ___isAutorotateToPortraitUpsideDown_6;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToLandscapeLeft
	bool ___isAutorotateToLandscapeLeft_7;
	// System.Boolean Gpm.WebView.Internal.NativeWebView::isAutorotateToLandscapeRight
	bool ___isAutorotateToLandscapeRight_8;
	// UnityEngine.ScreenOrientation Gpm.WebView.Internal.NativeWebView::defaultOrientation
	int32_t ___defaultOrientation_9;
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

// Gpm.WebView.Internal.WebViewImplementation
struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D  : public RuntimeObject
{
	// Gpm.WebView.Internal.IWebView Gpm.WebView.Internal.WebViewImplementation::webview
	RuntimeObject* ___webview_1;
};

struct WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields
{
	// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::instance
	WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* ___instance_0;
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

// Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77  : public RuntimeObject
{
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;
};

// Gpm.WebView.Internal.NativeRequest/Configuration
struct Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::style
	int32_t ___style_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::orientation
	int32_t ___orientation_1;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isClearCookie
	bool ___isClearCookie_2;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isClearCache
	bool ___isClearCache_3;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isNavigationBarVisible
	bool ___isNavigationBarVisible_4;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::navigationBarColor
	String_t* ___navigationBarColor_5;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::title
	String_t* ___title_6;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isBackButtonVisible
	bool ___isBackButtonVisible_7;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isForwardButtonVisible
	bool ___isForwardButtonVisible_8;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::supportMultipleWindows
	bool ___supportMultipleWindows_9;
	// System.String Gpm.WebView.Internal.NativeRequest/Configuration::userAgentString
	String_t* ___userAgentString_10;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasPosition
	bool ___hasPosition_11;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::positionX
	int32_t ___positionX_12;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::positionY
	int32_t ___positionY_13;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasSize
	bool ___hasSize_14;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::sizeWidth
	int32_t ___sizeWidth_15;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::sizeHeight
	int32_t ___sizeHeight_16;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::hasMargins
	bool ___hasMargins_17;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsLeft
	int32_t ___marginsLeft_18;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsTop
	int32_t ___marginsTop_19;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsRight
	int32_t ___marginsRight_20;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::marginsBottom
	int32_t ___marginsBottom_21;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Configuration::contentMode
	int32_t ___contentMode_22;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isMaskViewVisible
	bool ___isMaskViewVisible_23;
	// System.Boolean Gpm.WebView.Internal.NativeRequest/Configuration::isAutoRotation
	bool ___isAutoRotation_24;
};

// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing
struct ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationBarColor
	String_t* ___navigationBarColor_0;
	// System.String Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::navigationTextColor
	String_t* ___navigationTextColor_1;
};

// Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript
struct ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::script
	String_t* ___script_0;
};

// Gpm.WebView.Internal.NativeRequest/Margins
struct Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::left
	int32_t ___left_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::top
	int32_t ___top_1;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::right
	int32_t ___right_2;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Margins::bottom
	int32_t ___bottom_3;
};

// Gpm.WebView.Internal.NativeRequest/Position
struct Position_t270EA20F5BD7C97729951399753CABF1D1D7140F  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::x
	int32_t ___x_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Position::y
	int32_t ___y_1;
};

// Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing
struct ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::url
	String_t* ___url_0;
	// Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::configuration
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* ___configuration_1;
};

// Gpm.WebView.Internal.NativeRequest/ShowWebBrowser
struct ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::url
	String_t* ___url_0;
};

// Gpm.WebView.Internal.NativeRequest/ShowWebView
struct ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebView::data
	String_t* ___data_0;
	// Gpm.WebView.Internal.NativeRequest/Configuration Gpm.WebView.Internal.NativeRequest/ShowWebView::configuration
	Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* ___configuration_1;
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.Internal.NativeRequest/ShowWebView::schemeList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList_2;
};

// Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated
struct ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6  : public RuntimeObject
{
	// System.String Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::data
	String_t* ___data_0;
	// Gpm.WebView.Internal.NativeRequest/Configuration Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::configuration
	Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* ___configuration_1;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::callback
	int32_t ___callback_2;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::closeCallback
	int32_t ___closeCallback_3;
	// System.Collections.Generic.List`1<System.String> Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::schemeList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList_4;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::schemeEvent
	int32_t ___schemeEvent_5;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::pageLoadCallback
	int32_t ___pageLoadCallback_6;
};

// Gpm.WebView.Internal.NativeRequest/Size
struct Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::width
	int32_t ___width_0;
	// System.Int32 Gpm.WebView.Internal.NativeRequest/Size::height
	int32_t ___height_1;
};

// Gpm.WebView.Internal.NativeWebView/ApiScheme
struct ApiScheme_t5752820ACD107C3FF8010CC1F5C7AA236C1A4C46  : public RuntimeObject
{
};

// Gpm.WebView.Internal.NativeWebView/CallbackScheme
struct CallbackScheme_t1B5F7F87C7B7895A1E1693353603C57DAEB95FF5  : public RuntimeObject
{
};

// Gpm.WebView.Internal.AndroidWebView
struct AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004  : public NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// Gpm.WebView.Internal.IOSWebView
struct IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6  : public NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85 
{
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Margins::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::left
	int32_t ___left_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::top
	int32_t ___top_2;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::right
	int32_t ___right_3;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Margins::bottom
	int32_t ___bottom_4;
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Margins
struct Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___left_1;
	int32_t ___top_2;
	int32_t ___right_3;
	int32_t ___bottom_4;
};

// Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 
{
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Position::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::x
	int32_t ___x_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Position::y
	int32_t ___y_2;
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Position
struct Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___x_1;
	int32_t ___y_2;
};

// Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F 
{
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Size::hasValue
	bool ___hasValue_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::width
	int32_t ___width_1;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Size::height
	int32_t ___height_2;
};
// Native definition for P/Invoke marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};
// Native definition for COM marshalling of Gpm.WebView.GpmWebViewRequest/Size
struct Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com
{
	int32_t ___hasValue_0;
	int32_t ___width_1;
	int32_t ___height_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// Gpm.WebView.GpmWebViewRequest/Configuration
struct Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D  : public RuntimeObject
{
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::style
	int32_t ___style_0;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::orientation
	int32_t ___orientation_1;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isClearCookie
	bool ___isClearCookie_2;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isClearCache
	bool ___isClearCache_3;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isNavigationBarVisible
	bool ___isNavigationBarVisible_4;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::navigationBarColor
	String_t* ___navigationBarColor_5;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::title
	String_t* ___title_6;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isBackButtonVisible
	bool ___isBackButtonVisible_7;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isForwardButtonVisible
	bool ___isForwardButtonVisible_8;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::supportMultipleWindows
	bool ___supportMultipleWindows_9;
	// System.String Gpm.WebView.GpmWebViewRequest/Configuration::userAgentString
	String_t* ___userAgentString_10;
	// Gpm.WebView.GpmWebViewRequest/Position Gpm.WebView.GpmWebViewRequest/Configuration::position
	Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 ___position_11;
	// Gpm.WebView.GpmWebViewRequest/Size Gpm.WebView.GpmWebViewRequest/Configuration::size
	Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F ___size_12;
	// Gpm.WebView.GpmWebViewRequest/Margins Gpm.WebView.GpmWebViewRequest/Configuration::margins
	Margins_t710D98C860962372C9323F82DD766A3977353F85 ___margins_13;
	// System.Int32 Gpm.WebView.GpmWebViewRequest/Configuration::contentMode
	int32_t ___contentMode_14;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isMaskViewVisible
	bool ___isMaskViewVisible_15;
	// System.Boolean Gpm.WebView.GpmWebViewRequest/Configuration::isAutoRotation
	bool ___isAutoRotation_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.Object>
struct GpmWebViewDelegate_1_t9E79ADAB3F134DEE48455355590DE36AB1127C5F  : public MulticastDelegate_t
{
};

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>
struct GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769  : public MulticastDelegate_t
{
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

// Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate
struct GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F  : public MulticastDelegate_t
{
};

// Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate
struct GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D  : public MulticastDelegate_t
{
};

// Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate
struct GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SampleWebView
struct SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SampleWebView::sampleUrl
	String_t* ___sampleUrl_4;
	// System.Collections.Generic.List`1<System.String> SampleWebView::customSchemeList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___customSchemeList_5;
	// UnityEngine.UI.Toggle SampleWebView::fullScreenToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___fullScreenToggle_6;
	// UnityEngine.UI.Toggle SampleWebView::navigationBarVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___navigationBarVisibleToggle_7;
	// UnityEngine.UI.Toggle SampleWebView::backButtonVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___backButtonVisibleToggle_8;
	// UnityEngine.UI.Toggle SampleWebView::forwardButtonVisibleToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___forwardButtonVisibleToggle_9;
	// UnityEngine.UI.Dropdown SampleWebView::orientationDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___orientationDropdown_10;
	// UnityEngine.UI.InputField SampleWebView::titleTextInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___titleTextInput_11;
	// UnityEngine.UI.InputField SampleWebView::popupXInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupXInput_12;
	// UnityEngine.UI.InputField SampleWebView::popupYInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupYInput_13;
	// UnityEngine.UI.InputField SampleWebView::popupWidthInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupWidthInput_14;
	// UnityEngine.UI.InputField SampleWebView::popupHeightInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupHeightInput_15;
	// UnityEngine.UI.InputField SampleWebView::popupMarginsInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___popupMarginsInput_16;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToObject_TisRuntimeObject_mB5A25D066767ACD4D86F80A831F5D69E7B723043_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeCallbackHandler_GetCallback_TisRuntimeObject_mBC71D9E5956168914DAB231DA0F713A7DC402E57_gshared (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.Object>::Invoke(T,Gpm.WebView.GpmWebViewError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_1_Invoke_m696708BA299FF05A4CBFF5C10942DAA75B77B1B1_gshared_inline (GpmWebViewDelegate_1_t9E79ADAB3F134DEE48455355590DE36AB1127C5F* __this, RuntimeObject* ___data0, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error1, const RuntimeMethod* method) ;

// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_mC9D05682658824E367AF0E122B5DC1A915D29EAC (String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_m2EBF98F066A568573FAF732B766C49EF1977BDE6 (String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mF2DA8A50B288296788638371450C738EBB18F362 (String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_mE9236F0A04AE58ACCB1DED30A380E691E417C84F (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282 (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_t710D98C860962372C9323F82DD766A3977353F85 SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline (const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m2CB7407F6E757CE5054A8927FA2D2E30A44CA768 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m3F67F8BFC9A9EC220B8F8D192500DC953F5D3DD3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_m6E09E2BF279AF6B79921A0F3F4EB335E207FA295 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___script0, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.String Gpm.Common.ThirdParty.LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.AndroidWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView__ctor_m5E20360A47EC583F65BC3EDF549535B4656CBD97 (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
inline bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
inline void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Gpm.WebView.Internal.NativeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16 (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* __this, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mAA53666F188B002A52359F80BCD85F8E24B3A4AF (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m9425E88D1521BAA1D332358A5D276E04F56BE6DF (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___configuration0, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_mDD0B71851E6E9B1DEDEB75761F7A1AE794282A40 (String_t* ___domain0, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___callback1, const RuntimeMethod* method) ;
// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::RegisterCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C (RuntimeObject* ___callback0, const RuntimeMethod* method) ;
// Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* NativeWebView_MakeShowWebView_m0414637611FF3A0B43F99F2A65DE6CB4D940A177 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent4, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback5, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method) ;
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList2, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16 (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3 (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebViewDeprecated__ctor_m61DC638DDFEE9E4BFA6E3A8B17678EE2EF3E3768 (ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2 (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::UpdateOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_UpdateOrientation_m2DCBFCE58B94C79B9C34B8960E0F3BA95B96FE92 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___orientation0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552 (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_mEC96CE899A8F3ACAAE719DC3FE7967F4F2CEB86C (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* GpmCommunicator_CallSync_mBD84ACC63965EBF167953E954A20569CDB8A1A0E (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) ;
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.Internal.NativeMessage>(System.String)
inline NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_mC4D593B26B5A6890FC06B3A6A406F9EA3441E967 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_mB5A25D066767ACD4D86F80A831F5D69E7B723043_gshared)(___json0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnAsyncEventDeprecated(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnAsyncEventDeprecated_mD6150C640BEB691E37860CE500C8EE56EF825C92 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnSchemeEventCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnSchemeEventCallback_m36119427D92048654A58F6A30018D8342A844006 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnCloseCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnCloseCallback_m43566009C31D466882412BFE39308046B3676EF9 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnCallback_m9C8D3FF201692F4049F21659AAC94623D494D2EC (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::OnPageLoadCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnPageLoadCallback_mD8D5FAD3A3085A946D58839F38E1E775108431F7 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate>(System.Int32)
inline GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B (int32_t ___handle0, const RuntimeMethod* method)
{
	return ((  GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_mBC71D9E5956168914DAB231DA0F713A7DC402E57_gshared)(___handle0, method);
}
// T Gpm.Common.ThirdParty.LitJson.JsonMapper::ToObject<Gpm.WebView.GpmWebViewError>(System.String)
inline GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* (*) (String_t*, const RuntimeMethod*))JsonMapper_ToObject_TisRuntimeObject_mB5A25D066767ACD4D86F80A831F5D69E7B723043_gshared)(___json0, method);
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m54595AFA614F53BB4016B6D03538E9CA7ECA0E7C (int32_t ___handle0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate::Invoke(Gpm.WebView.GpmWebViewError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_inline (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>>(System.Int32)
inline GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769_m9566F835888DCD59B0ABD3FD30B8C77C6CAD1E41 (int32_t ___handle0, const RuntimeMethod* method)
{
	return ((  GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_mBC71D9E5956168914DAB231DA0F713A7DC402E57_gshared)(___handle0, method);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>::Invoke(T,Gpm.WebView.GpmWebViewError)
inline void GpmWebViewDelegate_1_Invoke_m899DBBE34F50AA5FBCCF99035F29EAA29BC5528D_inline (GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* __this, String_t* ___data0, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error1, const RuntimeMethod* method)
{
	((  void (*) (GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769*, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*))GpmWebViewDelegate_1_Invoke_m696708BA299FF05A4CBFF5C10942DAA75B77B1B1_gshared_inline)(__this, ___data0, ___error1, method);
}
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate>(System.Int32)
inline GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* NativeCallbackHandler_GetCallback_TisGpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71_mD02C66777FB742F240C3E4BDD241B8A5E8927B21 (int32_t ___handle0, const RuntimeMethod* method)
{
	return ((  GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_mBC71D9E5956168914DAB231DA0F713A7DC402E57_gshared)(___handle0, method);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_inline (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method) ;
// T Gpm.WebView.Internal.NativeCallbackHandler::GetCallback<Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate>(System.Int32)
inline GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mD349368CFDBB174411AA6015C50A085CA0C7E30D (int32_t ___handle0, const RuntimeMethod* method)
{
	return ((  GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* (*) (int32_t, const RuntimeMethod*))NativeCallbackHandler_GetCallback_TisRuntimeObject_mBC71D9E5956168914DAB231DA0F713A7DC402E57_gshared)(___handle0, method);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75 (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToPortrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortrait_m76770E69563796B67888C3DEEA628583E2EBCAD5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToPortraitUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortraitUpsideDown_m346688D4E666DABD98A0D8C92AC3B2D739CE6F23 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeLeft_m71764551E22520E49B0F329BEC3C0D9A9807F1EB (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeRight_m9ACB599117E7A7E340184F026A2E6786226FEC79 (const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortrait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortrait_mFD3B643DD1660BDACABB2426ABBF56CC7DD0C20A (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m4F307AAC11D730BD9C6B33A7D0F5D911BE367AC3 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_m0A5C4DACABE595591D931337C8B4724E6D45CFA5 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_mF798181165A504BF4A14DBECBDA796D601930C18 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* __this, const RuntimeMethod* method) ;
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
// System.Void SampleWebView::OpenWebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebView_m5B0D3F2003540B3CEAF1CFE385F338A74B025359 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmWebView.ShowUrl(sampleUrl, GetConfiguration(), OnWebViewCallback, customSchemeList);
		String_t* L_0 = __this->___sampleUrl_4;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_1;
		L_1 = SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17(__this, NULL);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_2 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_2, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___customSchemeList_5;
		GpmWebView_ShowUrl_mC9D05682658824E367AF0E122B5DC1A915D29EAC(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWithHTMLString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWithHTMLString_m32E261CFAB621C79FD146DC9F357062551FA3062 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string htmlString = @"<html><head><title>GPM WebView</title></head>
		//     <body><h1>GPM WebView Test</h1><h5>Hi.</h5>
		//     <script type='text/javascript'>
		//     function goGoogle() { window.open('https://www.google.com'); }
		//     </script>
		//     <button class='favorite styled' type='button' onclick='goGoogle()'>Go Google</button>
		//     </body></html>";
		// GpmWebView.ShowHtmlString(htmlString, GetConfiguration(), OnWebViewCallback, customSchemeList);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_0;
		L_0 = SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17(__this, NULL);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_1 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_1, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___customSchemeList_5;
		GpmWebView_ShowHtmlString_m2EBF98F066A568573FAF732B766C49EF1977BDE6(_stringLiteralC34B23CD76F40324322D49396FD0F04E34128CAB, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenSafeBrowsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenSafeBrowsing_m8498648AA6CE84DDF3961524F13ED708E5E73FF6 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmWebViewSafeBrowsing.ShowSafeBrowsing(sampleUrl,
		//     new GpmWebViewRequest.ConfigurationSafeBrowsing
		//     {
		//         navigationBarColor = "#4B96E6",
		//         navigationTextColor = "#FFFFFF"
		//     }, OnWebViewCallback);
		String_t* L_0 = __this->___sampleUrl_4;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_1 = (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77*)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F(L_1, NULL);
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_2 = L_1;
		NullCheck(L_2);
		L_2->___navigationBarColor_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___navigationBarColor_0), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_3 = L_2;
		NullCheck(L_3);
		L_3->___navigationTextColor_1 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___navigationTextColor_1), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_4 = (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*)il2cpp_codegen_object_new(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86(L_4, __this, (intptr_t)((void*)SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1_RuntimeMethod_var), NULL);
		GpmWebViewSafeBrowsing_ShowSafeBrowsing_mF2DA8A50B288296788638371450C738EBB18F362(L_0, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::OpenWebBrowser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OpenWebBrowser_m174ED0D09BA521595B7AAE98CF3E4A2FB46C48F2 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	{
		// GpmWebView.ShowWebBrowser(sampleUrl);
		String_t* L_0 = __this->___sampleUrl_4;
		GpmWebView_ShowWebBrowser_mE9236F0A04AE58ACCB1DED30A380E691E417C84F(L_0, NULL);
		// }
		return;
	}
}
// System.Void SampleWebView::SetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_SetDefault_mD07471C628C60D70237981972CCB3CD9F6531E77 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fullScreenToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___fullScreenToggle_6;
		NullCheck(L_0);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_0, (bool)1, NULL);
		// navigationBarVisibleToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___navigationBarVisibleToggle_7;
		NullCheck(L_1);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_1, (bool)1, NULL);
		// backButtonVisibleToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___backButtonVisibleToggle_8;
		NullCheck(L_2);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_2, (bool)1, NULL);
		// forwardButtonVisibleToggle.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___forwardButtonVisibleToggle_9;
		NullCheck(L_3);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_3, (bool)1, NULL);
		// orientationDropdown.value = 0;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_4 = __this->___orientationDropdown_10;
		NullCheck(L_4);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_4, 0, NULL);
		// titleTextInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___titleTextInput_11;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_5);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_6, NULL);
		// popupXInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_7 = __this->___popupXInput_12;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_7, L_8, NULL);
		// popupYInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupYInput_13;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_9);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_9, L_10, NULL);
		// popupWidthInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_11 = __this->___popupWidthInput_14;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_11);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_11, L_12, NULL);
		// popupHeightInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_13 = __this->___popupHeightInput_15;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_13);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_13, L_14, NULL);
		// popupMarginsInput.text = string.Empty;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___popupMarginsInput_16;
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_15);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_15, L_16, NULL);
		// }
		return;
	}
}
// Gpm.WebView.GpmWebViewRequest/Configuration SampleWebView::GetConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* SampleWebView_GetConfiguration_m153B9C62983C5BA0D4BA0D77A9126EE52E9C3F17 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B2_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B2_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B1_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B3_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B3_2 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B5_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B5_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B4_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B6_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B6_2 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B8_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B8_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B7_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B9_1 = NULL;
	Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* G_B9_2 = NULL;
	{
		//         return new GpmWebViewRequest.Configuration()
		//         {
		//             style = fullScreenToggle.isOn ? GpmWebViewStyle.FULLSCREEN : GpmWebViewStyle.POPUP,
		//             orientation = (orientationDropdown.value == 0)? GpmOrientation.UNSPECIFIED : 1 << (orientationDropdown.value - 1),
		//             isClearCache = true,
		//             isClearCookie = true,
		//             title = string.IsNullOrEmpty(titleTextInput.text) ? string.Empty : titleTextInput.text,
		//             navigationBarColor = "#4B96E6",
		// 
		//             isNavigationBarVisible = navigationBarVisibleToggle.isOn,
		//             isBackButtonVisible = backButtonVisibleToggle.isOn,
		//             isForwardButtonVisible = forwardButtonVisibleToggle.isOn,
		//             supportMultipleWindows = true,
		// 
		//             position = GetConfigurationPosition(),
		//             size = GetConfigurationSize(),
		//             margins = GetConfigurationMargins(),
		// 
		// #if UNITY_IOS
		//             contentMode = GpmWebViewContentMode.RECOMMENDED,
		//             isMaskViewVisible = true,
		//             isAutoRotation = true
		// #endif
		//         };
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_0 = (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*)il2cpp_codegen_object_new(Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282(L_0, NULL);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_1 = L_0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___fullScreenToggle_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_2, NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_1;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		G_B3_1->___style_0 = G_B3_0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_4 = G_B3_2;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___orientationDropdown_10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_5, NULL);
		G_B4_0 = L_4;
		G_B4_1 = L_4;
		if (!L_6)
		{
			G_B5_0 = L_4;
			G_B5_1 = L_4;
			goto IL_003e;
		}
	}
	{
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_7 = __this->___orientationDropdown_10;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_7, NULL);
		G_B6_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_8, 1))&((int32_t)31)))));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_003f:
	{
		NullCheck(G_B6_1);
		G_B6_1->___orientation_1 = G_B6_0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_9 = G_B6_2;
		NullCheck(L_9);
		L_9->___isClearCache_3 = (bool)1;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_10 = L_9;
		NullCheck(L_10);
		L_10->___isClearCookie_2 = (bool)1;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_11 = L_10;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___titleTextInput_11;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_12, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_13, NULL);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		if (L_14)
		{
			G_B8_0 = L_11;
			G_B8_1 = L_11;
			goto IL_0072;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___titleTextInput_11;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_15, NULL);
		G_B9_0 = L_16;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0077;
	}

IL_0072:
	{
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B9_0 = L_17;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0077:
	{
		NullCheck(G_B9_1);
		G_B9_1->___title_6 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___title_6), (void*)G_B9_0);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_18 = G_B9_2;
		NullCheck(L_18);
		L_18->___navigationBarColor_5 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___navigationBarColor_5), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_19 = L_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_20 = __this->___navigationBarVisibleToggle_7;
		NullCheck(L_20);
		bool L_21;
		L_21 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_20, NULL);
		NullCheck(L_19);
		L_19->___isNavigationBarVisible_4 = L_21;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_22 = L_19;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23 = __this->___backButtonVisibleToggle_8;
		NullCheck(L_23);
		bool L_24;
		L_24 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_23, NULL);
		NullCheck(L_22);
		L_22->___isBackButtonVisible_7 = L_24;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_25 = L_22;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_26 = __this->___forwardButtonVisibleToggle_9;
		NullCheck(L_26);
		bool L_27;
		L_27 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_26, NULL);
		NullCheck(L_25);
		L_25->___isForwardButtonVisible_8 = L_27;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_28 = L_25;
		NullCheck(L_28);
		L_28->___supportMultipleWindows_9 = (bool)1;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_29 = L_28;
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 L_30;
		L_30 = SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3(__this, NULL);
		NullCheck(L_29);
		L_29->___position_11 = L_30;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_31 = L_29;
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F L_32;
		L_32 = SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA(__this, NULL);
		NullCheck(L_31);
		L_31->___size_12 = L_32;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_33 = L_31;
		Margins_t710D98C860962372C9323F82DD766A3977353F85 L_34;
		L_34 = SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC(__this, NULL);
		NullCheck(L_33);
		L_33->___margins_13 = L_34;
		return L_33;
	}
}
// Gpm.WebView.GpmWebViewRequest/Position SampleWebView::GetConfigurationPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 SampleWebView_GetConfigurationPosition_mB68ADEBEDD0203776D7F32D19E0C2AF37115D3C3 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupXInput.text) == false && string.IsNullOrEmpty(popupYInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupXInput_12;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupYInput_13;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_0028:
	{
		// int x = 0;
		V_1 = 0;
		// int.TryParse(popupXInput.text, out x);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupXInput_12;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_7, (&V_1), NULL);
		// int y = 0;
		V_2 = 0;
		// int.TryParse(popupYInput.text, out y);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupYInput_13;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_10, (&V_2), NULL);
		// return new GpmWebViewRequest.Position
		// {
		//     hasValue = hasValue,
		//     x = x,
		//     y = y
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778));
		bool L_12 = V_0;
		(&V_3)->___hasValue_0 = L_12;
		int32_t L_13 = V_1;
		(&V_3)->___x_1 = L_13;
		int32_t L_14 = V_2;
		(&V_3)->___y_2 = L_14;
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778 L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Size SampleWebView::GetConfigurationSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F SampleWebView_GetConfigurationSize_m0D8D42722F3E9F761B597B08D5CB15CB36AE5BFA (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupWidthInput.text) == false && string.IsNullOrEmpty(popupWidthInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupWidthInput_14;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupWidthInput_14;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_0028:
	{
		// int width = 0;
		V_1 = 0;
		// int.TryParse(popupWidthInput.text, out width);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___popupWidthInput_14;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_6, NULL);
		bool L_8;
		L_8 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_7, (&V_1), NULL);
		// int height = 0;
		V_2 = 0;
		// int.TryParse(popupHeightInput.text, out height);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_9 = __this->___popupHeightInput_15;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_9, NULL);
		bool L_11;
		L_11 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_10, (&V_2), NULL);
		// return new GpmWebViewRequest.Size
		// {
		//     hasValue = hasValue,
		//     width = width,
		//     height = height
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F));
		bool L_12 = V_0;
		(&V_3)->___hasValue_0 = L_12;
		int32_t L_13 = V_1;
		(&V_3)->___width_1 = L_13;
		int32_t L_14 = V_2;
		(&V_3)->___height_2 = L_14;
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F L_15 = V_3;
		return L_15;
	}
}
// Gpm.WebView.GpmWebViewRequest/Margins SampleWebView::GetConfigurationMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_t710D98C860962372C9323F82DD766A3977353F85 SampleWebView_GetConfigurationMargins_mB17D4ADCEEE478A8D66138E4835B799DABE0FBEC (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Margins_t710D98C860962372C9323F82DD766A3977353F85 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// bool hasValue = false;
		V_0 = (bool)0;
		// if (string.IsNullOrEmpty(popupMarginsInput.text) == false)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___popupMarginsInput_16;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// hasValue = true;
		V_0 = (bool)1;
	}

IL_0016:
	{
		// int margins = 0;
		V_1 = 0;
		// int.TryParse(popupMarginsInput.text, out margins);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___popupMarginsInput_16;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		bool L_5;
		L_5 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_4, (&V_1), NULL);
		// return new GpmWebViewRequest.Margins
		// {
		//     hasValue = hasValue,
		//     left = margins,
		//     top = margins,
		//     right = margins,
		//     bottom = margins
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Margins_t710D98C860962372C9323F82DD766A3977353F85));
		bool L_6 = V_0;
		(&V_2)->___hasValue_0 = L_6;
		int32_t L_7 = V_1;
		(&V_2)->___left_1 = L_7;
		int32_t L_8 = V_1;
		(&V_2)->___top_2 = L_8;
		int32_t L_9 = V_1;
		(&V_2)->___right_3 = L_9;
		int32_t L_10 = V_1;
		(&V_2)->___bottom_4 = L_10;
		Margins_t710D98C860962372C9323F82DD766A3977353F85 L_11 = V_2;
		return L_11;
	}
}
// System.Void SampleWebView::OnWebViewCallback(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView_OnWebViewCallback_m28FDC7421A12F3F97F961FFBC9EADA13FE1C36C1 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, int32_t ___callbackType0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnWebViewCallback: " + callbackType);
		Il2CppFakeBox<int32_t> L_0(CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var, (&___callbackType0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3353FE40126F6A90AE70941B74EDAC7A246A6819, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		int32_t L_3 = ___callbackType0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0093;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_00a9;
			}
			case 6:
			{
				goto IL_00be;
			}
			case 7:
			{
				goto IL_00c9;
			}
		}
	}
	{
		return;
	}

IL_0043:
	{
		// if (error != null)
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_4 = ___error2;
		if (!L_4)
		{
			goto IL_00d3;
		}
	}
	{
		// Debug.LogFormat("Fail to open WebView. Error:{0}", error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_7 = ___error2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral9819B2ADE3033816812B6476FC3144B46A0E4301, L_6, NULL);
		// break;
		return;
	}

IL_005e:
	{
		// if (error != null)
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_8 = ___error2;
		if (!L_8)
		{
			goto IL_00d3;
		}
	}
	{
		// Debug.LogFormat("Fail to close WebView. Error:{0}", error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_11 = ___error2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral0B241CB3EEE5D589CA19710ABBF0C7D1B11EB9A3, L_10, NULL);
		// break;
		return;
	}

IL_0076:
	{
		// if (string.IsNullOrEmpty(data) == false)
		String_t* L_12 = ___data1;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		if (L_13)
		{
			goto IL_00d3;
		}
	}
	{
		// Debug.LogFormat("Loaded Page:{0}", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		String_t* L_16 = ___data1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral4EF917734AC14033FA41F53D00974CA539F0C445, L_15, NULL);
		// break;
		return;
	}

IL_0093:
	{
		// Debug.Log("MultiWindowOpen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralFDA796685120EA50A129C055DDF20DF3D99D95DB, NULL);
		// break;
		return;
	}

IL_009e:
	{
		// Debug.Log("MultiWindowClose");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral04F8834E37A04F4BBCA017B29A65B35423675447, NULL);
		// break;
		return;
	}

IL_00a9:
	{
		// Debug.LogFormat("Scheme:{0}", data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		String_t* L_19 = ___data1;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral2F788246CC4B1F56C30416BB4828AB5DFE1D7571, L_18, NULL);
		// break;
		return;
	}

IL_00be:
	{
		// Debug.Log("GoBack");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6F5DC295F8AA395185E978B7D6DE85F3427EDEA0, NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// Debug.Log("GoForward");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDF1C4D8BF6C22738F012A325F6F14CD7E5F8C9FD, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void SampleWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleWebView__ctor_m156AB2ACD0F4CFAB34D3122F8D1C885D565D69B9 (SampleWebView_t8C93EEF026FF4C28DE1AA9964A57066D5BEB69FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D6A5BB052E36A66662C2E528ABEE0C5E20D7D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string sampleUrl = "https://www.google.com";
		__this->___sampleUrl_4 = _stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sampleUrl_4), (void*)_stringLiteral624680CF43A758F7BA992C7A896E612BF23FA850);
		// public List<string> customSchemeList = new List<string> { "CUSTOM_SCHEME" };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral27D6A5BB052E36A66662C2E528ABEE0C5E20D7D6, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___customSchemeList_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customSchemeList_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
}
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_back(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledx_temp_1 = 0;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	int32_t unmarshaledy_temp_2 = 0;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_pinvoke_cleanup(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___x_1 = unmarshaled.___x_1;
	marshaled.___y_2 = unmarshaled.___y_2;
}
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com_back(const Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled, Position_t824C74226386B322C9926FC29B2AFCBECAFE3778& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledx_temp_1 = 0;
	unmarshaledx_temp_1 = marshaled.___x_1;
	unmarshaled.___x_1 = unmarshaledx_temp_1;
	int32_t unmarshaledy_temp_2 = 0;
	unmarshaledy_temp_2 = marshaled.___y_2;
	unmarshaled.___y_2 = unmarshaledy_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Position
IL2CPP_EXTERN_C void Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshal_com_cleanup(Position_t824C74226386B322C9926FC29B2AFCBECAFE3778_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
}
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_back(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_pinvoke_cleanup(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___width_1 = unmarshaled.___width_1;
	marshaled.___height_2 = unmarshaled.___height_2;
}
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com_back(const Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled, Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledwidth_temp_1 = 0;
	unmarshaledwidth_temp_1 = marshaled.___width_1;
	unmarshaled.___width_1 = unmarshaledwidth_temp_1;
	int32_t unmarshaledheight_temp_2 = 0;
	unmarshaledheight_temp_2 = marshaled.___height_2;
	unmarshaled.___height_2 = unmarshaledheight_temp_2;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Size
IL2CPP_EXTERN_C void Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshal_com_cleanup(Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke(const Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___left_1 = unmarshaled.___left_1;
	marshaled.___top_2 = unmarshaled.___top_2;
	marshaled.___right_3 = unmarshaled.___right_3;
	marshaled.___bottom_4 = unmarshaled.___bottom_4;
}
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_back(const Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledleft_temp_1 = 0;
	unmarshaledleft_temp_1 = marshaled.___left_1;
	unmarshaled.___left_1 = unmarshaledleft_temp_1;
	int32_t unmarshaledtop_temp_2 = 0;
	unmarshaledtop_temp_2 = marshaled.___top_2;
	unmarshaled.___top_2 = unmarshaledtop_temp_2;
	int32_t unmarshaledright_temp_3 = 0;
	unmarshaledright_temp_3 = marshaled.___right_3;
	unmarshaled.___right_3 = unmarshaledright_temp_3;
	int32_t unmarshaledbottom_temp_4 = 0;
	unmarshaledbottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.___bottom_4 = unmarshaledbottom_temp_4;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_pinvoke_cleanup(Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com(const Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled)
{
	marshaled.___hasValue_0 = static_cast<int32_t>(unmarshaled.___hasValue_0);
	marshaled.___left_1 = unmarshaled.___left_1;
	marshaled.___top_2 = unmarshaled.___top_2;
	marshaled.___right_3 = unmarshaled.___right_3;
	marshaled.___bottom_4 = unmarshaled.___bottom_4;
}
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com_back(const Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled, Margins_t710D98C860962372C9323F82DD766A3977353F85& unmarshaled)
{
	bool unmarshaledhasValue_temp_0 = false;
	unmarshaledhasValue_temp_0 = static_cast<bool>(marshaled.___hasValue_0);
	unmarshaled.___hasValue_0 = unmarshaledhasValue_temp_0;
	int32_t unmarshaledleft_temp_1 = 0;
	unmarshaledleft_temp_1 = marshaled.___left_1;
	unmarshaled.___left_1 = unmarshaledleft_temp_1;
	int32_t unmarshaledtop_temp_2 = 0;
	unmarshaledtop_temp_2 = marshaled.___top_2;
	unmarshaled.___top_2 = unmarshaledtop_temp_2;
	int32_t unmarshaledright_temp_3 = 0;
	unmarshaledright_temp_3 = marshaled.___right_3;
	unmarshaled.___right_3 = unmarshaledright_temp_3;
	int32_t unmarshaledbottom_temp_4 = 0;
	unmarshaledbottom_temp_4 = marshaled.___bottom_4;
	unmarshaled.___bottom_4 = unmarshaledbottom_temp_4;
}
// Conversion method for clean up from marshalling of: Gpm.WebView.GpmWebViewRequest/Margins
IL2CPP_EXTERN_C void Margins_t710D98C860962372C9323F82DD766A3977353F85_marshal_com_cleanup(Margins_t710D98C860962372C9323F82DD766A3977353F85_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.GpmWebViewRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m328501DC04AFAC51642C57936EFD0209F87CD282 (Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string navigationBarColor = "#4B96E6";
		__this->___navigationBarColor_5 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_5), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string userAgentString = "";
		__this->___userAgentString_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userAgentString_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m99AB150B133C0510E7C1DA8F8984CFB94E357E3F (ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string navigationBarColor = "#4B96E6";
		__this->___navigationBarColor_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_0), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->___navigationTextColor_1 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTextColor_1), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_m1829E85430E34370E53A9A9A6D22C85FDA5E1700 (String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowUrl(url, configuration, openCallback, closeCallback, schemeList, schemeEvent, null);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		NullCheck(L_0);
		WebViewImplementation_ShowUrl_m2CB7407F6E757CE5054A8927FA2D2E30A44CA768(L_0, L_1, L_2, L_3, L_4, L_5, L_6, (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_mAB1A0DEAB6C923CADE715D86280A9D27A08277C0 (String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback4, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList5, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowUrl(url, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList5;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent6;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback4;
		NullCheck(L_0);
		WebViewImplementation_ShowUrl_m2CB7407F6E757CE5054A8927FA2D2E30A44CA768(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlFile_m5EC1951F093F24A3176A376850F27170E88458DA (String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlFile(filePath, configuration, openCallback, closeCallback, schemeList, schemeEvent, null);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlFile_m3F67F8BFC9A9EC220B8F8D192500DC953F5D3DD3(L_0, L_1, L_2, L_3, L_4, L_5, L_6, (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlFile_mAB331BA15B4B9CCAD339E67F70AC61477C120E59 (String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback4, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList5, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlFile(filePath, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList5;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent6;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback4;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlFile_m3F67F8BFC9A9EC220B8F8D192500DC953F5D3DD3(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_mFD5B4EE89B96CD9A40E1E9C225C3988D20B9A485 (String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlString(htmlString, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback6;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlString_m6E09E2BF279AF6B79921A0F3F4EB335E207FA295(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowUrl_mC9D05682658824E367AF0E122B5DC1A915D29EAC (String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowUrl(url, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlFile_m97214999C7F4F1C06C68613D0A2F40649469F0D7 (String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlFile(filePath, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowHtmlString_m2EBF98F066A568573FAF732B766C49EF1977BDE6 (String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowHtmlString(htmlString, configuration, callback, schemeList);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ExecuteJavaScript_mC715AC2BDF725CBD57D36FA79B726458958091A9 (String_t* ___script0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ExecuteJavaScript(script);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___script0;
		NullCheck(L_0);
		WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_IsActive_m11DC9A9C530EDF0C599DF42011688CFCF0F2BD13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.IsActive();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoBack_m02F603C87F6A2A5A84779CEEEBC4A7F9C9E9F5EC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoBack();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.GpmWebView::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GpmWebView_CanGoForward_mE13C9097D169448EB656016A94A52EB87B018559 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.CanGoForward();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoBack_mF57FFF612991416898EDB9934C5F3AC64537B70E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoBack();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5(L_0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_GoForward_m69D0F0785FA990F1ABC57F887CBA3C76DA04CE8E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.GoForward();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84(L_0, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetPosition_m0F3765828C92856E273CC961BEEE1739D728D4FE (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetPosition(x, y);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetSize_m0AE2B2EA46EEBA7585D18E43B7269F845E89C8B3 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetSize(width, height);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		NullCheck(L_0);
		WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.GpmWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_SetMargins_mEBAF202C2B45B94E260A4D1FDE5B7D61F2281884 (int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.SetMargins(left, top, right, bottom);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		int32_t L_1 = ___left0;
		int32_t L_2 = ___top1;
		int32_t L_3 = ___right2;
		int32_t L_4 = ___bottom3;
		NullCheck(L_0);
		WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetX_mCCB55225083369C9459623FE379D1B8BBDA85740 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetX();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetY_m4A53E19CC897A62CEC166EAABAA11FADAF0A5139 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetY();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetWidth_mAC664BC1FFEFD463267BA539D07C2DDA04B09D74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetWidth();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.GpmWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GpmWebView_GetHeight_mC204985C229FAC9594843E895C5571A9A16D024B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return WebViewImplementation.Instance.GetHeight();
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961(L_0, NULL);
		return L_1;
	}
}
// System.Void Gpm.WebView.GpmWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebView_ShowWebBrowser_mE9236F0A04AE58ACCB1DED30A380E691E417C84F (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowWebBrowser(url);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10(L_0, L_1, NULL);
		// }
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
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Multicast(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* currentDelegate = reinterpret_cast<GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___type0, ___data1, ___error2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Open(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___type0, ___data1, ___error2, method);
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStaticInvoker(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke(__this->___method_ptr_0, method, NULL, ___type0, ___data1, ___error2);
}
void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_ClosedStaticInvoker(GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___type0, ___data1, ___error2);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate__ctor_mEA1F534F671A39D2D8A1C7D8098ABD70C631DB86 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_Multicast;
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::Invoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___type0, ___data1, ___error2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::BeginInvoke(Gpm.WebView.GpmWebViewCallback/CallbackType,System.String,Gpm.WebView.GpmWebViewError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmWebViewDelegate_BeginInvoke_m9C11DB50EB6382E41046BE3B5272D90E30F31D67 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(CallbackType_t0014D0BBC86D12814581740EF23008F3ABA89E2A_il2cpp_TypeInfo_var, &___type0);
	__d_args[1] = ___data1;
	__d_args[2] = ___error2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewDelegate_EndInvoke_mC0916E69EFCDBE2E0D9983F4FF67F981BA51DE64 (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_Multicast(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* currentDelegate = reinterpret_cast<GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_Open(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___error0, method);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenStaticInvoker(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke(__this->___method_ptr_0, method, NULL, ___error0);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_ClosedStaticInvoker(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___error0);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenVirtual(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___error0);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenInterface(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___error0);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenGenericVirtual(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___error0);
}
void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenGenericInterface(GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___error0);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewErrorDelegate__ctor_mD97B62F8BF756E012EB45CC0D73E3E6D5B0F607B (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_Open;
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
						__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_Multicast;
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate::Invoke(Gpm.WebView.GpmWebViewError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate::BeginInvoke(Gpm.WebView.GpmWebViewError,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmWebViewErrorDelegate_BeginInvoke_m921CC2253545D9368EA633DCD104D010DCAA8ECE (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewErrorDelegate_EndInvoke_mB016FEA55CE287127DBE6A413D75756EEE5B79F7 (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_Multicast(GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* currentDelegate = reinterpret_cast<GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___url0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_Open(GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___url0, method);
}
void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_OpenStaticInvoker(GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___url0);
}
void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_ClosedStaticInvoker(GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___url0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71 (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	il2cppPInvokeFunc(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewPageLoadDelegate__ctor_m8D56FB0883A41AEF010FD04B90F26262548CB359 (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_Multicast;
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___url0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GpmWebViewPageLoadDelegate_BeginInvoke_m809563D999CD18B0E324384DB6047EDFDF008E99 (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___url0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewPageLoadDelegate_EndInvoke_m1D0E9C9A627985AE0F329E7094E106EB8E501776 (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.String Gpm.WebView.GpmWebViewError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GpmWebViewError_ToString_mF9DEC4674F6DC6475F10662DB628CD9E9D8AE807 (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonMapper.ToJson(this);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(__this, NULL);
		return L_0;
	}
}
// System.Void Gpm.WebView.GpmWebViewError::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewError__ctor_mD37FE76BD17CA6207C8FC409DBD5728FDC4749F5 (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.GpmWebViewSafeBrowsing::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmWebViewSafeBrowsing_ShowSafeBrowsing_mF2DA8A50B288296788638371450C738EBB18F362 (String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebViewImplementation.Instance.ShowSafeBrowsing(url, configuration, callback);
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0;
		L_0 = WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline(NULL);
		String_t* L_1 = ___url0;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		NullCheck(L_0);
		WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C(L_0, L_1, L_2, L_3, NULL);
		// }
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
// Gpm.WebView.Internal.WebViewImplementation Gpm.WebView.Internal.WebViewImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = ((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WebViewImplementation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// webview = new AndroidWebView();
		AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* L_0 = (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004*)il2cpp_codegen_object_new(AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidWebView__ctor_m5E20360A47EC583F65BC3EDF549535B4656CBD97(L_0, NULL);
		__this->___webview_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___webview_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m2CB7407F6E757CE5054A8927FA2D2E30A44CA768 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowUrl(url, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback6;
		NullCheck(L_0);
		InterfaceActionInvoker7< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769*, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* >::Invoke(0 /* System.Void Gpm.WebView.Internal.IWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m3F67F8BFC9A9EC220B8F8D192500DC953F5D3DD3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlFile(filePath, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback6;
		NullCheck(L_0);
		InterfaceActionInvoker7< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769*, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* >::Invoke(1 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_m6E09E2BF279AF6B79921A0F3F4EB335E207FA295 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlString(htmlString, configuration, openCallback, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_6 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_7 = ___pageLoadCallback6;
		NullCheck(L_0);
		InterfaceActionInvoker7< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769*, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* >::Invoke(2 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowUrl_m90001B716013BC325E5AD9B4D57D103932F4CA92 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowUrl(url, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(3 /* System.Void Gpm.WebView.Internal.IWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlFile_m0C555349C7367635CC8EB1A1BCC19FBBDFABE8C3 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlFile(filePath, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(4 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowHtmlString_mD5BC6025A19B803C5D636E32BD48E94C075CC037 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowHtmlString(htmlString, configuration, callback, schemeList);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList3;
		NullCheck(L_0);
		InterfaceActionInvoker4< String_t*, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(5 /* System.Void Gpm.WebView.Internal.IWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowSafeBrowsing_mBB2F0C658DD89E2D27C87C53C503203AAEF3390C (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowSafeBrowsing(url, configuration, callback);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___url0;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_2 = ___configuration1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77*, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* >::Invoke(6 /* System.Void Gpm.WebView.Internal.IWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_IsActive_mF24F3003298AEDF142FC4789C6121900D11A4ED6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.IsActive();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Gpm.WebView.Internal.IWebView::IsActive() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ExecuteJavaScript_m06A9BF182CB8677D0723CD99D0A2EF7DD703AE1D (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___script0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ExecuteJavaScript(script);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___script0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(8 /* System.Void Gpm.WebView.Internal.IWebView::ExecuteJavaScript(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetFileDownloadPath_m0DDF57A0353ECFCB6514C1C3AAB830593E0A65CE (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetFileDownloadPath(path);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void Gpm.WebView.Internal.IWebView::SetFileDownloadPath(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoBack_m8A76F1B9486AD1EDCEFC6756B35BAE300498AE72 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoBack;
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoBack() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Gpm.WebView.Internal.WebViewImplementation::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebViewImplementation_CanGoForward_m44EB0D1B9EE59DAEC78DB54276FA3E2459561CA6 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.CanGoForward;
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(11 /* System.Boolean Gpm.WebView.Internal.IWebView::get_CanGoForward() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoBack_m8607DCF8EB8D6C40BF1513339A8CAEEBB54C48A5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoBack();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12 /* System.Void Gpm.WebView.Internal.IWebView::GoBack() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_GoForward_mCC4E4E8439D961640D23DD6EA72BE3C5A1B12B84 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.GoForward();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Gpm.WebView.Internal.IWebView::GoForward() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetPosition_mC3635879998C2D52DC9AB2C2629AD44BE591CAF5 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetPosition(x, y);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(14 /* System.Void Gpm.WebView.Internal.IWebView::SetPosition(System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetSize_m1925A4098C82A272C473E4851D7167FDA9D3D889 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetSize(width, height);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(15 /* System.Void Gpm.WebView.Internal.IWebView::SetSize(System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_SetMargins_mE82F1488E1F3D57457F8D808CA845D79D8116560 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.SetMargins(left, top, right, bottom);
		RuntimeObject* L_0 = __this->___webview_1;
		int32_t L_1 = ___left0;
		int32_t L_2 = ___top1;
		int32_t L_3 = ___right2;
		int32_t L_4 = ___bottom3;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(16 /* System.Void Gpm.WebView.Internal.IWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetX_m104982AE0652FFD82C753FAF0D99E73FF0DE0C64 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetX();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 Gpm.WebView.Internal.IWebView::GetX() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetY_m7208997F6DB23A6CA176AEF398BEC58096D671A7 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetY();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Gpm.WebView.Internal.IWebView::GetY() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetWidth_m15E991333F67D7603715038BF8D3F0441B7E4C7E (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetWidth();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 Gpm.WebView.Internal.IWebView::GetWidth() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Gpm.WebView.Internal.WebViewImplementation::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebViewImplementation_GetHeight_m44293E3641F96B267C95FAAB0431CA18BF7BC961 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return webview.GetHeight();
		RuntimeObject* L_0 = __this->___webview_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 Gpm.WebView.Internal.IWebView::GetHeight() */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation_ShowWebBrowser_mD69C829D3132D076C8C993CA4717243F32D7AD10 (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// webview.ShowWebBrowser(url);
		RuntimeObject* L_0 = __this->___webview_1;
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(21 /* System.Void Gpm.WebView.Internal.IWebView::ShowWebBrowser(System.String) */, IWebView_t56600E03EB01EE205F830A1160159112BD884651_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.WebViewImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewImplementation__cctor_m53129B30C73D12B51B151C6A24DDC435236F043A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly WebViewImplementation instance = new WebViewImplementation();
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = (WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D*)il2cpp_codegen_object_new(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WebViewImplementation__ctor_mCEF14046B03E72CB091ABECCF7637356CAA085A1(L_0, NULL);
		((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Boolean Gpm.WebView.Internal.DefaultWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoBack_m854E079E6687016097D0298F4AC5667EA2A5470A (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanGoBack => false;
		return (bool)0;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_get_CanGoForward_mCE6937BB09E8534B4027FAF37B016A479EAC0CE1 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanGoForward => false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowUrl_m08B2A917527D7F8B4B372852AD05E1669E496BCA (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlFile_m4E78773045CCFCF4FF668BB3E401D220E6A0F42A (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___fileName0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlString_m70C373EE47B54F99F35240D79E16D95492528320 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___source0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowUrl_mCF441723DE578B44344EC5D97646A0F385A691F2 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlFile_m301400295A4FC9039968AA7668F744FD861306B5 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___fileName0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowHtmlString_mE851D2175EE59271B168F1B06216F2DB00ED9907 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___source0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowSafeBrowsing_m0680976D34911712F31FAA39D002F5DD3FC102CB (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.DefaultWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultWebView_IsActive_m3A6782372FA2C7E458C7C17E1BDEE5EE201F0930 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ExecuteJavaScript_m2F5EDCD7F925D298ED9B6F8AA38D702BEB7AB7FA (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___script0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetFileDownloadPath_m914813174AD98A43AD572030EE81CE1FC1F87729 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoBack_m566DB67C1F9907C15BE8D56110DE46D91E651238 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_GoForward_m669A383443C7676DE6643FCF5F7E2D5FE499051A (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetPosition_mC8C872F670328339B7D7BF62A3334A294D099789 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetSize_m2CDA3DAE468291A161D88A44E7265DEA87F55B07 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_SetMargins_m5D04C807721D8DD26B6D30BF7E8A1BD0D41C291D (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetX_mA79E429C3635E6BA68FD55D31F8184C5F333F98D (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetY_mDE503EBF41411BC4D517C6CC74F02927547FF802 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetWidth_m450ACBC599532AFAEBC122E5FEF573305A9A335B (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Int32 Gpm.WebView.Internal.DefaultWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultWebView_GetHeight_m86EBCE4CBF4B19BCC7984939550682A5B7995B79 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// return 0;
		return 0;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView_ShowWebBrowser_m8F33A9336CDA0B58067D491143E6ED4E33131547 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Not supported method in the editor");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralDC02D1073DAA8122DA7A4632640640C05486019F, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.DefaultWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWebView__ctor_m64DA6C67A89069588C9A9C2527632BE5BFF67407 (DefaultWebView_t3176703CC7E5E1637B42741FD3F82E0BA4F57583* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.AndroidWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView_Initialize_m155DE367AC3EA8985E07BDBE7DB3FEE742618AD4 (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = ANDROID_CLASS_NAME;
		((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3 = _stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3), (void*)_stringLiteralEBC6A109B31082B93DBCD3AEF08F4F4B18A8D860);
		// base.Initialize();
		NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.AndroidWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidWebView__ctor_m5E20360A47EC583F65BC3EDF549535B4656CBD97 (AndroidWebView_t13C2327FF836CB164C20B04AA2E6187520077004* __this, const RuntimeMethod* method) 
{
	{
		NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656(__this, NULL);
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
// System.Void Gpm.WebView.Internal.NativeMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16 (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.WebView.Internal.NativeRequest/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2 (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ConfigurationSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string navigationBarColor = "#4B96E6";
		__this->___navigationBarColor_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationBarColor_0), (void*)_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		// public string navigationTextColor = "#FFFFFF";
		__this->___navigationTextColor_1 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___navigationTextColor_1), (void*)_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebViewDeprecated__ctor_m61DC638DDFEE9E4BFA6E3A8B17678EE2EF3E3768 (ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* __this, const RuntimeMethod* method) 
{
	{
		// public int callback = -1;
		__this->___callback_2 = (-1);
		// public int closeCallback = -1;
		__this->___closeCallback_3 = (-1);
		// public int schemeEvent = -1;
		__this->___schemeEvent_5 = (-1);
		// public int pageLoadCallback = -1;
		__this->___pageLoadCallback_6 = (-1);
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552 (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowSafeBrowsing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16 (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ExecuteJavaScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3 (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Position::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Size::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/Margins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75 (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.NativeRequest/ShowWebBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* __this, const RuntimeMethod* method) 
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
// System.Void Gpm.WebView.Internal.IOSWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView_Initialize_mC5FD36E5498E8BD0045C9ED581AB7A9E075BD6D6 (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CLASS_NAME = IOS_CLASS_NAME;
		((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3 = _stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA*)__this)->___CLASS_NAME_3), (void*)_stringLiteral9F6FEC0B16C8B98098A911F6CB65DC2E44F58856);
		// base.Initialize();
		NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.IOSWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebView__ctor_m68B755C3C7591E207A1D237BA6B8641A0ED03B67 (IOSWebView_tC700A76F2F6219DFF5662D315E0C8B0F226A7CF6* __this, const RuntimeMethod* method) 
{
	{
		NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656(__this, NULL);
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
// System.Int32 Gpm.WebView.Internal.NativeCallbackHandler::RegisterCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C (RuntimeObject* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callback == null)
		RuntimeObject* L_0 = ___callback0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0005:
	{
		// callbackDic.Add(handle, callback);
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_1 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_2 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0;
		RuntimeObject* L_3 = ___callback0;
		NullCheck(L_1);
		Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD(L_1, L_2, L_3, Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_RuntimeMethod_var);
		// return handle++;
		int32_t L_4 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0;
		int32_t L_5 = L_4;
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return L_5;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::UnregisterCallback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler_UnregisterCallback_m54595AFA614F53BB4016B6D03538E9CA7ECA0E7C (int32_t ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callbackDic.ContainsKey(handle) == true)
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_1 = ___handle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_0, L_1, Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// callbackDic.Remove(handle);
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_3 = ((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1;
		int32_t L_4 = ___handle0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4(L_3, L_4, Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeCallbackHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCallbackHandler__cctor_mA3061BDDD0223B4CD42A6F8FC8C69B51E405BA23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int handle = 0;
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___handle_0 = 0;
		// private static Dictionary<int, object> callbackDic = new Dictionary<int, object>();
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_0, Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_StaticFields*)il2cpp_codegen_static_fields_for(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var))->___callbackDic_1), (void*)L_0);
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
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoBack_m43FF2D0F7695CCB0BB24F609B79E937BD483093E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_BACK
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral3537900A966F6526B545496171B453540EA156E2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral3537900A966F6526B545496171B453540EA156E2);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_mAA53666F188B002A52359F80BCD85F8E24B3A4AF(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_get_CanGoForward_mCC248C4A917F13C902767848324F6DDB4708750A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.CAN_GO_FORWARD
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralF24E270202456BA0B227B1CABB006E5064AB3192);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_mAA53666F188B002A52359F80BCD85F8E24B3A4AF(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView__ctor_m7D9310A88919A896BA119F727FAECAABA00C6656 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected string CLASS_NAME = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___CLASS_NAME_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CLASS_NAME_3), (void*)L_0);
		// public NativeWebView()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		VirtualActionInvoker0::Invoke(26 /* System.Void Gpm.WebView.Internal.NativeWebView::Initialize() */, __this);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_Initialize_m4ED8533FBC5F24F24D9C0C7F31E3C7E7C5885C8A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Configuration configuration = new GpmCommunicatorVO.Configuration()
		// {
		//     className = CLASS_NAME
		// };
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_0 = (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD*)il2cpp_codegen_object_new(Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7(L_0, NULL);
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = L_0;
		String_t* L_2 = __this->___CLASS_NAME_3;
		NullCheck(L_1);
		L_1->___className_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___className_0), (void*)L_2);
		// GpmCommunicator.InitializeClass(configuration);
		GpmCommunicator_InitializeClass_m9425E88D1521BAA1D332358A5D276E04F56BE6DF(L_1, NULL);
		// GpmCommunicator.AddReceiver(DOMAIN, OnAsyncEvent);
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_3 = (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*)il2cpp_codegen_object_new(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3(L_3, __this, (intptr_t)((void*)NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76_RuntimeMethod_var), NULL);
		GpmCommunicator_AddReceiver_mDD0B71851E6E9B1DEDEB75761F7A1AE794282A40(_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowUrl_m450926729D18E29F82EFA766CCA36B71F8955A1B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00385562BDE4AA1CF80C9A217C3F9F41B774AD1E);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_URL_DEPRECATED,
		//     callback = NativeCallbackHandler.RegisterCallback(openCallback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral00385562BDE4AA1CF80C9A217C3F9F41B774AD1E;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral00385562BDE4AA1CF80C9A217C3F9F41B774AD1E);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebViewDeprecated showWebView = MakeShowWebView(url, configuration, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		String_t* L_5 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_7 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_9 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_10 = ___pageLoadCallback6;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_11;
		L_11 = NativeWebView_MakeShowWebView_m0414637611FF3A0B43F99F2A65DE6CB4D940A177(__this, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_13, NULL);
		NullCheck(L_12);
		L_12->___data_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___data_2), (void*)L_14);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_15 = V_0;
		String_t* L_16;
		L_16 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_15, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_16, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlFile_m037A670A1256728FAF25927F3C6E7D08BF96D83A (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBDF8D952E0D020D50E773F9AE5EEE30044A6C1C);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_FILE_DEPRECATED,
		//     callback = NativeCallbackHandler.RegisterCallback(openCallback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralFBDF8D952E0D020D50E773F9AE5EEE30044A6C1C;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralFBDF8D952E0D020D50E773F9AE5EEE30044A6C1C);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebViewDeprecated showWebView = MakeShowWebView(filePath, configuration, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		String_t* L_5 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_7 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_9 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_10 = ___pageLoadCallback6;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_11;
		L_11 = NativeWebView_MakeShowWebView_m0414637611FF3A0B43F99F2A65DE6CB4D940A177(__this, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_13, NULL);
		NullCheck(L_12);
		L_12->___data_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___data_2), (void*)L_14);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_15 = V_0;
		String_t* L_16;
		L_16 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_15, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_16, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlString_m57E84DA108395B7F0AD11454761B603098BF4911 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___openCallback2, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback3, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList4, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent5, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4B945665E40B2A646BC1B622C015F4F5E59B854);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_STRING_DEPRECATED,
		//     callback = NativeCallbackHandler.RegisterCallback(openCallback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralA4B945665E40B2A646BC1B622C015F4F5E59B854;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralA4B945665E40B2A646BC1B622C015F4F5E59B854);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = ___openCallback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebViewDeprecated showWebView = MakeShowWebView(htmlString, configuration, closeCallback, schemeList, schemeEvent, pageLoadCallback);
		String_t* L_5 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_7 = ___closeCallback3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = ___schemeList4;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_9 = ___schemeEvent5;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_10 = ___pageLoadCallback6;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_11;
		L_11 = NativeWebView_MakeShowWebView_m0414637611FF3A0B43F99F2A65DE6CB4D940A177(__this, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_13, NULL);
		NullCheck(L_12);
		L_12->___data_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___data_2), (void*)L_14);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_15 = V_0;
		String_t* L_16;
		L_16 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_15, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_16, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowUrl(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowUrl_mE445DC42D9C829D5753BF6DC8EA4D55A7FB90CEF (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___url0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_URL,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral5B00FE2C21F21764BB277C1BEE12004F53874EB5);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(url, configuration, schemeList);
		String_t* L_5 = ___url0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___schemeList3;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlFile(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlFile_m78D47146F39FCA17DB13A6890C02A8827FADE592 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___filePath0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_FILE,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral70B7395C88F8552F75F2CAE166CC33435A494E23);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(filePath, configuration, schemeList);
		String_t* L_5 = ___filePath0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___schemeList3;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowHtmlString(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowHtmlString_m09C99B9FEA9F06CFA9BE617F11ECA6461AEB137B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___htmlString0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_HTML_STRING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralCE782499A8125F334C5753700BDD39AD31E382E9);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowWebView showWebView = MakeShowWebView(htmlString, configuration, schemeList);
		String_t* L_5 = ___htmlString0;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_6 = ___configuration1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___schemeList3;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_8;
		L_8 = NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F(__this, L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// nativeMessage.data = JsonMapper.ToJson(showWebView);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_9 = V_0;
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_10, NULL);
		NullCheck(L_9);
		L_9->___data_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___data_2), (void*)L_11);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = V_0;
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_12, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_13, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowSafeBrowsing(System.String,Gpm.WebView.GpmWebViewRequest/ConfigurationSafeBrowsing,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowSafeBrowsing_mB1FDEED1304F54FFF2889F14D58ED39D7A5ED05B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___url0, ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* ___configuration1, GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* V_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B2_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B2_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B2_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B2_3 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B1_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B1_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B1_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B3_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B3_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B3_3 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B3_4 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B5_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B5_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B5_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B5_3 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B4_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B4_1 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B4_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B6_1 = NULL;
	ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* G_B6_2 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B6_3 = NULL;
	ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* G_B6_4 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_SAFE_BROWSING,
		//     callback = NativeCallbackHandler.RegisterCallback(callback)
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral1065F5D308E0AFAFE334CE09E95A7A2669A83F98);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_3, NULL);
		NullCheck(L_2);
		L_2->___callback_4 = L_4;
		V_0 = L_2;
		// NativeRequest.ShowSafeBrowsing showSafeBrowsing = new NativeRequest.ShowSafeBrowsing
		// {
		//     url = url,
		//     configuration = new NativeRequest.ConfigurationSafeBrowsing()
		//     {
		//         navigationBarColor = (configuration == null) ? DEFAULT_NAVIGATION_BAR_COLOR : configuration.navigationBarColor,
		//         navigationTextColor = (configuration == null) ? DEFAULT_NAVIGATION_TEXT_COLOR : configuration.navigationTextColor
		//     }
		// };
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_5 = (ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1*)il2cpp_codegen_object_new(ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ShowSafeBrowsing__ctor_mE86B353453E23E789C7AA9979D81AFE56464CD16(L_5, NULL);
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_6 = L_5;
		String_t* L_7 = ___url0;
		NullCheck(L_6);
		L_6->___url_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___url_0), (void*)L_7);
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_8 = L_6;
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_9 = (ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3*)il2cpp_codegen_object_new(ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ConfigurationSafeBrowsing__ctor_m160B0523793AE3214D810B9664AAE75FF47D71DF(L_9, NULL);
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_10 = L_9;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_11 = ___configuration1;
		G_B1_0 = L_10;
		G_B1_1 = L_10;
		G_B1_2 = L_8;
		G_B1_3 = L_8;
		if (!L_11)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_10;
			G_B2_2 = L_8;
			G_B2_3 = L_8;
			goto IL_003b;
		}
	}
	{
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_12 = ___configuration1;
		NullCheck(L_12);
		String_t* L_13 = L_12->___navigationBarColor_0;
		G_B3_0 = L_13;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0040;
	}

IL_003b:
	{
		G_B3_0 = _stringLiteralEA68DCEC5DF5C9D1BAB1EB121891A32269876B92;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->___navigationBarColor_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___navigationBarColor_0), (void*)G_B3_0);
		ConfigurationSafeBrowsing_t585595C60E434A9CD4ECFC2956812DED0667A5A3* L_14 = G_B3_2;
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_15 = ___configuration1;
		G_B4_0 = L_14;
		G_B4_1 = L_14;
		G_B4_2 = G_B3_3;
		G_B4_3 = G_B3_4;
		if (!L_15)
		{
			G_B5_0 = L_14;
			G_B5_1 = L_14;
			G_B5_2 = G_B3_3;
			G_B5_3 = G_B3_4;
			goto IL_0051;
		}
	}
	{
		ConfigurationSafeBrowsing_t6E4D2947BE9B114B0518E12BF8BD760DFFF23F77* L_16 = ___configuration1;
		NullCheck(L_16);
		String_t* L_17 = L_16->___navigationTextColor_1;
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0056;
	}

IL_0051:
	{
		G_B6_0 = _stringLiteral663488ABE057592166FC68C8A6EF26CBF9C8178E;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0056:
	{
		NullCheck(G_B6_1);
		G_B6_1->___navigationTextColor_1 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___navigationTextColor_1), (void*)G_B6_0);
		NullCheck(G_B6_3);
		G_B6_3->___configuration_1 = G_B6_2;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_3->___configuration_1), (void*)G_B6_2);
		V_1 = G_B6_4;
		// nativeMessage.data = JsonMapper.ToJson(showSafeBrowsing);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_18 = V_0;
		ShowSafeBrowsing_t6B82DC29C8FAC0203DF39306EF279DB594B433F1* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_19, NULL);
		NullCheck(L_18);
		L_18->___data_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___data_2), (void*)L_20);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_21 = V_0;
		String_t* L_22;
		L_22 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_21, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_22, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Boolean Gpm.WebView.Internal.NativeWebView::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeWebView_IsActive_mF320CBD27749B56920F07DFCB6A5D4A0186F904D (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.IS_ACTIVE
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralBD98E2640FCC4873264BAE9F62528D696400D87F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToBoolean(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_mAA53666F188B002A52359F80BCD85F8E24B3A4AF(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ExecuteJavaScript(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ExecuteJavaScript_m1886DEE361866A15A509653857BB9924A137533E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___script0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.EXECUTE_JAVASCRIPT
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral2B8116384BF7900DF0AF76D78296BB5986E60B67);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.ExecuteJavaScript
		// {
		//     script = script
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* L_3 = (ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB*)il2cpp_codegen_object_new(ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExecuteJavaScript__ctor_mF20F45EF78D01DF13D2A428A14F64E59751FD4E3(L_3, NULL);
		ExecuteJavaScript_t03445880CE57FF3F8D6A5A50FB18883590BA85CB* L_4 = L_3;
		String_t* L_5 = ___script0;
		NullCheck(L_4);
		L_4->___script_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___script_0), (void*)L_5);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_4, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_6);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		V_0 = L_7;
		// CallAsync(jsonData, null);
		String_t* L_8 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_8, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetFileDownloadPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetFileDownloadPath_m15D5FA1ED0AC947A4D03DDEBC866CDC0434B10B8 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_FILE_DOWNLOAD_PATH
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral4E3C626060D5B82A6EA09D2EE983D7C449F4F249);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// Gpm.WebView.Internal.NativeRequest/ShowWebViewDeprecated Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,Gpm.WebView.GpmWebViewCallback/GpmWebViewErrorDelegate,System.Collections.Generic.List`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewDelegate`1<System.String>,Gpm.WebView.GpmWebViewCallback/GpmWebViewPageLoadDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* NativeWebView_MakeShowWebView_m0414637611FF3A0B43F99F2A65DE6CB4D940A177 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* ___closeCallback2, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList3, GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* ___schemeEvent4, GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* ___pageLoadCallback5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeRequest.ShowWebViewDeprecated showWebView = new NativeRequest.ShowWebViewDeprecated
		// {
		//     data = data,
		//     closeCallback = NativeCallbackHandler.RegisterCallback(closeCallback),
		//     schemeList = schemeList,
		//     schemeEvent = NativeCallbackHandler.RegisterCallback(schemeEvent),
		//     pageLoadCallback = NativeCallbackHandler.RegisterCallback(pageLoadCallback),
		//     configuration = new NativeRequest.Configuration()
		//     {
		//         style = configuration.style,
		//         orientation = configuration.orientation,
		//         isClearCookie = configuration.isClearCookie,
		//         isClearCache = configuration.isClearCache,
		//         isNavigationBarVisible = configuration.isNavigationBarVisible,
		//         navigationBarColor = configuration.navigationBarColor,
		//         title = configuration.title,
		//         isBackButtonVisible = configuration.isBackButtonVisible,
		//         isForwardButtonVisible = configuration.isForwardButtonVisible,
		//         supportMultipleWindows = configuration.supportMultipleWindows,
		//         userAgentString = configuration.userAgentString,
		// 
		//         hasPosition = configuration.position.hasValue,
		//         positionX = configuration.position.x,
		//         positionY = configuration.position.y,
		//         hasSize = configuration.size.hasValue,
		//         sizeWidth = configuration.size.width,
		//         sizeHeight = configuration.size.height,
		//         hasMargins = configuration.margins.hasValue,
		//         marginsLeft = configuration.margins.left,
		//         marginsTop = configuration.margins.top,
		//         marginsRight = configuration.margins.right,
		//         marginsBottom = configuration.margins.bottom,
		// 
		//         contentMode = configuration.contentMode,
		//         isMaskViewVisible = configuration.isMaskViewVisible,
		//         isAutoRotation = configuration.isAutoRotation
		//     }
		// };
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_0 = (ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6*)il2cpp_codegen_object_new(ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShowWebViewDeprecated__ctor_m61DC638DDFEE9E4BFA6E3A8B17678EE2EF3E3768(L_0, NULL);
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_1 = L_0;
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		L_1->___data_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___data_0), (void*)L_2);
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_3 = L_1;
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_4 = ___closeCallback2;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_4, NULL);
		NullCheck(L_3);
		L_3->___closeCallback_3 = L_5;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_6 = L_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___schemeList3;
		NullCheck(L_6);
		L_6->___schemeList_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___schemeList_4), (void*)L_7);
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_8 = L_6;
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_9 = ___schemeEvent4;
		int32_t L_10;
		L_10 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_9, NULL);
		NullCheck(L_8);
		L_8->___schemeEvent_5 = L_10;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_11 = L_8;
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_12 = ___pageLoadCallback5;
		int32_t L_13;
		L_13 = NativeCallbackHandler_RegisterCallback_m76AF6DAF13E2B058A28567997CC8C10E8DB0801C(L_12, NULL);
		NullCheck(L_11);
		L_11->___pageLoadCallback_6 = L_13;
		ShowWebViewDeprecated_t0A71D36AC593DD86A98F221F7B3749A91378A6E6* L_14 = L_11;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_15 = (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191*)il2cpp_codegen_object_new(Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2(L_15, NULL);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_16 = L_15;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_17 = ___configuration1;
		NullCheck(L_17);
		int32_t L_18 = L_17->___style_0;
		NullCheck(L_16);
		L_16->___style_0 = L_18;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_19 = L_16;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_20 = ___configuration1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___orientation_1;
		NullCheck(L_19);
		L_19->___orientation_1 = L_21;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_22 = L_19;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_23 = ___configuration1;
		NullCheck(L_23);
		bool L_24 = L_23->___isClearCookie_2;
		NullCheck(L_22);
		L_22->___isClearCookie_2 = L_24;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_25 = L_22;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_26 = ___configuration1;
		NullCheck(L_26);
		bool L_27 = L_26->___isClearCache_3;
		NullCheck(L_25);
		L_25->___isClearCache_3 = L_27;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_28 = L_25;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_29 = ___configuration1;
		NullCheck(L_29);
		bool L_30 = L_29->___isNavigationBarVisible_4;
		NullCheck(L_28);
		L_28->___isNavigationBarVisible_4 = L_30;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_31 = L_28;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_32 = ___configuration1;
		NullCheck(L_32);
		String_t* L_33 = L_32->___navigationBarColor_5;
		NullCheck(L_31);
		L_31->___navigationBarColor_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___navigationBarColor_5), (void*)L_33);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_34 = L_31;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_35 = ___configuration1;
		NullCheck(L_35);
		String_t* L_36 = L_35->___title_6;
		NullCheck(L_34);
		L_34->___title_6 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->___title_6), (void*)L_36);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_37 = L_34;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_38 = ___configuration1;
		NullCheck(L_38);
		bool L_39 = L_38->___isBackButtonVisible_7;
		NullCheck(L_37);
		L_37->___isBackButtonVisible_7 = L_39;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_40 = L_37;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_41 = ___configuration1;
		NullCheck(L_41);
		bool L_42 = L_41->___isForwardButtonVisible_8;
		NullCheck(L_40);
		L_40->___isForwardButtonVisible_8 = L_42;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_43 = L_40;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_44 = ___configuration1;
		NullCheck(L_44);
		bool L_45 = L_44->___supportMultipleWindows_9;
		NullCheck(L_43);
		L_43->___supportMultipleWindows_9 = L_45;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_46 = L_43;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_47 = ___configuration1;
		NullCheck(L_47);
		String_t* L_48 = L_47->___userAgentString_10;
		NullCheck(L_46);
		L_46->___userAgentString_10 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->___userAgentString_10), (void*)L_48);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_49 = L_46;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_50 = ___configuration1;
		NullCheck(L_50);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_51 = (&L_50->___position_11);
		bool L_52 = L_51->___hasValue_0;
		NullCheck(L_49);
		L_49->___hasPosition_11 = L_52;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_53 = L_49;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_54 = ___configuration1;
		NullCheck(L_54);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_55 = (&L_54->___position_11);
		int32_t L_56 = L_55->___x_1;
		NullCheck(L_53);
		L_53->___positionX_12 = L_56;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_57 = L_53;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_58 = ___configuration1;
		NullCheck(L_58);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_59 = (&L_58->___position_11);
		int32_t L_60 = L_59->___y_2;
		NullCheck(L_57);
		L_57->___positionY_13 = L_60;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_61 = L_57;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_62 = ___configuration1;
		NullCheck(L_62);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_63 = (&L_62->___size_12);
		bool L_64 = L_63->___hasValue_0;
		NullCheck(L_61);
		L_61->___hasSize_14 = L_64;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_65 = L_61;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_66 = ___configuration1;
		NullCheck(L_66);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_67 = (&L_66->___size_12);
		int32_t L_68 = L_67->___width_1;
		NullCheck(L_65);
		L_65->___sizeWidth_15 = L_68;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_69 = L_65;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_70 = ___configuration1;
		NullCheck(L_70);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_71 = (&L_70->___size_12);
		int32_t L_72 = L_71->___height_2;
		NullCheck(L_69);
		L_69->___sizeHeight_16 = L_72;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_73 = L_69;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_74 = ___configuration1;
		NullCheck(L_74);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_75 = (&L_74->___margins_13);
		bool L_76 = L_75->___hasValue_0;
		NullCheck(L_73);
		L_73->___hasMargins_17 = L_76;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_77 = L_73;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_78 = ___configuration1;
		NullCheck(L_78);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_79 = (&L_78->___margins_13);
		int32_t L_80 = L_79->___left_1;
		NullCheck(L_77);
		L_77->___marginsLeft_18 = L_80;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_81 = L_77;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_82 = ___configuration1;
		NullCheck(L_82);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_83 = (&L_82->___margins_13);
		int32_t L_84 = L_83->___top_2;
		NullCheck(L_81);
		L_81->___marginsTop_19 = L_84;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_85 = L_81;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_86 = ___configuration1;
		NullCheck(L_86);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_87 = (&L_86->___margins_13);
		int32_t L_88 = L_87->___right_3;
		NullCheck(L_85);
		L_85->___marginsRight_20 = L_88;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_89 = L_85;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_90 = ___configuration1;
		NullCheck(L_90);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_91 = (&L_90->___margins_13);
		int32_t L_92 = L_91->___bottom_4;
		NullCheck(L_89);
		L_89->___marginsBottom_21 = L_92;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_93 = L_89;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_94 = ___configuration1;
		NullCheck(L_94);
		int32_t L_95 = L_94->___contentMode_14;
		NullCheck(L_93);
		L_93->___contentMode_22 = L_95;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_96 = L_93;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_97 = ___configuration1;
		NullCheck(L_97);
		bool L_98 = L_97->___isMaskViewVisible_15;
		NullCheck(L_96);
		L_96->___isMaskViewVisible_23 = L_98;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_99 = L_96;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_100 = ___configuration1;
		NullCheck(L_100);
		bool L_101 = L_100->___isAutoRotation_16;
		NullCheck(L_99);
		L_99->___isAutoRotation_24 = L_101;
		NullCheck(L_14);
		L_14->___configuration_1 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___configuration_1), (void*)L_99);
		// CheckAutoRotation();
		NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736(__this, NULL);
		// UpdateOrientation(configuration.orientation);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_102 = ___configuration1;
		NullCheck(L_102);
		int32_t L_103 = L_102->___orientation_1;
		NativeWebView_UpdateOrientation_m2DCBFCE58B94C79B9C34B8960E0F3BA95B96FE92(__this, L_103, NULL);
		// return showWebView;
		return L_14;
	}
}
// Gpm.WebView.Internal.NativeRequest/ShowWebView Gpm.WebView.Internal.NativeWebView::MakeShowWebView(System.String,Gpm.WebView.GpmWebViewRequest/Configuration,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* NativeWebView_MakeShowWebView_mA0E300170A2DA5CF61C89DD0C6626C8F09C3C60F (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* ___configuration1, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___schemeList2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeRequest.ShowWebView showWebView = new NativeRequest.ShowWebView
		// {
		//     data = data,
		//     schemeList = schemeList,
		//     configuration = new NativeRequest.Configuration()
		//     {
		//         style = configuration.style,
		//         orientation = configuration.orientation,
		//         isClearCookie = configuration.isClearCookie,
		//         isClearCache = configuration.isClearCache,
		//         isNavigationBarVisible = configuration.isNavigationBarVisible,
		//         navigationBarColor = configuration.navigationBarColor,
		//         title = configuration.title,
		//         isBackButtonVisible = configuration.isBackButtonVisible,
		//         isForwardButtonVisible = configuration.isForwardButtonVisible,
		//         supportMultipleWindows = configuration.supportMultipleWindows,
		//         userAgentString = configuration.userAgentString,
		// 
		//         hasPosition = configuration.position.hasValue,
		//         positionX = configuration.position.x,
		//         positionY = configuration.position.y,
		//         hasSize = configuration.size.hasValue,
		//         sizeWidth = configuration.size.width,
		//         sizeHeight = configuration.size.height,
		//         hasMargins = configuration.margins.hasValue,
		//         marginsLeft = configuration.margins.left,
		//         marginsTop = configuration.margins.top,
		//         marginsRight = configuration.margins.right,
		//         marginsBottom = configuration.margins.bottom,
		// 
		//         contentMode = configuration.contentMode,
		//         isMaskViewVisible = configuration.isMaskViewVisible,
		//         isAutoRotation = configuration.isAutoRotation
		//     }
		// };
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_0 = (ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F*)il2cpp_codegen_object_new(ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShowWebView__ctor_mF7BE177A484595DDE6866DE7FF3AE5DB8053D552(L_0, NULL);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_1 = L_0;
		String_t* L_2 = ___data0;
		NullCheck(L_1);
		L_1->___data_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___data_0), (void*)L_2);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_3 = L_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___schemeList2;
		NullCheck(L_3);
		L_3->___schemeList_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___schemeList_2), (void*)L_4);
		ShowWebView_tE070B0D933455A0718BBC1154FF22E45ED27397F* L_5 = L_3;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_6 = (Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191*)il2cpp_codegen_object_new(Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Configuration__ctor_m95D899D85EAE741464B99462E37D8D0214D652F2(L_6, NULL);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_7 = L_6;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_8 = ___configuration1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___style_0;
		NullCheck(L_7);
		L_7->___style_0 = L_9;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_10 = L_7;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_11 = ___configuration1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___orientation_1;
		NullCheck(L_10);
		L_10->___orientation_1 = L_12;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_13 = L_10;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_14 = ___configuration1;
		NullCheck(L_14);
		bool L_15 = L_14->___isClearCookie_2;
		NullCheck(L_13);
		L_13->___isClearCookie_2 = L_15;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_16 = L_13;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_17 = ___configuration1;
		NullCheck(L_17);
		bool L_18 = L_17->___isClearCache_3;
		NullCheck(L_16);
		L_16->___isClearCache_3 = L_18;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_19 = L_16;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_20 = ___configuration1;
		NullCheck(L_20);
		bool L_21 = L_20->___isNavigationBarVisible_4;
		NullCheck(L_19);
		L_19->___isNavigationBarVisible_4 = L_21;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_22 = L_19;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_23 = ___configuration1;
		NullCheck(L_23);
		String_t* L_24 = L_23->___navigationBarColor_5;
		NullCheck(L_22);
		L_22->___navigationBarColor_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___navigationBarColor_5), (void*)L_24);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_25 = L_22;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_26 = ___configuration1;
		NullCheck(L_26);
		String_t* L_27 = L_26->___title_6;
		NullCheck(L_25);
		L_25->___title_6 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___title_6), (void*)L_27);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_28 = L_25;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_29 = ___configuration1;
		NullCheck(L_29);
		bool L_30 = L_29->___isBackButtonVisible_7;
		NullCheck(L_28);
		L_28->___isBackButtonVisible_7 = L_30;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_31 = L_28;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_32 = ___configuration1;
		NullCheck(L_32);
		bool L_33 = L_32->___isForwardButtonVisible_8;
		NullCheck(L_31);
		L_31->___isForwardButtonVisible_8 = L_33;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_34 = L_31;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_35 = ___configuration1;
		NullCheck(L_35);
		bool L_36 = L_35->___supportMultipleWindows_9;
		NullCheck(L_34);
		L_34->___supportMultipleWindows_9 = L_36;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_37 = L_34;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_38 = ___configuration1;
		NullCheck(L_38);
		String_t* L_39 = L_38->___userAgentString_10;
		NullCheck(L_37);
		L_37->___userAgentString_10 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___userAgentString_10), (void*)L_39);
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_40 = L_37;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_41 = ___configuration1;
		NullCheck(L_41);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_42 = (&L_41->___position_11);
		bool L_43 = L_42->___hasValue_0;
		NullCheck(L_40);
		L_40->___hasPosition_11 = L_43;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_44 = L_40;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_45 = ___configuration1;
		NullCheck(L_45);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_46 = (&L_45->___position_11);
		int32_t L_47 = L_46->___x_1;
		NullCheck(L_44);
		L_44->___positionX_12 = L_47;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_48 = L_44;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_49 = ___configuration1;
		NullCheck(L_49);
		Position_t824C74226386B322C9926FC29B2AFCBECAFE3778* L_50 = (&L_49->___position_11);
		int32_t L_51 = L_50->___y_2;
		NullCheck(L_48);
		L_48->___positionY_13 = L_51;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_52 = L_48;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_53 = ___configuration1;
		NullCheck(L_53);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_54 = (&L_53->___size_12);
		bool L_55 = L_54->___hasValue_0;
		NullCheck(L_52);
		L_52->___hasSize_14 = L_55;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_56 = L_52;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_57 = ___configuration1;
		NullCheck(L_57);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_58 = (&L_57->___size_12);
		int32_t L_59 = L_58->___width_1;
		NullCheck(L_56);
		L_56->___sizeWidth_15 = L_59;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_60 = L_56;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_61 = ___configuration1;
		NullCheck(L_61);
		Size_tEC810A2DF3BF9B230A532152F92489A88A6D529F* L_62 = (&L_61->___size_12);
		int32_t L_63 = L_62->___height_2;
		NullCheck(L_60);
		L_60->___sizeHeight_16 = L_63;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_64 = L_60;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_65 = ___configuration1;
		NullCheck(L_65);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_66 = (&L_65->___margins_13);
		bool L_67 = L_66->___hasValue_0;
		NullCheck(L_64);
		L_64->___hasMargins_17 = L_67;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_68 = L_64;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_69 = ___configuration1;
		NullCheck(L_69);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_70 = (&L_69->___margins_13);
		int32_t L_71 = L_70->___left_1;
		NullCheck(L_68);
		L_68->___marginsLeft_18 = L_71;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_72 = L_68;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_73 = ___configuration1;
		NullCheck(L_73);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_74 = (&L_73->___margins_13);
		int32_t L_75 = L_74->___top_2;
		NullCheck(L_72);
		L_72->___marginsTop_19 = L_75;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_76 = L_72;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_77 = ___configuration1;
		NullCheck(L_77);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_78 = (&L_77->___margins_13);
		int32_t L_79 = L_78->___right_3;
		NullCheck(L_76);
		L_76->___marginsRight_20 = L_79;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_80 = L_76;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_81 = ___configuration1;
		NullCheck(L_81);
		Margins_t710D98C860962372C9323F82DD766A3977353F85* L_82 = (&L_81->___margins_13);
		int32_t L_83 = L_82->___bottom_4;
		NullCheck(L_80);
		L_80->___marginsBottom_21 = L_83;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_84 = L_80;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_85 = ___configuration1;
		NullCheck(L_85);
		int32_t L_86 = L_85->___contentMode_14;
		NullCheck(L_84);
		L_84->___contentMode_22 = L_86;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_87 = L_84;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_88 = ___configuration1;
		NullCheck(L_88);
		bool L_89 = L_88->___isMaskViewVisible_15;
		NullCheck(L_87);
		L_87->___isMaskViewVisible_23 = L_89;
		Configuration_t7B93549D6C3006F8C12D5D2110B9636D4E1F2191* L_90 = L_87;
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_91 = ___configuration1;
		NullCheck(L_91);
		bool L_92 = L_91->___isAutoRotation_16;
		NullCheck(L_90);
		L_90->___isAutoRotation_24 = L_92;
		NullCheck(L_5);
		L_5->___configuration_1 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___configuration_1), (void*)L_90);
		// CheckAutoRotation();
		NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736(__this, NULL);
		// UpdateOrientation(configuration.orientation);
		Configuration_t02B8B4187641FD3E74B919A48FF2CFBC500F512D* L_93 = ___configuration1;
		NullCheck(L_93);
		int32_t L_94 = L_93->___orientation_1;
		NativeWebView_UpdateOrientation_m2DCBFCE58B94C79B9C34B8960E0F3BA95B96FE92(__this, L_94, NULL);
		// return showWebView;
		return L_5;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CallAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Message message = new GpmCommunicatorVO.Message()
		// {
		//     domain = DOMAIN,
		//     data = data,
		//     extra = extra
		// };
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_0, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___domain_0 = _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___domain_0), (void*)_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2 = L_1;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		L_2->___data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_1), (void*)L_3);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_4 = L_2;
		String_t* L_5 = ___extra1;
		NullCheck(L_4);
		L_4->___extra_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___extra_2), (void*)L_5);
		// GpmCommunicator.CallAsync(message);
		GpmCommunicator_CallAsync_mEC96CE899A8F3ACAAE719DC3FE7967F4F2CEB86C(L_4, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.WebView.Internal.NativeWebView::CallSync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___data0, String_t* ___extra1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GpmCommunicatorVO.Message message = new GpmCommunicatorVO.Message()
		// {
		//     domain = DOMAIN,
		//     data = data,
		//     extra = extra
		// };
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_0, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___domain_0 = _stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___domain_0), (void*)_stringLiteral981BC9EBC76493CC8A6BEEC0CEF767E026141833);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2 = L_1;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		L_2->___data_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_1), (void*)L_3);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_4 = L_2;
		String_t* L_5 = ___extra1;
		NullCheck(L_4);
		L_4->___extra_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___extra_2), (void*)L_5);
		// return GpmCommunicator.CallSync(message);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_6;
		L_6 = GpmCommunicator_CallSync_mBD84ACC63965EBF167953E954A20569CDB8A1A0E(L_4, NULL);
		return L_6;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnAsyncEvent(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnAsyncEvent_m9CD74DA600AA91607C4835F1C35059459F27FF76 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_mC4D593B26B5A6890FC06B3A6A406F9EA3441E967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// Debug.Log("OnAsyncEvent : " + message.data);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___data_1;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFD276C42E9A5561AAE86E99C7DEC52DEAD68ED18, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// NativeMessage nativeMessage = JsonMapper.ToObject<NativeMessage>(message.data);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___data_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_5;
		L_5 = JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_mC4D593B26B5A6890FC06B3A6A406F9EA3441E967(L_4, JsonMapper_ToObject_TisNativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_mC4D593B26B5A6890FC06B3A6A406F9EA3441E967_RuntimeMethod_var);
		V_0 = L_5;
		// if (nativeMessage == null)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_6 = V_0;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		return;
	}

IL_0025:
	{
		// if (nativeMessage.scheme == CallbackScheme.WEBVIEW_CALLBACK)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___scheme_0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralA5275D367BE340B201FADFB2D43BEE76A579C9BA, NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// OnWebViewCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = V_0;
		NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2(__this, L_10, NULL);
		return;
	}

IL_003f:
	{
		// OnAsyncEventDeprecated(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_11 = V_0;
		NativeWebView_OnAsyncEventDeprecated_mD6150C640BEB691E37860CE500C8EE56EF825C92(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnAsyncEventDeprecated(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnAsyncEventDeprecated_mD6150C640BEB691E37860CE500C8EE56EF825C92 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE16D6C904C247BFCF360639482E1571AD1185E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA367DADB20563FAA5E6B4BF794BB0C49CE6A906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE98C89BE724D2286EAC3C5213DB2E5177E8116C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D1FC194A5FD9B15867585946A6B56D9A3C267D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// switch (nativeMessage.scheme)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___scheme_0;
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralF9D1FC194A5FD9B15867585946A6B56D9A3C267D, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralBA367DADB20563FAA5E6B4BF794BB0C49CE6A906, NULL);
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral0BE16D6C904C247BFCF360639482E1571AD1185E, NULL);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralEE98C89BE724D2286EAC3C5213DB2E5177E8116C, NULL);
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_003c:
	{
		// OnSchemeEventCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = ___nativeMessage0;
		NativeWebView_OnSchemeEventCallback_m36119427D92048654A58F6A30018D8342A844006(__this, L_10, NULL);
		// break;
		return;
	}

IL_0044:
	{
		// OnCloseCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_11 = ___nativeMessage0;
		NativeWebView_OnCloseCallback_m43566009C31D466882412BFE39308046B3676EF9(__this, L_11, NULL);
		// break;
		return;
	}

IL_004c:
	{
		// OnCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = ___nativeMessage0;
		NativeWebView_OnCallback_m9C8D3FF201692F4049F21659AAC94623D494D2EC(__this, L_12, NULL);
		// break;
		return;
	}

IL_0054:
	{
		// OnPageLoadCallback(nativeMessage);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_13 = ___nativeMessage0;
		NativeWebView_OnPageLoadCallback_mD8D5FAD3A3085A946D58839F38E1E775108431F7(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnCloseCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnCloseCallback_m43566009C31D466882412BFE39308046B3676EF9 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* V_0 = NULL;
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* V_1 = NULL;
	{
		// RestoreOrientation();
		NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE(__this, NULL);
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewErrorDelegate>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_4 = ___nativeMessage0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___error_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = ___nativeMessage0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___error_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17(L_8, JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_0030:
	{
		// NativeCallbackHandler.UnregisterCallback(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = ___nativeMessage0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		NativeCallbackHandler_UnregisterCallback_m54595AFA614F53BB4016B6D03538E9CA7ECA0E7C(L_11, NULL);
		// NativeCallbackHandler.UnregisterCallback(int.Parse(nativeMessage.extra));
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_12 = ___nativeMessage0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___extra_3;
		int32_t L_14;
		L_14 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_13, NULL);
		NativeCallbackHandler_UnregisterCallback_m54595AFA614F53BB4016B6D03538E9CA7ECA0E7C(L_14, NULL);
		// callback(error);
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_15 = V_0;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_16 = V_1;
		NullCheck(L_15);
		GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_inline(L_15, L_16, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnCallback_m9C8D3FF201692F4049F21659AAC94623D494D2EC (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* V_0 = NULL;
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* V_1 = NULL;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewErrorDelegate>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D_m97E227F7160F80021617A954D18B7B06BD3EC82B_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_4 = ___nativeMessage0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___error_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = ___nativeMessage0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___error_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17(L_8, JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_002a:
	{
		// NativeCallbackHandler.UnregisterCallback(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = ___nativeMessage0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		NativeCallbackHandler_UnregisterCallback_m54595AFA614F53BB4016B6D03538E9CA7ECA0E7C(L_11, NULL);
		// callback(error);
		GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* L_12 = V_0;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_13 = V_1;
		NullCheck(L_12);
		GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_inline(L_12, L_13, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnSchemeEventCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnSchemeEventCallback_m36119427D92048654A58F6A30018D8342A844006 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769_m9566F835888DCD59B0ABD3FD30B8C77C6CAD1E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* V_0 = NULL;
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* V_1 = NULL;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewDelegate<string>>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769_m9566F835888DCD59B0ABD3FD30B8C77C6CAD1E41(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769_m9566F835888DCD59B0ABD3FD30B8C77C6CAD1E41_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_4 = ___nativeMessage0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___error_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = ___nativeMessage0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___error_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17(L_8, JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_002a:
	{
		// callback(nativeMessage.data, error);
		GpmWebViewDelegate_1_tFEBFCF0B7A6386E0DA4D0B7F9B235C562B26A769* L_10 = V_0;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_11 = ___nativeMessage0;
		NullCheck(L_11);
		String_t* L_12 = L_11->___data_2;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_13 = V_1;
		NullCheck(L_10);
		GpmWebViewDelegate_1_Invoke_m899DBBE34F50AA5FBCCF99035F29EAA29BC5528D_inline(L_10, L_12, L_13, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnPageLoadCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnPageLoadCallback_mD8D5FAD3A3085A946D58839F38E1E775108431F7 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71_mD02C66777FB742F240C3E4BDD241B8A5E8927B21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* V_0 = NULL;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewPageLoadDelegate>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71_mD02C66777FB742F240C3E4BDD241B8A5E8927B21(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71_mD02C66777FB742F240C3E4BDD241B8A5E8927B21_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// callback(nativeMessage.data);
		GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* L_4 = V_0;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_5 = ___nativeMessage0;
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_2;
		NullCheck(L_4);
		GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_inline(L_4, L_6, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::OnWebViewCallback(Gpm.WebView.Internal.NativeMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_OnWebViewCallback_mDC25514EEBC3664DA5E35275047F0EB22F012EB2 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* ___nativeMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mD349368CFDBB174411AA6015C50A085CA0C7E30D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* V_0 = NULL;
	GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var callback = NativeCallbackHandler.GetCallback<GpmWebViewCallback.GpmWebViewDelegate>(nativeMessage.callback);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = ___nativeMessage0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___callback_4;
		il2cpp_codegen_runtime_class_init_inline(NativeCallbackHandler_t1B93CAE1B8003D6D9A0249237CF022119DF3F592_il2cpp_TypeInfo_var);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_2;
		L_2 = NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mD349368CFDBB174411AA6015C50A085CA0C7E30D(L_1, NativeCallbackHandler_GetCallback_TisGpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F_mD349368CFDBB174411AA6015C50A085CA0C7E30D_RuntimeMethod_var);
		V_0 = L_2;
		// if (callback != null)
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_3 = V_0;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// GpmWebViewError error = null;
		V_1 = (GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*)NULL;
		// if (string.IsNullOrEmpty(nativeMessage.error) == false)
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_4 = ___nativeMessage0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___error_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_5, NULL);
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// error = JsonMapper.ToObject<GpmWebViewError>(nativeMessage.error);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_7 = ___nativeMessage0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___error_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_9;
		L_9 = JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17(L_8, JsonMapper_ToObject_TisGpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84_mD44A912714812002AA4E1D63CBEFD07E029DCC17_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_002a:
	{
		// GpmWebViewCallback.CallbackType callbackType = (GpmWebViewCallback.CallbackType)nativeMessage.callbackType;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_10 = ___nativeMessage0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___callbackType_5;
		V_2 = L_11;
		// callback(callbackType, nativeMessage.data, error);
		GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* L_12 = V_0;
		int32_t L_13 = V_2;
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_14 = ___nativeMessage0;
		NullCheck(L_14);
		String_t* L_15 = L_14->___data_2;
		GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* L_16 = V_1;
		NullCheck(L_12);
		GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline(L_12, L_13, L_15, L_16, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoBack_m28DEB5B3C8A62B0F5D46DE66D6EFC7A0B01B1E54 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_BACK
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral84445DED3F38F40E166E8658E59ED855104487FA;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral84445DED3F38F40E166E8658E59ED855104487FA);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_GoForward_mAD7E7258ED4D6A0E4AC1055333F949B095573BBE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.GO_FORWARD
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralBC5B4F97E6B0EEC7B605538C44266B526CCA0ACE);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_1, NULL);
		V_0 = L_2;
		// CallAsync(jsonData, null);
		String_t* L_3 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_3, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetPosition_m508B5941E281ED5A01B520FB05559FCC00716892 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_POSITION
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral437495827EE2F417C6EF6D171D77428822A383BC;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral437495827EE2F417C6EF6D171D77428822A383BC);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Position
		// {
		//     x = x,
		//     y = y
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_3 = (Position_t270EA20F5BD7C97729951399753CABF1D1D7140F*)il2cpp_codegen_object_new(Position_t270EA20F5BD7C97729951399753CABF1D1D7140F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Position__ctor_m83002433A02C206B83390F73B029DB4461299EDA(L_3, NULL);
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_4 = L_3;
		int32_t L_5 = ___x0;
		NullCheck(L_4);
		L_4->___x_0 = L_5;
		Position_t270EA20F5BD7C97729951399753CABF1D1D7140F* L_6 = L_4;
		int32_t L_7 = ___y1;
		NullCheck(L_6);
		L_6->___y_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_6, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_10, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetSize_mE846086859C8F6E82E009BAC34CE022847CC3576 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_SIZE
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralA332264C9D57E5DC8F42C16E8FDF8EC8C769CAC1);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Size
		// {
		//     width = width,
		//     height = height
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_3 = (Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A*)il2cpp_codegen_object_new(Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Size__ctor_m6694855F722337B88B9F940DFF032BB327927B8E(L_3, NULL);
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->___width_0 = L_5;
		Size_t5584C5D0B515D1AB5E8D1D89FBD1EBBC9AF3C57A* L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->___height_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_6, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_8);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		V_0 = L_9;
		// CallAsync(jsonData, null);
		String_t* L_10 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_10, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_SetMargins_mF01E337AA6CF1AB7D23ECE83828EC7FC34689A05 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SET_MARGINS
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral252117B4E8431D0FCC2658F426AFAD0AEB5F4D04);
		// nativeMessage.data = JsonMapper.ToJson(new NativeRequest.Margins
		// {
		//     left = left,
		//     top = top,
		//     right = right,
		//     bottom = bottom
		// });
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = L_1;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_3 = (Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2*)il2cpp_codegen_object_new(Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Margins__ctor_m6A47CCAB0D9055D44527DB26BBA61FCFBFE54B75(L_3, NULL);
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_4 = L_3;
		int32_t L_5 = ___left0;
		NullCheck(L_4);
		L_4->___left_0 = L_5;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_6 = L_4;
		int32_t L_7 = ___top1;
		NullCheck(L_6);
		L_6->___top_1 = L_7;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_8 = L_6;
		int32_t L_9 = ___right2;
		NullCheck(L_8);
		L_8->___right_2 = L_9;
		Margins_t461D5F3B2F0F4291936FCF0D7A8DE1EA21F6DEA2* L_10 = L_8;
		int32_t L_11 = ___bottom3;
		NullCheck(L_10);
		L_10->___bottom_3 = L_11;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_10, NULL);
		NullCheck(L_2);
		L_2->___data_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data_2), (void*)L_12);
		// string jsonData = JsonMapper.ToJson(nativeMessage);
		String_t* L_13;
		L_13 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		V_0 = L_13;
		// CallAsync(jsonData, null);
		String_t* L_14 = V_0;
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_14, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetX_mAF1BECEFB3F5590B274594B0E5DF64A34FE17DB5 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_X
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral875EA38258012EC0814C5E1E233E2AE18EF8F40F);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetY_mE1073489BB0BA8A06B81043BB6B47B9FBD41CEA7 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_Y
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral0DF4E5E91BB385BD19147E061A8A343416B56593);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetWidth_mF69BE2F915405850848081D124F81A5F9AFC7F7B (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_WIDTH
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral7071697C1E72CB5E80E775D7964F46C9AB875732);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_6, NULL);
		return L_7;
	}
}
// System.Int32 Gpm.WebView.Internal.NativeWebView::GetHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeWebView_GetHeight_m4362053C99E0F93486697685BFE553499A5B31AE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	{
		// NativeMessage message = new NativeMessage()
		// {
		//     scheme = ApiScheme.GET_HEIGHT
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteral48033893DB25402A6F3FBD3544D34AB02C25E0EF);
		V_0 = L_1;
		// var resultMessage = CallSync(JsonMapper.ToJson(message), string.Empty);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_2, NULL);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5;
		L_5 = NativeWebView_CallSync_mD793591BA24DD0227C573464DC73895C9764CA43(__this, L_3, L_4, NULL);
		// return Convert.ToInt32(resultMessage.data);
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_6, NULL);
		return L_7;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::CheckAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_CheckAutoRotation_mA55A4565B127B657EFDCE3CB7A1ABD9364DC2736 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	{
		// isAutorotateToPortrait = Screen.autorotateToPortrait;
		bool L_0;
		L_0 = Screen_get_autorotateToPortrait_m76770E69563796B67888C3DEEA628583E2EBCAD5(NULL);
		__this->___isAutorotateToPortrait_5 = L_0;
		// isAutorotateToPortraitUpsideDown = Screen.autorotateToPortraitUpsideDown;
		bool L_1;
		L_1 = Screen_get_autorotateToPortraitUpsideDown_m346688D4E666DABD98A0D8C92AC3B2D739CE6F23(NULL);
		__this->___isAutorotateToPortraitUpsideDown_6 = L_1;
		// isAutorotateToLandscapeLeft = Screen.autorotateToLandscapeLeft;
		bool L_2;
		L_2 = Screen_get_autorotateToLandscapeLeft_m71764551E22520E49B0F329BEC3C0D9A9807F1EB(NULL);
		__this->___isAutorotateToLandscapeLeft_7 = L_2;
		// isAutorotateToLandscapeRight =Screen.autorotateToLandscapeRight;
		bool L_3;
		L_3 = Screen_get_autorotateToLandscapeRight_m9ACB599117E7A7E340184F026A2E6786226FEC79(NULL);
		__this->___isAutorotateToLandscapeRight_8 = L_3;
		// defaultOrientation = Screen.orientation;
		int32_t L_4;
		L_4 = Screen_get_orientation_m7B47A2719DDE296357BB3199AB3BECC49F9F4A6D(NULL);
		__this->___defaultOrientation_9 = L_4;
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::RestoreOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_RestoreOrientation_m36F5349181B51B50CC87DAA51FD74290C0D0ACAE (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Screen.autorotateToPortrait = isAutorotateToPortrait;
		bool L_0 = __this->___isAutorotateToPortrait_5;
		Screen_set_autorotateToPortrait_mFD3B643DD1660BDACABB2426ABBF56CC7DD0C20A(L_0, NULL);
		// Screen.autorotateToPortraitUpsideDown = isAutorotateToPortraitUpsideDown;
		bool L_1 = __this->___isAutorotateToPortraitUpsideDown_6;
		Screen_set_autorotateToPortraitUpsideDown_m4F307AAC11D730BD9C6B33A7D0F5D911BE367AC3(L_1, NULL);
		// Screen.autorotateToLandscapeLeft = isAutorotateToLandscapeLeft;
		bool L_2 = __this->___isAutorotateToLandscapeLeft_7;
		Screen_set_autorotateToLandscapeLeft_m0A5C4DACABE595591D931337C8B4724E6D45CFA5(L_2, NULL);
		// Screen.autorotateToLandscapeRight = isAutorotateToLandscapeRight;
		bool L_3 = __this->___isAutorotateToLandscapeRight_8;
		Screen_set_autorotateToLandscapeRight_mF798181165A504BF4A14DBECBDA796D601930C18(L_3, NULL);
		// int orientationCount = 0;
		V_0 = 0;
		// if (Screen.autorotateToPortrait == true)
		bool L_4;
		L_4 = Screen_get_autorotateToPortrait_m76770E69563796B67888C3DEEA628583E2EBCAD5(NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// orientationCount++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0039:
	{
		// if (Screen.autorotateToPortraitUpsideDown == true)
		bool L_6;
		L_6 = Screen_get_autorotateToPortraitUpsideDown_m346688D4E666DABD98A0D8C92AC3B2D739CE6F23(NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// orientationCount++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0044:
	{
		// if (Screen.autorotateToLandscapeLeft == true)
		bool L_8;
		L_8 = Screen_get_autorotateToLandscapeLeft_m71764551E22520E49B0F329BEC3C0D9A9807F1EB(NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// orientationCount++;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004f:
	{
		// if (Screen.autorotateToLandscapeRight == true)
		bool L_10;
		L_10 = Screen_get_autorotateToLandscapeRight_m9ACB599117E7A7E340184F026A2E6786226FEC79(NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// orientationCount++;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005a:
	{
		// if (orientationCount >= AUTO_ROTATION_MIN_COUNT)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.AutoRotation;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(5, NULL);
		return;
	}

IL_0065:
	{
		// Screen.orientation = defaultOrientation;
		int32_t L_13 = __this->___defaultOrientation_9;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(L_13, NULL);
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::UpdateOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_UpdateOrientation_m2DCBFCE58B94C79B9C34B8960E0F3BA95B96FE92 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, int32_t ___orientation0, const RuntimeMethod* method) 
{
	{
		// if (orientation == GpmOrientation.PORTRAIT)
		int32_t L_0 = ___orientation0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000b;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(1, NULL);
		return;
	}

IL_000b:
	{
		// else if (orientation == GpmOrientation.PORTRAIT_REVERSE)
		int32_t L_1 = ___orientation0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.PortraitUpsideDown;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(2, NULL);
		return;
	}

IL_0016:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE)
		int32_t L_2 = ___orientation0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0021;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeLeft;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(3, NULL);
		return;
	}

IL_0021:
	{
		// else if (orientation == GpmOrientation.LANDSCAPE_REVERSE)
		int32_t L_3 = ___orientation0;
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_002c;
		}
	}
	{
		// Screen.orientation = ScreenOrientation.LandscapeRight;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(4, NULL);
		return;
	}

IL_002c:
	{
		// else if (orientation != GpmOrientation.UNSPECIFIED)
		int32_t L_4 = ___orientation0;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// Screen.autorotateToPortrait = (orientation & GpmOrientation.PORTRAIT) == GpmOrientation.PORTRAIT;
		int32_t L_5 = ___orientation0;
		Screen_set_autorotateToPortrait_mFD3B643DD1660BDACABB2426ABBF56CC7DD0C20A((bool)((((int32_t)((int32_t)(L_5&1))) == ((int32_t)1))? 1 : 0), NULL);
		// Screen.autorotateToPortraitUpsideDown = (orientation & GpmOrientation.PORTRAIT_REVERSE) == GpmOrientation.PORTRAIT_REVERSE;
		int32_t L_6 = ___orientation0;
		Screen_set_autorotateToPortraitUpsideDown_m4F307AAC11D730BD9C6B33A7D0F5D911BE367AC3((bool)((((int32_t)((int32_t)(L_6&2))) == ((int32_t)2))? 1 : 0), NULL);
		// Screen.autorotateToLandscapeLeft = (orientation & GpmOrientation.LANDSCAPE) == GpmOrientation.LANDSCAPE;
		int32_t L_7 = ___orientation0;
		Screen_set_autorotateToLandscapeLeft_m0A5C4DACABE595591D931337C8B4724E6D45CFA5((bool)((((int32_t)((int32_t)(L_7&4))) == ((int32_t)4))? 1 : 0), NULL);
		// Screen.autorotateToLandscapeRight = (orientation & GpmOrientation.LANDSCAPE_REVERSE) == GpmOrientation.LANDSCAPE_REVERSE;
		int32_t L_8 = ___orientation0;
		Screen_set_autorotateToLandscapeRight_mF798181165A504BF4A14DBECBDA796D601930C18((bool)((((int32_t)((int32_t)(L_8&8))) == ((int32_t)8))? 1 : 0), NULL);
		// Screen.orientation = ScreenOrientation.AutoRotation;
		Screen_set_orientation_m6BA37EE8CEBFFFCEFFF38FB9EC22757072C93D7F(5, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Gpm.WebView.Internal.NativeWebView::ShowWebBrowser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeWebView_ShowWebBrowser_m65EB90B085213324F4952CF6ABD22764B13C8B63 (NativeWebView_t688CDFA9419D8BD9007AB299604C8385FDF041FA* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		s_Il2CppMethodInitialized = true;
	}
	NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* V_0 = NULL;
	ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* V_1 = NULL;
	{
		// NativeMessage nativeMessage = new NativeMessage
		// {
		//     scheme = ApiScheme.SHOW_WEB_BROWSER
		// };
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_0 = (NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1*)il2cpp_codegen_object_new(NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NativeMessage__ctor_mCEC9297BD04A9DF0C088195D7F99ACE87261BE16(L_0, NULL);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___scheme_0 = _stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___scheme_0), (void*)_stringLiteralE28241AB93EF4EDF8C85F2BD33E54A913E960306);
		V_0 = L_1;
		// NativeRequest.ShowWebBrowser showWebBrowser = new NativeRequest.ShowWebBrowser
		// {
		//     url = url
		// };
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_2 = (ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A*)il2cpp_codegen_object_new(ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ShowWebBrowser__ctor_m2B04FAC5F218BBB7433BBE93AC5EF8322F917C2A(L_2, NULL);
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_3 = L_2;
		String_t* L_4 = ___url0;
		NullCheck(L_3);
		L_3->___url_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___url_0), (void*)L_4);
		V_1 = L_3;
		// nativeMessage.data = JsonMapper.ToJson(showWebBrowser);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_5 = V_0;
		ShowWebBrowser_t5C63CFC890E6EA9F6F7D9419272400EAD1265D0A* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t935A558737137B954F48FF67008D14BE990ED441_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_6, NULL);
		NullCheck(L_5);
		L_5->___data_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___data_2), (void*)L_7);
		// CallAsync(JsonMapper.ToJson(nativeMessage), null);
		NativeMessage_t69E94CEDA5FF480C651042A815EA6B65E8492CB1* L_8 = V_0;
		String_t* L_9;
		L_9 = JsonMapper_ToJson_m97EB58A79D0922A96AE8E8D67165B3E959544DA6(L_8, NULL);
		NativeWebView_CallAsync_mF98E49EFAD6088CD79D61F04BF5A300BF7DFE48E(__this, L_9, (String_t*)NULL, NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* WebViewImplementation_get_Instance_m8B443813FF51A72D0B8650F96176F6FDA79AF292_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var);
		WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D* L_0 = ((WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_StaticFields*)il2cpp_codegen_static_fields_for(WebViewImplementation_tA978A1681A5E697ED4B1CBEDB41B707E4134615D_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewErrorDelegate_Invoke_mB7BF3BB05C8577CC9E43F194D5E11220305EB80F_inline (GpmWebViewErrorDelegate_tD2FC728691609658A6D91B98F5AABC7CE095225D* __this, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewPageLoadDelegate_Invoke_m1C6872E918A237EDCBE0240C6B3E46E94C9CAB8C_inline (GpmWebViewPageLoadDelegate_t9718B21148EC194A95E252918BA0C3F352289F71* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___url0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_Invoke_m6B8AEC4C122FCE7350C5E2A1D49D9AEFBF8C2254_inline (GpmWebViewDelegate_tF5E897E7591C19812E88E44DAE225FA11917232F* __this, int32_t ___type0, String_t* ___data1, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___type0, ___data1, ___error2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GpmWebViewDelegate_1_Invoke_m696708BA299FF05A4CBFF5C10942DAA75B77B1B1_gshared_inline (GpmWebViewDelegate_1_t9E79ADAB3F134DEE48455355590DE36AB1127C5F* __this, RuntimeObject* ___data0, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84* ___error1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, GpmWebViewError_tFCF7C7BEE18BFAD1EB24E8218F1038F2389D4B84*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, ___error1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
