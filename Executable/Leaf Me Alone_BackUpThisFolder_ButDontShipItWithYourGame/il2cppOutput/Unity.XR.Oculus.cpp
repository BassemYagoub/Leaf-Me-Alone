#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t534BEA2285E51B4528A7BAACB4B3B455357FDF3C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t46CF2B9CBE3FA7ABB7E4DD600E1B31A0F37F1856;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tD5A5E4581DBFCA8996AC18CA2B238890303AFD91;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_t351A3B8AACB7A8B6039BFFF4B49A4969DD38E79B;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t9564E4A020DFA2C6DED222D587F9C4D1CCB1417C;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_t9217F6CF4678FF5176B3DA3A0671CFA8795CFA5B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tCB9BC166DD377E3BA2023E690E832495AF975690;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t6A4377E35645873CE27A4B4EFE5B47CD7B7A1262;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tBF842A7A689B26B12E2ACBB7ACD3ED6FEB30D781;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t9D8BBA2D40C6984797E462E4D52E765BBCAD9E2B;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t477AE13DADC5DC11EBCB47A0A8DDEA9A73AF0113;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t8BAE944D06577C053998DBBC1FF7E54D1D5A2B86;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// UnityEngine.InputSystem.InputControl
struct InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154;
// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B;
// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A;
// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB;
// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C;
// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA;
// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t342BA848221108F8818F05BF3CB484934F582935;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.XR.XRController
struct XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326;
// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_t6D1C6C09CE0707F7928E123DD9D56763E43ED970;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833;
// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t2FDEA8E1D89B5563745EF4AF6E5EF13FB42CEBDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0;
IL2CPP_EXTERN_C String_t* _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E;
IL2CPP_EXTERN_C String_t* _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral12CE2C178DCAFF9D18FB4F9FD35B934E26E1CB8C;
IL2CPP_EXTERN_C String_t* _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F;
IL2CPP_EXTERN_C String_t* _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D;
IL2CPP_EXTERN_C String_t* _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0;
IL2CPP_EXTERN_C String_t* _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54;
IL2CPP_EXTERN_C String_t* _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935;
IL2CPP_EXTERN_C String_t* _stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF;
IL2CPP_EXTERN_C String_t* _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991;
IL2CPP_EXTERN_C String_t* _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57;
IL2CPP_EXTERN_C String_t* _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F;
IL2CPP_EXTERN_C String_t* _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822;
IL2CPP_EXTERN_C String_t* _stringLiteral4337C6FF89AFF8F855C30B4DF6F787168DE70DA0;
IL2CPP_EXTERN_C String_t* _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC;
IL2CPP_EXTERN_C String_t* _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D;
IL2CPP_EXTERN_C String_t* _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E;
IL2CPP_EXTERN_C String_t* _stringLiteral4ADB212528F8CF625764142B108030A0499510F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904;
IL2CPP_EXTERN_C String_t* _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905;
IL2CPP_EXTERN_C String_t* _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA;
IL2CPP_EXTERN_C String_t* _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75;
IL2CPP_EXTERN_C String_t* _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C;
IL2CPP_EXTERN_C String_t* _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8;
IL2CPP_EXTERN_C String_t* _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A;
IL2CPP_EXTERN_C String_t* _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F;
IL2CPP_EXTERN_C String_t* _stringLiteral791956718283C9837F3ED95D7886E3C88855114B;
IL2CPP_EXTERN_C String_t* _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A;
IL2CPP_EXTERN_C String_t* _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412;
IL2CPP_EXTERN_C String_t* _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED;
IL2CPP_EXTERN_C String_t* _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3;
IL2CPP_EXTERN_C String_t* _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2;
IL2CPP_EXTERN_C String_t* _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2;
IL2CPP_EXTERN_C String_t* _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69;
IL2CPP_EXTERN_C String_t* _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E30B9C43A317B5847B67D69489A79E7556AF02;
IL2CPP_EXTERN_C String_t* _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E18713BEC060441013BF24EEFF304074095168;
IL2CPP_EXTERN_C String_t* _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41;
IL2CPP_EXTERN_C String_t* _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83;
IL2CPP_EXTERN_C String_t* _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585;
IL2CPP_EXTERN_C String_t* _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A;
IL2CPP_EXTERN_C String_t* _stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC74641CA8B52702019111B91E29821576E700BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26;
IL2CPP_EXTERN_C String_t* _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904;
IL2CPP_EXTERN_C String_t* _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66;
IL2CPP_EXTERN_C String_t* _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m4CB1EB0F8177DECCEF4D0D81A92B35D56DF5DD5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mC801AF0703045ACAABA6CDA29ECE0CF5F6266FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m64AEB2AA901864D7811576D5F90D631F28FF40D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m03B79F96B81D01E4D7C34B0FE87D3580DAB8EF52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_m17387CF8F66BC1197C2E562D28F947697DD04AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m998C28D6853D14A844D784B740CC653877FF46A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mC73BC86947F549D073E0CFC6D5E8FECAFBD4A887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t29E6020F6B208E8C3E84F1F09ED89415CA01DC30 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_t56455D217921470E52E7D33A1794256E31084DD8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t56455D217921470E52E7D33A1794256E31084DD8_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_t1AAACA8133FC3A4AC90AE6EFE46DDD932D75C344* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t2B7F94D4BC73B08C2CC5987F93F3E1122D2BF642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t90A9F9FCAE49BAFE4C07929893FD2C88224E8E05* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.XR.Oculus.Boundary
struct Boundary_tF1BA1FC40337D9A392078B7087CC32FF5EFE03E4  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Unity.XR.Oculus.InputFocus
struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C  : public RuntimeObject
{
public:

public:
};

struct InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields
{
public:
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusAcquired
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusAcquired_0;
	// System.Action Unity.XR.Oculus.InputFocus::InputFocusLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputFocusLost_1;
	// System.Boolean Unity.XR.Oculus.InputFocus::hadInputFocus
	bool ___hadInputFocus_2;

public:
	inline static int32_t get_offset_of_InputFocusAcquired_0() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusAcquired_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusAcquired_0() const { return ___InputFocusAcquired_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusAcquired_0() { return &___InputFocusAcquired_0; }
	inline void set_InputFocusAcquired_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusAcquired_0), (void*)value);
	}

	inline static int32_t get_offset_of_InputFocusLost_1() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___InputFocusLost_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputFocusLost_1() const { return ___InputFocusLost_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputFocusLost_1() { return &___InputFocusLost_1; }
	inline void set_InputFocusLost_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputFocusLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFocusLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_hadInputFocus_2() { return static_cast<int32_t>(offsetof(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields, ___hadInputFocus_2)); }
	inline bool get_hadInputFocus_2() const { return ___hadInputFocus_2; }
	inline bool* get_address_of_hadInputFocus_2() { return &___hadInputFocus_2; }
	inline void set_hadInputFocus_2(bool value)
	{
		___hadInputFocus_2 = value;
	}
};


// Unity.XR.Oculus.InputLayoutLoader
struct InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.NativeMethods
struct NativeMethods_t3621D74DE9BA054C3E33DB4FA2CFEC8DD7152EEF  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Performance
struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA  : public RuntimeObject
{
public:

public:
};

struct Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields
{
public:
	// System.Single[] Unity.XR.Oculus.Performance::cachedDisplayAvailableFrequencies
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cachedDisplayAvailableFrequencies_0;

public:
	inline static int32_t get_offset_of_cachedDisplayAvailableFrequencies_0() { return static_cast<int32_t>(offsetof(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields, ___cachedDisplayAvailableFrequencies_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cachedDisplayAvailableFrequencies_0() const { return ___cachedDisplayAvailableFrequencies_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cachedDisplayAvailableFrequencies_0() { return &___cachedDisplayAvailableFrequencies_0; }
	inline void set_cachedDisplayAvailableFrequencies_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cachedDisplayAvailableFrequencies_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedDisplayAvailableFrequencies_0), (void*)value);
	}
};


// Unity.XR.Oculus.RegisterUpdateCallback
struct RegisterUpdateCallback_t1C829E95646132B4A54493595EFCFF669920ACE1  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats
struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F  : public RuntimeObject
{
public:

public:
};

struct Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields
{
public:
	// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::m_Display
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___m_Display_0;
	// System.String Unity.XR.Oculus.Stats::m_PluginVersion
	String_t* ___m_PluginVersion_1;

public:
	inline static int32_t get_offset_of_m_Display_0() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_Display_0)); }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * get_m_Display_0() const { return ___m_Display_0; }
	inline IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 ** get_address_of_m_Display_0() { return &___m_Display_0; }
	inline void set_m_Display_0(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * value)
	{
		___m_Display_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Display_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PluginVersion_1() { return static_cast<int32_t>(offsetof(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields, ___m_PluginVersion_1)); }
	inline String_t* get_m_PluginVersion_1() const { return ___m_PluginVersion_1; }
	inline String_t** get_address_of_m_PluginVersion_1() { return &___m_PluginVersion_1; }
	inline void set_m_PluginVersion_1(String_t* value)
	{
		___m_PluginVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PluginVersion_1), (void*)value);
	}
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


// Unity.XR.Oculus.Utils
struct Utils_tBC4D75397337A6F2AFDF84A3FCAA54D81045FF2A  : public RuntimeObject
{
public:

public:
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

// Unity.XR.Oculus.NativeMethods/Internal
struct Internal_tFE0FD2202F25632711238961AAA0DB0A1CB0F0DB  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/AdaptivePerformance
struct AdaptivePerformance_t444AB47F076E0F5099F0163C1F1ED2E721DFC2B4  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/AppMetrics
struct AppMetrics_t3EFC22132A61330CAF1A99FFFD06F8C45F2EEEB5  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats/PerfMetrics
struct PerfMetrics_t60645F5550DE7C05412D6701BEB5D055CE055166  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___list_0)); }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 * get_list_0() const { return ___list_0; }
	inline List_1_t56455D217921470E52E7D33A1794256E31084DD8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t56455D217921470E52E7D33A1794256E31084DD8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828, ___current_3)); }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * get_current_3() const { return ___current_3; }
	inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t534BEA2285E51B4528A7BAACB4B3B455357FDF3C * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tCB9BC166DD377E3BA2023E690E832495AF975690* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B, ___firstValue_1)); }
	inline InputProcessor_1_t534BEA2285E51B4528A7BAACB4B3B455357FDF3C * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t534BEA2285E51B4528A7BAACB4B3B455357FDF3C ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t534BEA2285E51B4528A7BAACB4B3B455357FDF3C * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tCB9BC166DD377E3BA2023E690E832495AF975690* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tCB9BC166DD377E3BA2023E690E832495AF975690** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tCB9BC166DD377E3BA2023E690E832495AF975690* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t46CF2B9CBE3FA7ABB7E4DD600E1B31A0F37F1856 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t6A4377E35645873CE27A4B4EFE5B47CD7B7A1262* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798, ___firstValue_1)); }
	inline InputProcessor_1_t46CF2B9CBE3FA7ABB7E4DD600E1B31A0F37F1856 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t46CF2B9CBE3FA7ABB7E4DD600E1B31A0F37F1856 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t46CF2B9CBE3FA7ABB7E4DD600E1B31A0F37F1856 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t6A4377E35645873CE27A4B4EFE5B47CD7B7A1262* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t6A4377E35645873CE27A4B4EFE5B47CD7B7A1262** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t6A4377E35645873CE27A4B4EFE5B47CD7B7A1262* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD5A5E4581DBFCA8996AC18CA2B238890303AFD91 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBF842A7A689B26B12E2ACBB7ACD3ED6FEB30D781* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA, ___firstValue_1)); }
	inline InputProcessor_1_tD5A5E4581DBFCA8996AC18CA2B238890303AFD91 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tD5A5E4581DBFCA8996AC18CA2B238890303AFD91 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tD5A5E4581DBFCA8996AC18CA2B238890303AFD91 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tBF842A7A689B26B12E2ACBB7ACD3ED6FEB30D781* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tBF842A7A689B26B12E2ACBB7ACD3ED6FEB30D781** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tBF842A7A689B26B12E2ACBB7ACD3ED6FEB30D781* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t351A3B8AACB7A8B6039BFFF4B49A4969DD38E79B * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t9D8BBA2D40C6984797E462E4D52E765BBCAD9E2B* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E, ___firstValue_1)); }
	inline InputProcessor_1_t351A3B8AACB7A8B6039BFFF4B49A4969DD38E79B * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t351A3B8AACB7A8B6039BFFF4B49A4969DD38E79B ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t351A3B8AACB7A8B6039BFFF4B49A4969DD38E79B * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t9D8BBA2D40C6984797E462E4D52E765BBCAD9E2B* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t9D8BBA2D40C6984797E462E4D52E765BBCAD9E2B** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t9D8BBA2D40C6984797E462E4D52E765BBCAD9E2B* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t9564E4A020DFA2C6DED222D587F9C4D1CCB1417C * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t477AE13DADC5DC11EBCB47A0A8DDEA9A73AF0113* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1, ___firstValue_1)); }
	inline InputProcessor_1_t9564E4A020DFA2C6DED222D587F9C4D1CCB1417C * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t9564E4A020DFA2C6DED222D587F9C4D1CCB1417C ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t9564E4A020DFA2C6DED222D587F9C4D1CCB1417C * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t477AE13DADC5DC11EBCB47A0A8DDEA9A73AF0113* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t477AE13DADC5DC11EBCB47A0A8DDEA9A73AF0113** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t477AE13DADC5DC11EBCB47A0A8DDEA9A73AF0113* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D 
{
public:
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::lowOverheadMode
	uint16_t ___lowOverheadMode_4;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::protectedContext
	uint16_t ___protectedContext_5;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::focusAware
	uint16_t ___focusAware_6;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::optimizeBufferDiscards
	uint16_t ___optimizeBufferDiscards_7;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::phaseSync
	uint16_t ___phaseSync_8;
	// System.UInt16 Unity.XR.Oculus.NativeMethods/UserDefinedSettings::subsampledLayout
	uint16_t ___subsampledLayout_9;

public:
	inline static int32_t get_offset_of_sharedDepthBuffer_0() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___sharedDepthBuffer_0)); }
	inline uint16_t get_sharedDepthBuffer_0() const { return ___sharedDepthBuffer_0; }
	inline uint16_t* get_address_of_sharedDepthBuffer_0() { return &___sharedDepthBuffer_0; }
	inline void set_sharedDepthBuffer_0(uint16_t value)
	{
		___sharedDepthBuffer_0 = value;
	}

	inline static int32_t get_offset_of_dashSupport_1() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___dashSupport_1)); }
	inline uint16_t get_dashSupport_1() const { return ___dashSupport_1; }
	inline uint16_t* get_address_of_dashSupport_1() { return &___dashSupport_1; }
	inline void set_dashSupport_1(uint16_t value)
	{
		___dashSupport_1 = value;
	}

	inline static int32_t get_offset_of_stereoRenderingMode_2() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___stereoRenderingMode_2)); }
	inline uint16_t get_stereoRenderingMode_2() const { return ___stereoRenderingMode_2; }
	inline uint16_t* get_address_of_stereoRenderingMode_2() { return &___stereoRenderingMode_2; }
	inline void set_stereoRenderingMode_2(uint16_t value)
	{
		___stereoRenderingMode_2 = value;
	}

	inline static int32_t get_offset_of_colorSpace_3() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___colorSpace_3)); }
	inline uint16_t get_colorSpace_3() const { return ___colorSpace_3; }
	inline uint16_t* get_address_of_colorSpace_3() { return &___colorSpace_3; }
	inline void set_colorSpace_3(uint16_t value)
	{
		___colorSpace_3 = value;
	}

	inline static int32_t get_offset_of_lowOverheadMode_4() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___lowOverheadMode_4)); }
	inline uint16_t get_lowOverheadMode_4() const { return ___lowOverheadMode_4; }
	inline uint16_t* get_address_of_lowOverheadMode_4() { return &___lowOverheadMode_4; }
	inline void set_lowOverheadMode_4(uint16_t value)
	{
		___lowOverheadMode_4 = value;
	}

	inline static int32_t get_offset_of_protectedContext_5() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___protectedContext_5)); }
	inline uint16_t get_protectedContext_5() const { return ___protectedContext_5; }
	inline uint16_t* get_address_of_protectedContext_5() { return &___protectedContext_5; }
	inline void set_protectedContext_5(uint16_t value)
	{
		___protectedContext_5 = value;
	}

	inline static int32_t get_offset_of_focusAware_6() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___focusAware_6)); }
	inline uint16_t get_focusAware_6() const { return ___focusAware_6; }
	inline uint16_t* get_address_of_focusAware_6() { return &___focusAware_6; }
	inline void set_focusAware_6(uint16_t value)
	{
		___focusAware_6 = value;
	}

	inline static int32_t get_offset_of_optimizeBufferDiscards_7() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___optimizeBufferDiscards_7)); }
	inline uint16_t get_optimizeBufferDiscards_7() const { return ___optimizeBufferDiscards_7; }
	inline uint16_t* get_address_of_optimizeBufferDiscards_7() { return &___optimizeBufferDiscards_7; }
	inline void set_optimizeBufferDiscards_7(uint16_t value)
	{
		___optimizeBufferDiscards_7 = value;
	}

	inline static int32_t get_offset_of_phaseSync_8() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___phaseSync_8)); }
	inline uint16_t get_phaseSync_8() const { return ___phaseSync_8; }
	inline uint16_t* get_address_of_phaseSync_8() { return &___phaseSync_8; }
	inline void set_phaseSync_8(uint16_t value)
	{
		___phaseSync_8 = value;
	}

	inline static int32_t get_offset_of_subsampledLayout_9() { return static_cast<int32_t>(offsetof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D, ___subsampledLayout_9)); }
	inline uint16_t get_subsampledLayout_9() const { return ___subsampledLayout_9; }
	inline uint16_t* get_address_of_subsampledLayout_9() { return &___subsampledLayout_9; }
	inline void set_subsampledLayout_9(uint16_t value)
	{
		___subsampledLayout_9 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t8BAE944D06577C053998DBBC1FF7E54D1D5A2B86* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t8BAE944D06577C053998DBBC1FF7E54D1D5A2B86* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t8BAE944D06577C053998DBBC1FF7E54D1D5A2B86** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t8BAE944D06577C053998DBBC1FF7E54D1D5A2B86* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields, ___kProductKey_4)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_StaticFields, ___kVersionKey_5)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_marshaled_pinvoke
{
	KeyValuePair_2_t9217F6CF4678FF5176B3DA3A0671CFA8795CFA5B * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D_marshaled_com
{
	KeyValuePair_2_t9217F6CF4678FF5176B3DA3A0671CFA8795CFA5B * ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatBit_2)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatInt_6)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatShort_10)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatByte_14)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatLong_18)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatULong_20)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tBEC8228886DFE3C6BC4C72B4500954E34FB99D5A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Unity.XR.Oculus.OculusUsages
struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77  : public RuntimeObject
{
public:

public:
};

struct OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeUp
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeUp_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeDown
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___volumeDown_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::indexTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___indexTouch_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbTouch_4;

public:
	inline static int32_t get_offset_of_volumeUp_0() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeUp_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeUp_0() const { return ___volumeUp_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeUp_0() { return &___volumeUp_0; }
	inline void set_volumeUp_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeUp_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_volumeDown_1() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___volumeDown_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_volumeDown_1() const { return ___volumeDown_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_volumeDown_1() { return &___volumeDown_1; }
	inline void set_volumeDown_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___volumeDown_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeDown_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_2() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbrest_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_2() const { return ___thumbrest_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_2() { return &___thumbrest_2; }
	inline void set_thumbrest_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_3() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___indexTouch_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_indexTouch_3() const { return ___indexTouch_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_indexTouch_3() { return &___indexTouch_3; }
	inline void set_indexTouch_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___indexTouch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_4() { return static_cast<int32_t>(offsetof(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields, ___thumbTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbTouch_4() const { return ___thumbTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbTouch_4() { return &___thumbTouch_4; }
	inline void set_thumbTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Unity.XR.Oculus.SystemHeadset
struct SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137 
{
public:
	// System.Int32 Unity.XR.Oculus.SystemHeadset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemHeadset_t16A682CFD8C01E96CE6D9E8AD92C5B33BFAA4137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_tA75145797DA57CB8885A8E5C8D7D0EF665DB4A78 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_tA75145797DA57CB8885A8E5C8D7D0EF665DB4A78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Boundary/BoundaryType
struct BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC 
{
public:
	// System.Int32 Unity.XR.Oculus.Boundary/BoundaryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryType_t2D787F83347E327691F396B19C5DA6A49B2C29EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache
struct UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8 
{
public:
	// System.Int32 Unity.XR.Oculus.Development/UserDeveloperModeSettingCache::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserDeveloperModeSettingCache_tD3FF164E39B8C782608E279A1E9ECA582812B4C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_tC210B095E24C31AC8E07C6E09B02CAA80C2563B6 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_tC210B095E24C31AC8E07C6E09B02CAA80C2563B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tEA83E21B2294D1CFE7395FE7C9455CFC71BBD1F4 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tEA83E21B2294D1CFE7395FE7C9455CFC71BBD1F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.NativeMethods/OvrProperty
struct OvrProperty_tCC1C38FEA9A7256856949C8BFFB342C41ED9BA24 
{
public:
	// System.Int32 Unity.XR.Oculus.NativeMethods/OvrProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OvrProperty_tCC1C38FEA9A7256856949C8BFFB342C41ED9BA24, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
struct DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusLoader/DeviceSupportedResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceSupportedResult_t91515A5FEA3D8ADF6777D4894FF176444CE2F15F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
struct StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeAndroid_t51C792A37730976614F2A445348686E8467ABCD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
struct StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeDesktop_t0AAEF2D9C556C46E75A630F2CB5145AA78AE3207, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 
{
public:
	// T System.Nullable`1::value
	InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351, ___value_0)); }
	inline InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  get_value_0() const { return ___value_0; }
	inline InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.XR.Oculus.Development
struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83  : public RuntimeObject
{
public:

public:
};

struct Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields
{
public:
	// Unity.XR.Oculus.Development/UserDeveloperModeSettingCache Unity.XR.Oculus.Development::s_CachedMode
	int32_t ___s_CachedMode_0;

public:
	inline static int32_t get_offset_of_s_CachedMode_0() { return static_cast<int32_t>(offsetof(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields, ___s_CachedMode_0)); }
	inline int32_t get_s_CachedMode_0() const { return ___s_CachedMode_0; }
	inline int32_t* get_address_of_s_CachedMode_0() { return &___s_CachedMode_0; }
	inline void set_s_CachedMode_0(int32_t value)
	{
		___s_CachedMode_0 = value;
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControl
struct InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_StateBlock_0)); }
	inline InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_t37A383311518FFFA424D1F8F7E355DBFC215624C  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Name_1)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Layout_7)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Variants_8)); }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_t01D20018001F1112F6D24F765D888CA7E8DCF0B4  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Device_9)); }
	inline InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_Parent_10)); }
	inline InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_MinValue_19)); }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB100F9C42BB438CE358E5989697410B27AFB3ADA  value)
	{
		___m_MaxValue_20 = value;
	}
};


// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::V2Signing
	bool ___V2Signing_8;
	// System.Boolean Unity.XR.Oculus.OculusSettings::LowOverheadMode
	bool ___LowOverheadMode_9;
	// System.Boolean Unity.XR.Oculus.OculusSettings::ProtectedContext
	bool ___ProtectedContext_10;
	// System.Boolean Unity.XR.Oculus.OculusSettings::FocusAware
	bool ___FocusAware_11;
	// System.Boolean Unity.XR.Oculus.OculusSettings::OptimizeBufferDiscards
	bool ___OptimizeBufferDiscards_12;
	// System.Boolean Unity.XR.Oculus.OculusSettings::PhaseSync
	bool ___PhaseSync_13;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SubsampledLayout
	bool ___SubsampledLayout_14;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest
	bool ___TargetQuest_15;
	// System.Boolean Unity.XR.Oculus.OculusSettings::TargetQuest2
	bool ___TargetQuest2_16;
	// UnityEngine.Texture2D Unity.XR.Oculus.OculusSettings::SystemSplashScreen
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___SystemSplashScreen_17;

public:
	inline static int32_t get_offset_of_m_StereoRenderingModeDesktop_4() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeDesktop_4)); }
	inline int32_t get_m_StereoRenderingModeDesktop_4() const { return ___m_StereoRenderingModeDesktop_4; }
	inline int32_t* get_address_of_m_StereoRenderingModeDesktop_4() { return &___m_StereoRenderingModeDesktop_4; }
	inline void set_m_StereoRenderingModeDesktop_4(int32_t value)
	{
		___m_StereoRenderingModeDesktop_4 = value;
	}

	inline static int32_t get_offset_of_m_StereoRenderingModeAndroid_5() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___m_StereoRenderingModeAndroid_5)); }
	inline int32_t get_m_StereoRenderingModeAndroid_5() const { return ___m_StereoRenderingModeAndroid_5; }
	inline int32_t* get_address_of_m_StereoRenderingModeAndroid_5() { return &___m_StereoRenderingModeAndroid_5; }
	inline void set_m_StereoRenderingModeAndroid_5(int32_t value)
	{
		___m_StereoRenderingModeAndroid_5 = value;
	}

	inline static int32_t get_offset_of_SharedDepthBuffer_6() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SharedDepthBuffer_6)); }
	inline bool get_SharedDepthBuffer_6() const { return ___SharedDepthBuffer_6; }
	inline bool* get_address_of_SharedDepthBuffer_6() { return &___SharedDepthBuffer_6; }
	inline void set_SharedDepthBuffer_6(bool value)
	{
		___SharedDepthBuffer_6 = value;
	}

	inline static int32_t get_offset_of_DashSupport_7() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___DashSupport_7)); }
	inline bool get_DashSupport_7() const { return ___DashSupport_7; }
	inline bool* get_address_of_DashSupport_7() { return &___DashSupport_7; }
	inline void set_DashSupport_7(bool value)
	{
		___DashSupport_7 = value;
	}

	inline static int32_t get_offset_of_V2Signing_8() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___V2Signing_8)); }
	inline bool get_V2Signing_8() const { return ___V2Signing_8; }
	inline bool* get_address_of_V2Signing_8() { return &___V2Signing_8; }
	inline void set_V2Signing_8(bool value)
	{
		___V2Signing_8 = value;
	}

	inline static int32_t get_offset_of_LowOverheadMode_9() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___LowOverheadMode_9)); }
	inline bool get_LowOverheadMode_9() const { return ___LowOverheadMode_9; }
	inline bool* get_address_of_LowOverheadMode_9() { return &___LowOverheadMode_9; }
	inline void set_LowOverheadMode_9(bool value)
	{
		___LowOverheadMode_9 = value;
	}

	inline static int32_t get_offset_of_ProtectedContext_10() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___ProtectedContext_10)); }
	inline bool get_ProtectedContext_10() const { return ___ProtectedContext_10; }
	inline bool* get_address_of_ProtectedContext_10() { return &___ProtectedContext_10; }
	inline void set_ProtectedContext_10(bool value)
	{
		___ProtectedContext_10 = value;
	}

	inline static int32_t get_offset_of_FocusAware_11() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___FocusAware_11)); }
	inline bool get_FocusAware_11() const { return ___FocusAware_11; }
	inline bool* get_address_of_FocusAware_11() { return &___FocusAware_11; }
	inline void set_FocusAware_11(bool value)
	{
		___FocusAware_11 = value;
	}

	inline static int32_t get_offset_of_OptimizeBufferDiscards_12() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___OptimizeBufferDiscards_12)); }
	inline bool get_OptimizeBufferDiscards_12() const { return ___OptimizeBufferDiscards_12; }
	inline bool* get_address_of_OptimizeBufferDiscards_12() { return &___OptimizeBufferDiscards_12; }
	inline void set_OptimizeBufferDiscards_12(bool value)
	{
		___OptimizeBufferDiscards_12 = value;
	}

	inline static int32_t get_offset_of_PhaseSync_13() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___PhaseSync_13)); }
	inline bool get_PhaseSync_13() const { return ___PhaseSync_13; }
	inline bool* get_address_of_PhaseSync_13() { return &___PhaseSync_13; }
	inline void set_PhaseSync_13(bool value)
	{
		___PhaseSync_13 = value;
	}

	inline static int32_t get_offset_of_SubsampledLayout_14() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SubsampledLayout_14)); }
	inline bool get_SubsampledLayout_14() const { return ___SubsampledLayout_14; }
	inline bool* get_address_of_SubsampledLayout_14() { return &___SubsampledLayout_14; }
	inline void set_SubsampledLayout_14(bool value)
	{
		___SubsampledLayout_14 = value;
	}

	inline static int32_t get_offset_of_TargetQuest_15() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest_15)); }
	inline bool get_TargetQuest_15() const { return ___TargetQuest_15; }
	inline bool* get_address_of_TargetQuest_15() { return &___TargetQuest_15; }
	inline void set_TargetQuest_15(bool value)
	{
		___TargetQuest_15 = value;
	}

	inline static int32_t get_offset_of_TargetQuest2_16() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___TargetQuest2_16)); }
	inline bool get_TargetQuest2_16() const { return ___TargetQuest2_16; }
	inline bool* get_address_of_TargetQuest2_16() { return &___TargetQuest2_16; }
	inline void set_TargetQuest2_16(bool value)
	{
		___TargetQuest2_16 = value;
	}

	inline static int32_t get_offset_of_SystemSplashScreen_17() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C, ___SystemSplashScreen_17)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_SystemSplashScreen_17() const { return ___SystemSplashScreen_17; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_SystemSplashScreen_17() { return &___SystemSplashScreen_17; }
	inline void set_SystemSplashScreen_17(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___SystemSplashScreen_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemSplashScreen_17), (void*)value);
	}
};

struct OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields
{
public:
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * ___s_Settings_18;

public:
	inline static int32_t get_offset_of_s_Settings_18() { return static_cast<int32_t>(offsetof(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields, ___s_Settings_18)); }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * get_s_Settings_18() const { return ___s_Settings_18; }
	inline OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C ** get_address_of_s_Settings_18() { return &___s_Settings_18; }
	inline void set_s_Settings_18(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * value)
	{
		___s_Settings_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Settings_18), (void*)value);
	}
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833  : public IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_tA719C419032D822BB58D384A0F90E5E9F286E6AC  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tA719C419032D822BB58D384A0F90E5E9F286E6AC, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tB62AA1122FAB06C644E9CA3CDF30A55CAF54904B  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t54F883758D0811699F8B26E1B5C5B87D43531854  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t54F883758D0811699F8B26E1B5C5B87D43531854, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tCD08A3E1D932C8A0878A7AE0EBB9242041869798  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t2273064B5872656E668E007A1CAB0661D3FD40B8  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t2273064B5872656E668E007A1CAB0661D3FD40B8, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t79EADA767F4F018EC1BCDD4B31505DF941ACACDA  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t774D5D5FCCDDB7FE70C5A250F4E0EED96440FA7C  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t774D5D5FCCDDB7FE70C5A250F4E0EED96440FA7C, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t3C0FABAA3C59643E47C86FE4C5ED11820353DB9E  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tDA9CA2ECCD8CB385C8A0F4FABAECD4FFF001BF8B  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tDA9CA2ECCD8CB385C8A0F4FABAECD4FFF001BF8B, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t8F97632340C9688A5AAC084696E067D2C0749AD1  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154  : public InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_Description_28)); }
	inline InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tA0075FB9BC3E3E130F6A12873960FCCB6D5DEEBA  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t157EC3FD5EC6C17780128E7E48FC136DB6E27D11* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t70A3E35F91F44D7B9476D69090DA050EE0B7418F* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22  : public InputControl_1_t2273064B5872656E668E007A1CAB0661D3FD40B8
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8  : public InputControl_1_tA719C419032D822BB58D384A0F90E5E9F286E6AC
{
public:

public:
};


// Unity.XR.Oculus.OculusLoader
struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB  : public XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013
{
public:

public:
};

struct OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___s_InputSubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_DisplaySubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_DisplaySubsystemDescriptors_5)); }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * get_s_DisplaySubsystemDescriptors_5() const { return ___s_DisplaySubsystemDescriptors_5; }
	inline List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 ** get_address_of_s_DisplaySubsystemDescriptors_5() { return &___s_DisplaySubsystemDescriptors_5; }
	inline void set_s_DisplaySubsystemDescriptors_5(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * value)
	{
		___s_DisplaySubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplaySubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InputSubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields, ___s_InputSubsystemDescriptors_6)); }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * get_s_InputSubsystemDescriptors_6() const { return ___s_InputSubsystemDescriptors_6; }
	inline List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 ** get_address_of_s_InputSubsystemDescriptors_6() { return &___s_InputSubsystemDescriptors_6; }
	inline void set_s_InputSubsystemDescriptors_6(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * value)
	{
		___s_InputSubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemDescriptors_6), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusRemote
struct OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3  : public InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<back>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CbackU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::<start>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CstartU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::<touchpad>k__BackingField
	Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___U3CtouchpadU3Ek__BackingField_41;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CbackU3Ek__BackingField_39)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CbackU3Ek__BackingField_39() const { return ___U3CbackU3Ek__BackingField_39; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CbackU3Ek__BackingField_39() { return &___U3CbackU3Ek__BackingField_39; }
	inline void set_U3CbackU3Ek__BackingField_39(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CbackU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CstartU3Ek__BackingField_40)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CstartU3Ek__BackingField_40() const { return ___U3CstartU3Ek__BackingField_40; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CstartU3Ek__BackingField_40() { return &___U3CstartU3Ek__BackingField_40; }
	inline void set_U3CstartU3Ek__BackingField_40(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CstartU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3, ___U3CtouchpadU3Ek__BackingField_41)); }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * get_U3CtouchpadU3Ek__BackingField_41() const { return ___U3CtouchpadU3Ek__BackingField_41; }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 ** get_address_of_U3CtouchpadU3Ek__BackingField_41() { return &___U3CtouchpadU3Ek__BackingField_41; }
	inline void set_U3CtouchpadU3Ek__BackingField_41(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * value)
	{
		___U3CtouchpadU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_41), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTrackingReference
struct OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807  : public InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::<trackingState>k__BackingField
	IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::<isTracked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::<devicePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::<deviceRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF  : public InputControl_1_t54F883758D0811699F8B26E1B5C5B87D43531854
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CwU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF, ___U3CwU3Ek__BackingField_25)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CwU3Ek__BackingField_25() const { return ___U3CwU3Ek__BackingField_25; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CwU3Ek__BackingField_25() { return &___U3CwU3Ek__BackingField_25; }
	inline void set_U3CwU3Ek__BackingField_25(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CwU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5  : public InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154
{
public:
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CdeviceRotationU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5, ___U3CtrackingStateU3Ek__BackingField_39)); }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * get_U3CtrackingStateU3Ek__BackingField_39() const { return ___U3CtrackingStateU3Ek__BackingField_39; }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 ** get_address_of_U3CtrackingStateU3Ek__BackingField_39() { return &___U3CtrackingStateU3Ek__BackingField_39; }
	inline void set_U3CtrackingStateU3Ek__BackingField_39(IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5, ___U3CisTrackedU3Ek__BackingField_40)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CisTrackedU3Ek__BackingField_40() const { return ___U3CisTrackedU3Ek__BackingField_40; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CisTrackedU3Ek__BackingField_40() { return &___U3CisTrackedU3Ek__BackingField_40; }
	inline void set_U3CisTrackedU3Ek__BackingField_40(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CisTrackedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5, ___U3CdevicePositionU3Ek__BackingField_41)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdevicePositionU3Ek__BackingField_41() const { return ___U3CdevicePositionU3Ek__BackingField_41; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdevicePositionU3Ek__BackingField_41() { return &___U3CdevicePositionU3Ek__BackingField_41; }
	inline void set_U3CdevicePositionU3Ek__BackingField_41(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5, ___U3CdeviceRotationU3Ek__BackingField_42)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CdeviceRotationU3Ek__BackingField_42() const { return ___U3CdeviceRotationU3Ek__BackingField_42; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CdeviceRotationU3Ek__BackingField_42() { return &___U3CdeviceRotationU3Ek__BackingField_42; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_42(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_42), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t342BA848221108F8818F05BF3CB484934F582935  : public InputControl_1_t774D5D5FCCDDB7FE70C5A250F4E0EED96440FA7C
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CyU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15  : public InputControl_1_tDA9CA2ECCD8CB385C8A0F4FABAECD4FFF001BF8B
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CzU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D  : public AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}

	inline static int32_t get_offset_of_s_GlobalDefaultButtonReleaseThreshold_35() { return static_cast<int32_t>(offsetof(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_StaticFields, ___s_GlobalDefaultButtonReleaseThreshold_35)); }
	inline float get_s_GlobalDefaultButtonReleaseThreshold_35() const { return ___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline float* get_address_of_s_GlobalDefaultButtonReleaseThreshold_35() { return &___s_GlobalDefaultButtonReleaseThreshold_35; }
	inline void set_s_GlobalDefaultButtonReleaseThreshold_35(float value)
	{
		___s_GlobalDefaultButtonReleaseThreshold_35 = value;
	}
};


// UnityEngine.InputSystem.XR.XRController
struct XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326  : public TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5
{
public:

public:
};


// UnityEngine.InputSystem.XR.XRHMD
struct XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A  : public TrackedDevice_tC22257C9CF0AE3D4CC45B4DDD5F16E6B99A917C5
{
public:
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<leftEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CleftEyePositionU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CleftEyeRotationU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<rightEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CrightEyePositionU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CrightEyeRotationU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.XRHMD::<centerEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CcenterEyePositionU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.XRHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CcenterEyeRotationU3Ek__BackingField_48;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CleftEyePositionU3Ek__BackingField_43)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CleftEyePositionU3Ek__BackingField_43() const { return ___U3CleftEyePositionU3Ek__BackingField_43; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CleftEyePositionU3Ek__BackingField_43() { return &___U3CleftEyePositionU3Ek__BackingField_43; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_43(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CleftEyeRotationU3Ek__BackingField_44)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CleftEyeRotationU3Ek__BackingField_44() const { return ___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_44() { return &___U3CleftEyeRotationU3Ek__BackingField_44; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_44(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CrightEyePositionU3Ek__BackingField_45)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CrightEyePositionU3Ek__BackingField_45() const { return ___U3CrightEyePositionU3Ek__BackingField_45; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CrightEyePositionU3Ek__BackingField_45() { return &___U3CrightEyePositionU3Ek__BackingField_45; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_45(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CrightEyeRotationU3Ek__BackingField_46)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CrightEyeRotationU3Ek__BackingField_46() const { return ___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_46() { return &___U3CrightEyeRotationU3Ek__BackingField_46; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_46(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CcenterEyePositionU3Ek__BackingField_47)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CcenterEyePositionU3Ek__BackingField_47() const { return ___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_47() { return &___U3CcenterEyePositionU3Ek__BackingField_47; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_47(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A, ___U3CcenterEyeRotationU3Ek__BackingField_48)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CcenterEyeRotationU3Ek__BackingField_48() const { return ___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_48() { return &___U3CcenterEyeRotationU3Ek__BackingField_48; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_48(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_48), (void*)value);
	}
};


// Unity.XR.Oculus.Input.GearVRTrackedController
struct GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D  : public XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::<touchpad>k__BackingField
	Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___U3CtouchpadU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::<trigger>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<back>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CbackU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<triggerPressed>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CtriggerPressedU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadClicked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CtouchpadClickedU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<touchpadTouched>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CtouchpadTouchedU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::<trackingState>k__BackingField
	IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___U3CtrackingStateU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::<isTracked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CisTrackedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<devicePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdevicePositionU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::<deviceRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CdeviceRotationU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularVelocityU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAccelerationU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_55;

public:
	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadU3Ek__BackingField_43)); }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * get_U3CtouchpadU3Ek__BackingField_43() const { return ___U3CtouchpadU3Ek__BackingField_43; }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 ** get_address_of_U3CtouchpadU3Ek__BackingField_43() { return &___U3CtouchpadU3Ek__BackingField_43; }
	inline void set_U3CtouchpadU3Ek__BackingField_43(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * value)
	{
		___U3CtouchpadU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerU3Ek__BackingField_44)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CtriggerU3Ek__BackingField_44() const { return ___U3CtriggerU3Ek__BackingField_44; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CtriggerU3Ek__BackingField_44() { return &___U3CtriggerU3Ek__BackingField_44; }
	inline void set_U3CtriggerU3Ek__BackingField_44(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CtriggerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CbackU3Ek__BackingField_45)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CbackU3Ek__BackingField_45() const { return ___U3CbackU3Ek__BackingField_45; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CbackU3Ek__BackingField_45() { return &___U3CbackU3Ek__BackingField_45; }
	inline void set_U3CbackU3Ek__BackingField_45(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CbackU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtriggerPressedU3Ek__BackingField_46)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CtriggerPressedU3Ek__BackingField_46() const { return ___U3CtriggerPressedU3Ek__BackingField_46; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CtriggerPressedU3Ek__BackingField_46() { return &___U3CtriggerPressedU3Ek__BackingField_46; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_46(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadClickedU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadClickedU3Ek__BackingField_47)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CtouchpadClickedU3Ek__BackingField_47() const { return ___U3CtouchpadClickedU3Ek__BackingField_47; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CtouchpadClickedU3Ek__BackingField_47() { return &___U3CtouchpadClickedU3Ek__BackingField_47; }
	inline void set_U3CtouchpadClickedU3Ek__BackingField_47(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CtouchpadClickedU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadClickedU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadTouchedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtouchpadTouchedU3Ek__BackingField_48)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CtouchpadTouchedU3Ek__BackingField_48() const { return ___U3CtouchpadTouchedU3Ek__BackingField_48; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CtouchpadTouchedU3Ek__BackingField_48() { return &___U3CtouchpadTouchedU3Ek__BackingField_48; }
	inline void set_U3CtouchpadTouchedU3Ek__BackingField_48(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CtouchpadTouchedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadTouchedU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CtrackingStateU3Ek__BackingField_49)); }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * get_U3CtrackingStateU3Ek__BackingField_49() const { return ___U3CtrackingStateU3Ek__BackingField_49; }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 ** get_address_of_U3CtrackingStateU3Ek__BackingField_49() { return &___U3CtrackingStateU3Ek__BackingField_49; }
	inline void set_U3CtrackingStateU3Ek__BackingField_49(IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CisTrackedU3Ek__BackingField_50)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CisTrackedU3Ek__BackingField_50() const { return ___U3CisTrackedU3Ek__BackingField_50; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CisTrackedU3Ek__BackingField_50() { return &___U3CisTrackedU3Ek__BackingField_50; }
	inline void set_U3CisTrackedU3Ek__BackingField_50(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CisTrackedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdevicePositionU3Ek__BackingField_51)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdevicePositionU3Ek__BackingField_51() const { return ___U3CdevicePositionU3Ek__BackingField_51; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdevicePositionU3Ek__BackingField_51() { return &___U3CdevicePositionU3Ek__BackingField_51; }
	inline void set_U3CdevicePositionU3Ek__BackingField_51(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceRotationU3Ek__BackingField_52)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CdeviceRotationU3Ek__BackingField_52() const { return ___U3CdeviceRotationU3Ek__BackingField_52; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CdeviceRotationU3Ek__BackingField_52() { return &___U3CdeviceRotationU3Ek__BackingField_52; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_52(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularVelocityU3Ek__BackingField_53)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularVelocityU3Ek__BackingField_53() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_53; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_53() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_53; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_53(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAccelerationU3Ek__BackingField_54)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAccelerationU3Ek__BackingField_54() const { return ___U3CdeviceAccelerationU3Ek__BackingField_54; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_54() { return &___U3CdeviceAccelerationU3Ek__BackingField_54; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_54(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D, ___U3CdeviceAngularAccelerationU3Ek__BackingField_55)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_55() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_55; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_55() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_55; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_55), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusHMD
struct OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A  : public XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<userPresence>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CuserPresenceU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::<trackingState>k__BackingField
	IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___U3CtrackingStateU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::<isTracked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CisTrackedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<devicePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdevicePositionU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<deviceRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CdeviceRotationU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularVelocityU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAccelerationU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CleftEyePositionU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<leftEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CleftEyeRotationU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CleftEyeAngularVelocityU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CleftEyeAccelerationU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<leftEyeAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CrightEyePositionU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<rightEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CrightEyeRotationU3Ek__BackingField_63;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CrightEyeAngularVelocityU3Ek__BackingField_64;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CrightEyeAccelerationU3Ek__BackingField_65;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<rightEyeAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CcenterEyePositionU3Ek__BackingField_67;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::<centerEyeRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CcenterEyeRotationU3Ek__BackingField_68;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CcenterEyeAccelerationU3Ek__BackingField_70;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::<centerEyeAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71;

public:
	inline static int32_t get_offset_of_U3CuserPresenceU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CuserPresenceU3Ek__BackingField_49)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CuserPresenceU3Ek__BackingField_49() const { return ___U3CuserPresenceU3Ek__BackingField_49; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CuserPresenceU3Ek__BackingField_49() { return &___U3CuserPresenceU3Ek__BackingField_49; }
	inline void set_U3CuserPresenceU3Ek__BackingField_49(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CuserPresenceU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuserPresenceU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CtrackingStateU3Ek__BackingField_50)); }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * get_U3CtrackingStateU3Ek__BackingField_50() const { return ___U3CtrackingStateU3Ek__BackingField_50; }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 ** get_address_of_U3CtrackingStateU3Ek__BackingField_50() { return &___U3CtrackingStateU3Ek__BackingField_50; }
	inline void set_U3CtrackingStateU3Ek__BackingField_50(IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CisTrackedU3Ek__BackingField_51)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CisTrackedU3Ek__BackingField_51() const { return ___U3CisTrackedU3Ek__BackingField_51; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CisTrackedU3Ek__BackingField_51() { return &___U3CisTrackedU3Ek__BackingField_51; }
	inline void set_U3CisTrackedU3Ek__BackingField_51(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CisTrackedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdevicePositionU3Ek__BackingField_52)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdevicePositionU3Ek__BackingField_52() const { return ___U3CdevicePositionU3Ek__BackingField_52; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdevicePositionU3Ek__BackingField_52() { return &___U3CdevicePositionU3Ek__BackingField_52; }
	inline void set_U3CdevicePositionU3Ek__BackingField_52(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceRotationU3Ek__BackingField_53)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CdeviceRotationU3Ek__BackingField_53() const { return ___U3CdeviceRotationU3Ek__BackingField_53; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CdeviceRotationU3Ek__BackingField_53() { return &___U3CdeviceRotationU3Ek__BackingField_53; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_53(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularVelocityU3Ek__BackingField_54)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularVelocityU3Ek__BackingField_54() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_54; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_54() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_54; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_54(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAccelerationU3Ek__BackingField_55)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAccelerationU3Ek__BackingField_55() const { return ___U3CdeviceAccelerationU3Ek__BackingField_55; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_55() { return &___U3CdeviceAccelerationU3Ek__BackingField_55; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_55(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CdeviceAngularAccelerationU3Ek__BackingField_56)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_56() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_56; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_56() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_56; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyePositionU3Ek__BackingField_57)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CleftEyePositionU3Ek__BackingField_57() const { return ___U3CleftEyePositionU3Ek__BackingField_57; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CleftEyePositionU3Ek__BackingField_57() { return &___U3CleftEyePositionU3Ek__BackingField_57; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_57(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CleftEyePositionU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyePositionU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeRotationU3Ek__BackingField_58)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CleftEyeRotationU3Ek__BackingField_58() const { return ___U3CleftEyeRotationU3Ek__BackingField_58; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CleftEyeRotationU3Ek__BackingField_58() { return &___U3CleftEyeRotationU3Ek__BackingField_58; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_58(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeRotationU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularVelocityU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularVelocityU3Ek__BackingField_59)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CleftEyeAngularVelocityU3Ek__BackingField_59() const { return ___U3CleftEyeAngularVelocityU3Ek__BackingField_59; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CleftEyeAngularVelocityU3Ek__BackingField_59() { return &___U3CleftEyeAngularVelocityU3Ek__BackingField_59; }
	inline void set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CleftEyeAngularVelocityU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularVelocityU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAccelerationU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAccelerationU3Ek__BackingField_60)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CleftEyeAccelerationU3Ek__BackingField_60() const { return ___U3CleftEyeAccelerationU3Ek__BackingField_60; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CleftEyeAccelerationU3Ek__BackingField_60() { return &___U3CleftEyeAccelerationU3Ek__BackingField_60; }
	inline void set_U3CleftEyeAccelerationU3Ek__BackingField_60(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CleftEyeAccelerationU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAccelerationU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() const { return ___U3CleftEyeAngularAccelerationU3Ek__BackingField_61; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CleftEyeAngularAccelerationU3Ek__BackingField_61() { return &___U3CleftEyeAngularAccelerationU3Ek__BackingField_61; }
	inline void set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CleftEyeAngularAccelerationU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeAngularAccelerationU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyePositionU3Ek__BackingField_62)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CrightEyePositionU3Ek__BackingField_62() const { return ___U3CrightEyePositionU3Ek__BackingField_62; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CrightEyePositionU3Ek__BackingField_62() { return &___U3CrightEyePositionU3Ek__BackingField_62; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_62(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CrightEyePositionU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyePositionU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeRotationU3Ek__BackingField_63)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CrightEyeRotationU3Ek__BackingField_63() const { return ___U3CrightEyeRotationU3Ek__BackingField_63; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CrightEyeRotationU3Ek__BackingField_63() { return &___U3CrightEyeRotationU3Ek__BackingField_63; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_63(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeRotationU3Ek__BackingField_63), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularVelocityU3Ek__BackingField_64() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularVelocityU3Ek__BackingField_64)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CrightEyeAngularVelocityU3Ek__BackingField_64() const { return ___U3CrightEyeAngularVelocityU3Ek__BackingField_64; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CrightEyeAngularVelocityU3Ek__BackingField_64() { return &___U3CrightEyeAngularVelocityU3Ek__BackingField_64; }
	inline void set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CrightEyeAngularVelocityU3Ek__BackingField_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularVelocityU3Ek__BackingField_64), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAccelerationU3Ek__BackingField_65() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAccelerationU3Ek__BackingField_65)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CrightEyeAccelerationU3Ek__BackingField_65() const { return ___U3CrightEyeAccelerationU3Ek__BackingField_65; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CrightEyeAccelerationU3Ek__BackingField_65() { return &___U3CrightEyeAccelerationU3Ek__BackingField_65; }
	inline void set_U3CrightEyeAccelerationU3Ek__BackingField_65(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CrightEyeAccelerationU3Ek__BackingField_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAccelerationU3Ek__BackingField_65), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() const { return ___U3CrightEyeAngularAccelerationU3Ek__BackingField_66; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CrightEyeAngularAccelerationU3Ek__BackingField_66() { return &___U3CrightEyeAngularAccelerationU3Ek__BackingField_66; }
	inline void set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CrightEyeAngularAccelerationU3Ek__BackingField_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeAngularAccelerationU3Ek__BackingField_66), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyePositionU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyePositionU3Ek__BackingField_67)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CcenterEyePositionU3Ek__BackingField_67() const { return ___U3CcenterEyePositionU3Ek__BackingField_67; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CcenterEyePositionU3Ek__BackingField_67() { return &___U3CcenterEyePositionU3Ek__BackingField_67; }
	inline void set_U3CcenterEyePositionU3Ek__BackingField_67(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CcenterEyePositionU3Ek__BackingField_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyePositionU3Ek__BackingField_67), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeRotationU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeRotationU3Ek__BackingField_68)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CcenterEyeRotationU3Ek__BackingField_68() const { return ___U3CcenterEyeRotationU3Ek__BackingField_68; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CcenterEyeRotationU3Ek__BackingField_68() { return &___U3CcenterEyeRotationU3Ek__BackingField_68; }
	inline void set_U3CcenterEyeRotationU3Ek__BackingField_68(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CcenterEyeRotationU3Ek__BackingField_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeRotationU3Ek__BackingField_68), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() const { return ___U3CcenterEyeAngularVelocityU3Ek__BackingField_69; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CcenterEyeAngularVelocityU3Ek__BackingField_69() { return &___U3CcenterEyeAngularVelocityU3Ek__BackingField_69; }
	inline void set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CcenterEyeAngularVelocityU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularVelocityU3Ek__BackingField_69), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAccelerationU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAccelerationU3Ek__BackingField_70)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CcenterEyeAccelerationU3Ek__BackingField_70() const { return ___U3CcenterEyeAccelerationU3Ek__BackingField_70; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CcenterEyeAccelerationU3Ek__BackingField_70() { return &___U3CcenterEyeAccelerationU3Ek__BackingField_70; }
	inline void set_U3CcenterEyeAccelerationU3Ek__BackingField_70(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CcenterEyeAccelerationU3Ek__BackingField_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAccelerationU3Ek__BackingField_70), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A, ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() const { return ___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71() { return &___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71; }
	inline void set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcenterEyeAngularAccelerationU3Ek__BackingField_71), (void*)value);
	}
};


// UnityEngine.InputSystem.XR.XRControllerWithRumble
struct XRControllerWithRumble_t6D1C6C09CE0707F7928E123DD9D56763E43ED970  : public XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusGoController
struct OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B  : public GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D
{
public:

public:
};


// Unity.XR.Oculus.Input.OculusHMDExtended
struct OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC  : public OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A
{
public:
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::<back>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CbackU3Ek__BackingField_72;
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::<touchpad>k__BackingField
	Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___U3CtouchpadU3Ek__BackingField_73;

public:
	inline static int32_t get_offset_of_U3CbackU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CbackU3Ek__BackingField_72)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CbackU3Ek__BackingField_72() const { return ___U3CbackU3Ek__BackingField_72; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CbackU3Ek__BackingField_72() { return &___U3CbackU3Ek__BackingField_72; }
	inline void set_U3CbackU3Ek__BackingField_72(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CbackU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbackU3Ek__BackingField_72), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtouchpadU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC, ___U3CtouchpadU3Ek__BackingField_73)); }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * get_U3CtouchpadU3Ek__BackingField_73() const { return ___U3CtouchpadU3Ek__BackingField_73; }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 ** get_address_of_U3CtouchpadU3Ek__BackingField_73() { return &___U3CtouchpadU3Ek__BackingField_73; }
	inline void set_U3CtouchpadU3Ek__BackingField_73(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * value)
	{
		___U3CtouchpadU3Ek__BackingField_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtouchpadU3Ek__BackingField_73), (void*)value);
	}
};


// Unity.XR.Oculus.Input.OculusTouchController
struct OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA  : public XRControllerWithRumble_t6D1C6C09CE0707F7928E123DD9D56763E43ED970
{
public:
	// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::<thumbstick>k__BackingField
	Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___U3CthumbstickU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<trigger>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<grip>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CgripU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryButton>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CprimaryButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryButton>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CsecondaryButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<gripPressed>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CgripPressedU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<start>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CstartU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickClicked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CthumbstickClickedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<primaryTouched>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CprimaryTouchedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<secondaryTouched>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CsecondaryTouchedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::<triggerTouched>k__BackingField
	AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___U3CtriggerTouchedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<triggerPressed>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CtriggerPressedU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<thumbstickTouched>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CthumbstickTouchedU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::<trackingState>k__BackingField
	IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___U3CtrackingStateU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::<isTracked>k__BackingField
	ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___U3CisTrackedU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<devicePosition>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdevicePositionU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::<deviceRotation>k__BackingField
	QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___U3CdeviceRotationU3Ek__BackingField_59;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceVelocityU3Ek__BackingField_60;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularVelocity>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularVelocityU3Ek__BackingField_61;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAccelerationU3Ek__BackingField_62;
	// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::<deviceAngularAcceleration>k__BackingField
	Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___U3CdeviceAngularAccelerationU3Ek__BackingField_63;

public:
	inline static int32_t get_offset_of_U3CthumbstickU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickU3Ek__BackingField_43)); }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * get_U3CthumbstickU3Ek__BackingField_43() const { return ___U3CthumbstickU3Ek__BackingField_43; }
	inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 ** get_address_of_U3CthumbstickU3Ek__BackingField_43() { return &___U3CthumbstickU3Ek__BackingField_43; }
	inline void set_U3CthumbstickU3Ek__BackingField_43(Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * value)
	{
		___U3CthumbstickU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerU3Ek__BackingField_44)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CtriggerU3Ek__BackingField_44() const { return ___U3CtriggerU3Ek__BackingField_44; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CtriggerU3Ek__BackingField_44() { return &___U3CtriggerU3Ek__BackingField_44; }
	inline void set_U3CtriggerU3Ek__BackingField_44(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CtriggerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripU3Ek__BackingField_45)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CgripU3Ek__BackingField_45() const { return ___U3CgripU3Ek__BackingField_45; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CgripU3Ek__BackingField_45() { return &___U3CgripU3Ek__BackingField_45; }
	inline void set_U3CgripU3Ek__BackingField_45(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CgripU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripU3Ek__BackingField_45), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryButtonU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryButtonU3Ek__BackingField_46)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CprimaryButtonU3Ek__BackingField_46() const { return ___U3CprimaryButtonU3Ek__BackingField_46; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CprimaryButtonU3Ek__BackingField_46() { return &___U3CprimaryButtonU3Ek__BackingField_46; }
	inline void set_U3CprimaryButtonU3Ek__BackingField_46(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CprimaryButtonU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryButtonU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryButtonU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryButtonU3Ek__BackingField_47)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CsecondaryButtonU3Ek__BackingField_47() const { return ___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CsecondaryButtonU3Ek__BackingField_47() { return &___U3CsecondaryButtonU3Ek__BackingField_47; }
	inline void set_U3CsecondaryButtonU3Ek__BackingField_47(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CsecondaryButtonU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryButtonU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CgripPressedU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CgripPressedU3Ek__BackingField_48)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CgripPressedU3Ek__BackingField_48() const { return ___U3CgripPressedU3Ek__BackingField_48; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CgripPressedU3Ek__BackingField_48() { return &___U3CgripPressedU3Ek__BackingField_48; }
	inline void set_U3CgripPressedU3Ek__BackingField_48(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CgripPressedU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgripPressedU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CstartU3Ek__BackingField_49)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CstartU3Ek__BackingField_49() const { return ___U3CstartU3Ek__BackingField_49; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CstartU3Ek__BackingField_49() { return &___U3CstartU3Ek__BackingField_49; }
	inline void set_U3CstartU3Ek__BackingField_49(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CstartU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstartU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickClickedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickClickedU3Ek__BackingField_50)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CthumbstickClickedU3Ek__BackingField_50() const { return ___U3CthumbstickClickedU3Ek__BackingField_50; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CthumbstickClickedU3Ek__BackingField_50() { return &___U3CthumbstickClickedU3Ek__BackingField_50; }
	inline void set_U3CthumbstickClickedU3Ek__BackingField_50(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CthumbstickClickedU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickClickedU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprimaryTouchedU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CprimaryTouchedU3Ek__BackingField_51)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CprimaryTouchedU3Ek__BackingField_51() const { return ___U3CprimaryTouchedU3Ek__BackingField_51; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CprimaryTouchedU3Ek__BackingField_51() { return &___U3CprimaryTouchedU3Ek__BackingField_51; }
	inline void set_U3CprimaryTouchedU3Ek__BackingField_51(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CprimaryTouchedU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprimaryTouchedU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondaryTouchedU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CsecondaryTouchedU3Ek__BackingField_52)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CsecondaryTouchedU3Ek__BackingField_52() const { return ___U3CsecondaryTouchedU3Ek__BackingField_52; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CsecondaryTouchedU3Ek__BackingField_52() { return &___U3CsecondaryTouchedU3Ek__BackingField_52; }
	inline void set_U3CsecondaryTouchedU3Ek__BackingField_52(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CsecondaryTouchedU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondaryTouchedU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerTouchedU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerTouchedU3Ek__BackingField_53)); }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * get_U3CtriggerTouchedU3Ek__BackingField_53() const { return ___U3CtriggerTouchedU3Ek__BackingField_53; }
	inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 ** get_address_of_U3CtriggerTouchedU3Ek__BackingField_53() { return &___U3CtriggerTouchedU3Ek__BackingField_53; }
	inline void set_U3CtriggerTouchedU3Ek__BackingField_53(AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * value)
	{
		___U3CtriggerTouchedU3Ek__BackingField_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerTouchedU3Ek__BackingField_53), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriggerPressedU3Ek__BackingField_54() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtriggerPressedU3Ek__BackingField_54)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CtriggerPressedU3Ek__BackingField_54() const { return ___U3CtriggerPressedU3Ek__BackingField_54; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CtriggerPressedU3Ek__BackingField_54() { return &___U3CtriggerPressedU3Ek__BackingField_54; }
	inline void set_U3CtriggerPressedU3Ek__BackingField_54(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CtriggerPressedU3Ek__BackingField_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtriggerPressedU3Ek__BackingField_54), (void*)value);
	}

	inline static int32_t get_offset_of_U3CthumbstickTouchedU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CthumbstickTouchedU3Ek__BackingField_55)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CthumbstickTouchedU3Ek__BackingField_55() const { return ___U3CthumbstickTouchedU3Ek__BackingField_55; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CthumbstickTouchedU3Ek__BackingField_55() { return &___U3CthumbstickTouchedU3Ek__BackingField_55; }
	inline void set_U3CthumbstickTouchedU3Ek__BackingField_55(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CthumbstickTouchedU3Ek__BackingField_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CthumbstickTouchedU3Ek__BackingField_55), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CtrackingStateU3Ek__BackingField_56)); }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * get_U3CtrackingStateU3Ek__BackingField_56() const { return ___U3CtrackingStateU3Ek__BackingField_56; }
	inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 ** get_address_of_U3CtrackingStateU3Ek__BackingField_56() { return &___U3CtrackingStateU3Ek__BackingField_56; }
	inline void set_U3CtrackingStateU3Ek__BackingField_56(IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * value)
	{
		___U3CtrackingStateU3Ek__BackingField_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackingStateU3Ek__BackingField_56), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CisTrackedU3Ek__BackingField_57)); }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * get_U3CisTrackedU3Ek__BackingField_57() const { return ___U3CisTrackedU3Ek__BackingField_57; }
	inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D ** get_address_of_U3CisTrackedU3Ek__BackingField_57() { return &___U3CisTrackedU3Ek__BackingField_57; }
	inline void set_U3CisTrackedU3Ek__BackingField_57(ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * value)
	{
		___U3CisTrackedU3Ek__BackingField_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CisTrackedU3Ek__BackingField_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdevicePositionU3Ek__BackingField_58)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdevicePositionU3Ek__BackingField_58() const { return ___U3CdevicePositionU3Ek__BackingField_58; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdevicePositionU3Ek__BackingField_58() { return &___U3CdevicePositionU3Ek__BackingField_58; }
	inline void set_U3CdevicePositionU3Ek__BackingField_58(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_58), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceRotationU3Ek__BackingField_59)); }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * get_U3CdeviceRotationU3Ek__BackingField_59() const { return ___U3CdeviceRotationU3Ek__BackingField_59; }
	inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF ** get_address_of_U3CdeviceRotationU3Ek__BackingField_59() { return &___U3CdeviceRotationU3Ek__BackingField_59; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_59(QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceVelocityU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceVelocityU3Ek__BackingField_60)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceVelocityU3Ek__BackingField_60() const { return ___U3CdeviceVelocityU3Ek__BackingField_60; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceVelocityU3Ek__BackingField_60() { return &___U3CdeviceVelocityU3Ek__BackingField_60; }
	inline void set_U3CdeviceVelocityU3Ek__BackingField_60(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceVelocityU3Ek__BackingField_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceVelocityU3Ek__BackingField_60), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularVelocityU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularVelocityU3Ek__BackingField_61)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularVelocityU3Ek__BackingField_61() const { return ___U3CdeviceAngularVelocityU3Ek__BackingField_61; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularVelocityU3Ek__BackingField_61() { return &___U3CdeviceAngularVelocityU3Ek__BackingField_61; }
	inline void set_U3CdeviceAngularVelocityU3Ek__BackingField_61(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularVelocityU3Ek__BackingField_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularVelocityU3Ek__BackingField_61), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAccelerationU3Ek__BackingField_62() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAccelerationU3Ek__BackingField_62)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAccelerationU3Ek__BackingField_62() const { return ___U3CdeviceAccelerationU3Ek__BackingField_62; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAccelerationU3Ek__BackingField_62() { return &___U3CdeviceAccelerationU3Ek__BackingField_62; }
	inline void set_U3CdeviceAccelerationU3Ek__BackingField_62(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAccelerationU3Ek__BackingField_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAccelerationU3Ek__BackingField_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceAngularAccelerationU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA, ___U3CdeviceAngularAccelerationU3Ek__BackingField_63)); }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * get_U3CdeviceAngularAccelerationU3Ek__BackingField_63() const { return ___U3CdeviceAngularAccelerationU3Ek__BackingField_63; }
	inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 ** get_address_of_U3CdeviceAngularAccelerationU3Ek__BackingField_63() { return &___U3CdeviceAngularAccelerationU3Ek__BackingField_63; }
	inline void set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * value)
	{
		___U3CdeviceAngularAccelerationU3Ek__BackingField_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceAngularAccelerationU3Ek__BackingField_63), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_gshared (Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 * __this, InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared (IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_mCD062B7F199BC71E2D85F96A88BB685D4BC7CEC6 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_mA398263DB3BAAFBA64A237047652CD82B4A1A3A8 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_mB663A5312611C17F8BF918B374D04237A3DCD158 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_m73127EA45937C5B718A76B98BB69642F7B1C32B1 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mCCA4CD6429055D0B9C2A65FB171FA80C0326E1C6 (bool ___active0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_mFFDA66F439F480B4A39540855FFF1967972DEFC0 (XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector2Control>(System.String)
inline Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5 (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m887549F33A943CF1C77E5B05BDF2D00BF5F6CC41_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35 (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_mA29AFA3FD7CEDDFB8035775F27A0AEDF98A9E8BE_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m9F6785362385F538F9876DD852FF24A80C9758DF_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_mC94B5269528B2737BB0A16BA50D36DB1FE553A03_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_mA585D04216F68BDA5D11FA9B0EEEDFAB0ABB3CC1_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m5C5DB48C2CEE53DA919A0889D6D1C3366DF016B3_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_m0D7A8AC6B8A470104CB504959489165369FC09AC_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mCDA07327F236CF2DD5932FFDD8510D684FA897E2_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388 (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_mB997A9C72DEEC92A371CA494EBD077882807AB5F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760 (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * (*) (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_mC6800DD22032F00D2855C5BCB6CEA00ABD4DDFEC_gshared)(__this, ___path0, method);
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_mD6A04EAB3BE928840F79FC972FBB6C828F397482_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4BEB85FB4601776FC4747878B9EBE9F4663D4A44_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m295DAFC38493C6640CFBEFA3D692947EB9A55B60_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_m9E32ABDDB00F30A1F35F40169B7802A0349DD52D_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController__ctor_m9773B8AC2533E5B7EC242E048F1B64EDB843C8B8 (XRController_t54F264B6E8ECCD1875DA99199413F61E236D8326 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_m1AFABF019EE07BA1F6AB434199AE2CD979F27AFC (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m1E40698CF0B4DB3FFA31C2F87BB871619E4C4559 (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m3989D9C38A25C39FE9BC6683D4963E633292B6AA (const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithInterface(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC (InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628 (InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(!0)
inline void Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6 (Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 * __this, InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 *, InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D , const RuntimeMethod*))Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMD>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m03B79F96B81D01E4D7C34B0FE87D3580DAB8EF52 (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTouchController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m998C28D6853D14A844D784B740CC653877FF46A7 (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusRemote>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_m17387CF8F66BC1197C2E562D28F947697DD04AEB (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusTrackingReference>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mC73BC86947F549D073E0CFC6D5E8FECAFBD4A887 (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusGoController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mC801AF0703045ACAABA6CDA29ECE0CF5F6266FEF (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.OculusHMDExtended>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m64AEB2AA901864D7811576D5F90D631F28FF40D6 (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<Unity.XR.Oculus.Input.GearVRTrackedController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m4CB1EB0F8177DECCEF4D0D81A92B35D56DF5DD5F (String_t* ___name0, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 , const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_mFF163D385F309BAEC4EE7450258348F0713A2C30_gshared)(___name0, ___matches1, method);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mE2B0E57530BD0DFCC778010D5EF5E67811CB8740 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_mAD7AB5A2E12D0B98C0E480BA6E9C3ED206CE75FC (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_mAABD29961F077001A663B967E53C99366B404AFA (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m542A72E249F24C8864DBB80C5DE73824F38DED51 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_m6AFC2110C10BE2BEFB4810BDA1918BD69152EC4F (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_mF7DE5D120F210D7035ED18468EECA3FBCBFFD0F1 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_m96F21D40C9662AE4741E49C47171724094B5BDD7 (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m572190DA771E86754C007422F7B812518AFEBB1C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m26759A5A3917F1F2616FFA8B80164D26C5660417 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_mE1DC02724DAFE34B6935CC06465969D620091AEB (bool ___enable0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_mB4C0BE5F8A3B5AFC6BF4D8DB989809A3AF4970E9 (bool ___active0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_m050EE50FA50DD52C1961A39CDA5E0067F77F9A2D (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m84C781B88D776100AF8EA9A2C530AB23D7A140C4 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m8B5A231F06907527D3831B6CF407EBF913B40899 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mCFCB9FACCD97E66D5D2367B2C9F2AE27F5279740 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m9B55A9185E04AFF89D4C1727FD3754C0E7208604 (bool ___boundaryVisible0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m89CAAADB5EEE2EE7E40200F918E6F21BA64F3CE0 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_m40A6DFC053BEB7B8B31BAE72155709827CF3546D (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_mD7172D94C438165E1783785EFA1A26CA933EE15E (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_mB22232BC7B444EE5552214F670B741134DAF07C3 (float* ___refreshRate0, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_m3A339A530A6A798601F5592EA425719AA7D91740 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD_FinishSetup_m9EFCCB99ED0B777808EFF123335B78D11B68A6FA (XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m5B3AB58ABB2A7C3CBE75928729C8340A49572470_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m1063B035D0628C653CB20BB174BCE613903D0CEE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mEFD5C2D7308B25CE2F35B9D36E6ABDB3E4370531_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m8ACBD698119BE8FEA4132382F06D33AA22DD1969_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mF22284E4863CDE9C3641C37A8832ED48B230023A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m60BDB172457D23ED0CC97FD278A011BD8C7779B9_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m2C5776788794109AAAB27B166B0B7ED0CE0E1CB7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m6859C9341EA8D0C8BB28706AFE1EF839EA272E46_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m657A611DB087297C4E0ACB12C908EF4019508F0B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD93CA3EE294EE735574A037A1E04B1D1DCF884D1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m4D84C7484C5C4A8E86AEDC0B08D567BFFEA16A4D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_mFB616C726F6277A857F2845AC9BFD8128F71EA61_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mD067C2107201CFD372FD89CB862D99FC7187F92F_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m0BDDF077E770A7B7A5CB76745A7ACCE87DB1993A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m022D12A6665D3A65F4236B4513EBDCDB097E5CC1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0E2E4CC1A2E0CDA764F9B0ECAE5451353BACF5EE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mB0485D2A749FA27A9E139C694C6E362105EC76D7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m171C04141C93441065283871A55F365206A26FC4_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mFF17B749E0CB39408690E0821C4E8262388A9FD0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_mC26D217FBC85D7946529A600BA1C58608779648C_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mC949AC46AF92C80B6CE7CB411D38B70B7E0C7B6E_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m7BEB672230FAA224572FE372C290699F7F12780B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m0319043A4DD5F8F88D3C724B33FC4C90952023A8_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHMD__ctor_m3BF73BC75D0CA5110DFF488AECCF268A1A137E42 (XRHMD_t92534015B658392D6A49AFAA924E0B2394583C1A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_mBD982237A0344C8B2E071AF0A6C79E12DECEEE41_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB88FCD5705B4D6CAC0E91517E9BA663D83468B91_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method);
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_m85FD1B79B3C658BA7E36BAB3F08A445A9BC47091 (const RuntimeMethod* method);
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m0A1C2B1C3DB8AAD8FBDFDBAEB1AF34D888E38C0E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_mE10FBFBD931121263EAAF492EA1EF11266DBDCD1 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mB4D6C36CC23A21DD2D909F8F25F5390E87844808 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_m23C46D9C087E78A5406AB0F69B876B43B904ED56 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m9D11142346B51FE92251B5E0A80B307A2E3BE0A1 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8 (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared)(__this, method);
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_mAD824FC278BF51B61D9AEDB9330C05AA8DAE6F29 (String_t* ___ovrpPath0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00 (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_mE8ED47C205C5BA6483DE515B2454EC9704D89177 (InputControl_tEC322F9612E643CD72B7759D8542E56DE84F9713 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m42C42B3D3B3E2470D73A37F04A690EB316EF93E2_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m88480ED134E4BF9073D31212DD3E75BA8943D699_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m9CC86404B64D239F153DFF450A3A2F93CF026479_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mDB5D3D5A2C2D10A7C6FEFBFE01FC5597472EFA34 (InputDevice_t32674BAC770EE0590FA5023A70AE7D3B3AA9A154 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m685F2D7C7E6EDD9744D80E45F6959E1E01404735_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m84AC0AF5C7F3167852FE41F39B2F4B8D81F31687_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mBF70F83EC08B75743395D944FD6C87680C47B59C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m68F2B59801E4DFE873D9F3E5612E4E43E14CD9C1_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA1CFD14B6548499E98ED3046F92D63598A26DC46_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_mF341515B4438752A939FBE80A3DA871679A4F4B8_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2BEC39C0BBE39C6C062E3C1B000214001E408F3F_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m1F975365CF1A993AE21B1CF33E11956C0A3C08D6_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_mF4B4C55A984AD71CF8AFB489BC373EDC39C6EED5_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_m1DB71D1C35760287C2FF291192EB16F27CA5B98E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m17396ABD16684356EDA005EC2100923664B1BDC5_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mAF4F4DA008B4424E37263BF56F2631822968DD0B_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m081EBC9A4A2ED436135F4019A2767DBF93E4D4CA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_mD5B3B0CCEA7FB542E847E11618F37B31D4C0C138_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mB6FBB4565BE79FAD51379157F71F53F8BB6CFC7E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m3A5AC5C7A6EB37A088600D2E6D54F8A018D1510A_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mCF3C4CAF683B2CED74122F091711A66190B97C6E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m096FD36525B4E8A8B860AB532AF7E4F8F3E52ED4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_m343E96932C774D4E30B4CD6FA42A266AEB88CE8C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mA76B2C490A21661F19C48477A65F765FC6881DE1_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mC30539974E317B0A0485A0A516844DC2516C8010_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.XR.XRControllerWithRumble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRControllerWithRumble__ctor_m9454D4D19069B4D16CB8780530DF56F160B81ACD (XRControllerWithRumble_t6D1C6C09CE0707F7928E123DD9D56763E43ED970 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mC0971022F3CCBBDA85DB933934315FFCD2A934DB_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mAAAE66C97F811E8B52FEE278C04551920E9852A8_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m4F4AD1C8EC2F3C09E988BBD89E699370E1000C93_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m077092095138DDAC7CED0AFD974E585AB790AF2C_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared)(__this, ___usageName0, method);
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mA8094989FD7035BC63A901D1F37C11BA63D535A4 (int32_t ___cpuLevel0, const RuntimeMethod* method);
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_mC82166C62D4ED55DF02DF4155BF36C191586408F (int32_t ___gpuLevel0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2265E0B174AAE46BC33AC53561EB2BE0B568678E (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C (intptr_t ___source0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m26CA43E0934F895176B5D6F63F141F672E499A69 (float ___refreshRate0, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m74C7E35C4286B6FCAE589A4DA6A77C3485E8FBBB (float* ___refreshRate0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_m0C2F65DCC34710BBF513824247E201C86CCE9320 (const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_mA572B83D667827545CBE71CF309759132F6D1916 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_m02A2F3D2076ADEAE09DC5BBD0A82D687637F4FBF (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Byte>(!!0[],!!0)
inline int32_t Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, uint8_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint8_t, const RuntimeMethod*))Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09_gshared)(___array0, ___value1, method);
}
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4 (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D (List_1_t56455D217921470E52E7D33A1794256E31084DD8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  (*) (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::get_SubsystemDescriptor()
inline XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42 (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * (*) (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m17720E650E467036888C6716BD15BCB82C3BD30D_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879 (IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5 (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_m839CC3B0F5B263EAC0356438A6239237EB9C33E1 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m5AC60A7D71D1911EC68FECE443C545CB5B50A47A (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_mB23FAB38C8506B79F4F4A57F2CE197E5746108F1 (const RuntimeMethod* method);
// System.IntPtr Unity.XR.Oculus.NativeMethods::GetOvrJava()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::SetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetPropertyInt_mF6D7BD7C7CFD7E77CA56784655587E9F1B22F0CF (intptr_t ___java0, int32_t ___prop1, int32_t ___val2, const RuntimeMethod* method);
// System.Boolean Unity.XR.Oculus.NativeMethods::GetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetPropertyInt_m6A5BCC7777D6D0833EE44735D3287C3D753DF2F3 (intptr_t ___java0, int32_t ___propType1, int32_t* ___intVal2, const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___motionToPhoton0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___displayRefreshRate0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mF8E501239826798CFF71C22E3AD1EA923F6C0241 (bool ___enable0, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_m9663AC5E08C99D340FCFDE52B06732B6F1E40A2F (bool ___enable0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorScale(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorOffset(float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetOvrJava();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetIsSupportedDevice();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL LoadOVRPlugin(Il2CppChar*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnloadOVRPlugin();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetCPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetGPULevel(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_vrapi_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL vrapi_SetPropertyInt(intptr_t, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_vrapi_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL vrapi_GetPropertyInt(intptr_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetOVRPVersion(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnablePerfMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableAppMetrics(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDeveloperModeStrict(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppHasInputFocus();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryConfigured();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryDimensions(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetBoundaryVisible();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetBoundaryVisible(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetAppShouldQuit();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayAvailableFrequencies(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetDisplayFrequency(float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetDisplayFrequency(float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemHeadsetType();
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
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryConfigured_m8FBEC65C0BC9E230FDDA80A3FD91F8193A48A49E (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryConfigured();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryConfigured_mCD062B7F199BC71E2D85F96A88BB685D4BC7CEC6(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryDimensions_m4601053EDA83A707737071B1CD21B9DAF8ABF048 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = NativeMethods_GetBoundaryDimensions_mA398263DB3BAAFBA64A237047652CD82B4A1A3A8(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Boundary::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_GetBoundaryVisible_m67F88BB4656A753B2FA2F1BC90CDA8D34BD7B16B (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetBoundaryVisible();
		bool L_0;
		L_0 = NativeMethods_GetBoundaryVisible_mB663A5312611C17F8BF918B374D04237A3DCD158(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Boundary::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_SetBoundaryVisible_mD14E107E247501F3C86CA3A5320FAD5AFAC07285 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		NativeMethods_SetBoundaryVisible_m73127EA45937C5B718A76B98BB69642F7B1C32B1(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.Development::TrySetDeveloperMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_TrySetDeveloperMode_m85458C346BFE3AAD485C654BAE40006EA1943B2B (bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// s_CachedMode = active ? UserDeveloperModeSettingCache.UserSettingTrue : UserDeveloperModeSettingCache.UserSettingFalse;
		bool L_0 = ___active0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 2;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->set_s_CachedMode_0(G_B3_0);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStart_mB4D6C36CC23A21DD2D909F8F25F5390E87844808 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool enable = true;
		V_0 = (bool)1;
		// bool shouldOverride = false;
		V_1 = (bool)0;
		// if (s_CachedMode != UserDeveloperModeSettingCache.NoUserSettingCached)
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
		// enable = (s_CachedMode == UserDeveloperModeSettingCache.UserSettingTrue);
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_StaticFields*)il2cpp_codegen_static_fields_for(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var))->get_s_CachedMode_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		// }
		goto IL_0021;
	}

IL_0018:
	{
		// else if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// shouldOverride = true;
		V_1 = (bool)1;
	}

IL_0021:
	{
		// if (shouldOverride && !NativeMethods.SetDeveloperModeStrict(enable))
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = V_0;
		bool L_5;
		L_5 = NativeMethods_SetDeveloperModeStrict_mCCA4CD6429055D0B9C2A65FB171FA80C0326E1C6(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode on Start.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral9CA2736EB42A97B73E816FF8369ACA2005FA5AA2, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::OverrideDeveloperModeStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development_OverrideDeveloperModeStop_m23C46D9C087E78A5406AB0F69B876B43B904ED56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NativeMethods.SetDeveloperModeStrict(false))
		bool L_0;
		L_0 = NativeMethods_SetDeveloperModeStrict_mCCA4CD6429055D0B9C2A65FB171FA80C0326E1C6((bool)0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("Failed to set DeveloperMode to false on Stop.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6C095088ADD88C25A47E7BBE6A81D13C798F9E75, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Development::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Development__cctor_m3A9F332ACCD136BD0C49C2259704436329730CCF (const RuntimeMethod* method)
{
	{
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * GearVRTrackedController_get_touchpad_mCB2485CDD864A8CD8FAA56F009EDEFE58488B48F (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m887549F33A943CF1C77E5B05BDF2D00BF5F6CC41 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * GearVRTrackedController_get_trigger_m226232A1D0F1FAFF7D68502CD8D61FF81E58A3B2 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = __this->get_U3CtriggerU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_mA29AFA3FD7CEDDFB8035775F27A0AEDF98A9E8BE (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * GearVRTrackedController_get_back_mA8DF4617CEB87C8812561FD7331637663483AF2E (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CbackU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m9F6785362385F538F9876DD852FF24A80C9758DF (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * GearVRTrackedController_get_triggerPressed_mA38D3A5EA1C7CE9709FA03CCCEEAA5BDE46D6A9B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_mC94B5269528B2737BB0A16BA50D36DB1FE553A03 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * GearVRTrackedController_get_touchpadClicked_m030EF0BED82114ACBFA4E86D1CE626AB6E48877C (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CtouchpadClickedU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_mA585D04216F68BDA5D11FA9B0EEEDFAB0ABB3CC1 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * GearVRTrackedController_get_touchpadTouched_m5358AF3A547DDC381A43577A35F285568733B4D9 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CtouchpadTouchedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_touchpadTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m5C5DB48C2CEE53DA919A0889D6D1C3366DF016B3 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.GearVRTrackedController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * GearVRTrackedController_get_trackingState_m2ED7FD26076267ABFCBCCBF12C38C0F5530362D7 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_m0D7A8AC6B8A470104CB504959489165369FC09AC (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.GearVRTrackedController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * GearVRTrackedController_get_isTracked_m63B1266676EB164F45A003C6AAD6F14F87D5617A (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mCDA07327F236CF2DD5932FFDD8510D684FA897E2 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * GearVRTrackedController_get_devicePosition_mFDC2823EE1F09E343299C223AF8FD038E5F468E2 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_mB997A9C72DEEC92A371CA494EBD077882807AB5F (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * GearVRTrackedController_get_deviceRotation_mEB48246B55EF22C0344C6E06529A740278D1F1B3 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_mD6A04EAB3BE928840F79FC972FBB6C828F397482 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * GearVRTrackedController_get_deviceAngularVelocity_m16119A20FBFF46F1A3F25AE82C6CFCED38661C53 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4BEB85FB4601776FC4747878B9EBE9F4663D4A44 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * GearVRTrackedController_get_deviceAcceleration_mD80E13CD18442197514216C12A3CF38D693F6A67 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m295DAFC38493C6640CFBEFA3D692947EB9A55B60 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.GearVRTrackedController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * GearVRTrackedController_get_deviceAngularAcceleration_mEC0AD560CC513C8F560F51FEE0C1AFD48F053171 (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_m9E32ABDDB00F30A1F35F40169B7802A0349DD52D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController_FinishSetup_m435CA1B37517D6EA68D43DDBBC4A334C1B5F955D (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_mFFDA66F439F480B4A39540855FFF1967972DEFC0(__this, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		GearVRTrackedController_set_touchpad_m887549F33A943CF1C77E5B05BDF2D00BF5F6CC41_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		GearVRTrackedController_set_trigger_mA29AFA3FD7CEDDFB8035775F27A0AEDF98A9E8BE_inline(__this, L_1, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		GearVRTrackedController_set_back_m9F6785362385F538F9876DD852FF24A80C9758DF_inline(__this, L_2, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		GearVRTrackedController_set_triggerPressed_mC94B5269528B2737BB0A16BA50D36DB1FE553A03_inline(__this, L_3, /*hidden argument*/NULL);
		// touchpadClicked = GetChildControl<ButtonControl>("touchpadClicked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteralEDC78BA63A133C81FC2DD3E3CA7EC02E945F89CE, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadClicked_mA585D04216F68BDA5D11FA9B0EEEDFAB0ABB3CC1_inline(__this, L_4, /*hidden argument*/NULL);
		// touchpadTouched = GetChildControl<ButtonControl>("touchpadTouched");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteralB81B10F5CAB114184CB2AEC199DE4C618C7F57DB, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		GearVRTrackedController_set_touchpadTouched_m5C5DB48C2CEE53DA919A0889D6D1C3366DF016B3_inline(__this, L_5, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_6;
		L_6 = InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		GearVRTrackedController_set_trackingState_m0D7A8AC6B8A470104CB504959489165369FC09AC_inline(__this, L_6, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		GearVRTrackedController_set_isTracked_mCDA07327F236CF2DD5932FFDD8510D684FA897E2_inline(__this, L_7, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		GearVRTrackedController_set_devicePosition_mB997A9C72DEEC92A371CA494EBD077882807AB5F_inline(__this, L_8, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		GearVRTrackedController_set_deviceRotation_mD6A04EAB3BE928840F79FC972FBB6C828F397482_inline(__this, L_9, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularVelocity_m4BEB85FB4601776FC4747878B9EBE9F4663D4A44_inline(__this, L_10, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAcceleration_m295DAFC38493C6640CFBEFA3D692947EB9A55B60_inline(__this, L_11, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		GearVRTrackedController_set_deviceAngularAcceleration_m9E32ABDDB00F30A1F35F40169B7802A0349DD52D_inline(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.GearVRTrackedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, const RuntimeMethod* method)
{
	{
		XRController__ctor_m9773B8AC2533E5B7EC242E048F1B64EDB843C8B8(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusAcquired_m348DE596991FE2DA7DEA88BA8F13780497D9D082 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusAcquired(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusAcquired_m01A6C4ECBEE7CDBAAC0EC79BFDB2987E2778AD4A (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusAcquired_0()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::add_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_add_InputFocusLost_m3DCD55086E19AF2C342346DBC16E89705211300D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::remove_InputFocusLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_remove_InputFocusLost_mC8819F6D927E10668DC24A9EF01CA96786CAE0C4 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_address_of_InputFocusLost_1()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.XR.Oculus.InputFocus::get_hasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFocus_get_hasInputFocus_m1E40698CF0B4DB3FFA31C2F87BB871619E4C4559 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetHasInputFocus();
		bool L_0;
		L_0 = NativeMethods_GetHasInputFocus_m1AFABF019EE07BA1F6AB434199AE2CD979F27AFC(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus_Update_m0C2F65DCC34710BBF513824247E201C86CCE9320 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B4_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B8_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	{
		// bool appHasInputFocus = hasInputFocus;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InputFocus_get_hasInputFocus_m1E40698CF0B4DB3FFA31C2F87BB871619E4C4559(/*hidden argument*/NULL);
		// if (!appHasInputFocus && hadInputFocus)
		bool L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_2 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B4_0 = G_B1_0;
			goto IL_0020;
		}
	}
	{
		// if (InputFocusLost != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B4_0 = G_B2_0;
			goto IL_0020;
		}
	}
	{
		// InputFocusLost();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusLost_1();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_0020:
	{
		// if (appHasInputFocus && !hadInputFocus)
		bool L_5 = G_B4_0;
		G_B5_0 = L_5;
		if (!L_5)
		{
			G_B8_0 = L_5;
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		bool L_6 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_hadInputFocus_2();
		G_B6_0 = G_B5_0;
		if (L_6)
		{
			G_B8_0 = G_B5_0;
			goto IL_003b;
		}
	}
	{
		// if (InputFocusAcquired != null)
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		G_B7_0 = G_B6_0;
		if (!L_7)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		// InputFocusAcquired();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = ((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->get_InputFocusAcquired_0();
		NullCheck(L_8);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_8, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_003b:
	{
		// hadInputFocus = appHasInputFocus;
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		((InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_StaticFields*)il2cpp_codegen_static_fields_for(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var))->set_hadInputFocus_2(G_B8_0);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__ctor_m3EC50CAA3520F2BB04B7258680BD4B4081B9C9F3 (InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.InputFocus::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFocus__cctor_mB5CAF441D1915A73527AEA47B8A626198995F808 (const RuntimeMethod* method)
{
	{
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
// System.Void Unity.XR.Oculus.InputLayoutLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader__cctor_mEB9C6E6ACEBC87434BD30D50A79C2ACD95BBB7B2 (const RuntimeMethod* method)
{
	{
		// RegisterInputLayouts();
		InputLayoutLoader_RegisterInputLayouts_m3989D9C38A25C39FE9BC6683D4963E633292B6AA(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_m3989D9C38A25C39FE9BC6683D4963E633292B6AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m4CB1EB0F8177DECCEF4D0D81A92B35D56DF5DD5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mC801AF0703045ACAABA6CDA29ECE0CF5F6266FEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m64AEB2AA901864D7811576D5F90D631F28FF40D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m03B79F96B81D01E4D7C34B0FE87D3580DAB8EF52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_m17387CF8F66BC1197C2E562D28F947697DD04AEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m998C28D6853D14A844D784B740CC653877FF46A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mC73BC86947F549D073E0CFC6D5E8FECAFBD4A887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t2FDEA8E1D89B5563745EF4AF6E5EF13FB42CEBDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E18713BEC060441013BF24EEFF304074095168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// InputSystem.RegisterLayout<OculusHMD>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Rift)|^(Oculus Quest)|^(Oculus Go)"));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D ));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_1;
		L_1 = InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)L_0, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_2;
		L_2 = InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)(&V_0), _stringLiteral86986460D761FE23D8BB01FB96CFA1B151516AE3, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t2FDEA8E1D89B5563745EF4AF6E5EF13FB42CEBDC_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m03B79F96B81D01E4D7C34B0FE87D3580DAB8EF52((String_t*)NULL, L_3, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A_m03B79F96B81D01E4D7C34B0FE87D3580DAB8EF52_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTouchController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"(^(Oculus Touch Controller))|(^(Oculus Quest Controller))"));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * L_4 = (&V_0);
		il2cpp_codegen_initobj(L_4, sizeof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D ));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_5;
		L_5 = InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)L_4, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_6;
		L_6 = InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)(&V_0), _stringLiteralA2BD5C6F3FA74D0EF59EAFB5EDD968485F2F807C, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m998C28D6853D14A844D784B740CC653877FF46A7((String_t*)NULL, L_7, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA_m998C28D6853D14A844D784B740CC653877FF46A7_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusRemote>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"Oculus Remote"));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * L_8 = (&V_0);
		il2cpp_codegen_initobj(L_8, sizeof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D ));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_9;
		L_9 = InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)L_8, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_9;
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_10;
		L_10 = InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)(&V_0), _stringLiteralA7259D04FD257B3E588D4DDE5C297D07A9BF111B, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_m17387CF8F66BC1197C2E562D28F947697DD04AEB((String_t*)NULL, L_11, /*hidden argument*/InputSystem_RegisterLayout_TisOculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3_m17387CF8F66BC1197C2E562D28F947697DD04AEB_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusTrackingReference>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct(@"((Tracking Reference)|(^(Oculus Rift [a-zA-Z0-9]* \(Camera)))"));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * L_12 = (&V_0);
		il2cpp_codegen_initobj(L_12, sizeof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D ));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_13;
		L_13 = InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)L_12, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_13;
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_14;
		L_14 = InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)(&V_0), _stringLiteral07FB9B6025681C5CF07481693E1C2043EA488AFE, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mC73BC86947F549D073E0CFC6D5E8FECAFBD4A887((String_t*)NULL, L_15, /*hidden argument*/InputSystem_RegisterLayout_TisOculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807_mC73BC86947F549D073E0CFC6D5E8FECAFBD4A887_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusGoController>(
		//     matches: new InputDeviceMatcher()
		//         .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//         .WithProduct("^(Oculus Tracked Remote)"));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D * L_16 = (&V_0);
		il2cpp_codegen_initobj(L_16, sizeof(InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D ));
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_17;
		L_17 = InputDeviceMatcher_WithInterface_m4636A28F98C9ED7DFF4C191A749FC7636FC675BC((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)L_16, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, /*hidden argument*/NULL);
		V_0 = L_17;
		InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D  L_18;
		L_18 = InputDeviceMatcher_WithProduct_mA9FCB7C1AFCA540812127D89B09C729DD3BAE628((InputDeviceMatcher_t804477DFDED9A8F10019A02D2CFFE6B14A34156D *)(&V_0), _stringLiteralB5E18713BEC060441013BF24EEFF304074095168, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_mF6422A19FE1B0C3FD54F5F770EE2222005E879D6_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mC801AF0703045ACAABA6CDA29ECE0CF5F6266FEF((String_t*)NULL, L_19, /*hidden argument*/InputSystem_RegisterLayout_TisOculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B_mC801AF0703045ACAABA6CDA29ECE0CF5F6266FEF_RuntimeMethod_var);
		// InputSystem.RegisterLayout<OculusHMDExtended>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 ));
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_20 = V_1;
		InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m64AEB2AA901864D7811576D5F90D631F28FF40D6((String_t*)NULL, L_20, /*hidden argument*/InputSystem_RegisterLayout_TisOculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC_m64AEB2AA901864D7811576D5F90D631F28FF40D6_RuntimeMethod_var);
		// InputSystem.RegisterLayout<GearVRTrackedController>();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351 ));
		Nullable_1_t10491633641156B8BD30BCB224C79EA20DC60351  L_21 = V_1;
		InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m4CB1EB0F8177DECCEF4D0D81A92B35D56DF5DD5F((String_t*)NULL, L_21, /*hidden argument*/InputSystem_RegisterLayout_TisGearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D_m4CB1EB0F8177DECCEF4D0D81A92B35D56DF5DD5F_RuntimeMethod_var);
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
// System.Void Unity.XR.Oculus.NativeMethods::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorScale_m839CC3B0F5B263EAC0356438A6239237EB9C33E1 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorScale(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorScale_mE2B0E57530BD0DFCC778010D5EF5E67811CB8740(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetColorOffset_m5AC60A7D71D1911EC68FECE443C545CB5B50A47A (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		// Internal.SetColorOffset(x, y, z, w);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		Internal_SetColorOffset_mAD7AB5A2E12D0B98C0E480BA6E9C3ED206CE75FC(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Unity.XR.Oculus.NativeMethods::GetOvrJava()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetPropertyInt_mF6D7BD7C7CFD7E77CA56784655587E9F1B22F0CF (intptr_t ___java0, int32_t ___prop1, int32_t ___val2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetPropertyInt_m6A5BCC7777D6D0833EE44735D3287C3D753DF2F3 (intptr_t ___java0, int32_t ___propType1, int32_t* ___intVal2, const RuntimeMethod* method)
{
	{
		// intVal = -1;
		int32_t* L_0 = ___intVal2;
		*((int32_t*)L_0) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetIsSupportedDevice_mAC42154220C02086B481FC0DF307D0D06326D02B (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_LoadOVRPlugin_mAD824FC278BF51B61D9AEDB9330C05AA8DAE6F29 (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	{
		// return Internal.LoadOVRPlugin(ovrpPath);
		String_t* L_0 = ___ovrpPath0;
		bool L_1;
		L_1 = Internal_LoadOVRPlugin_mAABD29961F077001A663B967E53C99366B404AFA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_UnloadOVRPlugin_m9AA8F4B6832A25E858A0923F8905BED5B49B2B83 (const RuntimeMethod* method)
{
	{
		// Internal.UnloadOVRPlugin();
		Internal_UnloadOVRPlugin_m542A72E249F24C8864DBB80C5DE73824F38DED51(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetUserDefinedSettings_m0A1C2B1C3DB8AAD8FBDFDBAEB1AF34D888E38C0E (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	{
		// Internal.SetUserDefinedSettings(settings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_0 = ___settings0;
		Internal_SetUserDefinedSettings_m6AFC2110C10BE2BEFB4810BDA1918BD69152EC4F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetCPULevel_mA8094989FD7035BC63A901D1F37C11BA63D535A4 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	{
		// return Internal.SetCPULevel(cpuLevel);
		int32_t L_0 = ___cpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetCPULevel_mF7DE5D120F210D7035ED18468EECA3FBCBFFD0F1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.XR.Oculus.NativeMethods::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_SetGPULevel_mC82166C62D4ED55DF02DF4155BF36C191586408F (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	{
		// return Internal.SetGPULevel(gpuLevel);
		int32_t L_0 = ___gpuLevel0;
		int32_t L_1;
		L_1 = Internal_SetGPULevel_m96F21D40C9662AE4741E49C47171724094B5BDD7(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_GetOVRPVersion_m02A2F3D2076ADEAE09DC5BBD0A82D687637F4FBF (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	{
		// Internal.GetOVRPVersion(version);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___version0;
		Internal_GetOVRPVersion_m572190DA771E86754C007422F7B812518AFEBB1C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnablePerfMetrics_m9663AC5E08C99D340FCFDE52B06732B6F1E40A2F (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnablePerfMetrics_m26759A5A3917F1F2616FFA8B80164D26C5660417(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_EnableAppMetrics_mF8E501239826798CFF71C22E3AD1EA923F6C0241 (bool ___enable0, const RuntimeMethod* method)
{
	{
		// Internal.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		Internal_EnableAppMetrics_mE1DC02724DAFE34B6935CC06465969D620091AEB(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDeveloperModeStrict_mCCA4CD6429055D0B9C2A65FB171FA80C0326E1C6 (bool ___active0, const RuntimeMethod* method)
{
	{
		// return Internal.SetDeveloperModeStrict(active);
		bool L_0 = ___active0;
		bool L_1;
		L_1 = Internal_SetDeveloperModeStrict_mB4C0BE5F8A3B5AFC6BF4D8DB989809A3AF4970E9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetHasInputFocus_m1AFABF019EE07BA1F6AB434199AE2CD979F27AFC (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppHasInputFocus();
		bool L_0;
		L_0 = Internal_GetAppHasInputFocus_m050EE50FA50DD52C1961A39CDA5E0067F77F9A2D(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryConfigured_mCD062B7F199BC71E2D85F96A88BB685D4BC7CEC6 (const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryConfigured();
		bool L_0;
		L_0 = Internal_GetBoundaryConfigured_m84C781B88D776100AF8EA9A2C530AB23D7A140C4(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryDimensions_mA398263DB3BAAFBA64A237047652CD82B4A1A3A8 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryDimensions(boundaryType, out dimensions);
		int32_t L_0 = ___boundaryType0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___dimensions1;
		bool L_2;
		L_2 = Internal_GetBoundaryDimensions_m8B5A231F06907527D3831B6CF407EBF913B40899(L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetBoundaryVisible_mB663A5312611C17F8BF918B374D04237A3DCD158 (const RuntimeMethod* method)
{
	{
		// return Internal.GetBoundaryVisible();
		bool L_0;
		L_0 = Internal_GetBoundaryVisible_mCFCB9FACCD97E66D5D2367B2C9F2AE27F5279740(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.NativeMethods::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_SetBoundaryVisible_m73127EA45937C5B718A76B98BB69642F7B1C32B1 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	{
		// Internal.SetBoundaryVisible(boundaryVisible);
		bool L_0 = ___boundaryVisible0;
		Internal_SetBoundaryVisible_m9B55A9185E04AFF89D4C1727FD3754C0E7208604(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetAppShouldQuit_mA572B83D667827545CBE71CF309759132F6D1916 (const RuntimeMethod* method)
{
	{
		// return Internal.GetAppShouldQuit();
		bool L_0;
		L_0 = Internal_GetAppShouldQuit_m89CAAADB5EEE2EE7E40200F918E6F21BA64F3CE0(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayAvailableFrequencies_m2265E0B174AAE46BC33AC53561EB2BE0B568678E (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	{
		// return Internal.GetDisplayAvailableFrequencies(ptr, ref numFrequencies);
		intptr_t L_0 = ___ptr0;
		int32_t* L_1 = ___numFrequencies1;
		bool L_2;
		L_2 = Internal_GetDisplayAvailableFrequencies_m40A6DFC053BEB7B8B31BAE72155709827CF3546D((intptr_t)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_SetDisplayFrequency_m26CA43E0934F895176B5D6F63F141F672E499A69 (float ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return Internal.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_SetDisplayFrequency_mD7172D94C438165E1783785EFA1A26CA933EE15E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.NativeMethods::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_GetDisplayFrequency_m74C7E35C4286B6FCAE589A4DA6A77C3485E8FBBB (float* ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return Internal.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = Internal_GetDisplayFrequency_mB22232BC7B444EE5552214F670B741134DAF07C3((float*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_GetSystemHeadsetType_mB23FAB38C8506B79F4F4A57F2CE197E5746108F1 (const RuntimeMethod* method)
{
	{
		// return Internal.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = Internal_GetSystemHeadsetType_m3A339A530A6A798601F5592EA425719AA7D91740(/*hidden argument*/NULL);
		return L_0;
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
// System.Void Unity.XR.Oculus.Input.OculusGoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusGoController__ctor_mA08B0DA17D85ACD7166DE362B280B0E019F02719 (OculusGoController_tE3AB6FC9374A8DB24CFA9AB6592CB6235F6AB21B * __this, const RuntimeMethod* method)
{
	{
		GearVRTrackedController__ctor_m35059DBECC8470F3A2695CF33528C805722D6B6B(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_userPresence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusHMD_get_userPresence_mE42E90B5ACB895B3A8D461D61332AF64D715525D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CuserPresenceU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_userPresence(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m5B3AB58ABB2A7C3CBE75928729C8340A49572470 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusHMD::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * OculusHMD_get_trackingState_m5206B3005DD428178EDC6DBE6640B41E1FA688E2 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m1063B035D0628C653CB20BB174BCE613903D0CEE (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMD::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusHMD_get_isTracked_m89565431D7B6EDDAC21B3CF63DF0A06D17CD5BBE (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mEFD5C2D7308B25CE2F35B9D36E6ABDB3E4370531 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_devicePosition_m564E790026F2AE05203A64CDB918DF884EECC027 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m8ACBD698119BE8FEA4132382F06D33AA22DD1969 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusHMD_get_deviceRotation_mA28B557A050DA70FBB106D9949648951B9FFF5D4 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mF22284E4863CDE9C3641C37A8832ED48B230023A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_deviceAngularVelocity_m3FCE30AEB4766A1F3796703ECA5FC58279FDF4A2 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m60BDB172457D23ED0CC97FD278A011BD8C7779B9 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_deviceAcceleration_m2D7E511515A3B34447B742F4BD1B7289CAED41BF (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m2C5776788794109AAAB27B166B0B7ED0CE0E1CB7 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_deviceAngularAcceleration_m3EDDD7A9EDC109259095AAE72A759FBF28A4D412 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m6859C9341EA8D0C8BB28706AFE1EF839EA272E46 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_leftEyePosition_mB213FD020E43080BF783EA02DB9985BB888C9C4B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CleftEyePositionU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m657A611DB087297C4E0ACB12C908EF4019508F0B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_leftEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusHMD_get_leftEyeRotation_mF3BFF5AD58DBEB6816E2BE8AD447FBDDD9F62479 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CleftEyeRotationU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD93CA3EE294EE735574A037A1E04B1D1DCF884D1 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_leftEyeAngularVelocity_m2F6F0434955C14DD4CE1DB0AF940CA99106121FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CleftEyeAngularVelocityU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m4D84C7484C5C4A8E86AEDC0B08D567BFFEA16A4D (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_leftEyeAcceleration_mACFDFE453F63C18E5FA884CA09946D9EE1A212BD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CleftEyeAccelerationU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_mFB616C726F6277A857F2845AC9BFD8128F71EA61 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_leftEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_leftEyeAngularAcceleration_m8325C86FDD0B66BCCBFE07893A18F9038ED4D897 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CleftEyeAngularAccelerationU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_leftEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mD067C2107201CFD372FD89CB862D99FC7187F92F (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_rightEyePosition_mE438FE278A3F1C9B25639338D9472465274766B3 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CrightEyePositionU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m0BDDF077E770A7B7A5CB76745A7ACCE87DB1993A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_rightEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusHMD_get_rightEyeRotation_m2C88E295929CB48469D4C559B84D9B83A1C5A7A6 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CrightEyeRotationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m022D12A6665D3A65F4236B4513EBDCDB097E5CC1 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_rightEyeAngularVelocity_mB8B949C851573AFDF1EC11494647E4E3E4E30673 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CrightEyeAngularVelocityU3Ek__BackingField_64();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0E2E4CC1A2E0CDA764F9B0ECAE5451353BACF5EE (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_rightEyeAcceleration_m042591926D99007628E40B4D199E06A37274B9F6 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CrightEyeAccelerationU3Ek__BackingField_65();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mB0485D2A749FA27A9E139C694C6E362105EC76D7 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_rightEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_rightEyeAngularAcceleration_m0C5D76FADA5A31E97EC7FED9005AF1C0A10E774A (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CrightEyeAngularAccelerationU3Ek__BackingField_66();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_rightEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m171C04141C93441065283871A55F365206A26FC4 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_centerEyePosition_m4B8391824D927E68B02DDE253C89903D876875C0 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CcenterEyePositionU3Ek__BackingField_67();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mFF17B749E0CB39408690E0821C4E8262388A9FD0 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusHMD::get_centerEyeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusHMD_get_centerEyeRotation_m4F058A243CF47A840FA86405DBB1A1E5CA2A92FB (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CcenterEyeRotationU3Ek__BackingField_68();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_mC26D217FBC85D7946529A600BA1C58608779648C (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_centerEyeAngularVelocity_m5A771AC2FDE8BE7AC48A6382260E8BA86F1C5169 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CcenterEyeAngularVelocityU3Ek__BackingField_69();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mC949AC46AF92C80B6CE7CB411D38B70B7E0C7B6E (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_centerEyeAcceleration_m9B370C1256E01A62454D0015A5EF3E824CD9ADB1 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CcenterEyeAccelerationU3Ek__BackingField_70();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m7BEB672230FAA224572FE372C290699F7F12780B (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusHMD::get_centerEyeAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusHMD_get_centerEyeAngularAcceleration_m87FFB881EAF365D3CAF7C0B363E4B5E291CEA83F (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::set_centerEyeAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m0319043A4DD5F8F88D3C724B33FC4C90952023A8 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796 (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral791956718283C9837F3ED95D7886E3C88855114B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRHMD_FinishSetup_m9EFCCB99ED0B777808EFF123335B78D11B68A6FA(__this, /*hidden argument*/NULL);
		// userPresence = GetChildControl<ButtonControl>("userPresence");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteralC49271934571B500FDC497EFB8A9FA5650E48B32, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusHMD_set_userPresence_m5B3AB58ABB2A7C3CBE75928729C8340A49572470_inline(__this, L_0, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_1;
		L_1 = InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		OculusHMD_set_trackingState_m1063B035D0628C653CB20BB174BCE613903D0CEE_inline(__this, L_1, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusHMD_set_isTracked_mEFD5C2D7308B25CE2F35B9D36E6ABDB3E4370531_inline(__this, L_2, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_3;
		L_3 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_devicePosition_m8ACBD698119BE8FEA4132382F06D33AA22DD1969_inline(__this, L_3, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_4;
		L_4 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusHMD_set_deviceRotation_mF22284E4863CDE9C3641C37A8832ED48B230023A_inline(__this, L_4, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_5;
		L_5 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_deviceAngularVelocity_m60BDB172457D23ED0CC97FD278A011BD8C7779B9_inline(__this, L_5, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_6;
		L_6 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_deviceAcceleration_m2C5776788794109AAAB27B166B0B7ED0CE0E1CB7_inline(__this, L_6, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_7;
		L_7 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_deviceAngularAcceleration_m6859C9341EA8D0C8BB28706AFE1EF839EA272E46_inline(__this, L_7, /*hidden argument*/NULL);
		// leftEyePosition = GetChildControl<Vector3Control>("leftEyePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_8;
		L_8 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral40F58D79BFB7F12C0766FBC616821E1891152822, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_leftEyePosition_m657A611DB087297C4E0ACB12C908EF4019508F0B_inline(__this, L_8, /*hidden argument*/NULL);
		// leftEyeRotation = GetChildControl<QuaternionControl>("leftEyeRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_9;
		L_9 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteralCC0836D648D015EDCC6EE9D171A855190052F97A, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusHMD_set_leftEyeRotation_mD93CA3EE294EE735574A037A1E04B1D1DCF884D1_inline(__this, L_9, /*hidden argument*/NULL);
		// leftEyeAngularVelocity = GetChildControl<Vector3Control>("leftEyeAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_10;
		L_10 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral2C43BA5A481CBEF412DB695717FC94453B3769F6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularVelocity_m4D84C7484C5C4A8E86AEDC0B08D567BFFEA16A4D_inline(__this, L_10, /*hidden argument*/NULL);
		// leftEyeAcceleration = GetChildControl<Vector3Control>("leftEyeAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_11;
		L_11 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_leftEyeAcceleration_mFB616C726F6277A857F2845AC9BFD8128F71EA61_inline(__this, L_11, /*hidden argument*/NULL);
		// leftEyeAngularAcceleration = GetChildControl<Vector3Control>("leftEyeAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_12;
		L_12 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_leftEyeAngularAcceleration_mD067C2107201CFD372FD89CB862D99FC7187F92F_inline(__this, L_12, /*hidden argument*/NULL);
		// rightEyePosition = GetChildControl<Vector3Control>("rightEyePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_13;
		L_13 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral100A996F2433F52193B5EFF823ACE8663FC5C8C6, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_rightEyePosition_m0BDDF077E770A7B7A5CB76745A7ACCE87DB1993A_inline(__this, L_13, /*hidden argument*/NULL);
		// rightEyeRotation = GetChildControl<QuaternionControl>("rightEyeRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_14;
		L_14 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteral6F2A85EC8DA913664B5C83242F8C325DFB1BC03C, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusHMD_set_rightEyeRotation_m022D12A6665D3A65F4236B4513EBDCDB097E5CC1_inline(__this, L_14, /*hidden argument*/NULL);
		// rightEyeAngularVelocity = GetChildControl<Vector3Control>("rightEyeAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral24BA0B3EAF2D368DF4A667A3DA43E98A55602935, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularVelocity_m0E2E4CC1A2E0CDA764F9B0ECAE5451353BACF5EE_inline(__this, L_15, /*hidden argument*/NULL);
		// rightEyeAcceleration = GetChildControl<Vector3Control>("rightEyeAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_16;
		L_16 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_rightEyeAcceleration_mB0485D2A749FA27A9E139C694C6E362105EC76D7_inline(__this, L_16, /*hidden argument*/NULL);
		// rightEyeAngularAcceleration = GetChildControl<Vector3Control>("rightEyeAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_rightEyeAngularAcceleration_m171C04141C93441065283871A55F365206A26FC4_inline(__this, L_17, /*hidden argument*/NULL);
		// centerEyePosition = GetChildControl<Vector3Control>("centerEyePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral791956718283C9837F3ED95D7886E3C88855114B, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_centerEyePosition_mFF17B749E0CB39408690E0821C4E8262388A9FD0_inline(__this, L_18, /*hidden argument*/NULL);
		// centerEyeRotation = GetChildControl<QuaternionControl>("centerEyeRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_19;
		L_19 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteral494FAA0B659E3A69DCE4CE1C4EB20F594E2E641E, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusHMD_set_centerEyeRotation_mC26D217FBC85D7946529A600BA1C58608779648C_inline(__this, L_19, /*hidden argument*/NULL);
		// centerEyeAngularVelocity = GetChildControl<Vector3Control>("centerEyeAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral077AC4F37BECA7E305659A36FD4351A1A726D74E, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularVelocity_mC949AC46AF92C80B6CE7CB411D38B70B7E0C7B6E_inline(__this, L_20, /*hidden argument*/NULL);
		// centerEyeAcceleration = GetChildControl<Vector3Control>("centerEyeAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_21;
		L_21 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_centerEyeAcceleration_m7BEB672230FAA224572FE372C290699F7F12780B_inline(__this, L_21, /*hidden argument*/NULL);
		// centerEyeAngularAcceleration = GetChildControl<Vector3Control>("centerEyeAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_22;
		L_22 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusHMD_set_centerEyeAngularAcceleration_m0319043A4DD5F8F88D3C724B33FC4C90952023A8_inline(__this, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, const RuntimeMethod* method)
{
	{
		XRHMD__ctor_m3BF73BC75D0CA5110DFF488AECCF268A1A137E42(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusHMDExtended::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusHMDExtended_get_back_m1E962381D3FA44FC71C7FB5FFA5F6B551666FC14 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CbackU3Ek__BackingField_72();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_mBD982237A0344C8B2E071AF0A6C79E12DECEEE41 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_72(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusHMDExtended::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * OculusHMDExtended_get_touchpad_mAA555CC251EE8C86902FACA0272666D3A4379281 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_73();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB88FCD5705B4D6CAC0E91517E9BA663D83468B91 (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_73(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended_FinishSetup_mA390A06FAC20D884C637738168848C44E5BBDD3C (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		OculusHMD_FinishSetup_m476E392C04F8BBB6E230BE6A37A90269820CA796(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusHMDExtended_set_back_mBD982237A0344C8B2E071AF0A6C79E12DECEEE41_inline(__this, L_0, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_1;
		L_1 = InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		OculusHMDExtended_set_touchpad_mB88FCD5705B4D6CAC0E91517E9BA663D83468B91_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusHMDExtended::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusHMDExtended__ctor_mB98D9DF9D7D27CD8EE8E72E0111C29E94D7FB64A (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, const RuntimeMethod* method)
{
	{
		OculusHMD__ctor_mE497EDF74203D170F59426A5FFA99DA118BA67FD(__this, /*hidden argument*/NULL);
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
// Unity.XR.Oculus.OculusLoader/DeviceSupportedResult Unity.XR.Oculus.OculusLoader::IsDeviceSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OculusLoader_IsDeviceSupported_m85FD1B79B3C658BA7E36BAB3F08A445A9BC47091 (const RuntimeMethod* method)
{
	{
		// return DeviceSupportedResult.Supported;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m6098CB15555B2E45C3BCAB9086012011CB382DAA_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_0;
		L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_mC98D5F7030C574A69D86EA429F90CF769106A5EB_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_m9F45EA7F9134BED3F23133D3B2A3467CF51B5561 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * V_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B5_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B6_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B8_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B9_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B11_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B12_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B14_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B15_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B17_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B18_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B20_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B19_0 = NULL;
	int32_t G_B21_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B21_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B23_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B24_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B26_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B27_1 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B29_0 = NULL;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D * G_B30_1 = NULL;
	{
		//             if (IsDeviceSupported() != DeviceSupportedResult.Supported
		// #if UNITY_EDITOR_WIN
		//                 || SystemInfo.graphicsDeviceType != GraphicsDeviceType.Direct3D11
		// #endif
		//             )
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = OculusLoader_IsDeviceSupported_m85FD1B79B3C658BA7E36BAB3F08A445A9BC47091(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// InputLayoutLoader.RegisterInputLayouts();
		IL2CPP_RUNTIME_CLASS_INIT(InputLayoutLoader_t49C5641FC147A26ECBF0BA4435702257FEC65EF8_il2cpp_TypeInfo_var);
		InputLayoutLoader_RegisterInputLayouts_m3989D9C38A25C39FE9BC6683D4963E633292B6AA(/*hidden argument*/NULL);
		// OculusSettings settings = GetSettings();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_1;
		L_1 = OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (settings != null)
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00e8;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_SharedDepthBuffer_6();
		G_B4_0 = (&V_1);
		if (L_5)
		{
			G_B5_0 = (&V_1);
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		G_B6_1->set_sharedDepthBuffer_0((uint16_t)((int32_t)((uint16_t)G_B6_0)));
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_DashSupport_7();
		G_B7_0 = (&V_1);
		if (L_7)
		{
			G_B8_0 = (&V_1);
			goto IL_0042;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_0043:
	{
		G_B9_1->set_dashSupport_1((uint16_t)((int32_t)((uint16_t)G_B9_0)));
		// userDefinedSettings.stereoRenderingMode = (ushort)settings.GetStereoRenderingMode();
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_8 = V_0;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD(L_8, /*hidden argument*/NULL);
		(&V_1)->set_stereoRenderingMode_2(L_9);
		// userDefinedSettings.colorSpace = (ushort)((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_10;
		L_10 = QualitySettings_get_activeColorSpace_m65BE7300D1A12D2981B492329B32673199CCE7F4(/*hidden argument*/NULL);
		G_B10_0 = (&V_1);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B11_0 = (&V_1);
			goto IL_0063;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_0064;
	}

IL_0063:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0064:
	{
		G_B12_1->set_colorSpace_3((uint16_t)((int32_t)((uint16_t)G_B12_0)));
		// userDefinedSettings.lowOverheadMode = (ushort)(settings.LowOverheadMode ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_LowOverheadMode_9();
		G_B13_0 = (&V_1);
		if (L_12)
		{
			G_B14_0 = (&V_1);
			goto IL_0077;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0078:
	{
		G_B15_1->set_lowOverheadMode_4((uint16_t)((int32_t)((uint16_t)G_B15_0)));
		// userDefinedSettings.protectedContext = (ushort)(settings.ProtectedContext ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = L_13->get_ProtectedContext_10();
		G_B16_0 = (&V_1);
		if (L_14)
		{
			G_B17_0 = (&V_1);
			goto IL_008b;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_008c;
	}

IL_008b:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_008c:
	{
		G_B18_1->set_protectedContext_5((uint16_t)((int32_t)((uint16_t)G_B18_0)));
		// userDefinedSettings.focusAware = (ushort)(settings.FocusAware ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = L_15->get_FocusAware_11();
		G_B19_0 = (&V_1);
		if (L_16)
		{
			G_B20_0 = (&V_1);
			goto IL_009f;
		}
	}
	{
		G_B21_0 = 0;
		G_B21_1 = G_B19_0;
		goto IL_00a0;
	}

IL_009f:
	{
		G_B21_0 = 1;
		G_B21_1 = G_B20_0;
	}

IL_00a0:
	{
		G_B21_1->set_focusAware_6((uint16_t)((int32_t)((uint16_t)G_B21_0)));
		// userDefinedSettings.optimizeBufferDiscards = (ushort)(settings.OptimizeBufferDiscards ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_17 = V_0;
		NullCheck(L_17);
		bool L_18 = L_17->get_OptimizeBufferDiscards_12();
		G_B22_0 = (&V_1);
		if (L_18)
		{
			G_B23_0 = (&V_1);
			goto IL_00b3;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B24_0 = 1;
		G_B24_1 = G_B23_0;
	}

IL_00b4:
	{
		G_B24_1->set_optimizeBufferDiscards_7((uint16_t)((int32_t)((uint16_t)G_B24_0)));
		// userDefinedSettings.phaseSync = (ushort)(settings.PhaseSync ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_PhaseSync_13();
		G_B25_0 = (&V_1);
		if (L_20)
		{
			G_B26_0 = (&V_1);
			goto IL_00c7;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_00c8;
	}

IL_00c7:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
	}

IL_00c8:
	{
		G_B27_1->set_phaseSync_8((uint16_t)((int32_t)((uint16_t)G_B27_0)));
		// userDefinedSettings.subsampledLayout = (ushort)(settings.SubsampledLayout ? 1 : 0);
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_21 = V_0;
		NullCheck(L_21);
		bool L_22 = L_21->get_SubsampledLayout_14();
		G_B28_0 = (&V_1);
		if (L_22)
		{
			G_B29_0 = (&V_1);
			goto IL_00db;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_00dc;
	}

IL_00db:
	{
		G_B30_0 = 1;
		G_B30_1 = G_B29_0;
	}

IL_00dc:
	{
		G_B30_1->set_subsampledLayout_9((uint16_t)((int32_t)((uint16_t)G_B30_0)));
		// NativeMethods.SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  L_23 = V_1;
		NativeMethods_SetUserDefinedSettings_m0A1C2B1C3DB8AAD8FBDFDBAEB1AF34D888E38C0E(L_23, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_24 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_DisplaySubsystemDescriptors_5();
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF(__this, L_24, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m2674D41E2C5D7DE045BEF6EDE661A9A0767A99FF_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_25 = ((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->get_s_InputSubsystemDescriptors_6();
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56(__this, L_25, _stringLiteral71D87D03368ADC0E5018E85E30CA4984F5FF2AA8, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m69A4EA17370FA4464CCE4BEAD83D5E0D47AADB56_RuntimeMethod_var);
		// if (displaySubsystem == null && inputSubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_26;
		L_26 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0124;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_27;
		L_27 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0124;
		}
	}
	{
		// Debug.LogWarning("Unable to start Oculus XR Plugin.\n" +
		//                  "Possible causes include a headset not being attached, or the Oculus runtime is not installed or up to date.\n" +
		//                  "If you've recently installed or updated the Oculus runtime, you may need to reboot or close Unity and the Unity Hub and try again.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralCD3DD4C1241990E3D05C7BE7560D9E9C10B9D7A5, /*hidden argument*/NULL);
		// }
		goto IL_0151;
	}

IL_0124:
	{
		// else if (displaySubsystem == null)
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_28;
		L_28 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_0138;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load display subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral50B8349DC34E14AB475F3453803BCDBD9F3B0F85, /*hidden argument*/NULL);
		// }
		goto IL_0151;
	}

IL_0138:
	{
		// else if (inputSubsystem == null)
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_29;
		L_29 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_014c;
		}
	}
	{
		// Debug.LogError("Unable to start Oculus XR Plugin. Failed to load input subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral271AF6878EC3872B415EA8A73A1433E4B604ACDF, /*hidden argument*/NULL);
		// }
		goto IL_0151;
	}

IL_014c:
	{
		// RegisterUpdateCallback.Initialize();
		RegisterUpdateCallback_Initialize_mE10FBFBD931121263EAAF492EA1EF11266DBDCD1(/*hidden argument*/NULL);
	}

IL_0151:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_30;
		L_30 = OculusLoader_get_displaySubsystem_mE2C42E00522835401105B4A163E0768AA433E71A(__this, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0163;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_31;
		L_31 = OculusLoader_get_inputSubsystem_m8E87DAAF3BB44B2F3945232518EAF6862E9D1B95(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)L_31) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0163:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_m48219B334C6D430348D0A6CE4B0BB8E9493E29F5 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF935C6C4671BBBEA57D48C65DE73B9D27EB611D7_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m243694C799C58C0396A563991537B952A5B48F98_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStart();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStart_mB4D6C36CC23A21DD2D909F8F25F5390E87844808(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_m096A1F5907CFA0315161CDE8C28F889CC1709482 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m8145C9418422BD4F45DBBF37D028DDD2F1A6F7AD_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m530AFB9035AAA37796915EEB42C678B7A7F39686_RuntimeMethod_var);
		// Development.OverrideDeveloperModeStop();
		IL2CPP_RUNTIME_CLASS_INIT(Development_tA129FDAF1ED9C6CD39F6763C69E5B33AE4C41D83_il2cpp_TypeInfo_var);
		Development_OverrideDeveloperModeStop_m23C46D9C087E78A5406AB0F69B876B43B904ED56(/*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_m1DBBE6B4710416D0793C6869DC3C17656431599F (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterUpdateCallback.Deinitialize();
		RegisterUpdateCallback_Deinitialize_m9D11142346B51FE92251B5E0A80B307A2E3BE0A1(/*hidden argument*/NULL);
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_m7AE6139F914F84F8A7AA30CC70F6A01A757E1BE3_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_m3724DC2747A9C6A68F78041E6FA78F6AC5CB39C8_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::RuntimeLoadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_RuntimeLoadOVRPlugin_mF8A58BE91FBA096ACC3D3EFEDA942A89DC485353 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (!NativeMethods.LoadOVRPlugin(""))
			bool L_0;
			L_0 = NativeMethods_LoadOVRPlugin_mAD824FC278BF51B61D9AEDB9330C05AA8DAE6F29(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (L_0)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			// Debug.LogError("Failed to load OVRPlugin.dll");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral79107CD3BE0F3FC64B9E61F6ED6F8C2C75548D4F, /*hidden argument*/NULL);
		}

IL_0016:
		{
			// }
			goto IL_001b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Object)
		// catch
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	} // end catch (depth: 1)

IL_001b:
	{
		// }
		return;
	}
}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_18();
		// return settings;
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_mF6A80167D63792923ADC3AB04D39BC1D0B3EB360 (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mD27E0396EC4B11E208CF891642475B496CADAC9B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_mCF809464B49E356A97B3716F68122B75F60CE2F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 * L_0 = (List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048 *)il2cpp_codegen_object_new(List_1_t1BC024192EE6F54EADD3239A60DB2A4A0B4B5048_il2cpp_TypeInfo_var);
		List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00(L_0, /*hidden argument*/List_1__ctor_mF19C6A53B3B3B3BE0F1915716886E25C49467F00_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_DisplaySubsystemDescriptors_5(L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 * L_1 = (List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0 *)il2cpp_codegen_object_new(List_1_t885BD663DFFEB6C32E74934BE1CE00D566657BA0_il2cpp_TypeInfo_var);
		List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB(L_1, /*hidden argument*/List_1__ctor_m6A950B4252C0E5235E96AFE2360A90333D479AFB_RuntimeMethod_var);
		((OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB_il2cpp_TypeInfo_var))->set_s_InputSubsystemDescriptors_6(L_1);
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
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusRemote_get_back_m9FC521B0360FCF6E4AED74D965CC2449E4236F41 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CbackU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_back(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_back_m42C42B3D3B3E2470D73A37F04A690EB316EF93E2 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_39(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusRemote::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusRemote_get_start_m305A19F88AB0891C0A741EFD193452D9C9FFAC75 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CstartU3Ek__BackingField_40();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_start_m88480ED134E4BF9073D31212DD3E75BA8943D699 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_40(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusRemote::get_touchpad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * OculusRemote_get_touchpad_m0516300D7A4EDDDF7E482730656801B1284F2F61 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = __this->get_U3CtouchpadU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::set_touchpad(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m9CC86404B64D239F153DFF450A3A2F93CF026479 (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_41(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote_FinishSetup_m5C9517EF579C721B0ADC03E00EBFF1F0C5BA7F7F (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_mE8ED47C205C5BA6483DE515B2454EC9704D89177(__this, /*hidden argument*/NULL);
		// back = GetChildControl<ButtonControl>("back");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusRemote_set_back_m42C42B3D3B3E2470D73A37F04A690EB316EF93E2_inline(__this, L_0, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusRemote_set_start_m88480ED134E4BF9073D31212DD3E75BA8943D699_inline(__this, L_1, /*hidden argument*/NULL);
		// touchpad = GetChildControl<Vector2Control>("touchpad");
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_2;
		L_2 = InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5(__this, _stringLiteral4375062BD8882E451B6BEE137E47CDAFE50A90EC, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		OculusRemote_set_touchpad_m9CC86404B64D239F153DFF450A3A2F93CF026479_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusRemote__ctor_m2BCE3ECEF5DBFEAD59595E747A26E7A314788A3C (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_mDB5D3D5A2C2D10A7C6FEFBFE01FC5597472EFA34(__this, /*hidden argument*/NULL);
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
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_mB4FF47E7831A653C90D7B08E336C40D66968F2FD (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// return (ushort)m_StereoRenderingModeDesktop;
		int32_t L_0 = __this->get_m_StereoRenderingModeDesktop_4();
		return (uint16_t)((int32_t)((uint16_t)L_0));
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m525FBEB4247E44DBC0D7E147581BD5EE751DCDB1 (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->set_s_Settings_18(__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_mBD02A264D1619566E55F183F6BE3E2F9D8C9747B (OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * __this, const RuntimeMethod* method)
{
	{
		// public bool SharedDepthBuffer = true;
		__this->set_SharedDepthBuffer_6((bool)1);
		// public bool DashSupport = true;
		__this->set_DashSupport_7((bool)1);
		// public bool V2Signing = true;
		__this->set_V2Signing_8((bool)1);
		// public bool FocusAware = true;
		__this->set_FocusAware_11((bool)1);
		// public bool OptimizeBufferDiscards = true;
		__this->set_OptimizeBufferDiscards_12((bool)1);
		// public bool TargetQuest = true;
		__this->set_TargetQuest_15((bool)1);
		// public bool TargetQuest2 = true;
		__this->set_TargetQuest2_16((bool)1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.Vector2Control Unity.XR.Oculus.Input.OculusTouchController::get_thumbstick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * OculusTouchController_get_thumbstick_mC9F9F95B9FCD50E5752C9CD7D8E9EF9A4622F988 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = __this->get_U3CthumbstickU3Ek__BackingField_43();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstick(UnityEngine.InputSystem.Controls.Vector2Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m685F2D7C7E6EDD9744D80E45F6959E1E01404735 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_43(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_trigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * OculusTouchController_get_trigger_mD1A216E49484A092FC3FB04FF817F7B97BEAEC29 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = __this->get_U3CtriggerU3Ek__BackingField_44();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trigger(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m84AC0AF5C7F3167852FE41F39B2F4B8D81F31687 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * OculusTouchController_get_grip_m307057D690E0789FD6BDA03E182435898A6F3FA3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = __this->get_U3CgripU3Ek__BackingField_45();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m68F2B59801E4DFE873D9F3E5612E4E43E14CD9C1 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_primaryButton_m8CE368E774D12770133A547BA4856D27FE898F07 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CprimaryButtonU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA1CFD14B6548499E98ED3046F92D63598A26DC46 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_46(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_secondaryButton_mB2F1B323ADDDBCD01EBAC087FCA000F78E076E5F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CsecondaryButtonU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryButton(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_mF341515B4438752A939FBE80A3DA871679A4F4B8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_gripPressed_m220F863568A496E3B3CA12972ABA3C626692F88D (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CgripPressedU3Ek__BackingField_48();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2BEC39C0BBE39C6C062E3C1B000214001E408F3F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_48(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_start_mB60B40005B632BA9ACC30F98B66C5D88A9111DAE (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CstartU3Ek__BackingField_49();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_start(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m1F975365CF1A993AE21B1CF33E11956C0A3C08D6 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_49(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_thumbstickClicked_m7C7152B6C52A8E46BF790447620671FAC3286B9B (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CthumbstickClickedU3Ek__BackingField_50();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickClicked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_mF4B4C55A984AD71CF8AFB489BC373EDC39C6EED5 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_primaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_primaryTouched_m729D5D4BBCB6FBB844A58D7C0B6401AB3CEEB008 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CprimaryTouchedU3Ek__BackingField_51();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_primaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_m1DB71D1C35760287C2FF291192EB16F27CA5B98E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_51(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_secondaryTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_secondaryTouched_m6F5E7B79C143F1063CC05C0D6765D81E21283AAF (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CsecondaryTouchedU3Ek__BackingField_52();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_secondaryTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m17396ABD16684356EDA005EC2100923664B1BDC5 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * OculusTouchController_get_triggerTouched_m3A1290ACB2D30C7D11EF86DBBD5EB7D809567205 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = __this->get_U3CtriggerTouchedU3Ek__BackingField_53();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerTouched(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mBF70F83EC08B75743395D944FD6C87680C47B59C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_triggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_triggerPressed_mAB8BC39673C9500CCAA45E56C1A29BA930FC10C3 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CtriggerPressedU3Ek__BackingField_54();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_triggerPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m081EBC9A4A2ED436135F4019A2767DBF93E4D4CA (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_54(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_thumbstickTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_thumbstickTouched_m5B6B5915D95CA9BE3FDE68BE5172BA0779F81A2E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CthumbstickTouchedU3Ek__BackingField_55();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_thumbstickTouched(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mAF4F4DA008B4424E37263BF56F2631822968DD0B (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_55(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTouchController::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * OculusTouchController_get_trackingState_mDF6ABD340E114DC3C366DA6D187542624904400E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_56();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_mD5B3B0CCEA7FB542E847E11618F37B31D4C0C138 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_56(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTouchController::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTouchController_get_isTracked_m5AD2412169237D61C1C89D1D531E8BD5F0DBC23F (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mB6FBB4565BE79FAD51379157F71F53F8BB6CFC7E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_57(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTouchController_get_devicePosition_m7B82362D8DE1FD5E656F1C54E64FAD5CCB518B48 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_58();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m3A5AC5C7A6EB37A088600D2E6D54F8A018D1510A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTouchController::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusTouchController_get_deviceRotation_m297E7099355DEA441B2C0127F8F6EF9063B6FCBB (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_59();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mCF3C4CAF683B2CED74122F091711A66190B97C6E (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTouchController_get_deviceVelocity_m1B9BE0966BFE8420E5CD335A24BEF4C9C6D1D1B7 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceVelocityU3Ek__BackingField_60();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m096FD36525B4E8A8B860AB532AF7E4F8F3E52ED4 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_60(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTouchController_get_deviceAngularVelocity_mF71DFA9D631C62BE0158D88B43BDCA8B9400716C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularVelocityU3Ek__BackingField_61();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularVelocity(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_m343E96932C774D4E30B4CD6FA42A266AEB88CE8C (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_61(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTouchController_get_deviceAcceleration_mEE707524A8D384FAF0F5A80A64974601196898BE (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAccelerationU3Ek__BackingField_62();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mA76B2C490A21661F19C48477A65F765FC6881DE1 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_62(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTouchController::get_deviceAngularAcceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTouchController_get_deviceAngularAcceleration_mEF4A0017713475305A5199F13E65DDF050619177 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdeviceAngularAccelerationU3Ek__BackingField_63();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::set_deviceAngularAcceleration(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mC30539974E317B0A0485A0A516844DC2516C8010 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController_FinishSetup_mCFB90E6EBDEB8F694B926E12EDE38DA7D3BD394A (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ADB212528F8CF625764142B108030A0499510F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_mFFDA66F439F480B4A39540855FFF1967972DEFC0(__this, /*hidden argument*/NULL);
		// thumbstick = GetChildControl<Vector2Control>("thumbstick");
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0;
		L_0 = InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5(__this, _stringLiteral6A8CECB369E64DA7E1FBB6FDE079801EFD1EBFEB, /*hidden argument*/InputControl_GetChildControl_TisVector2Control_t342BA848221108F8818F05BF3CB484934F582935_m1235B968E4619270BBCB309F84D787ABACE202A5_RuntimeMethod_var);
		OculusTouchController_set_thumbstick_m685F2D7C7E6EDD9744D80E45F6959E1E01404735_inline(__this, L_0, /*hidden argument*/NULL);
		// trigger = GetChildControl<AxisControl>("trigger");
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_1;
		L_1 = InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		OculusTouchController_set_trigger_m84AC0AF5C7F3167852FE41F39B2F4B8D81F31687_inline(__this, L_1, /*hidden argument*/NULL);
		// triggerTouched = GetChildControl<AxisControl>("triggerTouched");
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_2;
		L_2 = InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35(__this, _stringLiteral767FF60B240D13D0E7862196C1340B1049EF4B4B, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		OculusTouchController_set_triggerTouched_mBF70F83EC08B75743395D944FD6C87680C47B59C_inline(__this, L_2, /*hidden argument*/NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_3;
		L_3 = InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, /*hidden argument*/InputControl_GetChildControl_TisAxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22_m9A8A6686BEA781EEA81C4B989BD9F34656575C35_RuntimeMethod_var);
		OculusTouchController_set_grip_m68F2B59801E4DFE873D9F3E5612E4E43E14CD9C1_inline(__this, L_3, /*hidden argument*/NULL);
		// primaryButton = GetChildControl<ButtonControl>("primaryButton");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_4;
		L_4 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral5DA5B233166AA50A8488D3B97E0B5A1D09EA4905, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_primaryButton_mA1CFD14B6548499E98ED3046F92D63598A26DC46_inline(__this, L_4, /*hidden argument*/NULL);
		// secondaryButton = GetChildControl<ButtonControl>("secondaryButton");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_5;
		L_5 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral4ADB212528F8CF625764142B108030A0499510F0, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_secondaryButton_mF341515B4438752A939FBE80A3DA871679A4F4B8_inline(__this, L_5, /*hidden argument*/NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_6;
		L_6 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_gripPressed_m2BEC39C0BBE39C6C062E3C1B000214001E408F3F_inline(__this, L_6, /*hidden argument*/NULL);
		// start = GetChildControl<ButtonControl>("start");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_7;
		L_7 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_start_m1F975365CF1A993AE21B1CF33E11956C0A3C08D6_inline(__this, L_7, /*hidden argument*/NULL);
		// thumbstickClicked = GetChildControl<ButtonControl>("thumbstickClicked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_8;
		L_8 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteralB5CCD6D3CB93DC1BEDD79DB8A4B75174089A3455, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_thumbstickClicked_mF4B4C55A984AD71CF8AFB489BC373EDC39C6EED5_inline(__this, L_8, /*hidden argument*/NULL);
		// primaryTouched = GetChildControl<ButtonControl>("primaryTouched");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_9;
		L_9 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral9E98EC4F7D85E6AB585D718D9BEDBB163E42B54C, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_primaryTouched_m1DB71D1C35760287C2FF291192EB16F27CA5B98E_inline(__this, L_9, /*hidden argument*/NULL);
		// secondaryTouched = GetChildControl<ButtonControl>("secondaryTouched");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_10;
		L_10 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral890FDBCF037770EED7A1937DEF697FFC44FBF0B3, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_secondaryTouched_m17396ABD16684356EDA005EC2100923664B1BDC5_inline(__this, L_10, /*hidden argument*/NULL);
		// thumbstickTouched = GetChildControl<ButtonControl>("thumbstickTouched");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_11;
		L_11 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral4C9B28579DAB706CEF903A85854B98A08280D27D, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_thumbstickTouched_mAF4F4DA008B4424E37263BF56F2631822968DD0B_inline(__this, L_11, /*hidden argument*/NULL);
		// triggerPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_12;
		L_12 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_triggerPressed_m081EBC9A4A2ED436135F4019A2767DBF93E4D4CA_inline(__this, L_12, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_13;
		L_13 = InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		OculusTouchController_set_trackingState_mD5B3B0CCEA7FB542E847E11618F37B31D4C0C138_inline(__this, L_13, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_14;
		L_14 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTouchController_set_isTracked_mB6FBB4565BE79FAD51379157F71F53F8BB6CFC7E_inline(__this, L_14, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_15;
		L_15 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTouchController_set_devicePosition_m3A5AC5C7A6EB37A088600D2E6D54F8A018D1510A_inline(__this, L_15, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_16;
		L_16 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusTouchController_set_deviceRotation_mCF3C4CAF683B2CED74122F091711A66190B97C6E_inline(__this, L_16, /*hidden argument*/NULL);
		// deviceVelocity = GetChildControl<Vector3Control>("deviceVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_17;
		L_17 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral2D3C0882E8B897E888F8BF5C82A33ED850CDEA80, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTouchController_set_deviceVelocity_m096FD36525B4E8A8B860AB532AF7E4F8F3E52ED4_inline(__this, L_17, /*hidden argument*/NULL);
		// deviceAngularVelocity = GetChildControl<Vector3Control>("deviceAngularVelocity");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_18;
		L_18 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral48FC1F936713D53F5EFACC314E330907113FDC9D, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularVelocity_m343E96932C774D4E30B4CD6FA42A266AEB88CE8C_inline(__this, L_18, /*hidden argument*/NULL);
		// deviceAcceleration = GetChildControl<Vector3Control>("deviceAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_19;
		L_19 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral5E00AB7EC86A20EC1ECB923C22939506C6806CC9, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTouchController_set_deviceAcceleration_mA76B2C490A21661F19C48477A65F765FC6881DE1_inline(__this, L_19, /*hidden argument*/NULL);
		// deviceAngularAcceleration = GetChildControl<Vector3Control>("deviceAngularAcceleration");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_20;
		L_20 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTouchController_set_deviceAngularAcceleration_mC30539974E317B0A0485A0A516844DC2516C8010_inline(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTouchController__ctor_m3DF25FC6EBC1D65AFDBDB011BCF9ABB1A85793C8 (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, const RuntimeMethod* method)
{
	{
		XRControllerWithRumble__ctor_m9454D4D19069B4D16CB8780530DF56F160B81ACD(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.Controls.IntegerControl Unity.XR.Oculus.Input.OculusTrackingReference::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * OculusTrackingReference_get_trackingState_m627C29E668D4C2629E649ECD18A416714768E0D1 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = __this->get_U3CtrackingStateU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_trackingState(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mC0971022F3CCBBDA85DB933934315FFCD2A934DB (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_39(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl Unity.XR.Oculus.Input.OculusTrackingReference::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * OculusTrackingReference_get_isTracked_m5341D27169BB7FB3315386B1073C1062AE5F8DDA (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = __this->get_U3CisTrackedU3Ek__BackingField_40();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_isTracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mAAAE66C97F811E8B52FEE278C04551920E9852A8 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_40(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control Unity.XR.Oculus.Input.OculusTrackingReference::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * OculusTrackingReference_get_devicePosition_m0E4659CA1438BE599A5C7BCF2C505C4B3AFD089A (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_41();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m4F4AD1C8EC2F3C09E988BBD89E699370E1000C93 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_41(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl Unity.XR.Oculus.Input.OculusTrackingReference::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * OculusTrackingReference_get_deviceRotation_mF9E47442FDAF1769CA13D5BD03F306ECC3C1E99D (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_42();
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m077092095138DDAC7CED0AFD974E585AB790AF2C (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_42(L_0);
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference_FinishSetup_mC8CDDD455575F2A0FF9F9E3E996CDD200752BC33 (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_mE8ED47C205C5BA6483DE515B2454EC9704D89177(__this, /*hidden argument*/NULL);
		// trackingState = GetChildControl<IntegerControl>("trackingState");
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0;
		L_0 = InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF(__this, _stringLiteralFE99981D4BE3BFBE312C52C21EADDC2EACD9ED3D, /*hidden argument*/InputControl_GetChildControl_TisIntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8_m697E700444150820E319F8487067E565029C28EF_RuntimeMethod_var);
		OculusTrackingReference_set_trackingState_mC0971022F3CCBBDA85DB933934315FFCD2A934DB_inline(__this, L_0, /*hidden argument*/NULL);
		// isTracked = GetChildControl<ButtonControl>("isTracked");
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E(__this, _stringLiteral29340CC6DE4F0D8CF1A3ADBF57306A53920E648A, /*hidden argument*/InputControl_GetChildControl_TisButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D_m53D6E12ACB3C52EB1A8DBECBF4943BD7BB02D57E_RuntimeMethod_var);
		OculusTrackingReference_set_isTracked_mAAAE66C97F811E8B52FEE278C04551920E9852A8_inline(__this, L_1, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_2;
		L_2 = InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15_m89AF1A38C5C95C24F4ECF038CC5D17C907A34388_RuntimeMethod_var);
		OculusTrackingReference_set_devicePosition_m4F4AD1C8EC2F3C09E988BBD89E699370E1000C93_inline(__this, L_2, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_3;
		L_3 = InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF_m30F6C3F17EC392DBC5207A07184E6BAFC665F760_RuntimeMethod_var);
		OculusTrackingReference_set_deviceRotation_m077092095138DDAC7CED0AFD974E585AB790AF2C_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.Input.OculusTrackingReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusTrackingReference__ctor_m034388DDCC9F71833408E6C24C10F4F8C9FFE15E (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_mDB5D3D5A2C2D10A7C6FEFBFE01FC5597472EFA34(__this, /*hidden argument*/NULL);
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
// System.Void Unity.XR.Oculus.OculusUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusUsages__cctor_m2C51DB783B721BD2C8F5EC44DA8782649160E5C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<bool> volumeUp = new InputFeatureUsage<bool>("VolumeUp");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_0), _stringLiteralCAD7DAB1A0038F488CE6D7BD2E6F6D83311BED68, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeUp_0(L_0);
		// public static InputFeatureUsage<bool> volumeDown = new InputFeatureUsage<bool>("VolumeDown");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_1), _stringLiteral83734951E6CF0220767BDF0CB126B869CED3387A, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_volumeDown_1(L_1);
		// public static InputFeatureUsage<bool> thumbrest = new InputFeatureUsage<bool>("Thumbrest");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_2), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbrest_2(L_2);
		// public static InputFeatureUsage<bool> indexTouch = new InputFeatureUsage<bool>("IndexTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_3), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_indexTouch_3(L_3);
		// public static InputFeatureUsage<bool> thumbTouch = new InputFeatureUsage<bool>("ThumbTouch");
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_4), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t0C51A60521CCF58352C176EEB791B2ED9F729B77_il2cpp_TypeInfo_var))->set_thumbTouch_4(L_4);
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
// System.Boolean Unity.XR.Oculus.Performance::TrySetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetCPULevel_m203138B219BF6A0DAF0A482DE24995DD8D139C82 (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// return (NativeMethods.SetCPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetCPULevel_mA8094989FD7035BC63A901D1F37C11BA63D535A4(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetGPULevel_mCB182808710594E2C939935EF198F753F1F23CFE (int32_t ___level0, const RuntimeMethod* method)
{
	{
		// return (NativeMethods.SetGPULevel(level) == 0);
		int32_t L_0 = ___level0;
		int32_t L_1;
		L_1 = NativeMethods_SetGPULevel_mC82166C62D4ED55DF02DF4155BF36C191586408F(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetAvailableDisplayRefreshRates(System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetAvailableDisplayRefreshRates_mE7D88B10E5586E977CA119895D0AA296A6B46D1E (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** ___refreshRates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (cachedDisplayAvailableFrequencies == null || cachedDisplayAvailableFrequencies.Length == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0063;
		}
	}

IL_000f:
	{
		// cachedDisplayAvailableFrequencies = new float[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_2);
		// int numFrequencies = 0;
		V_0 = 0;
		// if (NativeMethods.GetDisplayAvailableFrequencies(IntPtr.Zero, ref numFrequencies) && numFrequencies > 0)
		bool L_3;
		L_3 = NativeMethods_GetDisplayAvailableFrequencies_m2265E0B174AAE46BC33AC53561EB2BE0B568678E((intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// int size = sizeof(float) * numFrequencies;
		int32_t L_5 = V_0;
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_5)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		// if (NativeMethods.GetDisplayAvailableFrequencies(ptr, ref numFrequencies) && numFrequencies > 0)
		intptr_t L_7 = V_1;
		bool L_8;
		L_8 = NativeMethods_GetDisplayAvailableFrequencies_m2265E0B174AAE46BC33AC53561EB2BE0B568678E((intptr_t)L_7, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// cachedDisplayAvailableFrequencies = new float[numFrequencies];
		int32_t L_10 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->set_cachedDisplayAvailableFrequencies_0(L_11);
		// Marshal.Copy(ptr, cachedDisplayAvailableFrequencies, 0, numFrequencies);
		intptr_t L_12 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m2EC4B6B80F5BA13FA7C4116588F03D221619AF0C((intptr_t)L_12, L_13, 0, L_14, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_15, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// refreshRates = cachedDisplayAvailableFrequencies;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** L_16 = ___refreshRates0;
		IL2CPP_RUNTIME_CLASS_INIT(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		*((RuntimeObject **)L_16) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_16, (void*)(RuntimeObject *)L_17);
		// return (cachedDisplayAvailableFrequencies.Length > 0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = ((Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_StaticFields*)il2cpp_codegen_static_fields_for(Performance_t43986C60ACFDE05F1C36F33973044E27B16291EA_il2cpp_TypeInfo_var))->get_cachedDisplayAvailableFrequencies_0();
		NullCheck(L_18);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_18)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TrySetDisplayRefreshRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TrySetDisplayRefreshRate_m4DC8340523E1D3D3FB7F578848B83A525ECA3200 (float ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return NativeMethods.SetDisplayFrequency(refreshRate);
		float L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_SetDisplayFrequency_m26CA43E0934F895176B5D6F63F141F672E499A69(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.Performance::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Performance_TryGetDisplayRefreshRate_m4368FAE28DFC244FAA6FC537A795D83D224954BB (float* ___refreshRate0, const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetDisplayFrequency(out refreshRate);
		float* L_0 = ___refreshRate0;
		bool L_1;
		L_1 = NativeMethods_GetDisplayFrequency_m74C7E35C4286B6FCAE589A4DA6A77C3485E8FBBB((float*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.XR.Oculus.Performance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance__cctor_m7B161005722C636B619E2F8B7B0B7D762988E492 (const RuntimeMethod* method)
{
	{
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
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Initialize_mE10FBFBD931121263EAAF492EA1EF11266DBDCD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mFA00908B51F922621B710B65E8576C29D437FE19(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Deinitialize_m9D11142346B51FE92251B5E0A80B307A2E3BE0A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender -= Update;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_0, NULL, (intptr_t)((intptr_t)RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1_RuntimeMethod_var), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m3F833FAB6D8A4A178173DFE9D644341657F2E9AE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.RegisterUpdateCallback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisterUpdateCallback_Update_m5E1A9AC29D290F3135C26CA6F11EA886952A4FE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputFocus.Update();
		IL2CPP_RUNTIME_CLASS_INIT(InputFocus_t747D82A1D7D44939A261162788D35A962D6E8F8C_il2cpp_TypeInfo_var);
		InputFocus_Update_m0C2F65DCC34710BBF513824247E201C86CCE9320(/*hidden argument*/NULL);
		// if (NativeMethods.GetAppShouldQuit())
		bool L_0;
		L_0 = NativeMethods_GetAppShouldQuit_mA572B83D667827545CBE71CF309759132F6D1916(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0011:
	{
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
// System.String Unity.XR.Oculus.Stats::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Stats_get_PluginVersion_mE08EA110C75B695B6B2EDC56D7550156AE862E67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (string.Equals(string.Empty, m_PluginVersion))
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// byte[] buf = new byte[256];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_3;
		// NativeMethods.GetOVRPVersion(buf);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		NativeMethods_GetOVRPVersion_m02A2F3D2076ADEAE09DC5BBD0A82D687637F4FBF(L_4, /*hidden argument*/NULL);
		// var end = Array.IndexOf<byte>(buf, 0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		int32_t L_6;
		L_6 = Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09(L_5, (uint8_t)0, /*hidden argument*/Array_IndexOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3B7196D44EF2750B38DFFBFD9885939BBD513D09_RuntimeMethod_var);
		V_1 = L_6;
		// m_PluginVersion = System.Text.Encoding.ASCII.GetString(buf, 0, end);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_7;
		L_7 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_10);
	}

IL_003c:
	{
		// return m_PluginVersion;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_PluginVersion_1();
		return L_11;
	}
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * V_1 = NULL;
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (m_Display != null)
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_1 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_1;
	}

IL_000d:
	{
		// List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_2 = (List_1_t56455D217921470E52E7D33A1794256E31084DD8 *)il2cpp_codegen_object_new(List_1_t56455D217921470E52E7D33A1794256E31084DD8_il2cpp_TypeInfo_var);
		List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4(L_2, /*hidden argument*/List_1__ctor_mD6C183C6DD1054B1C06CBB9E96AFC778A0A5CBF4_RuntimeMethod_var);
		// SubsystemManager.GetInstances(displays);
		List_1_t56455D217921470E52E7D33A1794256E31084DD8 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C(L_3, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_mF90E34E96B38A4584EB6300D5EAD76BFC5E18F0C_RuntimeMethod_var);
		// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
		NullCheck(L_3);
		Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828  L_4;
		L_4 = List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D(L_3, /*hidden argument*/List_1_GetEnumerator_mB1C8C1C02F0AE282A7FE5944B393195661E48D1D_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0020:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
			L_5 = Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_inline((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCE1EB51F59866B742F01AF4A4AF6AE22CEFD0A29_RuntimeMethod_var);
			V_1 = L_5;
			// if (xrDisplaySubsystem.SubsystemDescriptor.id == "oculus display" && xrDisplaySubsystem.running)
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6 = V_1;
			NullCheck(L_6);
			XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * L_7;
			L_7 = IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42(L_6, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m816FB5D3478D016CBD470BA93CF200BB0FA1DF42_RuntimeMethod_var);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = IntegratedSubsystemDescriptor_get_id_m0347A7AE998F0210CC7DAD1DA974F788AB2CF879(L_7, /*hidden argument*/NULL);
			bool L_9;
			L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral753B6D37AEAF368AA772306EFBD496750FDE357A, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0055;
			}
		}

IL_003f:
		{
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0047:
		{
			// m_Display = xrDisplaySubsystem;
			XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_12 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
			((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_Display_0(L_12);
			// return m_Display;
			IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_13 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
			V_2 = L_13;
			IL2CPP_LEAVE(0x7E, FINALLY_0060);
		}

IL_0055:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			bool L_14;
			L_14 = Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m4244B9178131B00687921873F8FFBADB5EADC39C_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0020;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5((Enumerator_t5D61B75B27E9B563C1DA2AE3CFE072FA106B0828 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mF98E94CA63C7309AE46544DA6B2804EFE518C8A5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// Debug.LogError("No active Oculus display subsystem was found.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral86CB83E014FB5A27545E6442E0E4C0E783301DED, /*hidden argument*/NULL);
		// return m_Display;
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_15 = ((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_15;
	}

IL_007e:
	{
		// }
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.Stats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__ctor_mA96DB2D702AAB276E41CD7C005AB64B599C0B63C (Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.Stats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__cctor_mF247C77EA528EB7EF9FC2017EDAD113E658E7FBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string m_PluginVersion = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		((Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var))->set_m_PluginVersion_1(L_0);
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
// System.Void Unity.XR.Oculus.Utils::SetColorScaleAndOffset(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScaleAndOffset_mCC53F5E6E347BAE1858E6DFD7FBFC9F9BF5986E4 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorScale0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorOffset1, const RuntimeMethod* method)
{
	{
		// NativeMethods.SetColorScale(colorScale.x, colorScale.y, colorScale.z, colorScale.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___colorScale0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___colorScale0;
		float L_3 = L_2.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___colorScale0;
		float L_5 = L_4.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___colorScale0;
		float L_7 = L_6.get_w_4();
		NativeMethods_SetColorScale_m839CC3B0F5B263EAC0356438A6239237EB9C33E1(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// NativeMethods.SetColorOffset(colorOffset.x, colorOffset.y, colorOffset.z, colorOffset.w);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___colorOffset1;
		float L_9 = L_8.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___colorOffset1;
		float L_11 = L_10.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___colorOffset1;
		float L_13 = L_12.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___colorOffset1;
		float L_15 = L_14.get_w_4();
		NativeMethods_SetColorOffset_m5AC60A7D71D1911EC68FECE443C545CB5B50A47A(L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.Utils::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetSystemHeadsetType_m0D025BE48737C0FFB4C226B42B9CFB8F03192B51 (const RuntimeMethod* method)
{
	{
		// return NativeMethods.GetSystemHeadsetType();
		int32_t L_0;
		L_0 = NativeMethods_GetSystemHeadsetType_mB23FAB38C8506B79F4F4A57F2CE197E5746108F1(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.Utils::SetFoveationLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetFoveationLevel_m6CABFF6A24E7F8D2B320629F04DD05CE08770CE2 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12CE2C178DCAFF9D18FB4F9FD35B934E26E1CB8C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ovrJava = NativeMethods.GetOvrJava();
		intptr_t L_0;
		L_0 = NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B_inline(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// if (ovrJava == IntPtr.Zero)
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogWarning("Can't set foveation level on desktop platforms");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral12CE2C178DCAFF9D18FB4F9FD35B934E26E1CB8C, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// NativeMethods.SetPropertyInt(ovrJava, NativeMethods.OvrProperty.FoveationLevel, level);
		intptr_t L_3 = V_0;
		int32_t L_4 = ___level0;
		NativeMethods_SetPropertyInt_mF6D7BD7C7CFD7E77CA56784655587E9F1B22F0CF((intptr_t)L_3, ((int32_t)15), L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.XR.Oculus.Utils::EnableDynamicFFR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_EnableDynamicFFR_mA46E9222EA99A0C3F1DBA77805719317374F3AE3 (bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4337C6FF89AFF8F855C30B4DF6F787168DE70DA0);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B4_0 = 0;
	intptr_t G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	int32_t G_B3_0 = 0;
	intptr_t G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	intptr_t G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	{
		// IntPtr ovrJava = NativeMethods.GetOvrJava();
		intptr_t L_0;
		L_0 = NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B_inline(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// if (ovrJava == IntPtr.Zero)
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogWarning("Can't enable dynamic FFR on desktop platforms");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral4337C6FF89AFF8F855C30B4DF6F787168DE70DA0, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// NativeMethods.SetPropertyInt(ovrJava, NativeMethods.OvrProperty.DynamicFoveationEnabled, enable ? 1 : 0);
		intptr_t L_3 = V_0;
		bool L_4 = ___enable0;
		G_B3_0 = ((int32_t)30);
		G_B3_1 = L_3;
		if (L_4)
		{
			G_B4_0 = ((int32_t)30);
			G_B4_1 = L_3;
			goto IL_0028;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0029:
	{
		NativeMethods_SetPropertyInt_mF6D7BD7C7CFD7E77CA56784655587E9F1B22F0CF((intptr_t)G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Int32 Unity.XR.Oculus.Utils::GetFoveationLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetFoveationLevel_m0D44D43BE41447FA5DB2F01599866C3F0B732D78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4E30B9C43A317B5847B67D69489A79E7556AF02);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// IntPtr ovrJava = NativeMethods.GetOvrJava();
		intptr_t L_0;
		L_0 = NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B_inline(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// if (ovrJava == IntPtr.Zero ||
		//     !NativeMethods.GetPropertyInt(ovrJava, NativeMethods.OvrProperty.FoveationLevel, out var ret))
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = V_0;
		bool L_4;
		L_4 = NativeMethods_GetPropertyInt_m6A5BCC7777D6D0833EE44735D3287C3D753DF2F3((intptr_t)L_3, ((int32_t)15), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}

IL_001f:
	{
		// Debug.LogWarning("Can't get foveation level");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA4E30B9C43A317B5847B67D69489A79E7556AF02, /*hidden argument*/NULL);
		// return -1;
		return (-1);
	}

IL_002b:
	{
		// return ret;
		int32_t L_5 = V_1;
		return L_5;
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
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorScale_mE2B0E57530BD0DFCC778010D5EF5E67811CB8740 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorScale", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorScale)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetColorOffset_mAD7AB5A2E12D0B98C0E480BA6E9C3ED206CE75FC (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorOffset", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorOffset)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.IntPtr Unity.XR.Oculus.NativeMethods/Internal::GetOvrJava()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Internal_GetOvrJava_m59317FDEFDF02C5A62881EC154C50BBFA6D29DB8 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOvrJava", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetOvrJava)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetIsSupportedDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetIsSupportedDevice_m0F9AAD161237ACD05690B74B1CC77F6240A2DBEF (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetIsSupportedDevice", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetIsSupportedDevice)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::LoadOVRPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_LoadOVRPlugin_mAABD29961F077001A663B967E53C99366B404AFA (String_t* ___ovrpPath0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "LoadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___ovrpPath0' to native representation
	Il2CppChar* ____ovrpPath0_marshaled = NULL;
	if (___ovrpPath0 != NULL)
	{
		____ovrpPath0_marshaled = ___ovrpPath0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(LoadOVRPlugin)(____ovrpPath0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____ovrpPath0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::UnloadOVRPlugin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_UnloadOVRPlugin_m542A72E249F24C8864DBB80C5DE73824F38DED51 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "UnloadOVRPlugin", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnloadOVRPlugin)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetUserDefinedSettings(Unity.XR.Oculus.NativeMethods/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetUserDefinedSettings_m6AFC2110C10BE2BEFB4810BDA1918BD69152EC4F (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D  ___settings0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_tA825721C19A55520B2D67138B3D58565E0135D3D );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetCPULevel_mF7DE5D120F210D7035ED18468EECA3FBCBFFD0F1 (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetCPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetCPULevel)(___cpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cpuLevel0);
	#endif

	return returnValue;
}
// System.Int32 Unity.XR.Oculus.NativeMethods/Internal::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_SetGPULevel_m96F21D40C9662AE4741E49C47171724094B5BDD7 (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetGPULevel", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetGPULevel)(___gpuLevel0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___gpuLevel0);
	#endif

	return returnValue;
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::vrapi_SetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_vrapi_SetPropertyInt_mAB73999C3FAE797BF6BAF7B349260E5A114D56CE (intptr_t ___java0, int32_t ___prop1, int32_t ___val2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_vrapi_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("vrapi"), "vrapi_SetPropertyInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_vrapi_INTERNAL
	reinterpret_cast<PInvokeFunc>(vrapi_SetPropertyInt)(___java0, ___prop1, ___val2);
	#else
	il2cppPInvokeFunc(___java0, ___prop1, ___val2);
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::vrapi_GetPropertyInt(System.IntPtr,Unity.XR.Oculus.NativeMethods/OvrProperty,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_vrapi_GetPropertyInt_m72B129C1FFA99D897779B2A4A922B46986A75ABB (intptr_t ___java0, int32_t ___propType1, int32_t* ___intVal2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_vrapi_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("vrapi"), "vrapi_GetPropertyInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_vrapi_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(vrapi_GetPropertyInt)(___java0, ___propType1, ___intVal2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___java0, ___propType1, ___intVal2);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_GetOVRPVersion_m572190DA771E86754C007422F7B812518AFEBB1C (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOVRPVersion", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetOVRPVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnablePerfMetrics_m26759A5A3917F1F2616FFA8B80164D26C5660417 (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnablePerfMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnablePerfMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_EnableAppMetrics_mE1DC02724DAFE34B6935CC06465969D620091AEB (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnableAppMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableAppMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDeveloperModeStrict(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDeveloperModeStrict_mB4C0BE5F8A3B5AFC6BF4D8DB989809A3AF4970E9 (bool ___active0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDeveloperModeStrict", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDeveloperModeStrict)(static_cast<int32_t>(___active0));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___active0));
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppHasInputFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppHasInputFocus_m050EE50FA50DD52C1961A39CDA5E0067F77F9A2D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppHasInputFocus", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppHasInputFocus)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryConfigured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryConfigured_m84C781B88D776100AF8EA9A2C530AB23D7A140C4 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryConfigured", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryConfigured)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryDimensions(Unity.XR.Oculus.Boundary/BoundaryType,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryDimensions_m8B5A231F06907527D3831B6CF407EBF913B40899 (int32_t ___boundaryType0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___dimensions1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryDimensions)(___boundaryType0, ___dimensions1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___boundaryType0, ___dimensions1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetBoundaryVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetBoundaryVisible_mCFCB9FACCD97E66D5D2367B2C9F2AE27F5279740 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetBoundaryVisible)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Unity.XR.Oculus.NativeMethods/Internal::SetBoundaryVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SetBoundaryVisible_m9B55A9185E04AFF89D4C1727FD3754C0E7208604 (bool ___boundaryVisible0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetBoundaryVisible", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetBoundaryVisible)(static_cast<int32_t>(___boundaryVisible0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___boundaryVisible0));
	#endif

}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetAppShouldQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetAppShouldQuit_m89CAAADB5EEE2EE7E40200F918E6F21BA64F3CE0 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetAppShouldQuit", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetAppShouldQuit)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayAvailableFrequencies(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayAvailableFrequencies_m40A6DFC053BEB7B8B31BAE72155709827CF3546D (intptr_t ___ptr0, int32_t* ___numFrequencies1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayAvailableFrequencies", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayAvailableFrequencies)(___ptr0, ___numFrequencies1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0, ___numFrequencies1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::SetDisplayFrequency(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_SetDisplayFrequency_mD7172D94C438165E1783785EFA1A26CA933EE15E (float ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Unity.XR.Oculus.NativeMethods/Internal::GetDisplayFrequency(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Internal_GetDisplayFrequency_mB22232BC7B444EE5552214F670B741134DAF07C3 (float* ___refreshRate0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetDisplayFrequency", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetDisplayFrequency)(___refreshRate0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___refreshRate0);
	#endif

	return static_cast<bool>(returnValue);
}
// Unity.XR.Oculus.SystemHeadset Unity.XR.Oculus.NativeMethods/Internal::GetSystemHeadsetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Internal_GetSystemHeadsetType_m3A339A530A6A798601F5592EA425719AA7D91740 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetSystemHeadsetType", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_OculusXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemHeadsetType)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
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
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUAppTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUAppTime_m9B101C0D4FCD830EDBF89D5EC4A9DACFD3DF75AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetAppGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPUCompositorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUCompositorTime_m61C1727FF4A5CF0BAC5C437272B382941A256ADE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetCompositorGPUTimeLastFrame(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_MotionToPhoton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_MotionToPhoton_m338073CCC57DC7871F04146117C7FE2BFC0ADEE5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetMotionToPhoton(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_RefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_RefreshRate_m95C4CC2D452C8C180A5459C1BF67223A6CE1FEC4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetDisplayRefreshRate(out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)));
		bool L_1;
		L_1 = XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3(((XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryTemp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryTemp_m66D0D415EB00B1D0F67EB03A2C057F6AE4FEB3B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryTemperature", out batteryTemp);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral650C77761A0B8B1C5C9AB2BB0D61E4767DDDB6E8, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryTemp;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_BatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryLevel_m1A3268080F17D36E27E5FB0822440E5F5F465C3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryLevel", out batteryLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral2089C15C4332D83D0388E9B6CF7057950BB5CD54, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryLevel;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.XR.Oculus.Stats/AdaptivePerformance::get_PowerSavingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformance_get_PowerSavingMode_m46F9FE7947A8848BC330A1D0AFD0DC1FB67E643C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "powerSavingMode", out powerSavingMode);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralA1B23EF8DFFD7E2D6521CBDDA3630AC111AE5F69, (float*)(&V_0), /*hidden argument*/NULL);
		// return !(powerSavingMode == 0.0f);
		float L_2 = V_0;
		return (bool)((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.Stats/AdaptivePerformance::get_AdaptivePerformanceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_AdaptivePerformanceScale_m7504833CD53AF3E6E84FC02710BE5763AA551B14 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DADF60B90978099A286AA09DF75E789888C9904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "adaptivePerformanceScale", out performanceScale);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral4DADF60B90978099A286AA09DF75E789888C9904, (float*)(&V_0), /*hidden argument*/NULL);
		// return performanceScale;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_CPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_CPULevel_m946AF8A9A8E1340B780398561AA8AF771B0AFCF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "cpuLevel", out cpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral18731F484474DDB7AD0F0E7C15988C0A794DEC4D, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) cpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}
}
// System.Int32 Unity.XR.Oculus.Stats/AdaptivePerformance::get_GPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_GPULevel_m1194B0BA04D54979D771E202C45DDBD8F197F6EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "gpuLevel", out gpuLevel);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralB0A88A6DB46B5BCFC8ED5871C81A6C91204F1E45, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) gpuLevel;
		float L_2 = V_0;
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
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
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppQueueAheadTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppQueueAheadTime_mF78E4EDE030BC4F753666961ABB5778F80E0375B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.appqueueahead", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralEB59BE99DEEFC290177DB43CF6B387636E1E0904, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_AppCPUElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppCPUElapsedTime_mAD180D36F16E1253DAB29B6117F5C46EAAD98B28 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC74641CA8B52702019111B91E29821576E700BB);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.cpuelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralDC74641CA8B52702019111B91E29821576E700BB, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorDroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorDroppedFrames_m8764CBA4E7EA027D571FDC815CDE2C4E2041820D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositordroppedframes", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral60EABBC07A25977B87CF58F7CB0D8D536D013DBA, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorLatency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorLatency_m36D17C616E24F48414C52A8E99E8DAA97A6E1716 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorlatency", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral8B2341C27300FE7CC95F015A82D27378FA3E44C2, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorCPUTime_m7B17EB2AA95DC3425F2E242E659F37CF616B04E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral28DC90CC5E864B9BEFE7447A1CCD759D1F2D3991, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_CPUStartToGPUEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CPUStartToGPUEnd_m663C79AD0C943E70885512969AE4818D2C9BFEDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcpustartgpuendelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralCDF3E124A1507F39224D73C8EFA9828D8BE3846B, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/AppMetrics::get_GPUEndToVsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_GPUEndToVsync_m6CF8B5417CF84A816C78EE1DDBFC6FBD21569A93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorgpuendtovsyncelapsedtime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral8695EE74D804B608F4CB465B35B41E02389AD412, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/AppMetrics::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetrics_EnableAppMetrics_mDF1CC924EEDEA0FA81330BDDB337203A4A6CAC4D (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnableAppMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnableAppMetrics_mF8E501239826798CFF71C22E3AD1EA923F6C0241(L_0, /*hidden argument*/NULL);
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
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppCPUTime_mE2E82E5EACE088B3DC9EBA56D7EC1901126D7C0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral3665CEE66FFACBAAC4FEA9EBCFB744AC1F3A9A57, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_AppGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppGPUTime_m3B2F44D3ACD93A0C111E483AB0D5E416D6635CE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral6E837F416B0AD538A7C4B0B672467CAD351051C1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorCPUTime_m661A253270FBECF43E854F14A9F792B971237FF2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorcputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral19EEE9FEA675F3AD8283953350F19D8A2E2934A0, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CompositorGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorGPUTime_mB7822DBE1255A25656218053E77533758D7161F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorgputime", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral7B4329AE6518370E7FA79EABB817A9A8F33E72A1, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUUtilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUUtilization_m157FD2F01525374512D8C4BA822DBD9E06EAF9D1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuutil", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralE0C17AE8C1199F6CD8F16D39E1B77CC319F01B26, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationAverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationAverage_mB044EEE45A31BDF82A8C9C0EBA1FCDCEAE13DB5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilavg", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral9348643C476E6565E37FC0900AC244BD6F18AC32, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUUtilizationWorst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationWorst_mD54238B06C43633474728B9B9F280DAE63DFDB52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilworst", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralF752B27A3F46D6A1A7B84CA9CC6E730C9B472E9A, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_CPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUClockFrequency_mDBD7BC9DA2F945E8CBA0CB4376D641F628ACF736 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteral7CF7D253C5E081CD8124B453E189315E3AB51312, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single Unity.XR.Oculus.Stats/PerfMetrics::get_GPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUClockFrequency_m3F0A2CFA60F39EE6D673C99F79948F459A017529 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuclockfreq", out val);
		IL2CPP_RUNTIME_CLASS_INIT(Stats_t3DD4730256D7A6B7DE1680B2BFB5729B57FBC03F_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0;
		L_0 = Stats_GetOculusDisplaySubsystem_mA3AAA6F71222949AE5A293CC59E83BED1068FEDA(/*hidden argument*/NULL);
		bool L_1;
		L_1 = XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A(L_0, _stringLiteralB81FB9482B9D82D5EF7151BE5724BB998E6C5F83, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.XR.Oculus.Stats/PerfMetrics::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerfMetrics_EnablePerfMetrics_m41B7F0DEC2F16CD04D023383D607B5FC2C7E1EAF (bool ___enable0, const RuntimeMethod* method)
{
	{
		// NativeMethods.EnablePerfMetrics(enable);
		bool L_0 = ___enable0;
		NativeMethods_EnablePerfMetrics_m9663AC5E08C99D340FCFDE52B06732B6F1E40A2F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpad_m887549F33A943CF1C77E5B05BDF2D00BF5F6CC41_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trigger_mA29AFA3FD7CEDDFB8035775F27A0AEDF98A9E8BE_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_back_m9F6785362385F538F9876DD852FF24A80C9758DF_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_triggerPressed_mC94B5269528B2737BB0A16BA50D36DB1FE553A03_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadClicked_mA585D04216F68BDA5D11FA9B0EEEDFAB0ABB3CC1_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtouchpadClickedU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_touchpadTouched_m5C5DB48C2CEE53DA919A0889D6D1C3366DF016B3_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl touchpadTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtouchpadTouchedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_trackingState_m0D7A8AC6B8A470104CB504959489165369FC09AC_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_isTracked_mCDA07327F236CF2DD5932FFDD8510D684FA897E2_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_devicePosition_mB997A9C72DEEC92A371CA494EBD077882807AB5F_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceRotation_mD6A04EAB3BE928840F79FC972FBB6C828F397482_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularVelocity_m4BEB85FB4601776FC4747878B9EBE9F4663D4A44_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAcceleration_m295DAFC38493C6640CFBEFA3D692947EB9A55B60_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVRTrackedController_set_deviceAngularAcceleration_m9E32ABDDB00F30A1F35F40169B7802A0349DD52D_inline (GearVRTrackedController_tFDAACDAF7AA95AABE41555D3687458F2CE285F6D * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_userPresence_m5B3AB58ABB2A7C3CBE75928729C8340A49572470_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl userPresence { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CuserPresenceU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_trackingState_m1063B035D0628C653CB20BB174BCE613903D0CEE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_isTracked_mEFD5C2D7308B25CE2F35B9D36E6ABDB3E4370531_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_devicePosition_m8ACBD698119BE8FEA4132382F06D33AA22DD1969_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceRotation_mF22284E4863CDE9C3641C37A8832ED48B230023A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularVelocity_m60BDB172457D23ED0CC97FD278A011BD8C7779B9_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAcceleration_m2C5776788794109AAAB27B166B0B7ED0CE0E1CB7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_deviceAngularAcceleration_m6859C9341EA8D0C8BB28706AFE1EF839EA272E46_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyePosition_m657A611DB087297C4E0ACB12C908EF4019508F0B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control leftEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyePositionU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeRotation_mD93CA3EE294EE735574A037A1E04B1D1DCF884D1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl leftEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CleftEyeRotationU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularVelocity_m4D84C7484C5C4A8E86AEDC0B08D567BFFEA16A4D_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularVelocityU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAcceleration_mFB616C726F6277A857F2845AC9BFD8128F71EA61_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAccelerationU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_leftEyeAngularAcceleration_mD067C2107201CFD372FD89CB862D99FC7187F92F_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control leftEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CleftEyeAngularAccelerationU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyePosition_m0BDDF077E770A7B7A5CB76745A7ACCE87DB1993A_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control rightEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyePositionU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeRotation_m022D12A6665D3A65F4236B4513EBDCDB097E5CC1_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl rightEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CrightEyeRotationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularVelocity_m0E2E4CC1A2E0CDA764F9B0ECAE5451353BACF5EE_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularVelocityU3Ek__BackingField_64(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAcceleration_mB0485D2A749FA27A9E139C694C6E362105EC76D7_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAccelerationU3Ek__BackingField_65(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_rightEyeAngularAcceleration_m171C04141C93441065283871A55F365206A26FC4_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control rightEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CrightEyeAngularAccelerationU3Ek__BackingField_66(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyePosition_mFF17B749E0CB39408690E0821C4E8262388A9FD0_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control centerEyePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyePositionU3Ek__BackingField_67(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeRotation_mC26D217FBC85D7946529A600BA1C58608779648C_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl centerEyeRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CcenterEyeRotationU3Ek__BackingField_68(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularVelocity_mC949AC46AF92C80B6CE7CB411D38B70B7E0C7B6E_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularVelocityU3Ek__BackingField_69(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAcceleration_m7BEB672230FAA224572FE372C290699F7F12780B_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAccelerationU3Ek__BackingField_70(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMD_set_centerEyeAngularAcceleration_m0319043A4DD5F8F88D3C724B33FC4C90952023A8_inline (OculusHMD_t5E5B812FE0E5FE397A1D12517903EDCA7DFE048A * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control centerEyeAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CcenterEyeAngularAccelerationU3Ek__BackingField_71(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_back_mBD982237A0344C8B2E071AF0A6C79E12DECEEE41_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_72(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusHMDExtended_set_touchpad_mB88FCD5705B4D6CAC0E91517E9BA663D83468B91_inline (OculusHMDExtended_t5DFE5313C3F3C76E6B8CB1A9F9A13485C2723DCC * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_73(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * OculusLoader_GetSettings_mF0D5694BD84372039D4227997B00CAB33A419CAC_inline (OculusLoader_tD15B17A95554127ED764AFC39FE3D0E720C8BFEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C * L_0 = ((OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t4712D0425F8C41B07DC49C5DB0BCB8608046F63C_il2cpp_TypeInfo_var))->get_s_Settings_18();
		// return settings;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_back_m42C42B3D3B3E2470D73A37F04A690EB316EF93E2_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl back { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CbackU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_start_m88480ED134E4BF9073D31212DD3E75BA8943D699_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusRemote_set_touchpad_m9CC86404B64D239F153DFF450A3A2F93CF026479_inline (OculusRemote_t6C3BA59AA4DE09B5BE28029B65E1D16AE5BC60E3 * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control touchpad { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CtouchpadU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstick_m685F2D7C7E6EDD9744D80E45F6959E1E01404735_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Control thumbstick { get; private set; }
		Vector2Control_t342BA848221108F8818F05BF3CB484934F582935 * L_0 = ___value0;
		__this->set_U3CthumbstickU3Ek__BackingField_43(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trigger_m84AC0AF5C7F3167852FE41F39B2F4B8D81F31687_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerU3Ek__BackingField_44(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerTouched_mBF70F83EC08B75743395D944FD6C87680C47B59C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl triggerTouched { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CtriggerTouchedU3Ek__BackingField_53(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_grip_m68F2B59801E4DFE873D9F3E5612E4E43E14CD9C1_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * ___value0, const RuntimeMethod* method)
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tF6BA6DA28DAB8BBBAD80A596F12BF340EE883B22 * L_0 = ___value0;
		__this->set_U3CgripU3Ek__BackingField_45(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryButton_mA1CFD14B6548499E98ED3046F92D63598A26DC46_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CprimaryButtonU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryButton_mF341515B4438752A939FBE80A3DA871679A4F4B8_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryButton { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CsecondaryButtonU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_gripPressed_m2BEC39C0BBE39C6C062E3C1B000214001E408F3F_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CgripPressedU3Ek__BackingField_48(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_start_m1F975365CF1A993AE21B1CF33E11956C0A3C08D6_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl start { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CstartU3Ek__BackingField_49(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickClicked_mF4B4C55A984AD71CF8AFB489BC373EDC39C6EED5_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickClicked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CthumbstickClickedU3Ek__BackingField_50(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_primaryTouched_m1DB71D1C35760287C2FF291192EB16F27CA5B98E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl primaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CprimaryTouchedU3Ek__BackingField_51(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_secondaryTouched_m17396ABD16684356EDA005EC2100923664B1BDC5_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl secondaryTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CsecondaryTouchedU3Ek__BackingField_52(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_thumbstickTouched_mAF4F4DA008B4424E37263BF56F2631822968DD0B_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl thumbstickTouched { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CthumbstickTouchedU3Ek__BackingField_55(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_triggerPressed_m081EBC9A4A2ED436135F4019A2767DBF93E4D4CA_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl triggerPressed { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CtriggerPressedU3Ek__BackingField_54(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_trackingState_mD5B3B0CCEA7FB542E847E11618F37B31D4C0C138_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public new IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_56(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_isTracked_mB6FBB4565BE79FAD51379157F71F53F8BB6CFC7E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public new ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_57(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_devicePosition_m3A5AC5C7A6EB37A088600D2E6D54F8A018D1510A_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public new Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_58(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceRotation_mCF3C4CAF683B2CED74122F091711A66190B97C6E_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public new QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_59(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceVelocity_m096FD36525B4E8A8B860AB532AF7E4F8F3E52ED4_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceVelocityU3Ek__BackingField_60(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularVelocity_m343E96932C774D4E30B4CD6FA42A266AEB88CE8C_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularVelocity { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularVelocityU3Ek__BackingField_61(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAcceleration_mA76B2C490A21661F19C48477A65F765FC6881DE1_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAccelerationU3Ek__BackingField_62(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTouchController_set_deviceAngularAcceleration_mC30539974E317B0A0485A0A516844DC2516C8010_inline (OculusTouchController_t7612C344276CDE88CE68E8D34B539962FE3552DA * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control deviceAngularAcceleration { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdeviceAngularAccelerationU3Ek__BackingField_63(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_trackingState_mC0971022F3CCBBDA85DB933934315FFCD2A934DB_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * ___value0, const RuntimeMethod* method)
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_t7A27284DD4A3D30C25AA43717A80A6CCB30E26A8 * L_0 = ___value0;
		__this->set_U3CtrackingStateU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_isTracked_mAAAE66C97F811E8B52FEE278C04551920E9852A8_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * ___value0, const RuntimeMethod* method)
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t7C71776B1EF54267612446DAC263673FCCA25E6D * L_0 = ___value0;
		__this->set_U3CisTrackedU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_devicePosition_m4F4AD1C8EC2F3C09E988BBD89E699370E1000C93_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t9AB8CA69116112896589CEB0B9BB7A0E42739E15 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_41(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OculusTrackingReference_set_deviceRotation_m077092095138DDAC7CED0AFD974E585AB790AF2C_inline (OculusTrackingReference_t79C8D095C2CE84761CE9E12ADA114485F446D807 * __this, QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tDB0B05D0B1B73296BA48A0F8BE9E21C86B1811AF * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_42(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetOvrJava_mDF68244ABCAA9FBF684F5361A96795CC9FC42E0B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
