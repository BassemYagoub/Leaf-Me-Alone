#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Pinwheel.Griffin.GStylizedTerrain>
struct Action_1_tFF43DD2D2F1381EEAA5D2474D68D24A364848EE1;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.RenderTexture>
struct Dictionary_2_t4935D7AB81ED118AEC2004A204D2D3F8027F8461;
// System.Collections.Generic.HashSet`1<Pinwheel.Griffin.GStylizedTerrain>
struct HashSet_1_t3C71035983978FDDF29BD6331D9C919A2EB1E072;
// System.Collections.Generic.List`1<Pinwheel.Griffin.GStylizedTerrain>
struct List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A;
// System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>
struct List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_t7AFC5094F7C1D24DAAA8893B11B1743A7A0D2CFE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Predicate`1<System.Type>
struct Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Pinwheel.Griffin.PaintTool.GSpawnFilter[]
struct GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71;
// Pinwheel.Griffin.GStylizedTerrain[]
struct GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5;
// Pinwheel.Griffin.GTerrainChunk[]
struct GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164;
// Pinwheel.Griffin.GTerrainChunkLOD[]
struct GTerrainChunkLODU5BU5D_tEE9C5728B5DEC121479E26B2F67E9B01F09253C0;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Pinwheel.Griffin.PaintTool.GConditionalPaintingConfigs
struct GConditionalPaintingConfigs_t9F2B8C5FC5FD92CDA8F66550AF863F87E3D83AA6;
// Pinwheel.Griffin.GFoliage
struct GFoliage_tCDD770470FDAB44114F1DA666F270AB1F06BAB57;
// Pinwheel.Griffin.GGeometry
struct GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873;
// Pinwheel.Griffin.Rendering.GGrassRenderer
struct GGrassRenderer_t44ABFAA74543175967B09153CA7A4E3B417D589E;
// Pinwheel.Griffin.GMask
struct GMask_t274B54C9DD84219685FEAA78C4E379288E3AABC1;
// Pinwheel.Griffin.GRendering
struct GRendering_t6A99503828749B2D40D0467DAF12BF23A4F5F05C;
// Pinwheel.Griffin.GShading
struct GShading_tCDE644D877E4A42572F8F36E163272EAD5E6227C;
// Pinwheel.Griffin.SplineTool.GSpline
struct GSpline_t5FC603EF9389F3151067B906F8DEAD8C7670BC72;
// Pinwheel.Griffin.SplineTool.GSplineCreator
struct GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB;
// Pinwheel.Griffin.GStylizedTerrain
struct GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1;
// Pinwheel.Griffin.GTerrainChunk
struct GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F;
// Pinwheel.Griffin.GTerrainData
struct GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047;
// Pinwheel.Griffin.GTerrainGeneratedData
struct GTerrainGeneratedData_tF50D32C7DC9FC05EE2EED675B01326292D1FB513;
// Pinwheel.Griffin.Rendering.GTreeRenderer
struct GTreeRenderer_tA0A05F41EBB3D3D090D3591A63D95903618A7C44;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.LODGroup
struct LODGroup_tF8F5079A807AD0152B2746CD22AC3E4A89E8A7A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler
struct SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02;
// Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B;
// Pinwheel.Griffin.GStylizedTerrain/<>c
struct U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass100_0
struct U3CU3Ec__DisplayClass100_0_t2AC624185A04381F9C202C4DAB16DFB706B5FB72;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass107_0
struct U3CU3Ec__DisplayClass107_0_tD889FFD2568ACD0A8F85B7586DE2D1630CA18843;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t1946A5E442352F714BE886CB72ED57FB56D96A83;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t4542D732C43647D30F15C6E7F191E63717A23BC6;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass98_0
struct U3CU3Ec__DisplayClass98_0_tA444BFDDD1E55E24C85CA7CC9D5E27C667F59B8D;
// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t4C88DC27DE5A98263EEFB676857B5FA954C79468;
// Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94
struct U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA;
// Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback
struct HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF;
// Pinwheel.Griffin.GSubDivisionTree/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t10AE54369035AF13FCB091A0BF50880E11BAD28F;
// Pinwheel.Griffin.GSubDivisionTree/Node
struct Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F;
// Pinwheel.Griffin.GTerrainData/DirtyHandler
struct DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16;
// Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler
struct GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C;
// Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler
struct GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797;
// Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler
struct GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7;
// Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler
struct GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491;
// Pinwheel.Griffin.GTerrainData/TreeChangedHandler
struct TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154;
// Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c
struct U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157;
// Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212;
// Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler
struct CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F;
// Pinwheel.Griffin._GSelectionGridArgs/DrawHandler
struct DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF;
// Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler
struct TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA;
// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCCD93A13FA1F5C4BE49151023E37355346DD5FE5;
// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F;
// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate
struct TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859;

IL2CPP_EXTERN_C RuntimeClass* DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUtilities_tD621A367BC2203A13452703004B76CC6C3C9A7E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m050E25A559C702AAA1033EF6A266B1827860898E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C3D45C219992ED3323037CB75FFA582EF3FDCEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateChunksTimeSlicedU3Ed__94_System_Collections_IEnumerator_Reset_m6C5453380602123F722F934C1CAEEC3BBE716C70_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<Pinwheel.Griffin.GStylizedTerrain>
struct List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A, ____items_1)); }
	inline GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* get__items_1() const { return ____items_1; }
	inline GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A_StaticFields, ____emptyArray_5)); }
	inline GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GStylizedTerrainU5BU5D_t4A3F373D387EAEA10F1D13A673ADEA7D945F4BE5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>
struct List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7, ____items_1)); }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* get__items_1() const { return ____items_1; }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7_StaticFields, ____emptyArray_5)); }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B  : public RuntimeObject
{
public:
	// Pinwheel.Griffin.SplineTool.GSplineCreator Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0::spline
	GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * ___spline_0;
	// System.Collections.Generic.List`1<Pinwheel.Griffin.GStylizedTerrain> Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0::terrains
	List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A * ___terrains_1;

public:
	inline static int32_t get_offset_of_spline_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B, ___spline_0)); }
	inline GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * get_spline_0() const { return ___spline_0; }
	inline GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB ** get_address_of_spline_0() { return &___spline_0; }
	inline void set_spline_0(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * value)
	{
		___spline_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spline_0), (void*)value);
	}

	inline static int32_t get_offset_of_terrains_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B, ___terrains_1)); }
	inline List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A * get_terrains_1() const { return ___terrains_1; }
	inline List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A ** get_address_of_terrains_1() { return &___terrains_1; }
	inline void set_terrains_1(List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A * value)
	{
		___terrains_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrains_1), (void*)value);
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c
struct U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_StaticFields
{
public:
	// Pinwheel.Griffin.GStylizedTerrain/<>c Pinwheel.Griffin.GStylizedTerrain/<>c::<>9
	U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * ___U3CU3E9_0;
	// System.Action`1<Pinwheel.Griffin.GStylizedTerrain> Pinwheel.Griffin.GStylizedTerrain/<>c::<>9__119_0
	Action_1_tFF43DD2D2F1381EEAA5D2474D68D24A364848EE1 * ___U3CU3E9__119_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__119_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_StaticFields, ___U3CU3E9__119_0_1)); }
	inline Action_1_tFF43DD2D2F1381EEAA5D2474D68D24A364848EE1 * get_U3CU3E9__119_0_1() const { return ___U3CU3E9__119_0_1; }
	inline Action_1_tFF43DD2D2F1381EEAA5D2474D68D24A364848EE1 ** get_address_of_U3CU3E9__119_0_1() { return &___U3CU3E9__119_0_1; }
	inline void set_U3CU3E9__119_0_1(Action_1_tFF43DD2D2F1381EEAA5D2474D68D24A364848EE1 * value)
	{
		___U3CU3E9__119_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__119_0_1), (void*)value);
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94
struct U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA  : public RuntimeObject
{
public:
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<>4__this
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk> Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::chunksToUpdate
	List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * ___chunksToUpdate_3;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<coreCount>5__2
	int32_t ___U3CcoreCountU3E5__2_4;
	// System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk> Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<chunks>5__3
	List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * ___U3CchunksU3E5__3_5;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<step>5__4
	int32_t ___U3CstepU3E5__4_6;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<lodCount>5__5
	int32_t ___U3ClodCountU3E5__5_7;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<repeat>5__6
	int32_t ___U3CrepeatU3E5__6_8;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::<i>5__7
	int32_t ___U3CiU3E5__7_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CU3E4__this_2)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_chunksToUpdate_3() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___chunksToUpdate_3)); }
	inline List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * get_chunksToUpdate_3() const { return ___chunksToUpdate_3; }
	inline List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 ** get_address_of_chunksToUpdate_3() { return &___chunksToUpdate_3; }
	inline void set_chunksToUpdate_3(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * value)
	{
		___chunksToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chunksToUpdate_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcoreCountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CcoreCountU3E5__2_4)); }
	inline int32_t get_U3CcoreCountU3E5__2_4() const { return ___U3CcoreCountU3E5__2_4; }
	inline int32_t* get_address_of_U3CcoreCountU3E5__2_4() { return &___U3CcoreCountU3E5__2_4; }
	inline void set_U3CcoreCountU3E5__2_4(int32_t value)
	{
		___U3CcoreCountU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CchunksU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CchunksU3E5__3_5)); }
	inline List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * get_U3CchunksU3E5__3_5() const { return ___U3CchunksU3E5__3_5; }
	inline List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 ** get_address_of_U3CchunksU3E5__3_5() { return &___U3CchunksU3E5__3_5; }
	inline void set_U3CchunksU3E5__3_5(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * value)
	{
		___U3CchunksU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CchunksU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstepU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CstepU3E5__4_6)); }
	inline int32_t get_U3CstepU3E5__4_6() const { return ___U3CstepU3E5__4_6; }
	inline int32_t* get_address_of_U3CstepU3E5__4_6() { return &___U3CstepU3E5__4_6; }
	inline void set_U3CstepU3E5__4_6(int32_t value)
	{
		___U3CstepU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3ClodCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3ClodCountU3E5__5_7)); }
	inline int32_t get_U3ClodCountU3E5__5_7() const { return ___U3ClodCountU3E5__5_7; }
	inline int32_t* get_address_of_U3ClodCountU3E5__5_7() { return &___U3ClodCountU3E5__5_7; }
	inline void set_U3ClodCountU3E5__5_7(int32_t value)
	{
		___U3ClodCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CrepeatU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CrepeatU3E5__6_8)); }
	inline int32_t get_U3CrepeatU3E5__6_8() const { return ___U3CrepeatU3E5__6_8; }
	inline int32_t* get_address_of_U3CrepeatU3E5__6_8() { return &___U3CrepeatU3E5__6_8; }
	inline void set_U3CrepeatU3E5__6_8(int32_t value)
	{
		___U3CrepeatU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA, ___U3CiU3E5__7_9)); }
	inline int32_t get_U3CiU3E5__7_9() const { return ___U3CiU3E5__7_9; }
	inline int32_t* get_address_of_U3CiU3E5__7_9() { return &___U3CiU3E5__7_9; }
	inline void set_U3CiU3E5__7_9(int32_t value)
	{
		___U3CiU3E5__7_9 = value;
	}
};


// Pinwheel.Griffin.GSubDivisionTree/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t10AE54369035AF13FCB091A0BF50880E11BAD28F  : public RuntimeObject
{
public:
	// System.Int32 Pinwheel.Griffin.GSubDivisionTree/<>c__DisplayClass7_0::max
	int32_t ___max_0;

public:
	inline static int32_t get_offset_of_max_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t10AE54369035AF13FCB091A0BF50880E11BAD28F, ___max_0)); }
	inline int32_t get_max_0() const { return ___max_0; }
	inline int32_t* get_address_of_max_0() { return &___max_0; }
	inline void set_max_0(int32_t value)
	{
		___max_0 = value;
	}
};


// Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c
struct U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_StaticFields
{
public:
	// Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::<>9
	U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * ___U3CU3E9_0;
	// System.Predicate`1<System.Type> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::<>9__9_0
	Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCCD93A13FA1F5C4BE49151023E37355346DD5FE5  : public RuntimeObject
{
public:
	// UnityEngine.Shader Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass3_0::shader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader_0;

public:
	inline static int32_t get_offset_of_shader_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tCCD93A13FA1F5C4BE49151023E37355346DD5FE5, ___shader_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shader_0() const { return ___shader_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shader_0() { return &___shader_0; }
	inline void set_shader_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_0), (void*)value);
	}
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
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


// Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
struct PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D 
{
public:
	// System.Boolean Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::validation
	bool ___validation_0;
	// System.Boolean Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::canDrawInstanced
	bool ___canDrawInstanced_1;
	// System.Boolean Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::canDrawBillboardInstanced
	bool ___canDrawBillboardInstanced_2;
	// System.Int32 Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::subMeshCount
	int32_t ___subMeshCount_3;
	// UnityEngine.Vector4[] Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::billboardImageTexcoords
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___billboardImageTexcoords_4;
	// UnityEngine.Mesh Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache::billboardMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___billboardMesh_5;

public:
	inline static int32_t get_offset_of_validation_0() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___validation_0)); }
	inline bool get_validation_0() const { return ___validation_0; }
	inline bool* get_address_of_validation_0() { return &___validation_0; }
	inline void set_validation_0(bool value)
	{
		___validation_0 = value;
	}

	inline static int32_t get_offset_of_canDrawInstanced_1() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___canDrawInstanced_1)); }
	inline bool get_canDrawInstanced_1() const { return ___canDrawInstanced_1; }
	inline bool* get_address_of_canDrawInstanced_1() { return &___canDrawInstanced_1; }
	inline void set_canDrawInstanced_1(bool value)
	{
		___canDrawInstanced_1 = value;
	}

	inline static int32_t get_offset_of_canDrawBillboardInstanced_2() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___canDrawBillboardInstanced_2)); }
	inline bool get_canDrawBillboardInstanced_2() const { return ___canDrawBillboardInstanced_2; }
	inline bool* get_address_of_canDrawBillboardInstanced_2() { return &___canDrawBillboardInstanced_2; }
	inline void set_canDrawBillboardInstanced_2(bool value)
	{
		___canDrawBillboardInstanced_2 = value;
	}

	inline static int32_t get_offset_of_subMeshCount_3() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___subMeshCount_3)); }
	inline int32_t get_subMeshCount_3() const { return ___subMeshCount_3; }
	inline int32_t* get_address_of_subMeshCount_3() { return &___subMeshCount_3; }
	inline void set_subMeshCount_3(int32_t value)
	{
		___subMeshCount_3 = value;
	}

	inline static int32_t get_offset_of_billboardImageTexcoords_4() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___billboardImageTexcoords_4)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_billboardImageTexcoords_4() const { return ___billboardImageTexcoords_4; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_billboardImageTexcoords_4() { return &___billboardImageTexcoords_4; }
	inline void set_billboardImageTexcoords_4(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___billboardImageTexcoords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___billboardImageTexcoords_4), (void*)value);
	}

	inline static int32_t get_offset_of_billboardMesh_5() { return static_cast<int32_t>(offsetof(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D, ___billboardMesh_5)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_billboardMesh_5() const { return ___billboardMesh_5; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_billboardMesh_5() { return &___billboardMesh_5; }
	inline void set_billboardMesh_5(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___billboardMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___billboardMesh_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
struct PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_pinvoke
{
	int32_t ___validation_0;
	int32_t ___canDrawInstanced_1;
	int32_t ___canDrawBillboardInstanced_2;
	int32_t ___subMeshCount_3;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___billboardImageTexcoords_4;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___billboardMesh_5;
};
// Native definition for COM marshalling of Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
struct PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_com
{
	int32_t ___validation_0;
	int32_t ___canDrawInstanced_1;
	int32_t ___canDrawBillboardInstanced_2;
	int32_t ___subMeshCount_3;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___billboardImageTexcoords_4;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___billboardMesh_5;
};

// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Pinwheel.Griffin.GAlbedoToVertexColorMode
struct GAlbedoToVertexColorMode_tE02F9FC4E3595E623B1267DB9F3DCC645977AEEC 
{
public:
	// System.Int32 Pinwheel.Griffin.GAlbedoToVertexColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GAlbedoToVertexColorMode_tE02F9FC4E3595E623B1267DB9F3DCC645977AEEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.GLightingModel
struct GLightingModel_t7540AEA453F6B5F46086E024570FDDF27B7F4866 
{
public:
	// System.Int32 Pinwheel.Griffin.GLightingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLightingModel_t7540AEA453F6B5F46086E024570FDDF27B7F4866, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.PaintTool.GPainterActionType
struct GPainterActionType_t8B19923106D2FB2398C04808D6AB4A9325EBE215 
{
public:
	// System.Int32 Pinwheel.Griffin.PaintTool.GPainterActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GPainterActionType_t8B19923106D2FB2398C04808D6AB4A9325EBE215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.PaintTool.GPainterMouseEventType
struct GPainterMouseEventType_t6D22CE78527011121A1461D8447944E1B7A4C7F2 
{
public:
	// System.Int32 Pinwheel.Griffin.PaintTool.GPainterMouseEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GPainterMouseEventType_t6D22CE78527011121A1461D8447944E1B7A4C7F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.GSplatsModel
struct GSplatsModel_tA11E048242B7C91DC1B2F52DDBBFA0F09BC8F0B2 
{
public:
	// System.Int32 Pinwheel.Griffin.GSplatsModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GSplatsModel_tA11E048242B7C91DC1B2F52DDBBFA0F09BC8F0B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.PaintTool.GTexturePaintingMode
struct GTexturePaintingMode_t07314D18753D3470E3B8F5B99E699613B892529F 
{
public:
	// System.Int32 Pinwheel.Griffin.PaintTool.GTexturePaintingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GTexturePaintingMode_t07314D18753D3470E3B8F5B99E699613B892529F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.GTexturingModel
struct GTexturingModel_t453B9D0469246CBD879E1C69D09CA850BD9D6447 
{
public:
	// System.Int32 Pinwheel.Griffin.GTexturingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GTexturingModel_t453B9D0469246CBD879E1C69D09CA850BD9D6447, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.GTreeInstance
struct GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC 
{
public:
	// System.Int32 Pinwheel.Griffin.GTreeInstance::prototypeIndex
	int32_t ___prototypeIndex_0;
	// UnityEngine.Vector3 Pinwheel.Griffin.GTreeInstance::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Pinwheel.Griffin.GTreeInstance::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;
	// UnityEngine.Vector3 Pinwheel.Griffin.GTreeInstance::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_3;

public:
	inline static int32_t get_offset_of_prototypeIndex_0() { return static_cast<int32_t>(offsetof(GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC, ___prototypeIndex_0)); }
	inline int32_t get_prototypeIndex_0() const { return ___prototypeIndex_0; }
	inline int32_t* get_address_of_prototypeIndex_0() { return &___prototypeIndex_0; }
	inline void set_prototypeIndex_0(int32_t value)
	{
		___prototypeIndex_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC, ___scale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_3() const { return ___scale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_3 = value;
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
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


// Pinwheel.Griffin.GGeometry/GStorageMode
struct GStorageMode_t0D6D7E832FA713CAEB7E3047B080DE6EC2110F35 
{
public:
	// System.Int32 Pinwheel.Griffin.GGeometry/GStorageMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GStorageMode_t0D6D7E832FA713CAEB7E3047B080DE6EC2110F35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.SplineTool.GSplineSegment/GSweepTestData
struct GSweepTestData_t2A3442E89A774AB5381108971E9EB87D48488BD9 
{
public:
	// System.Int32 Pinwheel.Griffin.SplineTool.GSplineSegment/GSweepTestData::startIndex
	int32_t ___startIndex_0;
	// System.Int32 Pinwheel.Griffin.SplineTool.GSplineSegment/GSweepTestData::endIndex
	int32_t ___endIndex_1;
	// UnityEngine.Vector3 Pinwheel.Griffin.SplineTool.GSplineSegment/GSweepTestData::startTangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startTangent_2;
	// UnityEngine.Vector3 Pinwheel.Griffin.SplineTool.GSplineSegment/GSweepTestData::endTangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endTangent_3;

public:
	inline static int32_t get_offset_of_startIndex_0() { return static_cast<int32_t>(offsetof(GSweepTestData_t2A3442E89A774AB5381108971E9EB87D48488BD9, ___startIndex_0)); }
	inline int32_t get_startIndex_0() const { return ___startIndex_0; }
	inline int32_t* get_address_of_startIndex_0() { return &___startIndex_0; }
	inline void set_startIndex_0(int32_t value)
	{
		___startIndex_0 = value;
	}

	inline static int32_t get_offset_of_endIndex_1() { return static_cast<int32_t>(offsetof(GSweepTestData_t2A3442E89A774AB5381108971E9EB87D48488BD9, ___endIndex_1)); }
	inline int32_t get_endIndex_1() const { return ___endIndex_1; }
	inline int32_t* get_address_of_endIndex_1() { return &___endIndex_1; }
	inline void set_endIndex_1(int32_t value)
	{
		___endIndex_1 = value;
	}

	inline static int32_t get_offset_of_startTangent_2() { return static_cast<int32_t>(offsetof(GSweepTestData_t2A3442E89A774AB5381108971E9EB87D48488BD9, ___startTangent_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startTangent_2() const { return ___startTangent_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startTangent_2() { return &___startTangent_2; }
	inline void set_startTangent_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startTangent_2 = value;
	}

	inline static int32_t get_offset_of_endTangent_3() { return static_cast<int32_t>(offsetof(GSweepTestData_t2A3442E89A774AB5381108971E9EB87D48488BD9, ___endTangent_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_endTangent_3() const { return ___endTangent_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_endTangent_3() { return &___endTangent_3; }
	inline void set_endTangent_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___endTangent_3 = value;
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass100_0
struct U3CU3Ec__DisplayClass100_0_t2AC624185A04381F9C202C4DAB16DFB706B5FB72  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass100_0::index
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass100_0_t2AC624185A04381F9C202C4DAB16DFB706B5FB72, ___index_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_index_0() const { return ___index_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___index_0 = value;
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass107_0
struct U3CU3Ec__DisplayClass107_0_tD889FFD2568ACD0A8F85B7586DE2D1630CA18843  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass107_0::origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin_0;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass107_0_tD889FFD2568ACD0A8F85B7586DE2D1630CA18843, ___origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_origin_0() const { return ___origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___origin_0 = value;
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass97_0
struct U3CU3Ec__DisplayClass97_0_t4542D732C43647D30F15C6E7F191E63717A23BC6  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass97_0::index
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass97_0_t4542D732C43647D30F15C6E7F191E63717A23BC6, ___index_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_index_0() const { return ___index_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___index_0 = value;
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass98_0
struct U3CU3Ec__DisplayClass98_0_tA444BFDDD1E55E24C85CA7CC9D5E27C667F59B8D  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass98_0::index
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass98_0_tA444BFDDD1E55E24C85CA7CC9D5E27C667F59B8D, ___index_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_index_0() const { return ___index_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___index_0 = value;
	}
};


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_t4C88DC27DE5A98263EEFB676857B5FA954C79468  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass99_0::index
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_t4C88DC27DE5A98263EEFB676857B5FA954C79468, ___index_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_index_0() const { return ___index_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___index_0 = value;
	}
};


// Pinwheel.Griffin.GSubDivisionTree/Node
struct Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F  : public RuntimeObject
{
public:
	// System.Int32 Pinwheel.Griffin.GSubDivisionTree/Node::<Level>k__BackingField
	int32_t ___U3CLevelU3Ek__BackingField_0;
	// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::v0
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0_1;
	// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::v1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v1_2;
	// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::v2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v2_3;
	// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::leftNode
	Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___leftNode_4;
	// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::rightNode
	Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___rightNode_5;

public:
	inline static int32_t get_offset_of_U3CLevelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___U3CLevelU3Ek__BackingField_0)); }
	inline int32_t get_U3CLevelU3Ek__BackingField_0() const { return ___U3CLevelU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLevelU3Ek__BackingField_0() { return &___U3CLevelU3Ek__BackingField_0; }
	inline void set_U3CLevelU3Ek__BackingField_0(int32_t value)
	{
		___U3CLevelU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_v0_1() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___v0_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_v0_1() const { return ___v0_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_v0_1() { return &___v0_1; }
	inline void set_v0_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___v0_1 = value;
	}

	inline static int32_t get_offset_of_v1_2() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___v1_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_v1_2() const { return ___v1_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_v1_2() { return &___v1_2; }
	inline void set_v1_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___v1_2 = value;
	}

	inline static int32_t get_offset_of_v2_3() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___v2_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_v2_3() const { return ___v2_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_v2_3() { return &___v2_3; }
	inline void set_v2_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___v2_3 = value;
	}

	inline static int32_t get_offset_of_leftNode_4() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___leftNode_4)); }
	inline Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * get_leftNode_4() const { return ___leftNode_4; }
	inline Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F ** get_address_of_leftNode_4() { return &___leftNode_4; }
	inline void set_leftNode_4(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * value)
	{
		___leftNode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftNode_4), (void*)value);
	}

	inline static int32_t get_offset_of_rightNode_5() { return static_cast<int32_t>(offsetof(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F, ___rightNode_5)); }
	inline Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * get_rightNode_5() const { return ___rightNode_5; }
	inline Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F ** get_address_of_rightNode_5() { return &___rightNode_5; }
	inline void set_rightNode_5(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * value)
	{
		___rightNode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightNode_5), (void*)value);
	}
};


// Pinwheel.Griffin.GTerrainData/DirtyFlags
struct DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067 
{
public:
	// System.Byte Pinwheel.Griffin.GTerrainData/DirtyFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Pinwheel.Griffin.DataTool.GUnityTerrainGroupConverter/GAlbedoUsage
struct GAlbedoUsage_tD613365691E4029F31B7AD34C814D152E01C4E2E 
{
public:
	// System.Int32 Pinwheel.Griffin.DataTool.GUnityTerrainGroupConverter/GAlbedoUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GAlbedoUsage_tD613365691E4029F31B7AD34C814D152E01C4E2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Pinwheel.Griffin.GSubdivNode>
struct NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Pinwheel.Griffin.PaintTool.GFoliagePainterArgs
struct GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC 
{
public:
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<HitPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPointU3Ek__BackingField_0;
	// UnityEngine.Collider Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Collider>k__BackingField
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CColliderU3Ek__BackingField_1;
	// UnityEngine.Transform Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Transform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTransformU3Ek__BackingField_2;
	// UnityEngine.Vector2 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<UV>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CUVU3Ek__BackingField_3;
	// System.Int32 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<TriangleIndex>k__BackingField
	int32_t ___U3CTriangleIndexU3Ek__BackingField_4;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<BarycentricCoord>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CBarycentricCoordU3Ek__BackingField_5;
	// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Distance>k__BackingField
	float ___U3CDistanceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Normal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_7;
	// UnityEngine.Vector2 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<LightMapCoord>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CLightMapCoordU3Ek__BackingField_8;
	// UnityEngine.Rect Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<UvRect>k__BackingField
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CUvRectU3Ek__BackingField_9;
	// UnityEngine.Vector3[] Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<WorldPointCorners>k__BackingField
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CWorldPointCornersU3Ek__BackingField_10;
	// UnityEngine.Texture2D Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Mask>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CMaskU3Ek__BackingField_11;
	// System.Boolean Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<EnableTerrainMask>k__BackingField
	bool ___U3CEnableTerrainMaskU3Ek__BackingField_12;
	// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_13;
	// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Rotation>k__BackingField
	float ___U3CRotationU3Ek__BackingField_14;
	// System.Int32 Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Density>k__BackingField
	int32_t ___U3CDensityU3Ek__BackingField_15;
	// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<EraseRatio>k__BackingField
	float ___U3CEraseRatioU3Ek__BackingField_16;
	// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<ScaleStrength>k__BackingField
	float ___U3CScaleStrengthU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<System.Int32> Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<TreeIndices>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CTreeIndicesU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<System.Int32> Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<GrassIndices>k__BackingField
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CGrassIndicesU3Ek__BackingField_19;
	// System.String Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<CustomArgs>k__BackingField
	String_t* ___U3CCustomArgsU3Ek__BackingField_20;
	// Pinwheel.Griffin.PaintTool.GPainterMouseEventType Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<MouseEventType>k__BackingField
	int32_t ___U3CMouseEventTypeU3Ek__BackingField_21;
	// Pinwheel.Griffin.PaintTool.GPainterActionType Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<ActionType>k__BackingField
	int32_t ___U3CActionTypeU3Ek__BackingField_22;
	// Pinwheel.Griffin.PaintTool.GSpawnFilter[] Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<Filters>k__BackingField
	GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71* ___U3CFiltersU3Ek__BackingField_23;
	// System.Boolean Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::<ShouldCommitNow>k__BackingField
	bool ___U3CShouldCommitNowU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CHitPointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CHitPointU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CHitPointU3Ek__BackingField_0() const { return ___U3CHitPointU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CHitPointU3Ek__BackingField_0() { return &___U3CHitPointU3Ek__BackingField_0; }
	inline void set_U3CHitPointU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CHitPointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CColliderU3Ek__BackingField_1)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_U3CColliderU3Ek__BackingField_1() const { return ___U3CColliderU3Ek__BackingField_1; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_U3CColliderU3Ek__BackingField_1() { return &___U3CColliderU3Ek__BackingField_1; }
	inline void set_U3CColliderU3Ek__BackingField_1(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___U3CColliderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransformU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CTransformU3Ek__BackingField_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTransformU3Ek__BackingField_2() const { return ___U3CTransformU3Ek__BackingField_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTransformU3Ek__BackingField_2() { return &___U3CTransformU3Ek__BackingField_2; }
	inline void set_U3CTransformU3Ek__BackingField_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTransformU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransformU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUVU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CUVU3Ek__BackingField_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CUVU3Ek__BackingField_3() const { return ___U3CUVU3Ek__BackingField_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CUVU3Ek__BackingField_3() { return &___U3CUVU3Ek__BackingField_3; }
	inline void set_U3CUVU3Ek__BackingField_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CUVU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTriangleIndexU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CTriangleIndexU3Ek__BackingField_4)); }
	inline int32_t get_U3CTriangleIndexU3Ek__BackingField_4() const { return ___U3CTriangleIndexU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTriangleIndexU3Ek__BackingField_4() { return &___U3CTriangleIndexU3Ek__BackingField_4; }
	inline void set_U3CTriangleIndexU3Ek__BackingField_4(int32_t value)
	{
		___U3CTriangleIndexU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CBarycentricCoordU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CBarycentricCoordU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CBarycentricCoordU3Ek__BackingField_5() const { return ___U3CBarycentricCoordU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CBarycentricCoordU3Ek__BackingField_5() { return &___U3CBarycentricCoordU3Ek__BackingField_5; }
	inline void set_U3CBarycentricCoordU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CBarycentricCoordU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDistanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CDistanceU3Ek__BackingField_6)); }
	inline float get_U3CDistanceU3Ek__BackingField_6() const { return ___U3CDistanceU3Ek__BackingField_6; }
	inline float* get_address_of_U3CDistanceU3Ek__BackingField_6() { return &___U3CDistanceU3Ek__BackingField_6; }
	inline void set_U3CDistanceU3Ek__BackingField_6(float value)
	{
		___U3CDistanceU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CNormalU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CNormalU3Ek__BackingField_7() const { return ___U3CNormalU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CNormalU3Ek__BackingField_7() { return &___U3CNormalU3Ek__BackingField_7; }
	inline void set_U3CNormalU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CNormalU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLightMapCoordU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CLightMapCoordU3Ek__BackingField_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CLightMapCoordU3Ek__BackingField_8() const { return ___U3CLightMapCoordU3Ek__BackingField_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CLightMapCoordU3Ek__BackingField_8() { return &___U3CLightMapCoordU3Ek__BackingField_8; }
	inline void set_U3CLightMapCoordU3Ek__BackingField_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CLightMapCoordU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUvRectU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CUvRectU3Ek__BackingField_9)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CUvRectU3Ek__BackingField_9() const { return ___U3CUvRectU3Ek__BackingField_9; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CUvRectU3Ek__BackingField_9() { return &___U3CUvRectU3Ek__BackingField_9; }
	inline void set_U3CUvRectU3Ek__BackingField_9(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CUvRectU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CWorldPointCornersU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CWorldPointCornersU3Ek__BackingField_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CWorldPointCornersU3Ek__BackingField_10() const { return ___U3CWorldPointCornersU3Ek__BackingField_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CWorldPointCornersU3Ek__BackingField_10() { return &___U3CWorldPointCornersU3Ek__BackingField_10; }
	inline void set_U3CWorldPointCornersU3Ek__BackingField_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CWorldPointCornersU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWorldPointCornersU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaskU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CMaskU3Ek__BackingField_11)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CMaskU3Ek__BackingField_11() const { return ___U3CMaskU3Ek__BackingField_11; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CMaskU3Ek__BackingField_11() { return &___U3CMaskU3Ek__BackingField_11; }
	inline void set_U3CMaskU3Ek__BackingField_11(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CMaskU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaskU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableTerrainMaskU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CEnableTerrainMaskU3Ek__BackingField_12)); }
	inline bool get_U3CEnableTerrainMaskU3Ek__BackingField_12() const { return ___U3CEnableTerrainMaskU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CEnableTerrainMaskU3Ek__BackingField_12() { return &___U3CEnableTerrainMaskU3Ek__BackingField_12; }
	inline void set_U3CEnableTerrainMaskU3Ek__BackingField_12(bool value)
	{
		___U3CEnableTerrainMaskU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CRadiusU3Ek__BackingField_13)); }
	inline float get_U3CRadiusU3Ek__BackingField_13() const { return ___U3CRadiusU3Ek__BackingField_13; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_13() { return &___U3CRadiusU3Ek__BackingField_13; }
	inline void set_U3CRadiusU3Ek__BackingField_13(float value)
	{
		___U3CRadiusU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CRotationU3Ek__BackingField_14)); }
	inline float get_U3CRotationU3Ek__BackingField_14() const { return ___U3CRotationU3Ek__BackingField_14; }
	inline float* get_address_of_U3CRotationU3Ek__BackingField_14() { return &___U3CRotationU3Ek__BackingField_14; }
	inline void set_U3CRotationU3Ek__BackingField_14(float value)
	{
		___U3CRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CDensityU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CDensityU3Ek__BackingField_15)); }
	inline int32_t get_U3CDensityU3Ek__BackingField_15() const { return ___U3CDensityU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CDensityU3Ek__BackingField_15() { return &___U3CDensityU3Ek__BackingField_15; }
	inline void set_U3CDensityU3Ek__BackingField_15(int32_t value)
	{
		___U3CDensityU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CEraseRatioU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CEraseRatioU3Ek__BackingField_16)); }
	inline float get_U3CEraseRatioU3Ek__BackingField_16() const { return ___U3CEraseRatioU3Ek__BackingField_16; }
	inline float* get_address_of_U3CEraseRatioU3Ek__BackingField_16() { return &___U3CEraseRatioU3Ek__BackingField_16; }
	inline void set_U3CEraseRatioU3Ek__BackingField_16(float value)
	{
		___U3CEraseRatioU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CScaleStrengthU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CScaleStrengthU3Ek__BackingField_17)); }
	inline float get_U3CScaleStrengthU3Ek__BackingField_17() const { return ___U3CScaleStrengthU3Ek__BackingField_17; }
	inline float* get_address_of_U3CScaleStrengthU3Ek__BackingField_17() { return &___U3CScaleStrengthU3Ek__BackingField_17; }
	inline void set_U3CScaleStrengthU3Ek__BackingField_17(float value)
	{
		___U3CScaleStrengthU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTreeIndicesU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CTreeIndicesU3Ek__BackingField_18)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CTreeIndicesU3Ek__BackingField_18() const { return ___U3CTreeIndicesU3Ek__BackingField_18; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CTreeIndicesU3Ek__BackingField_18() { return &___U3CTreeIndicesU3Ek__BackingField_18; }
	inline void set_U3CTreeIndicesU3Ek__BackingField_18(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CTreeIndicesU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTreeIndicesU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGrassIndicesU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CGrassIndicesU3Ek__BackingField_19)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_U3CGrassIndicesU3Ek__BackingField_19() const { return ___U3CGrassIndicesU3Ek__BackingField_19; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_U3CGrassIndicesU3Ek__BackingField_19() { return &___U3CGrassIndicesU3Ek__BackingField_19; }
	inline void set_U3CGrassIndicesU3Ek__BackingField_19(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___U3CGrassIndicesU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGrassIndicesU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomArgsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CCustomArgsU3Ek__BackingField_20)); }
	inline String_t* get_U3CCustomArgsU3Ek__BackingField_20() const { return ___U3CCustomArgsU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CCustomArgsU3Ek__BackingField_20() { return &___U3CCustomArgsU3Ek__BackingField_20; }
	inline void set_U3CCustomArgsU3Ek__BackingField_20(String_t* value)
	{
		___U3CCustomArgsU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomArgsU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMouseEventTypeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CMouseEventTypeU3Ek__BackingField_21)); }
	inline int32_t get_U3CMouseEventTypeU3Ek__BackingField_21() const { return ___U3CMouseEventTypeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CMouseEventTypeU3Ek__BackingField_21() { return &___U3CMouseEventTypeU3Ek__BackingField_21; }
	inline void set_U3CMouseEventTypeU3Ek__BackingField_21(int32_t value)
	{
		___U3CMouseEventTypeU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CActionTypeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CActionTypeU3Ek__BackingField_22)); }
	inline int32_t get_U3CActionTypeU3Ek__BackingField_22() const { return ___U3CActionTypeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CActionTypeU3Ek__BackingField_22() { return &___U3CActionTypeU3Ek__BackingField_22; }
	inline void set_U3CActionTypeU3Ek__BackingField_22(int32_t value)
	{
		___U3CActionTypeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CFiltersU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CFiltersU3Ek__BackingField_23)); }
	inline GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71* get_U3CFiltersU3Ek__BackingField_23() const { return ___U3CFiltersU3Ek__BackingField_23; }
	inline GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71** get_address_of_U3CFiltersU3Ek__BackingField_23() { return &___U3CFiltersU3Ek__BackingField_23; }
	inline void set_U3CFiltersU3Ek__BackingField_23(GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71* value)
	{
		___U3CFiltersU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFiltersU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldCommitNowU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC, ___U3CShouldCommitNowU3Ek__BackingField_24)); }
	inline bool get_U3CShouldCommitNowU3Ek__BackingField_24() const { return ___U3CShouldCommitNowU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CShouldCommitNowU3Ek__BackingField_24() { return &___U3CShouldCommitNowU3Ek__BackingField_24; }
	inline void set_U3CShouldCommitNowU3Ek__BackingField_24(bool value)
	{
		___U3CShouldCommitNowU3Ek__BackingField_24 = value;
	}
};

// Native definition for P/Invoke marshalling of Pinwheel.Griffin.PaintTool.GFoliagePainterArgs
struct GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPointU3Ek__BackingField_0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CColliderU3Ek__BackingField_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTransformU3Ek__BackingField_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CUVU3Ek__BackingField_3;
	int32_t ___U3CTriangleIndexU3Ek__BackingField_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CBarycentricCoordU3Ek__BackingField_5;
	float ___U3CDistanceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CLightMapCoordU3Ek__BackingField_8;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CUvRectU3Ek__BackingField_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___U3CWorldPointCornersU3Ek__BackingField_10;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CMaskU3Ek__BackingField_11;
	int32_t ___U3CEnableTerrainMaskU3Ek__BackingField_12;
	float ___U3CRadiusU3Ek__BackingField_13;
	float ___U3CRotationU3Ek__BackingField_14;
	int32_t ___U3CDensityU3Ek__BackingField_15;
	float ___U3CEraseRatioU3Ek__BackingField_16;
	float ___U3CScaleStrengthU3Ek__BackingField_17;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CTreeIndicesU3Ek__BackingField_18;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CGrassIndicesU3Ek__BackingField_19;
	char* ___U3CCustomArgsU3Ek__BackingField_20;
	int32_t ___U3CMouseEventTypeU3Ek__BackingField_21;
	int32_t ___U3CActionTypeU3Ek__BackingField_22;
	GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71* ___U3CFiltersU3Ek__BackingField_23;
	int32_t ___U3CShouldCommitNowU3Ek__BackingField_24;
};
// Native definition for COM marshalling of Pinwheel.Griffin.PaintTool.GFoliagePainterArgs
struct GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CHitPointU3Ek__BackingField_0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___U3CColliderU3Ek__BackingField_1;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTransformU3Ek__BackingField_2;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CUVU3Ek__BackingField_3;
	int32_t ___U3CTriangleIndexU3Ek__BackingField_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CBarycentricCoordU3Ek__BackingField_5;
	float ___U3CDistanceU3Ek__BackingField_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CNormalU3Ek__BackingField_7;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CLightMapCoordU3Ek__BackingField_8;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CUvRectU3Ek__BackingField_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___U3CWorldPointCornersU3Ek__BackingField_10;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CMaskU3Ek__BackingField_11;
	int32_t ___U3CEnableTerrainMaskU3Ek__BackingField_12;
	float ___U3CRadiusU3Ek__BackingField_13;
	float ___U3CRotationU3Ek__BackingField_14;
	int32_t ___U3CDensityU3Ek__BackingField_15;
	float ___U3CEraseRatioU3Ek__BackingField_16;
	float ___U3CScaleStrengthU3Ek__BackingField_17;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CTreeIndicesU3Ek__BackingField_18;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___U3CGrassIndicesU3Ek__BackingField_19;
	Il2CppChar* ___U3CCustomArgsU3Ek__BackingField_20;
	int32_t ___U3CMouseEventTypeU3Ek__BackingField_21;
	int32_t ___U3CActionTypeU3Ek__BackingField_22;
	GSpawnFilterU5BU5D_t89C220110D2F34C45A0356D5B961E8815EA13D71* ___U3CFiltersU3Ek__BackingField_23;
	int32_t ___U3CShouldCommitNowU3Ek__BackingField_24;
};

// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
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


// Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t1946A5E442352F714BE886CB72ED57FB56D96A83  : public RuntimeObject
{
public:
	// UnityEngine.Ray Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass110_0::ray
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray_0;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_t1946A5E442352F714BE886CB72ED57FB56D96A83, ___ray_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_ray_0() const { return ___ray_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___ray_0 = value;
	}
};


// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F  : public RuntimeObject
{
public:
	// Pinwheel.Griffin.GLightingModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::light
	int32_t ___light_0;
	// Pinwheel.Griffin.GTexturingModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::texturing
	int32_t ___texturing_1;
	// Pinwheel.Griffin.GSplatsModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::splats
	int32_t ___splats_2;

public:
	inline static int32_t get_offset_of_light_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F, ___light_0)); }
	inline int32_t get_light_0() const { return ___light_0; }
	inline int32_t* get_address_of_light_0() { return &___light_0; }
	inline void set_light_0(int32_t value)
	{
		___light_0 = value;
	}

	inline static int32_t get_offset_of_texturing_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F, ___texturing_1)); }
	inline int32_t get_texturing_1() const { return ___texturing_1; }
	inline int32_t* get_address_of_texturing_1() { return &___texturing_1; }
	inline void set_texturing_1(int32_t value)
	{
		___texturing_1 = value;
	}

	inline static int32_t get_offset_of_splats_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F, ___splats_2)); }
	inline int32_t get_splats_2() const { return ___splats_2; }
	inline int32_t* get_address_of_splats_2() { return &___splats_2; }
	inline void set_splats_2(int32_t value)
	{
		___splats_2 = value;
	}
};


// Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate
struct TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859  : public RuntimeObject
{
public:
	// Pinwheel.Griffin.GLightingModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate::lightingModel
	int32_t ___lightingModel_0;
	// Pinwheel.Griffin.GTexturingModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate::texturingModel
	int32_t ___texturingModel_1;
	// Pinwheel.Griffin.GSplatsModel Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate::splatsModel
	int32_t ___splatsModel_2;
	// UnityEngine.Material Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;

public:
	inline static int32_t get_offset_of_lightingModel_0() { return static_cast<int32_t>(offsetof(TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859, ___lightingModel_0)); }
	inline int32_t get_lightingModel_0() const { return ___lightingModel_0; }
	inline int32_t* get_address_of_lightingModel_0() { return &___lightingModel_0; }
	inline void set_lightingModel_0(int32_t value)
	{
		___lightingModel_0 = value;
	}

	inline static int32_t get_offset_of_texturingModel_1() { return static_cast<int32_t>(offsetof(TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859, ___texturingModel_1)); }
	inline int32_t get_texturingModel_1() const { return ___texturingModel_1; }
	inline int32_t* get_address_of_texturingModel_1() { return &___texturingModel_1; }
	inline void set_texturingModel_1(int32_t value)
	{
		___texturingModel_1 = value;
	}

	inline static int32_t get_offset_of_splatsModel_2() { return static_cast<int32_t>(offsetof(TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859, ___splatsModel_2)); }
	inline int32_t get_splatsModel_2() const { return ___splatsModel_2; }
	inline int32_t* get_address_of_splatsModel_2() { return &___splatsModel_2; }
	inline void set_splatsModel_2(int32_t value)
	{
		___splatsModel_2 = value;
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Pinwheel.Griffin.GGeometry
struct GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Pinwheel.Griffin.GTerrainData Pinwheel.Griffin.GGeometry::terrainData
	GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * ___terrainData_5;
	// System.Single Pinwheel.Griffin.GGeometry::width
	float ___width_6;
	// System.Single Pinwheel.Griffin.GGeometry::height
	float ___height_7;
	// System.Single Pinwheel.Griffin.GGeometry::length
	float ___length_8;
	// System.Int32 Pinwheel.Griffin.GGeometry::heightMapResolution
	int32_t ___heightMapResolution_9;
	// UnityEngine.Texture2D Pinwheel.Griffin.GGeometry::heightMap
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___heightMap_10;
	// System.Single Pinwheel.Griffin.GGeometry::heightmapVersion
	float ___heightmapVersion_11;
	// UnityEngine.Texture2D Pinwheel.Griffin.GGeometry::subDivisionMap
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___subDivisionMap_13;
	// System.Int32 Pinwheel.Griffin.GGeometry::meshBaseResolution
	int32_t ___meshBaseResolution_14;
	// System.Int32 Pinwheel.Griffin.GGeometry::meshResolution
	int32_t ___meshResolution_15;
	// System.Int32 Pinwheel.Griffin.GGeometry::chunkGridSize
	int32_t ___chunkGridSize_16;
	// System.Int32 Pinwheel.Griffin.GGeometry::lodCount
	int32_t ___lodCount_17;
	// System.Int32 Pinwheel.Griffin.GGeometry::displacementSeed
	int32_t ___displacementSeed_18;
	// System.Single Pinwheel.Griffin.GGeometry::displacementStrength
	float ___displacementStrength_19;
	// Pinwheel.Griffin.GAlbedoToVertexColorMode Pinwheel.Griffin.GGeometry::albedoToVertexColorMode
	int32_t ___albedoToVertexColorMode_20;
	// Pinwheel.Griffin.GGeometry/GStorageMode Pinwheel.Griffin.GGeometry::storageMode
	int32_t ___storageMode_21;
	// System.Boolean Pinwheel.Griffin.GGeometry::allowTimeSlicedGeneration
	bool ___allowTimeSlicedGeneration_22;
	// System.Boolean Pinwheel.Griffin.GGeometry::smoothNormal
	bool ___smoothNormal_23;
	// System.Boolean Pinwheel.Griffin.GGeometry::useSmoothNormalMask
	bool ___useSmoothNormalMask_24;
	// System.Boolean Pinwheel.Griffin.GGeometry::mergeUv
	bool ___mergeUv_25;
	// System.Collections.Generic.List`1<UnityEngine.Rect> Pinwheel.Griffin.GGeometry::dirtyRegion
	List_1_t7AFC5094F7C1D24DAAA8893B11B1743A7A0D2CFE * ___dirtyRegion_26;

public:
	inline static int32_t get_offset_of_terrainData_5() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___terrainData_5)); }
	inline GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * get_terrainData_5() const { return ___terrainData_5; }
	inline GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 ** get_address_of_terrainData_5() { return &___terrainData_5; }
	inline void set_terrainData_5(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * value)
	{
		___terrainData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainData_5), (void*)value);
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___width_6)); }
	inline float get_width_6() const { return ___width_6; }
	inline float* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(float value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___height_7)); }
	inline float get_height_7() const { return ___height_7; }
	inline float* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(float value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_length_8() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___length_8)); }
	inline float get_length_8() const { return ___length_8; }
	inline float* get_address_of_length_8() { return &___length_8; }
	inline void set_length_8(float value)
	{
		___length_8 = value;
	}

	inline static int32_t get_offset_of_heightMapResolution_9() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___heightMapResolution_9)); }
	inline int32_t get_heightMapResolution_9() const { return ___heightMapResolution_9; }
	inline int32_t* get_address_of_heightMapResolution_9() { return &___heightMapResolution_9; }
	inline void set_heightMapResolution_9(int32_t value)
	{
		___heightMapResolution_9 = value;
	}

	inline static int32_t get_offset_of_heightMap_10() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___heightMap_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_heightMap_10() const { return ___heightMap_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_heightMap_10() { return &___heightMap_10; }
	inline void set_heightMap_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___heightMap_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightMap_10), (void*)value);
	}

	inline static int32_t get_offset_of_heightmapVersion_11() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___heightmapVersion_11)); }
	inline float get_heightmapVersion_11() const { return ___heightmapVersion_11; }
	inline float* get_address_of_heightmapVersion_11() { return &___heightmapVersion_11; }
	inline void set_heightmapVersion_11(float value)
	{
		___heightmapVersion_11 = value;
	}

	inline static int32_t get_offset_of_subDivisionMap_13() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___subDivisionMap_13)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_subDivisionMap_13() const { return ___subDivisionMap_13; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_subDivisionMap_13() { return &___subDivisionMap_13; }
	inline void set_subDivisionMap_13(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___subDivisionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subDivisionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_meshBaseResolution_14() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___meshBaseResolution_14)); }
	inline int32_t get_meshBaseResolution_14() const { return ___meshBaseResolution_14; }
	inline int32_t* get_address_of_meshBaseResolution_14() { return &___meshBaseResolution_14; }
	inline void set_meshBaseResolution_14(int32_t value)
	{
		___meshBaseResolution_14 = value;
	}

	inline static int32_t get_offset_of_meshResolution_15() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___meshResolution_15)); }
	inline int32_t get_meshResolution_15() const { return ___meshResolution_15; }
	inline int32_t* get_address_of_meshResolution_15() { return &___meshResolution_15; }
	inline void set_meshResolution_15(int32_t value)
	{
		___meshResolution_15 = value;
	}

	inline static int32_t get_offset_of_chunkGridSize_16() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___chunkGridSize_16)); }
	inline int32_t get_chunkGridSize_16() const { return ___chunkGridSize_16; }
	inline int32_t* get_address_of_chunkGridSize_16() { return &___chunkGridSize_16; }
	inline void set_chunkGridSize_16(int32_t value)
	{
		___chunkGridSize_16 = value;
	}

	inline static int32_t get_offset_of_lodCount_17() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___lodCount_17)); }
	inline int32_t get_lodCount_17() const { return ___lodCount_17; }
	inline int32_t* get_address_of_lodCount_17() { return &___lodCount_17; }
	inline void set_lodCount_17(int32_t value)
	{
		___lodCount_17 = value;
	}

	inline static int32_t get_offset_of_displacementSeed_18() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___displacementSeed_18)); }
	inline int32_t get_displacementSeed_18() const { return ___displacementSeed_18; }
	inline int32_t* get_address_of_displacementSeed_18() { return &___displacementSeed_18; }
	inline void set_displacementSeed_18(int32_t value)
	{
		___displacementSeed_18 = value;
	}

	inline static int32_t get_offset_of_displacementStrength_19() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___displacementStrength_19)); }
	inline float get_displacementStrength_19() const { return ___displacementStrength_19; }
	inline float* get_address_of_displacementStrength_19() { return &___displacementStrength_19; }
	inline void set_displacementStrength_19(float value)
	{
		___displacementStrength_19 = value;
	}

	inline static int32_t get_offset_of_albedoToVertexColorMode_20() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___albedoToVertexColorMode_20)); }
	inline int32_t get_albedoToVertexColorMode_20() const { return ___albedoToVertexColorMode_20; }
	inline int32_t* get_address_of_albedoToVertexColorMode_20() { return &___albedoToVertexColorMode_20; }
	inline void set_albedoToVertexColorMode_20(int32_t value)
	{
		___albedoToVertexColorMode_20 = value;
	}

	inline static int32_t get_offset_of_storageMode_21() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___storageMode_21)); }
	inline int32_t get_storageMode_21() const { return ___storageMode_21; }
	inline int32_t* get_address_of_storageMode_21() { return &___storageMode_21; }
	inline void set_storageMode_21(int32_t value)
	{
		___storageMode_21 = value;
	}

	inline static int32_t get_offset_of_allowTimeSlicedGeneration_22() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___allowTimeSlicedGeneration_22)); }
	inline bool get_allowTimeSlicedGeneration_22() const { return ___allowTimeSlicedGeneration_22; }
	inline bool* get_address_of_allowTimeSlicedGeneration_22() { return &___allowTimeSlicedGeneration_22; }
	inline void set_allowTimeSlicedGeneration_22(bool value)
	{
		___allowTimeSlicedGeneration_22 = value;
	}

	inline static int32_t get_offset_of_smoothNormal_23() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___smoothNormal_23)); }
	inline bool get_smoothNormal_23() const { return ___smoothNormal_23; }
	inline bool* get_address_of_smoothNormal_23() { return &___smoothNormal_23; }
	inline void set_smoothNormal_23(bool value)
	{
		___smoothNormal_23 = value;
	}

	inline static int32_t get_offset_of_useSmoothNormalMask_24() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___useSmoothNormalMask_24)); }
	inline bool get_useSmoothNormalMask_24() const { return ___useSmoothNormalMask_24; }
	inline bool* get_address_of_useSmoothNormalMask_24() { return &___useSmoothNormalMask_24; }
	inline void set_useSmoothNormalMask_24(bool value)
	{
		___useSmoothNormalMask_24 = value;
	}

	inline static int32_t get_offset_of_mergeUv_25() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___mergeUv_25)); }
	inline bool get_mergeUv_25() const { return ___mergeUv_25; }
	inline bool* get_address_of_mergeUv_25() { return &___mergeUv_25; }
	inline void set_mergeUv_25(bool value)
	{
		___mergeUv_25 = value;
	}

	inline static int32_t get_offset_of_dirtyRegion_26() { return static_cast<int32_t>(offsetof(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873, ___dirtyRegion_26)); }
	inline List_1_t7AFC5094F7C1D24DAAA8893B11B1743A7A0D2CFE * get_dirtyRegion_26() const { return ___dirtyRegion_26; }
	inline List_1_t7AFC5094F7C1D24DAAA8893B11B1743A7A0D2CFE ** get_address_of_dirtyRegion_26() { return &___dirtyRegion_26; }
	inline void set_dirtyRegion_26(List_1_t7AFC5094F7C1D24DAAA8893B11B1743A7A0D2CFE * value)
	{
		___dirtyRegion_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirtyRegion_26), (void*)value);
	}
};


// Pinwheel.Griffin.GTerrainData
struct GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Pinwheel.Griffin.GTerrainData/DirtyHandler Pinwheel.Griffin.GTerrainData::Dirty
	DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * ___Dirty_5;
	// Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler Pinwheel.Griffin.GTerrainData::GrassPatchChanged
	GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * ___GrassPatchChanged_6;
	// Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler Pinwheel.Griffin.GTerrainData::GrassPatchGridSizeChanged
	GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * ___GrassPatchGridSizeChanged_7;
	// Pinwheel.Griffin.GTerrainData/TreeChangedHandler Pinwheel.Griffin.GTerrainData::TreeChanged
	TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * ___TreeChanged_8;
	// Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler Pinwheel.Griffin.GTerrainData::GrassPrototypeGroupChanged
	GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * ___GrassPrototypeGroupChanged_9;
	// System.String Pinwheel.Griffin.GTerrainData::id
	String_t* ___id_10;
	// Pinwheel.Griffin.GGeometry Pinwheel.Griffin.GTerrainData::geometry
	GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * ___geometry_11;
	// Pinwheel.Griffin.GShading Pinwheel.Griffin.GTerrainData::shading
	GShading_tCDE644D877E4A42572F8F36E163272EAD5E6227C * ___shading_12;
	// Pinwheel.Griffin.GRendering Pinwheel.Griffin.GTerrainData::rendering
	GRendering_t6A99503828749B2D40D0467DAF12BF23A4F5F05C * ___rendering_13;
	// Pinwheel.Griffin.GFoliage Pinwheel.Griffin.GTerrainData::foliage
	GFoliage_tCDD770470FDAB44114F1DA666F270AB1F06BAB57 * ___foliage_14;
	// Pinwheel.Griffin.GMask Pinwheel.Griffin.GTerrainData::mask
	GMask_t274B54C9DD84219685FEAA78C4E379288E3AABC1 * ___mask_15;
	// Pinwheel.Griffin.GTerrainGeneratedData Pinwheel.Griffin.GTerrainData::geometryData
	GTerrainGeneratedData_tF50D32C7DC9FC05EE2EED675B01326292D1FB513 * ___geometryData_16;

public:
	inline static int32_t get_offset_of_Dirty_5() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___Dirty_5)); }
	inline DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * get_Dirty_5() const { return ___Dirty_5; }
	inline DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 ** get_address_of_Dirty_5() { return &___Dirty_5; }
	inline void set_Dirty_5(DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * value)
	{
		___Dirty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dirty_5), (void*)value);
	}

	inline static int32_t get_offset_of_GrassPatchChanged_6() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___GrassPatchChanged_6)); }
	inline GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * get_GrassPatchChanged_6() const { return ___GrassPatchChanged_6; }
	inline GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 ** get_address_of_GrassPatchChanged_6() { return &___GrassPatchChanged_6; }
	inline void set_GrassPatchChanged_6(GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * value)
	{
		___GrassPatchChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GrassPatchChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_GrassPatchGridSizeChanged_7() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___GrassPatchGridSizeChanged_7)); }
	inline GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * get_GrassPatchGridSizeChanged_7() const { return ___GrassPatchGridSizeChanged_7; }
	inline GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 ** get_address_of_GrassPatchGridSizeChanged_7() { return &___GrassPatchGridSizeChanged_7; }
	inline void set_GrassPatchGridSizeChanged_7(GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * value)
	{
		___GrassPatchGridSizeChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GrassPatchGridSizeChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_TreeChanged_8() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___TreeChanged_8)); }
	inline TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * get_TreeChanged_8() const { return ___TreeChanged_8; }
	inline TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 ** get_address_of_TreeChanged_8() { return &___TreeChanged_8; }
	inline void set_TreeChanged_8(TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * value)
	{
		___TreeChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TreeChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_GrassPrototypeGroupChanged_9() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___GrassPrototypeGroupChanged_9)); }
	inline GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * get_GrassPrototypeGroupChanged_9() const { return ___GrassPrototypeGroupChanged_9; }
	inline GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 ** get_address_of_GrassPrototypeGroupChanged_9() { return &___GrassPrototypeGroupChanged_9; }
	inline void set_GrassPrototypeGroupChanged_9(GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * value)
	{
		___GrassPrototypeGroupChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GrassPrototypeGroupChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_id_10() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___id_10)); }
	inline String_t* get_id_10() const { return ___id_10; }
	inline String_t** get_address_of_id_10() { return &___id_10; }
	inline void set_id_10(String_t* value)
	{
		___id_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_10), (void*)value);
	}

	inline static int32_t get_offset_of_geometry_11() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___geometry_11)); }
	inline GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * get_geometry_11() const { return ___geometry_11; }
	inline GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 ** get_address_of_geometry_11() { return &___geometry_11; }
	inline void set_geometry_11(GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * value)
	{
		___geometry_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geometry_11), (void*)value);
	}

	inline static int32_t get_offset_of_shading_12() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___shading_12)); }
	inline GShading_tCDE644D877E4A42572F8F36E163272EAD5E6227C * get_shading_12() const { return ___shading_12; }
	inline GShading_tCDE644D877E4A42572F8F36E163272EAD5E6227C ** get_address_of_shading_12() { return &___shading_12; }
	inline void set_shading_12(GShading_tCDE644D877E4A42572F8F36E163272EAD5E6227C * value)
	{
		___shading_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shading_12), (void*)value);
	}

	inline static int32_t get_offset_of_rendering_13() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___rendering_13)); }
	inline GRendering_t6A99503828749B2D40D0467DAF12BF23A4F5F05C * get_rendering_13() const { return ___rendering_13; }
	inline GRendering_t6A99503828749B2D40D0467DAF12BF23A4F5F05C ** get_address_of_rendering_13() { return &___rendering_13; }
	inline void set_rendering_13(GRendering_t6A99503828749B2D40D0467DAF12BF23A4F5F05C * value)
	{
		___rendering_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendering_13), (void*)value);
	}

	inline static int32_t get_offset_of_foliage_14() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___foliage_14)); }
	inline GFoliage_tCDD770470FDAB44114F1DA666F270AB1F06BAB57 * get_foliage_14() const { return ___foliage_14; }
	inline GFoliage_tCDD770470FDAB44114F1DA666F270AB1F06BAB57 ** get_address_of_foliage_14() { return &___foliage_14; }
	inline void set_foliage_14(GFoliage_tCDD770470FDAB44114F1DA666F270AB1F06BAB57 * value)
	{
		___foliage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foliage_14), (void*)value);
	}

	inline static int32_t get_offset_of_mask_15() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___mask_15)); }
	inline GMask_t274B54C9DD84219685FEAA78C4E379288E3AABC1 * get_mask_15() const { return ___mask_15; }
	inline GMask_t274B54C9DD84219685FEAA78C4E379288E3AABC1 ** get_address_of_mask_15() { return &___mask_15; }
	inline void set_mask_15(GMask_t274B54C9DD84219685FEAA78C4E379288E3AABC1 * value)
	{
		___mask_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mask_15), (void*)value);
	}

	inline static int32_t get_offset_of_geometryData_16() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047, ___geometryData_16)); }
	inline GTerrainGeneratedData_tF50D32C7DC9FC05EE2EED675B01326292D1FB513 * get_geometryData_16() const { return ___geometryData_16; }
	inline GTerrainGeneratedData_tF50D32C7DC9FC05EE2EED675B01326292D1FB513 ** get_address_of_geometryData_16() { return &___geometryData_16; }
	inline void set_geometryData_16(GTerrainGeneratedData_tF50D32C7DC9FC05EE2EED675B01326292D1FB513 * value)
	{
		___geometryData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geometryData_16), (void*)value);
	}
};

struct GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047_StaticFields
{
public:
	// Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler Pinwheel.Griffin.GTerrainData::GlobalDirty
	GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * ___GlobalDirty_4;

public:
	inline static int32_t get_offset_of_GlobalDirty_4() { return static_cast<int32_t>(offsetof(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047_StaticFields, ___GlobalDirty_4)); }
	inline GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * get_GlobalDirty_4() const { return ___GlobalDirty_4; }
	inline GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C ** get_address_of_GlobalDirty_4() { return &___GlobalDirty_4; }
	inline void set_GlobalDirty_4(GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * value)
	{
		___GlobalDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalDirty_4), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler
struct SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback
struct HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/DirtyHandler
struct DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler
struct GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler
struct GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler
struct GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler
struct GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.GTerrainData/TreeChangedHandler
struct TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212  : public RuntimeObject
{
public:
	// System.Int32 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::treeIndex
	int32_t ___treeIndex_0;
	// Pinwheel.Griffin.PaintTool.GFoliagePainterArgs Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::args
	GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC  ___args_1;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::localPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPos_2;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::terrainSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___terrainSize_3;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::worldPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos_4;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::terrain
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___terrain_5;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::bary0
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bary0_6;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::bary1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bary1_7;
	// UnityEngine.Vector2 Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::maskUv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___maskUv_8;
	// UnityEngine.Texture2D Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::clonedMask
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___clonedMask_9;
	// UnityEngine.Color Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::maskColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___maskColor_10;
	// UnityEngine.Texture2D Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::terrainMask
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___terrainMask_11;

public:
	inline static int32_t get_offset_of_treeIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___treeIndex_0)); }
	inline int32_t get_treeIndex_0() const { return ___treeIndex_0; }
	inline int32_t* get_address_of_treeIndex_0() { return &___treeIndex_0; }
	inline void set_treeIndex_0(int32_t value)
	{
		___treeIndex_0 = value;
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___args_1)); }
	inline GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC  get_args_1() const { return ___args_1; }
	inline GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC  value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CColliderU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CTransformU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CWorldPointCornersU3Ek__BackingField_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CMaskU3Ek__BackingField_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CTreeIndicesU3Ek__BackingField_18), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CGrassIndicesU3Ek__BackingField_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CCustomArgsU3Ek__BackingField_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___args_1))->___U3CFiltersU3Ek__BackingField_23), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_localPos_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___localPos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localPos_2() const { return ___localPos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localPos_2() { return &___localPos_2; }
	inline void set_localPos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localPos_2 = value;
	}

	inline static int32_t get_offset_of_terrainSize_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___terrainSize_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_terrainSize_3() const { return ___terrainSize_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_terrainSize_3() { return &___terrainSize_3; }
	inline void set_terrainSize_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___terrainSize_3 = value;
	}

	inline static int32_t get_offset_of_worldPos_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___worldPos_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPos_4() const { return ___worldPos_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPos_4() { return &___worldPos_4; }
	inline void set_worldPos_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPos_4 = value;
	}

	inline static int32_t get_offset_of_terrain_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___terrain_5)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_terrain_5() const { return ___terrain_5; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_terrain_5() { return &___terrain_5; }
	inline void set_terrain_5(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___terrain_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrain_5), (void*)value);
	}

	inline static int32_t get_offset_of_bary0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___bary0_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bary0_6() const { return ___bary0_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bary0_6() { return &___bary0_6; }
	inline void set_bary0_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bary0_6 = value;
	}

	inline static int32_t get_offset_of_bary1_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___bary1_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bary1_7() const { return ___bary1_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bary1_7() { return &___bary1_7; }
	inline void set_bary1_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bary1_7 = value;
	}

	inline static int32_t get_offset_of_maskUv_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___maskUv_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_maskUv_8() const { return ___maskUv_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_maskUv_8() { return &___maskUv_8; }
	inline void set_maskUv_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___maskUv_8 = value;
	}

	inline static int32_t get_offset_of_clonedMask_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___clonedMask_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_clonedMask_9() const { return ___clonedMask_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_clonedMask_9() { return &___clonedMask_9; }
	inline void set_clonedMask_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___clonedMask_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clonedMask_9), (void*)value);
	}

	inline static int32_t get_offset_of_maskColor_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___maskColor_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_maskColor_10() const { return ___maskColor_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_maskColor_10() { return &___maskColor_10; }
	inline void set_maskColor_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___maskColor_10 = value;
	}

	inline static int32_t get_offset_of_terrainMask_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212, ___terrainMask_11)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_terrainMask_11() const { return ___terrainMask_11; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_terrainMask_11() { return &___terrainMask_11; }
	inline void set_terrainMask_11(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___terrainMask_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainMask_11), (void*)value);
	}
};


// Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler
struct CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin._GSelectionGridArgs/DrawHandler
struct DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF  : public MulticastDelegate_t
{
public:

public:
};


// Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler
struct TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
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


// Pinwheel.Griffin.SplineTool.GSplineCreator
struct GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Pinwheel.Griffin.SplineTool.GSplineCreator::groupId
	int32_t ___groupId_6;
	// System.Boolean Pinwheel.Griffin.SplineTool.GSplineCreator::enableTerrainMask
	bool ___enableTerrainMask_7;
	// UnityEngine.Vector3 Pinwheel.Griffin.SplineTool.GSplineCreator::positionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOffset_8;
	// UnityEngine.Quaternion Pinwheel.Griffin.SplineTool.GSplineCreator::initialRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___initialRotation_9;
	// UnityEngine.Vector3 Pinwheel.Griffin.SplineTool.GSplineCreator::initialScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialScale_10;
	// System.Int32 Pinwheel.Griffin.SplineTool.GSplineCreator::smoothness
	int32_t ___smoothness_11;
	// System.Single Pinwheel.Griffin.SplineTool.GSplineCreator::width
	float ___width_12;
	// System.Single Pinwheel.Griffin.SplineTool.GSplineCreator::falloffWidth
	float ___falloffWidth_13;
	// Pinwheel.Griffin.SplineTool.GSpline Pinwheel.Griffin.SplineTool.GSplineCreator::spline
	GSpline_t5FC603EF9389F3151067B906F8DEAD8C7670BC72 * ___spline_14;

public:
	inline static int32_t get_offset_of_groupId_6() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___groupId_6)); }
	inline int32_t get_groupId_6() const { return ___groupId_6; }
	inline int32_t* get_address_of_groupId_6() { return &___groupId_6; }
	inline void set_groupId_6(int32_t value)
	{
		___groupId_6 = value;
	}

	inline static int32_t get_offset_of_enableTerrainMask_7() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___enableTerrainMask_7)); }
	inline bool get_enableTerrainMask_7() const { return ___enableTerrainMask_7; }
	inline bool* get_address_of_enableTerrainMask_7() { return &___enableTerrainMask_7; }
	inline void set_enableTerrainMask_7(bool value)
	{
		___enableTerrainMask_7 = value;
	}

	inline static int32_t get_offset_of_positionOffset_8() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___positionOffset_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionOffset_8() const { return ___positionOffset_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionOffset_8() { return &___positionOffset_8; }
	inline void set_positionOffset_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionOffset_8 = value;
	}

	inline static int32_t get_offset_of_initialRotation_9() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___initialRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_initialRotation_9() const { return ___initialRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_initialRotation_9() { return &___initialRotation_9; }
	inline void set_initialRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___initialRotation_9 = value;
	}

	inline static int32_t get_offset_of_initialScale_10() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___initialScale_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialScale_10() const { return ___initialScale_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialScale_10() { return &___initialScale_10; }
	inline void set_initialScale_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialScale_10 = value;
	}

	inline static int32_t get_offset_of_smoothness_11() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___smoothness_11)); }
	inline int32_t get_smoothness_11() const { return ___smoothness_11; }
	inline int32_t* get_address_of_smoothness_11() { return &___smoothness_11; }
	inline void set_smoothness_11(int32_t value)
	{
		___smoothness_11 = value;
	}

	inline static int32_t get_offset_of_width_12() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___width_12)); }
	inline float get_width_12() const { return ___width_12; }
	inline float* get_address_of_width_12() { return &___width_12; }
	inline void set_width_12(float value)
	{
		___width_12 = value;
	}

	inline static int32_t get_offset_of_falloffWidth_13() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___falloffWidth_13)); }
	inline float get_falloffWidth_13() const { return ___falloffWidth_13; }
	inline float* get_address_of_falloffWidth_13() { return &___falloffWidth_13; }
	inline void set_falloffWidth_13(float value)
	{
		___falloffWidth_13 = value;
	}

	inline static int32_t get_offset_of_spline_14() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB, ___spline_14)); }
	inline GSpline_t5FC603EF9389F3151067B906F8DEAD8C7670BC72 * get_spline_14() const { return ___spline_14; }
	inline GSpline_t5FC603EF9389F3151067B906F8DEAD8C7670BC72 ** get_address_of_spline_14() { return &___spline_14; }
	inline void set_spline_14(GSpline_t5FC603EF9389F3151067B906F8DEAD8C7670BC72 * value)
	{
		___spline_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spline_14), (void*)value);
	}
};

struct GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB_StaticFields
{
public:
	// Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler Pinwheel.Griffin.SplineTool.GSplineCreator::Editor_SplineChanged
	SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * ___Editor_SplineChanged_5;

public:
	inline static int32_t get_offset_of_Editor_SplineChanged_5() { return static_cast<int32_t>(offsetof(GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB_StaticFields, ___Editor_SplineChanged_5)); }
	inline SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * get_Editor_SplineChanged_5() const { return ___Editor_SplineChanged_5; }
	inline SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 ** get_address_of_Editor_SplineChanged_5() { return &___Editor_SplineChanged_5; }
	inline void set_Editor_SplineChanged_5(SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * value)
	{
		___Editor_SplineChanged_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Editor_SplineChanged_5), (void*)value);
	}
};


// Pinwheel.Griffin.GStylizedTerrain
struct GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback Pinwheel.Griffin.GStylizedTerrain::PreProcessHeightMap
	HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * ___PreProcessHeightMap_5;
	// Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback Pinwheel.Griffin.GStylizedTerrain::PostProcessHeightMap
	HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * ___PostProcessHeightMap_6;
	// Pinwheel.Griffin.GTerrainData Pinwheel.Griffin.GStylizedTerrain::terrainData
	GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * ___terrainData_8;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GStylizedTerrain::topNeighbor
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___topNeighbor_9;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GStylizedTerrain::bottomNeighbor
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___bottomNeighbor_10;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GStylizedTerrain::leftNeighbor
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___leftNeighbor_11;
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GStylizedTerrain::rightNeighbor
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___rightNeighbor_12;
	// System.Int32 Pinwheel.Griffin.GStylizedTerrain::groupId
	int32_t ___groupId_13;
	// System.Boolean Pinwheel.Griffin.GStylizedTerrain::autoConnect
	bool ___autoConnect_14;
	// System.Single Pinwheel.Griffin.GStylizedTerrain::geometryVersion
	float ___geometryVersion_15;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::heightMap
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___heightMap_17;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::normalMap
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___normalMap_18;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::normalMapInterpolated
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___normalMapInterpolated_19;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::normalMapPerPixel
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___normalMapPerPixel_20;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::grassVectorFieldMap
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___grassVectorFieldMap_21;
	// UnityEngine.RenderTexture Pinwheel.Griffin.GStylizedTerrain::grassVectorFieldMapTmp
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___grassVectorFieldMapTmp_22;
	// Pinwheel.Griffin.Rendering.GTreeRenderer Pinwheel.Griffin.GStylizedTerrain::treeRenderer
	GTreeRenderer_tA0A05F41EBB3D3D090D3591A63D95903618A7C44 * ___treeRenderer_23;
	// Pinwheel.Griffin.Rendering.GGrassRenderer Pinwheel.Griffin.GStylizedTerrain::grassRenderer
	GGrassRenderer_t44ABFAA74543175967B09153CA7A4E3B417D589E * ___grassRenderer_24;
	// UnityEngine.Vector3 Pinwheel.Griffin.GStylizedTerrain::lastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPosition_25;

public:
	inline static int32_t get_offset_of_PreProcessHeightMap_5() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___PreProcessHeightMap_5)); }
	inline HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * get_PreProcessHeightMap_5() const { return ___PreProcessHeightMap_5; }
	inline HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF ** get_address_of_PreProcessHeightMap_5() { return &___PreProcessHeightMap_5; }
	inline void set_PreProcessHeightMap_5(HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * value)
	{
		___PreProcessHeightMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreProcessHeightMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_PostProcessHeightMap_6() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___PostProcessHeightMap_6)); }
	inline HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * get_PostProcessHeightMap_6() const { return ___PostProcessHeightMap_6; }
	inline HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF ** get_address_of_PostProcessHeightMap_6() { return &___PostProcessHeightMap_6; }
	inline void set_PostProcessHeightMap_6(HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * value)
	{
		___PostProcessHeightMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostProcessHeightMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_terrainData_8() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___terrainData_8)); }
	inline GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * get_terrainData_8() const { return ___terrainData_8; }
	inline GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 ** get_address_of_terrainData_8() { return &___terrainData_8; }
	inline void set_terrainData_8(GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * value)
	{
		___terrainData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainData_8), (void*)value);
	}

	inline static int32_t get_offset_of_topNeighbor_9() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___topNeighbor_9)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_topNeighbor_9() const { return ___topNeighbor_9; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_topNeighbor_9() { return &___topNeighbor_9; }
	inline void set_topNeighbor_9(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___topNeighbor_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topNeighbor_9), (void*)value);
	}

	inline static int32_t get_offset_of_bottomNeighbor_10() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___bottomNeighbor_10)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_bottomNeighbor_10() const { return ___bottomNeighbor_10; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_bottomNeighbor_10() { return &___bottomNeighbor_10; }
	inline void set_bottomNeighbor_10(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___bottomNeighbor_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomNeighbor_10), (void*)value);
	}

	inline static int32_t get_offset_of_leftNeighbor_11() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___leftNeighbor_11)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_leftNeighbor_11() const { return ___leftNeighbor_11; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_leftNeighbor_11() { return &___leftNeighbor_11; }
	inline void set_leftNeighbor_11(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___leftNeighbor_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftNeighbor_11), (void*)value);
	}

	inline static int32_t get_offset_of_rightNeighbor_12() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___rightNeighbor_12)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_rightNeighbor_12() const { return ___rightNeighbor_12; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_rightNeighbor_12() { return &___rightNeighbor_12; }
	inline void set_rightNeighbor_12(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___rightNeighbor_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightNeighbor_12), (void*)value);
	}

	inline static int32_t get_offset_of_groupId_13() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___groupId_13)); }
	inline int32_t get_groupId_13() const { return ___groupId_13; }
	inline int32_t* get_address_of_groupId_13() { return &___groupId_13; }
	inline void set_groupId_13(int32_t value)
	{
		___groupId_13 = value;
	}

	inline static int32_t get_offset_of_autoConnect_14() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___autoConnect_14)); }
	inline bool get_autoConnect_14() const { return ___autoConnect_14; }
	inline bool* get_address_of_autoConnect_14() { return &___autoConnect_14; }
	inline void set_autoConnect_14(bool value)
	{
		___autoConnect_14 = value;
	}

	inline static int32_t get_offset_of_geometryVersion_15() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___geometryVersion_15)); }
	inline float get_geometryVersion_15() const { return ___geometryVersion_15; }
	inline float* get_address_of_geometryVersion_15() { return &___geometryVersion_15; }
	inline void set_geometryVersion_15(float value)
	{
		___geometryVersion_15 = value;
	}

	inline static int32_t get_offset_of_heightMap_17() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___heightMap_17)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_heightMap_17() const { return ___heightMap_17; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_heightMap_17() { return &___heightMap_17; }
	inline void set_heightMap_17(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___heightMap_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heightMap_17), (void*)value);
	}

	inline static int32_t get_offset_of_normalMap_18() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___normalMap_18)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_normalMap_18() const { return ___normalMap_18; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_normalMap_18() { return &___normalMap_18; }
	inline void set_normalMap_18(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___normalMap_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalMap_18), (void*)value);
	}

	inline static int32_t get_offset_of_normalMapInterpolated_19() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___normalMapInterpolated_19)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_normalMapInterpolated_19() const { return ___normalMapInterpolated_19; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_normalMapInterpolated_19() { return &___normalMapInterpolated_19; }
	inline void set_normalMapInterpolated_19(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___normalMapInterpolated_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalMapInterpolated_19), (void*)value);
	}

	inline static int32_t get_offset_of_normalMapPerPixel_20() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___normalMapPerPixel_20)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_normalMapPerPixel_20() const { return ___normalMapPerPixel_20; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_normalMapPerPixel_20() { return &___normalMapPerPixel_20; }
	inline void set_normalMapPerPixel_20(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___normalMapPerPixel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalMapPerPixel_20), (void*)value);
	}

	inline static int32_t get_offset_of_grassVectorFieldMap_21() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___grassVectorFieldMap_21)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_grassVectorFieldMap_21() const { return ___grassVectorFieldMap_21; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_grassVectorFieldMap_21() { return &___grassVectorFieldMap_21; }
	inline void set_grassVectorFieldMap_21(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___grassVectorFieldMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassVectorFieldMap_21), (void*)value);
	}

	inline static int32_t get_offset_of_grassVectorFieldMapTmp_22() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___grassVectorFieldMapTmp_22)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_grassVectorFieldMapTmp_22() const { return ___grassVectorFieldMapTmp_22; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_grassVectorFieldMapTmp_22() { return &___grassVectorFieldMapTmp_22; }
	inline void set_grassVectorFieldMapTmp_22(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___grassVectorFieldMapTmp_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassVectorFieldMapTmp_22), (void*)value);
	}

	inline static int32_t get_offset_of_treeRenderer_23() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___treeRenderer_23)); }
	inline GTreeRenderer_tA0A05F41EBB3D3D090D3591A63D95903618A7C44 * get_treeRenderer_23() const { return ___treeRenderer_23; }
	inline GTreeRenderer_tA0A05F41EBB3D3D090D3591A63D95903618A7C44 ** get_address_of_treeRenderer_23() { return &___treeRenderer_23; }
	inline void set_treeRenderer_23(GTreeRenderer_tA0A05F41EBB3D3D090D3591A63D95903618A7C44 * value)
	{
		___treeRenderer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeRenderer_23), (void*)value);
	}

	inline static int32_t get_offset_of_grassRenderer_24() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___grassRenderer_24)); }
	inline GGrassRenderer_t44ABFAA74543175967B09153CA7A4E3B417D589E * get_grassRenderer_24() const { return ___grassRenderer_24; }
	inline GGrassRenderer_t44ABFAA74543175967B09153CA7A4E3B417D589E ** get_address_of_grassRenderer_24() { return &___grassRenderer_24; }
	inline void set_grassRenderer_24(GGrassRenderer_t44ABFAA74543175967B09153CA7A4E3B417D589E * value)
	{
		___grassRenderer_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassRenderer_24), (void*)value);
	}

	inline static int32_t get_offset_of_lastPosition_25() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1, ___lastPosition_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPosition_25() const { return ___lastPosition_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPosition_25() { return &___lastPosition_25; }
	inline void set_lastPosition_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPosition_25 = value;
	}
};

struct GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<Pinwheel.Griffin.GStylizedTerrain> Pinwheel.Griffin.GStylizedTerrain::activeTerrainSet
	HashSet_1_t3C71035983978FDDF29BD6331D9C919A2EB1E072 * ___activeTerrainSet_7;

public:
	inline static int32_t get_offset_of_activeTerrainSet_7() { return static_cast<int32_t>(offsetof(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1_StaticFields, ___activeTerrainSet_7)); }
	inline HashSet_1_t3C71035983978FDDF29BD6331D9C919A2EB1E072 * get_activeTerrainSet_7() const { return ___activeTerrainSet_7; }
	inline HashSet_1_t3C71035983978FDDF29BD6331D9C919A2EB1E072 ** get_address_of_activeTerrainSet_7() { return &___activeTerrainSet_7; }
	inline void set_activeTerrainSet_7(HashSet_1_t3C71035983978FDDF29BD6331D9C919A2EB1E072 * value)
	{
		___activeTerrainSet_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTerrainSet_7), (void*)value);
	}
};


// Pinwheel.Griffin.GTerrainChunk
struct GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Pinwheel.Griffin.GStylizedTerrain Pinwheel.Griffin.GTerrainChunk::terrain
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___terrain_4;
	// UnityEngine.MeshFilter Pinwheel.Griffin.GTerrainChunk::meshFilterComponent
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___meshFilterComponent_5;
	// UnityEngine.MeshRenderer Pinwheel.Griffin.GTerrainChunk::meshRendererComponent
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___meshRendererComponent_6;
	// UnityEngine.MeshCollider Pinwheel.Griffin.GTerrainChunk::meshColliderComponent
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___meshColliderComponent_7;
	// UnityEngine.LODGroup Pinwheel.Griffin.GTerrainChunk::lodGroupComponent
	LODGroup_tF8F5079A807AD0152B2746CD22AC3E4A89E8A7A9 * ___lodGroupComponent_8;
	// UnityEngine.Vector2 Pinwheel.Griffin.GTerrainChunk::index
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___index_9;
	// Pinwheel.Griffin.GTerrainChunkLOD[] Pinwheel.Griffin.GTerrainChunk::chunkLowerLOD
	GTerrainChunkLODU5BU5D_tEE9C5728B5DEC121479E26B2F67E9B01F09253C0* ___chunkLowerLOD_10;
	// Pinwheel.Griffin.GTerrainChunk[] Pinwheel.Griffin.GTerrainChunk::neighborChunks
	GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* ___neighborChunks_11;
	// System.DateTime Pinwheel.Griffin.GTerrainChunk::lastUpdatedTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastUpdatedTime_12;
	// Unity.Collections.NativeArray`1<Pinwheel.Griffin.GSubdivNode> Pinwheel.Griffin.GTerrainChunk::subdivNodeNativeArray
	NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01  ___subdivNodeNativeArray_13;
	// Unity.Collections.NativeArray`1<System.Byte> Pinwheel.Griffin.GTerrainChunk::subdivNodeCreationState
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___subdivNodeCreationState_14;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> Pinwheel.Griffin.GTerrainChunk::vertexNativeArray
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___vertexNativeArray_15;
	// UnityEngine.Vector3[] Pinwheel.Griffin.GTerrainChunk::vertexArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertexArray_16;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> Pinwheel.Griffin.GTerrainChunk::uvsNativeArray
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___uvsNativeArray_17;
	// UnityEngine.Vector2[] Pinwheel.Griffin.GTerrainChunk::uvsArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvsArray_18;
	// Unity.Collections.NativeArray`1<System.Int32> Pinwheel.Griffin.GTerrainChunk::trianglesNativeArray
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___trianglesNativeArray_19;
	// System.Int32[] Pinwheel.Griffin.GTerrainChunk::trianglesArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___trianglesArray_20;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> Pinwheel.Griffin.GTerrainChunk::normalsNativeArray
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___normalsNativeArray_21;
	// UnityEngine.Vector3[] Pinwheel.Griffin.GTerrainChunk::normalsArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normalsArray_22;
	// Unity.Collections.NativeArray`1<UnityEngine.Color32> Pinwheel.Griffin.GTerrainChunk::vertexColorsNativeArray
	NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  ___vertexColorsNativeArray_23;
	// UnityEngine.Color32[] Pinwheel.Griffin.GTerrainChunk::vertexColorsArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___vertexColorsArray_24;
	// Unity.Collections.NativeArray`1<System.Boolean> Pinwheel.Griffin.GTerrainChunk::vertexMarkerNativeArray
	NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9  ___vertexMarkerNativeArray_25;
	// System.Boolean[] Pinwheel.Griffin.GTerrainChunk::vertexMarker_Cache
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___vertexMarker_Cache_26;
	// Unity.Collections.NativeArray`1<System.Int32> Pinwheel.Griffin.GTerrainChunk::generationMetadata
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___generationMetadata_27;
	// UnityEngine.Mesh[] Pinwheel.Griffin.GTerrainChunk::nonSerializedMeshes
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ___nonSerializedMeshes_28;

public:
	inline static int32_t get_offset_of_terrain_4() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___terrain_4)); }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * get_terrain_4() const { return ___terrain_4; }
	inline GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 ** get_address_of_terrain_4() { return &___terrain_4; }
	inline void set_terrain_4(GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * value)
	{
		___terrain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrain_4), (void*)value);
	}

	inline static int32_t get_offset_of_meshFilterComponent_5() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___meshFilterComponent_5)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_meshFilterComponent_5() const { return ___meshFilterComponent_5; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_meshFilterComponent_5() { return &___meshFilterComponent_5; }
	inline void set_meshFilterComponent_5(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___meshFilterComponent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshFilterComponent_5), (void*)value);
	}

	inline static int32_t get_offset_of_meshRendererComponent_6() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___meshRendererComponent_6)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_meshRendererComponent_6() const { return ___meshRendererComponent_6; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_meshRendererComponent_6() { return &___meshRendererComponent_6; }
	inline void set_meshRendererComponent_6(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___meshRendererComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRendererComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_meshColliderComponent_7() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___meshColliderComponent_7)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_meshColliderComponent_7() const { return ___meshColliderComponent_7; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_meshColliderComponent_7() { return &___meshColliderComponent_7; }
	inline void set_meshColliderComponent_7(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___meshColliderComponent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshColliderComponent_7), (void*)value);
	}

	inline static int32_t get_offset_of_lodGroupComponent_8() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___lodGroupComponent_8)); }
	inline LODGroup_tF8F5079A807AD0152B2746CD22AC3E4A89E8A7A9 * get_lodGroupComponent_8() const { return ___lodGroupComponent_8; }
	inline LODGroup_tF8F5079A807AD0152B2746CD22AC3E4A89E8A7A9 ** get_address_of_lodGroupComponent_8() { return &___lodGroupComponent_8; }
	inline void set_lodGroupComponent_8(LODGroup_tF8F5079A807AD0152B2746CD22AC3E4A89E8A7A9 * value)
	{
		___lodGroupComponent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lodGroupComponent_8), (void*)value);
	}

	inline static int32_t get_offset_of_index_9() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___index_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_index_9() const { return ___index_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_index_9() { return &___index_9; }
	inline void set_index_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___index_9 = value;
	}

	inline static int32_t get_offset_of_chunkLowerLOD_10() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___chunkLowerLOD_10)); }
	inline GTerrainChunkLODU5BU5D_tEE9C5728B5DEC121479E26B2F67E9B01F09253C0* get_chunkLowerLOD_10() const { return ___chunkLowerLOD_10; }
	inline GTerrainChunkLODU5BU5D_tEE9C5728B5DEC121479E26B2F67E9B01F09253C0** get_address_of_chunkLowerLOD_10() { return &___chunkLowerLOD_10; }
	inline void set_chunkLowerLOD_10(GTerrainChunkLODU5BU5D_tEE9C5728B5DEC121479E26B2F67E9B01F09253C0* value)
	{
		___chunkLowerLOD_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chunkLowerLOD_10), (void*)value);
	}

	inline static int32_t get_offset_of_neighborChunks_11() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___neighborChunks_11)); }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* get_neighborChunks_11() const { return ___neighborChunks_11; }
	inline GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164** get_address_of_neighborChunks_11() { return &___neighborChunks_11; }
	inline void set_neighborChunks_11(GTerrainChunkU5BU5D_tC4ED14CC1D6EE8D85BD1DAC8FFBE607F6FC89164* value)
	{
		___neighborChunks_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighborChunks_11), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdatedTime_12() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___lastUpdatedTime_12)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastUpdatedTime_12() const { return ___lastUpdatedTime_12; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastUpdatedTime_12() { return &___lastUpdatedTime_12; }
	inline void set_lastUpdatedTime_12(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastUpdatedTime_12 = value;
	}

	inline static int32_t get_offset_of_subdivNodeNativeArray_13() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___subdivNodeNativeArray_13)); }
	inline NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01  get_subdivNodeNativeArray_13() const { return ___subdivNodeNativeArray_13; }
	inline NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01 * get_address_of_subdivNodeNativeArray_13() { return &___subdivNodeNativeArray_13; }
	inline void set_subdivNodeNativeArray_13(NativeArray_1_t10F787336953BFEB336BCB54DADC4F0D9CEF1A01  value)
	{
		___subdivNodeNativeArray_13 = value;
	}

	inline static int32_t get_offset_of_subdivNodeCreationState_14() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___subdivNodeCreationState_14)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_subdivNodeCreationState_14() const { return ___subdivNodeCreationState_14; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_subdivNodeCreationState_14() { return &___subdivNodeCreationState_14; }
	inline void set_subdivNodeCreationState_14(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___subdivNodeCreationState_14 = value;
	}

	inline static int32_t get_offset_of_vertexNativeArray_15() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexNativeArray_15)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_vertexNativeArray_15() const { return ___vertexNativeArray_15; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_vertexNativeArray_15() { return &___vertexNativeArray_15; }
	inline void set_vertexNativeArray_15(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___vertexNativeArray_15 = value;
	}

	inline static int32_t get_offset_of_vertexArray_16() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexArray_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertexArray_16() const { return ___vertexArray_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertexArray_16() { return &___vertexArray_16; }
	inline void set_vertexArray_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertexArray_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexArray_16), (void*)value);
	}

	inline static int32_t get_offset_of_uvsNativeArray_17() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___uvsNativeArray_17)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_uvsNativeArray_17() const { return ___uvsNativeArray_17; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_uvsNativeArray_17() { return &___uvsNativeArray_17; }
	inline void set_uvsNativeArray_17(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___uvsNativeArray_17 = value;
	}

	inline static int32_t get_offset_of_uvsArray_18() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___uvsArray_18)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvsArray_18() const { return ___uvsArray_18; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvsArray_18() { return &___uvsArray_18; }
	inline void set_uvsArray_18(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvsArray_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvsArray_18), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesNativeArray_19() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___trianglesNativeArray_19)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_trianglesNativeArray_19() const { return ___trianglesNativeArray_19; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_trianglesNativeArray_19() { return &___trianglesNativeArray_19; }
	inline void set_trianglesNativeArray_19(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___trianglesNativeArray_19 = value;
	}

	inline static int32_t get_offset_of_trianglesArray_20() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___trianglesArray_20)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_trianglesArray_20() const { return ___trianglesArray_20; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_trianglesArray_20() { return &___trianglesArray_20; }
	inline void set_trianglesArray_20(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___trianglesArray_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trianglesArray_20), (void*)value);
	}

	inline static int32_t get_offset_of_normalsNativeArray_21() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___normalsNativeArray_21)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_normalsNativeArray_21() const { return ___normalsNativeArray_21; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_normalsNativeArray_21() { return &___normalsNativeArray_21; }
	inline void set_normalsNativeArray_21(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___normalsNativeArray_21 = value;
	}

	inline static int32_t get_offset_of_normalsArray_22() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___normalsArray_22)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normalsArray_22() const { return ___normalsArray_22; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normalsArray_22() { return &___normalsArray_22; }
	inline void set_normalsArray_22(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normalsArray_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalsArray_22), (void*)value);
	}

	inline static int32_t get_offset_of_vertexColorsNativeArray_23() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexColorsNativeArray_23)); }
	inline NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  get_vertexColorsNativeArray_23() const { return ___vertexColorsNativeArray_23; }
	inline NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D * get_address_of_vertexColorsNativeArray_23() { return &___vertexColorsNativeArray_23; }
	inline void set_vertexColorsNativeArray_23(NativeArray_1_t4A3D7DA64F7D1F0B77C207C31DE22A646B63BE0D  value)
	{
		___vertexColorsNativeArray_23 = value;
	}

	inline static int32_t get_offset_of_vertexColorsArray_24() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexColorsArray_24)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_vertexColorsArray_24() const { return ___vertexColorsArray_24; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_vertexColorsArray_24() { return &___vertexColorsArray_24; }
	inline void set_vertexColorsArray_24(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___vertexColorsArray_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexColorsArray_24), (void*)value);
	}

	inline static int32_t get_offset_of_vertexMarkerNativeArray_25() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexMarkerNativeArray_25)); }
	inline NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9  get_vertexMarkerNativeArray_25() const { return ___vertexMarkerNativeArray_25; }
	inline NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9 * get_address_of_vertexMarkerNativeArray_25() { return &___vertexMarkerNativeArray_25; }
	inline void set_vertexMarkerNativeArray_25(NativeArray_1_t5D14FB939BB0B2FC48A22E76C88808E666D83DC9  value)
	{
		___vertexMarkerNativeArray_25 = value;
	}

	inline static int32_t get_offset_of_vertexMarker_Cache_26() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___vertexMarker_Cache_26)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_vertexMarker_Cache_26() const { return ___vertexMarker_Cache_26; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_vertexMarker_Cache_26() { return &___vertexMarker_Cache_26; }
	inline void set_vertexMarker_Cache_26(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___vertexMarker_Cache_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexMarker_Cache_26), (void*)value);
	}

	inline static int32_t get_offset_of_generationMetadata_27() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___generationMetadata_27)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_generationMetadata_27() const { return ___generationMetadata_27; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_generationMetadata_27() { return &___generationMetadata_27; }
	inline void set_generationMetadata_27(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___generationMetadata_27 = value;
	}

	inline static int32_t get_offset_of_nonSerializedMeshes_28() { return static_cast<int32_t>(offsetof(GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F, ___nonSerializedMeshes_28)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get_nonSerializedMeshes_28() const { return ___nonSerializedMeshes_28; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of_nonSerializedMeshes_28() { return &___nonSerializedMeshes_28; }
	inline void set_nonSerializedMeshes_28(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		___nonSerializedMeshes_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nonSerializedMeshes_28), (void*)value);
	}
};


// Pinwheel.Griffin.PaintTool.GTerrainTexturePainter
struct GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::groupId
	int32_t ___groupId_7;
	// Pinwheel.Griffin.PaintTool.GTexturePaintingMode Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::mode
	int32_t ___mode_8;
	// System.Int32 Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::customPainterIndex
	int32_t ___customPainterIndex_9;
	// System.String Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::customPainterArgs
	String_t* ___customPainterArgs_10;
	// System.Boolean Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::enableTerrainMask
	bool ___enableTerrainMask_11;
	// System.Boolean Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::forceUpdateGeometry
	bool ___forceUpdateGeometry_12;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushRadius
	float ___brushRadius_13;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushRadiusJitter
	float ___brushRadiusJitter_14;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushRotation
	float ___brushRotation_15;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushRotationJitter
	float ___brushRotationJitter_16;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushOpacity
	float ___brushOpacity_17;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushOpacityJitter
	float ___brushOpacityJitter_18;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushTargetStrength
	float ___brushTargetStrength_19;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushScatter
	float ___brushScatter_20;
	// System.Single Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushScatterJitter
	float ___brushScatterJitter_21;
	// UnityEngine.Color Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___brushColor_22;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::brushMasks
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___brushMasks_23;
	// System.Int32 Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::selectedBrushMaskIndex
	int32_t ___selectedBrushMaskIndex_24;
	// System.Collections.Generic.List`1<System.Int32> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::selectedSplatIndices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___selectedSplatIndices_25;
	// UnityEngine.Vector3 Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::samplePoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___samplePoint_26;
	// Pinwheel.Griffin.PaintTool.GConditionalPaintingConfigs Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::conditionalPaintingConfigs
	GConditionalPaintingConfigs_t9F2B8C5FC5FD92CDA8F66550AF863F87E3D83AA6 * ___conditionalPaintingConfigs_27;

public:
	inline static int32_t get_offset_of_groupId_7() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___groupId_7)); }
	inline int32_t get_groupId_7() const { return ___groupId_7; }
	inline int32_t* get_address_of_groupId_7() { return &___groupId_7; }
	inline void set_groupId_7(int32_t value)
	{
		___groupId_7 = value;
	}

	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_customPainterIndex_9() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___customPainterIndex_9)); }
	inline int32_t get_customPainterIndex_9() const { return ___customPainterIndex_9; }
	inline int32_t* get_address_of_customPainterIndex_9() { return &___customPainterIndex_9; }
	inline void set_customPainterIndex_9(int32_t value)
	{
		___customPainterIndex_9 = value;
	}

	inline static int32_t get_offset_of_customPainterArgs_10() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___customPainterArgs_10)); }
	inline String_t* get_customPainterArgs_10() const { return ___customPainterArgs_10; }
	inline String_t** get_address_of_customPainterArgs_10() { return &___customPainterArgs_10; }
	inline void set_customPainterArgs_10(String_t* value)
	{
		___customPainterArgs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customPainterArgs_10), (void*)value);
	}

	inline static int32_t get_offset_of_enableTerrainMask_11() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___enableTerrainMask_11)); }
	inline bool get_enableTerrainMask_11() const { return ___enableTerrainMask_11; }
	inline bool* get_address_of_enableTerrainMask_11() { return &___enableTerrainMask_11; }
	inline void set_enableTerrainMask_11(bool value)
	{
		___enableTerrainMask_11 = value;
	}

	inline static int32_t get_offset_of_forceUpdateGeometry_12() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___forceUpdateGeometry_12)); }
	inline bool get_forceUpdateGeometry_12() const { return ___forceUpdateGeometry_12; }
	inline bool* get_address_of_forceUpdateGeometry_12() { return &___forceUpdateGeometry_12; }
	inline void set_forceUpdateGeometry_12(bool value)
	{
		___forceUpdateGeometry_12 = value;
	}

	inline static int32_t get_offset_of_brushRadius_13() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushRadius_13)); }
	inline float get_brushRadius_13() const { return ___brushRadius_13; }
	inline float* get_address_of_brushRadius_13() { return &___brushRadius_13; }
	inline void set_brushRadius_13(float value)
	{
		___brushRadius_13 = value;
	}

	inline static int32_t get_offset_of_brushRadiusJitter_14() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushRadiusJitter_14)); }
	inline float get_brushRadiusJitter_14() const { return ___brushRadiusJitter_14; }
	inline float* get_address_of_brushRadiusJitter_14() { return &___brushRadiusJitter_14; }
	inline void set_brushRadiusJitter_14(float value)
	{
		___brushRadiusJitter_14 = value;
	}

	inline static int32_t get_offset_of_brushRotation_15() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushRotation_15)); }
	inline float get_brushRotation_15() const { return ___brushRotation_15; }
	inline float* get_address_of_brushRotation_15() { return &___brushRotation_15; }
	inline void set_brushRotation_15(float value)
	{
		___brushRotation_15 = value;
	}

	inline static int32_t get_offset_of_brushRotationJitter_16() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushRotationJitter_16)); }
	inline float get_brushRotationJitter_16() const { return ___brushRotationJitter_16; }
	inline float* get_address_of_brushRotationJitter_16() { return &___brushRotationJitter_16; }
	inline void set_brushRotationJitter_16(float value)
	{
		___brushRotationJitter_16 = value;
	}

	inline static int32_t get_offset_of_brushOpacity_17() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushOpacity_17)); }
	inline float get_brushOpacity_17() const { return ___brushOpacity_17; }
	inline float* get_address_of_brushOpacity_17() { return &___brushOpacity_17; }
	inline void set_brushOpacity_17(float value)
	{
		___brushOpacity_17 = value;
	}

	inline static int32_t get_offset_of_brushOpacityJitter_18() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushOpacityJitter_18)); }
	inline float get_brushOpacityJitter_18() const { return ___brushOpacityJitter_18; }
	inline float* get_address_of_brushOpacityJitter_18() { return &___brushOpacityJitter_18; }
	inline void set_brushOpacityJitter_18(float value)
	{
		___brushOpacityJitter_18 = value;
	}

	inline static int32_t get_offset_of_brushTargetStrength_19() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushTargetStrength_19)); }
	inline float get_brushTargetStrength_19() const { return ___brushTargetStrength_19; }
	inline float* get_address_of_brushTargetStrength_19() { return &___brushTargetStrength_19; }
	inline void set_brushTargetStrength_19(float value)
	{
		___brushTargetStrength_19 = value;
	}

	inline static int32_t get_offset_of_brushScatter_20() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushScatter_20)); }
	inline float get_brushScatter_20() const { return ___brushScatter_20; }
	inline float* get_address_of_brushScatter_20() { return &___brushScatter_20; }
	inline void set_brushScatter_20(float value)
	{
		___brushScatter_20 = value;
	}

	inline static int32_t get_offset_of_brushScatterJitter_21() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushScatterJitter_21)); }
	inline float get_brushScatterJitter_21() const { return ___brushScatterJitter_21; }
	inline float* get_address_of_brushScatterJitter_21() { return &___brushScatterJitter_21; }
	inline void set_brushScatterJitter_21(float value)
	{
		___brushScatterJitter_21 = value;
	}

	inline static int32_t get_offset_of_brushColor_22() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushColor_22)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_brushColor_22() const { return ___brushColor_22; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_brushColor_22() { return &___brushColor_22; }
	inline void set_brushColor_22(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___brushColor_22 = value;
	}

	inline static int32_t get_offset_of_brushMasks_23() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___brushMasks_23)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_brushMasks_23() const { return ___brushMasks_23; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_brushMasks_23() { return &___brushMasks_23; }
	inline void set_brushMasks_23(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___brushMasks_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brushMasks_23), (void*)value);
	}

	inline static int32_t get_offset_of_selectedBrushMaskIndex_24() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___selectedBrushMaskIndex_24)); }
	inline int32_t get_selectedBrushMaskIndex_24() const { return ___selectedBrushMaskIndex_24; }
	inline int32_t* get_address_of_selectedBrushMaskIndex_24() { return &___selectedBrushMaskIndex_24; }
	inline void set_selectedBrushMaskIndex_24(int32_t value)
	{
		___selectedBrushMaskIndex_24 = value;
	}

	inline static int32_t get_offset_of_selectedSplatIndices_25() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___selectedSplatIndices_25)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_selectedSplatIndices_25() const { return ___selectedSplatIndices_25; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_selectedSplatIndices_25() { return &___selectedSplatIndices_25; }
	inline void set_selectedSplatIndices_25(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___selectedSplatIndices_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedSplatIndices_25), (void*)value);
	}

	inline static int32_t get_offset_of_samplePoint_26() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___samplePoint_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_samplePoint_26() const { return ___samplePoint_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_samplePoint_26() { return &___samplePoint_26; }
	inline void set_samplePoint_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___samplePoint_26 = value;
	}

	inline static int32_t get_offset_of_conditionalPaintingConfigs_27() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3, ___conditionalPaintingConfigs_27)); }
	inline GConditionalPaintingConfigs_t9F2B8C5FC5FD92CDA8F66550AF863F87E3D83AA6 * get_conditionalPaintingConfigs_27() const { return ___conditionalPaintingConfigs_27; }
	inline GConditionalPaintingConfigs_t9F2B8C5FC5FD92CDA8F66550AF863F87E3D83AA6 ** get_address_of_conditionalPaintingConfigs_27() { return &___conditionalPaintingConfigs_27; }
	inline void set_conditionalPaintingConfigs_27(GConditionalPaintingConfigs_t9F2B8C5FC5FD92CDA8F66550AF863F87E3D83AA6 * value)
	{
		___conditionalPaintingConfigs_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conditionalPaintingConfigs_27), (void*)value);
	}
};

struct GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::BUILTIN_PAINTER_NAME
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___BUILTIN_PAINTER_NAME_5;
	// System.Collections.Generic.List`1<System.Type> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::customPainterTypes
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___customPainterTypes_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.RenderTexture> Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::internal_RenderTextures
	Dictionary_2_t4935D7AB81ED118AEC2004A204D2D3F8027F8461 * ___internal_RenderTextures_28;

public:
	inline static int32_t get_offset_of_BUILTIN_PAINTER_NAME_5() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_StaticFields, ___BUILTIN_PAINTER_NAME_5)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_BUILTIN_PAINTER_NAME_5() const { return ___BUILTIN_PAINTER_NAME_5; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_BUILTIN_PAINTER_NAME_5() { return &___BUILTIN_PAINTER_NAME_5; }
	inline void set_BUILTIN_PAINTER_NAME_5(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___BUILTIN_PAINTER_NAME_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BUILTIN_PAINTER_NAME_5), (void*)value);
	}

	inline static int32_t get_offset_of_customPainterTypes_6() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_StaticFields, ___customPainterTypes_6)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get_customPainterTypes_6() const { return ___customPainterTypes_6; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of_customPainterTypes_6() { return &___customPainterTypes_6; }
	inline void set_customPainterTypes_6(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		___customPainterTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customPainterTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_internal_RenderTextures_28() { return static_cast<int32_t>(offsetof(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_StaticFields, ___internal_RenderTextures_28)); }
	inline Dictionary_2_t4935D7AB81ED118AEC2004A204D2D3F8027F8461 * get_internal_RenderTextures_28() const { return ___internal_RenderTextures_28; }
	inline Dictionary_2_t4935D7AB81ED118AEC2004A204D2D3F8027F8461 ** get_address_of_internal_RenderTextures_28() { return &___internal_RenderTextures_28; }
	inline void set_internal_RenderTextures_28(Dictionary_2_t4935D7AB81ED118AEC2004A204D2D3F8027F8461 * value)
	{
		___internal_RenderTextures_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_RenderTextures_28), (void*)value);
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Pinwheel.Griffin.SplineTool.GSplineCreator::OverlapTest(Pinwheel.Griffin.GStylizedTerrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GSplineCreator_OverlapTest_mFB1202CF02028176DF23B38764072A33BAC19B2A (GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * __this, GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___terrain0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pinwheel.Griffin.GStylizedTerrain>::Add(!0)
inline void List_1_Add_m050E25A559C702AAA1033EF6A266B1827860898E (List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A * __this, GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A *, GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m08DD52EBCD3B181023A46555BAEE7EA49C565B10 (U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * __this, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GStylizedTerrain::MatchEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GStylizedTerrain_MatchEdges_m8411F1A19E5E017C1879BF947595C4C7EEA586FA (GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Pinwheel.Griffin.GTerrainChunk::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline (GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.MeshCollider Pinwheel.Griffin.GTerrainChunk::get_MeshColliderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * GTerrainChunk_get_MeshColliderComponent_mD3B28C6ACEB9C66C03E91CEB40EA9E92642C2A7E (GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GStylizedTerrain::ForceLOD(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GStylizedTerrain_ForceLOD_mD9DCD69A4FEAAABC8A70F75A737CC45EE11F669C (GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>::.ctor()
inline void List_1__ctor_m1C3D45C219992ED3323037CB75FFA582EF3FDCEE (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>::get_Count()
inline int32_t List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_inline (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>::Clear()
inline void List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>::get_Item(System.Int32)
inline GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_inline (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * (*) (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>::Add(!0)
inline void List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77 (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Pinwheel.Griffin.GStylizedTerrain::GenerateChunks(System.Collections.Generic.List`1<Pinwheel.Griffin.GTerrainChunk>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GStylizedTerrain_GenerateChunks_mE100C21F4F6C5ACB780519E263ABECE491D8B0B3 (GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * __this, List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * ___chunksToUpdate0, int32_t ___lod1, const RuntimeMethod* method);
// Pinwheel.Griffin.GTerrainData Pinwheel.Griffin.GStylizedTerrain::get_TerrainData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * GStylizedTerrain_get_TerrainData_m4D0AFF2EE0DB4FF20895640771AB2D4876C8B559_inline (GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * __this, const RuntimeMethod* method);
// Pinwheel.Griffin.GGeometry Pinwheel.Griffin.GTerrainData::get_Geometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * GTerrainData_get_Geometry_mEA28085EE3EADFEC9317D8C9F76A137D644E96C1 (GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * __this, const RuntimeMethod* method);
// System.Int32 Pinwheel.Griffin.GGeometry::get_LODCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GGeometry_get_LODCount_mCA99BD89D77E5C2DC21669E31239745D8688A5BB_inline (GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 Pinwheel.Griffin.GSubDivisionTree/Node::get_Level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70 (double ___value0, int32_t ___digits1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_Level(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V0_m04319EBAB959700BFB8DAF3E08A19EBC42D26431 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V1_m89538543EA0D794061BBED09A893019FCC715DF3 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V2_m1998CB158EF6F67C0636D527F593623FBF0F3225 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m8278B829E7F22A94E39BAE1B8793296DBFB003A6 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v00, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v11, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v22, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_LeftNode(Pinwheel.Griffin.GSubDivisionTree/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_LeftNode_m7C68D43BC8616DD5FFE094A935E4F87201DABFF9 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___value0, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_RightNode(Pinwheel.Griffin.GSubDivisionTree/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_RightNode_m73C018378AA90D4137975B50E93253FC902B0871 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___value0, const RuntimeMethod* method);
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::get_LeftNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_LeftNode_m7A77EC05EEB03B0E4B6E0B573C1068DDB06873FE_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_Clone_mD44E39E22AE36B6334E6A8AF445796402042E976 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::get_RightNode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_RightNode_m688D14535330C083DBF0687A7C8EC9B6213BF17D_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3CF490CAC4A51AE58E5D28D698DF019C7B8AE7A0 (U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * __this, const RuntimeMethod* method);
// System.String Pinwheel.Griffin.PaintTool.GTerrainTexturePainter::get_TexturePainterInterfaceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GTerrainTexturePainter_get_TexturePainterInterfaceName_mC446238A5E4F88F7510FC23446053822C4503741 (const RuntimeMethod* method);
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1<System.Int32> Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::get_TreeIndices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GFoliagePainterArgs_get_TreeIndices_m1BDC725EFC2C360310F34F387270E940DF428660_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3[] Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::get_WorldPointCorners()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method);
// System.Void Pinwheel.Griffin.GUtilities::CalculateBarycentricCoord(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUtilities_CalculateBarycentricCoord_m0684E21EEED2460919C29D1A7C223D48EDAC5105 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p11, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p22, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p33, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___bary4, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixelBilinear_mE25550DD7E9FD26DA7CB1E38FFCA2101F9D3D28D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, float ___u0, float ___v1, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Single UnityEngine.Color::get_grayscale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Color_get_grayscale_m5F2C3B10392EB415FB8F3F9ABBF6221FD6BAA355 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, const RuntimeMethod* method);
// System.Single Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::get_EraseRatio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GFoliagePainterArgs_get_EraseRatio_m7DB276EB3FC858D5006C60E50E0605AF22A2660C_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method);
// System.Boolean Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::get_EnableTerrainMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GFoliagePainterArgs_get_EnableTerrainMask_mFC59072A8818BA55B4A5FAA14F487310BE7AFC53_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method);
// Pinwheel.Griffin.PaintTool.GPainterActionType Pinwheel.Griffin.PaintTool.GFoliagePainterArgs::get_ActionType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GFoliagePainterArgs_get_ActionType_m7B1B8AB0C45F7309866169E427B4B7CB7C4BE146_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method);
// System.Int32 Pinwheel.Griffin.GTreeInstance::get_PrototypeIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GTreeInstance_get_PrototypeIndex_mDC06684C2956402F317C132227989511A447B822_inline (GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC * __this, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineChangedHandler__ctor_mC32C1C15507C7826F99BCA0C4B28A7E34454A4E6 (SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler::Invoke(Pinwheel.Griffin.SplineTool.GSplineCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineChangedHandler_Invoke_m9C3C05946C7509C10D33AA012C82E9A5FEC28F4E (SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * __this, GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * ___sender0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___sender0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___sender0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, targetMethod);
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
						GenericInterfaceActionInvoker1< GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * >::Invoke(targetMethod, targetThis, ___sender0);
					else
						GenericVirtActionInvoker1< GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * >::Invoke(targetMethod, targetThis, ___sender0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0);
					else
						VirtActionInvoker1< GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler::BeginInvoke(Pinwheel.Griffin.SplineTool.GSplineCreator,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplineChangedHandler_BeginInvoke_mB5552CE95E2CC9BEF3C614D01B255825CAC25721 (SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * __this, GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * ___sender0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sender0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Pinwheel.Griffin.SplineTool.GSplineCreator/SplineChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineChangedHandler_EndInvoke_mF0E5660B1E68228F45B312474F1000B9AB6FFDC6 (SplineChangedHandler_tE96DB20CADFE4247138BB8E7DF822BEA0DCA1E02 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m3FF02C00B357F7503696C76638070FF66CA8F6B0 (U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pinwheel.Griffin.SplineTool.GSplineToolUtilities/<>c__DisplayClass3_0::<OverlapTest>b__0(Pinwheel.Griffin.GStylizedTerrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COverlapTestU3Eb__0_m8A1EDA2E91084EB730E5C466F23320854F170BFB (U3CU3Ec__DisplayClass3_0_tFECDA846182A4ADDAD2F57AF919032D79C118C2B * __this, GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m050E25A559C702AAA1033EF6A266B1827860898E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spline.OverlapTest(t))
		GSplineCreator_tA8A7C001040B5039E906D1036DB4C6BC237C92BB * L_0 = __this->get_spline_0();
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = GSplineCreator_OverlapTest_mFB1202CF02028176DF23B38764072A33BAC19B2A(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// terrains.Add(t);
		List_1_t84E88BEE10B9A68F37763D7D6FE3597286F8623A * L_3 = __this->get_terrains_1();
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_4 = ___t0;
		NullCheck(L_3);
		List_1_Add_m050E25A559C702AAA1033EF6A266B1827860898E(L_3, L_4, /*hidden argument*/List_1_Add_m050E25A559C702AAA1033EF6A266B1827860898E_RuntimeMethod_var);
	}

IL_001a:
	{
		// });
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7650CDF0D5722682DEE27C6650681CB203936BF6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * L_0 = (U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 *)il2cpp_codegen_object_new(U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m08DD52EBCD3B181023A46555BAEE7EA49C565B10(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m08DD52EBCD3B181023A46555BAEE7EA49C565B10 (U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c::<MatchEdges>b__119_0(Pinwheel.Griffin.GStylizedTerrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CMatchEdgesU3Eb__119_0_mD2FA73D61360D01FB12D108FDBDBFC81042542C2 (U3CU3Ec_t63A5C7A21A06A01D9B744ABEC8396072527CAE64 * __this, GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.MatchEdges();
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_0 = ___t0;
		NullCheck(L_0);
		GStylizedTerrain_MatchEdges_m8411F1A19E5E017C1879BF947595C4C7EEA586FA(L_0, /*hidden argument*/NULL);
		// });
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass100_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass100_0__ctor_mE2FBB7E3A405BD8EBCA6C6D3F6F2D0CFC2DE1349 (U3CU3Ec__DisplayClass100_0_t2AC624185A04381F9C202C4DAB16DFB706B5FB72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass100_0::<GetBottomNeighborChunk>b__0(Pinwheel.Griffin.GTerrainChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass100_0_U3CGetBottomNeighborChunkU3Eb__0_mE55C9FEBDE9EC81EF228F6C3AB4ABE3947C32A66 (U3CU3Ec__DisplayClass100_0_t2AC624185A04381F9C202C4DAB16DFB706B5FB72 * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c00, const RuntimeMethod* method)
{
	{
		// GTerrainChunk neighborChunk = bottomTerrainChunks.Find(c0 => c0.Index == index);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_0 = ___c00;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_index_0();
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass107_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass107_0__ctor_m62AA7C7D551A106E7504295FD2C9119CCFEA8B21 (U3CU3Ec__DisplayClass107_0_tD889FFD2568ACD0A8F85B7586DE2D1630CA18843 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass107_0::<SortChunkByDistance>b__0(Pinwheel.Griffin.GTerrainChunk,Pinwheel.Griffin.GTerrainChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass107_0_U3CSortChunkByDistanceU3Eb__0_mB180A258CF640E8A77E2FCC2C0AD0E73D2CF2533 (U3CU3Ec__DisplayClass107_0_tD889FFD2568ACD0A8F85B7586DE2D1630CA18843 * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c10, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c21, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 center1 = c1.MeshColliderComponent.bounds.center;
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_0 = ___c10;
		NullCheck(L_0);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_1;
		L_1 = GTerrainChunk_get_MeshColliderComponent_mD3B28C6ACEB9C66C03E91CEB40EA9E92642C2A7E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		L_2 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_1, /*hidden argument*/NULL);
		V_4 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		V_0 = L_3;
		// Vector3 center2 = c2.MeshColliderComponent.bounds.center;
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_4 = ___c21;
		NullCheck(L_4);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_5;
		L_5 = GTerrainChunk_get_MeshColliderComponent_mD3B28C6ACEB9C66C03E91CEB40EA9E92642C2A7E(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6;
		L_6 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		V_1 = L_7;
		// float d1 = Vector3.Distance(origin, center1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_origin_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10;
		L_10 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// float d2 = Vector3.Distance(origin, center2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_origin_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13;
		L_13 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// return d1.CompareTo(d2);
		float L_14 = V_3;
		int32_t L_15;
		L_15 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_2), L_14, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass110_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0__ctor_m52917828FF428FB0535A9B36A5F294B9C7814F88 (U3CU3Ec__DisplayClass110_0_t1946A5E442352F714BE886CB72ED57FB56D96A83 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass110_0::<Raycast>b__0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass110_0_U3CRaycastU3Eb__0_m60A39E9F1302D68C851BE1B94E2AEDDDA013B0E1 (U3CU3Ec__DisplayClass110_0_t1946A5E442352F714BE886CB72ED57FB56D96A83 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___h00, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___h11, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// Vector3.SqrMagnitude(h0.point - ray.origin)
		// .CompareTo(Vector3.SqrMagnitude(h1.point - ray.origin)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___h00), /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_1 = __this->get_address_of_ray_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___h11), /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * L_6 = __this->get_address_of_ray_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Ray_get_origin_m0C1B2BFF99CDF5231AC29AC031C161F55B53C1D0((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_9, /*hidden argument*/NULL);
		return L_10;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass97_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass97_0__ctor_mA684CD769B77CB389B21B2215AF40CA147D2B8F0 (U3CU3Ec__DisplayClass97_0_t4542D732C43647D30F15C6E7F191E63717A23BC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass97_0::<GetLeftNeighborChunk>b__0(Pinwheel.Griffin.GTerrainChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass97_0_U3CGetLeftNeighborChunkU3Eb__0_m17FC8844E98279C57CFF85B39F2B07A4E7837415 (U3CU3Ec__DisplayClass97_0_t4542D732C43647D30F15C6E7F191E63717A23BC6 * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c00, const RuntimeMethod* method)
{
	{
		// GTerrainChunk neighborChunk = leftTerrainChunks.Find(c0 => c0.Index == index);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_0 = ___c00;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_index_0();
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass98_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass98_0__ctor_mE1DCABFBE5CD2748B5E6102668D88C9DD5EC010C (U3CU3Ec__DisplayClass98_0_tA444BFDDD1E55E24C85CA7CC9D5E27C667F59B8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass98_0::<GetTopNeighborChunk>b__0(Pinwheel.Griffin.GTerrainChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass98_0_U3CGetTopNeighborChunkU3Eb__0_mCC3DD75BECC922C7EF5337708DF54900C63FE6E2 (U3CU3Ec__DisplayClass98_0_tA444BFDDD1E55E24C85CA7CC9D5E27C667F59B8D * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c00, const RuntimeMethod* method)
{
	{
		// GTerrainChunk neighborChunk = topTerrainChunks.Find(c0 => c0.Index == index);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_0 = ___c00;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_index_0();
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_mED65C3EDE6454D962871A181B1C241FF2356EA40 (U3CU3Ec__DisplayClass99_0_t4C88DC27DE5A98263EEFB676857B5FA954C79468 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GStylizedTerrain/<>c__DisplayClass99_0::<GetRightNeighborChunk>b__0(Pinwheel.Griffin.GTerrainChunk)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass99_0_U3CGetRightNeighborChunkU3Eb__0_mD0645582C97449E3DC5F220CA5F3D69E25712D76 (U3CU3Ec__DisplayClass99_0_t4C88DC27DE5A98263EEFB676857B5FA954C79468 * __this, GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * ___c00, const RuntimeMethod* method)
{
	{
		// GTerrainChunk neighborChunk = rightTerrainChunks.Find(c0 => c0.Index == index);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_0 = ___c00;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_index_0();
		bool L_3;
		L_3 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateChunksTimeSlicedU3Ed__94__ctor_mF89A9A267E171900FACDFEB297364DA0AB6D29D5 (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateChunksTimeSlicedU3Ed__94_System_IDisposable_Dispose_m05C627B6DAF3A66ABEA73C20FE7CEDF488020CAA (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateChunksTimeSlicedU3Ed__94_MoveNext_m493F92E37DC47727E3A77465DB77B85688A5A4E7 (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C3D45C219992ED3323037CB75FFA582EF3FDCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0104;
			}
			case 3:
			{
				goto IL_0205;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ForceLOD(0);
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_3 = V_1;
		NullCheck(L_3);
		GStylizedTerrain_ForceLOD_mD9DCD69A4FEAAABC8A70F75A737CC45EE11F669C(L_3, 0, /*hidden argument*/NULL);
		// int coreCount = 1; //SystemInfo.processorCount - 1;
		__this->set_U3CcoreCountU3E5__2_4(1);
		// List<GTerrainChunk> chunks = new List<GTerrainChunk>();
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_4 = (List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 *)il2cpp_codegen_object_new(List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7_il2cpp_TypeInfo_var);
		List_1__ctor_m1C3D45C219992ED3323037CB75FFA582EF3FDCEE(L_4, /*hidden argument*/List_1__ctor_m1C3D45C219992ED3323037CB75FFA582EF3FDCEE_RuntimeMethod_var);
		__this->set_U3CchunksU3E5__3_5(L_4);
		// int step = (chunksToUpdate.Count + coreCount - 1) / coreCount;
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_5 = __this->get_chunksToUpdate_3();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_inline(L_5, /*hidden argument*/List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_RuntimeMethod_var);
		int32_t L_7 = __this->get_U3CcoreCountU3E5__2_4();
		int32_t L_8 = __this->get_U3CcoreCountU3E5__2_4();
		__this->set_U3CstepU3E5__4_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)1))/(int32_t)L_8)));
		// for (int repeat = 0; repeat < 2; ++repeat) //generate 2 times for seams to stitch up
		__this->set_U3CrepeatU3E5__6_8(0);
		goto IL_0140;
	}

IL_008a:
	{
		// for (int i = 0; i < step; ++i)
		__this->set_U3CiU3E5__7_9(0);
		goto IL_011d;
	}

IL_0096:
	{
		// chunks.Clear();
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_9 = __this->get_U3CchunksU3E5__3_5();
		NullCheck(L_9);
		List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C(L_9, /*hidden argument*/List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C_RuntimeMethod_var);
		// for (int j = 0; j < coreCount; ++j)
		V_2 = 0;
		goto IL_00de;
	}

IL_00a5:
	{
		// int index = i * coreCount + j;
		int32_t L_10 = __this->get_U3CiU3E5__7_9();
		int32_t L_11 = __this->get_U3CcoreCountU3E5__2_4();
		int32_t L_12 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)L_12));
		// if (index < chunksToUpdate.Count)
		int32_t L_13 = V_3;
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_14 = __this->get_chunksToUpdate_3();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_inline(L_14, /*hidden argument*/List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_RuntimeMethod_var);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_00da;
		}
	}
	{
		// chunks.Add(chunksToUpdate[index]);
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_16 = __this->get_U3CchunksU3E5__3_5();
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_17 = __this->get_chunksToUpdate_3();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_19;
		L_19 = List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_RuntimeMethod_var);
		NullCheck(L_16);
		List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77(L_16, L_19, /*hidden argument*/List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77_RuntimeMethod_var);
	}

IL_00da:
	{
		// for (int j = 0; j < coreCount; ++j)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00de:
	{
		// for (int j = 0; j < coreCount; ++j)
		int32_t L_21 = V_2;
		int32_t L_22 = __this->get_U3CcoreCountU3E5__2_4();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_00a5;
		}
	}
	{
		// GenerateChunks(chunks, 0);
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_23 = V_1;
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_24 = __this->get_U3CchunksU3E5__3_5();
		NullCheck(L_23);
		GStylizedTerrain_GenerateChunks_mE100C21F4F6C5ACB780519E263ABECE491D8B0B3(L_23, L_24, 0, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0104:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < step; ++i)
		int32_t L_25 = __this->get_U3CiU3E5__7_9();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_4;
		__this->set_U3CiU3E5__7_9(L_26);
	}

IL_011d:
	{
		// for (int i = 0; i < step; ++i)
		int32_t L_27 = __this->get_U3CiU3E5__7_9();
		int32_t L_28 = __this->get_U3CstepU3E5__4_6();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0096;
		}
	}
	{
		// for (int repeat = 0; repeat < 2; ++repeat) //generate 2 times for seams to stitch up
		int32_t L_29 = __this->get_U3CrepeatU3E5__6_8();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_4;
		__this->set_U3CrepeatU3E5__6_8(L_30);
	}

IL_0140:
	{
		// for (int repeat = 0; repeat < 2; ++repeat) //generate 2 times for seams to stitch up
		int32_t L_31 = __this->get_U3CrepeatU3E5__6_8();
		if ((((int32_t)L_31) < ((int32_t)2)))
		{
			goto IL_008a;
		}
	}
	{
		// int lodCount = TerrainData.Geometry.LODCount;
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_32 = V_1;
		NullCheck(L_32);
		GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * L_33;
		L_33 = GStylizedTerrain_get_TerrainData_m4D0AFF2EE0DB4FF20895640771AB2D4876C8B559_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * L_34;
		L_34 = GTerrainData_get_Geometry_mEA28085EE3EADFEC9317D8C9F76A137D644E96C1(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = GGeometry_get_LODCount_mCA99BD89D77E5C2DC21669E31239745D8688A5BB_inline(L_34, /*hidden argument*/NULL);
		__this->set_U3ClodCountU3E5__5_7(L_35);
		// if (lodCount == 1)
		int32_t L_36 = __this->get_U3ClodCountU3E5__5_7();
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_016d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_016d:
	{
		// for (int i = 0; i < step; ++i)
		__this->set_U3CrepeatU3E5__6_8(0);
		goto IL_021e;
	}

IL_0179:
	{
		// chunks.Clear();
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_37 = __this->get_U3CchunksU3E5__3_5();
		NullCheck(L_37);
		List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C(L_37, /*hidden argument*/List_1_Clear_m064AC0581EED601DE01293D426687D24CB63400C_RuntimeMethod_var);
		// for (int j = 0; j < coreCount; ++j)
		V_5 = 0;
		goto IL_01c8;
	}

IL_0189:
	{
		// int index = i * coreCount + j;
		int32_t L_38 = __this->get_U3CrepeatU3E5__6_8();
		int32_t L_39 = __this->get_U3CcoreCountU3E5__2_4();
		int32_t L_40 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)L_39)), (int32_t)L_40));
		// if (index < chunksToUpdate.Count)
		int32_t L_41 = V_6;
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_42 = __this->get_chunksToUpdate_3();
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_inline(L_42, /*hidden argument*/List_1_get_Count_mC7E4EA99399C0AB54515107737ADAE913BF986FD_RuntimeMethod_var);
		if ((((int32_t)L_41) >= ((int32_t)L_43)))
		{
			goto IL_01c2;
		}
	}
	{
		// chunks.Add(chunksToUpdate[index]);
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_44 = __this->get_U3CchunksU3E5__3_5();
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_45 = __this->get_chunksToUpdate_3();
		int32_t L_46 = V_6;
		NullCheck(L_45);
		GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * L_47;
		L_47 = List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m8BD9D12E8F74A2A68C9B6FA64D52917AA998148A_RuntimeMethod_var);
		NullCheck(L_44);
		List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77(L_44, L_47, /*hidden argument*/List_1_Add_m3A8067EE3F4961C1AD2C2CC17683B20A129EAD77_RuntimeMethod_var);
	}

IL_01c2:
	{
		// for (int j = 0; j < coreCount; ++j)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_01c8:
	{
		// for (int j = 0; j < coreCount; ++j)
		int32_t L_49 = V_5;
		int32_t L_50 = __this->get_U3CcoreCountU3E5__2_4();
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0189;
		}
	}
	{
		// for (int lod = 1; lod < lodCount; ++lod)
		V_7 = 1;
		goto IL_01eb;
	}

IL_01d7:
	{
		// GenerateChunks(chunks, lod);
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_51 = V_1;
		List_1_tE22B36DDB51B03A68E4BF8643D120938F0AC97D7 * L_52 = __this->get_U3CchunksU3E5__3_5();
		int32_t L_53 = V_7;
		NullCheck(L_51);
		GStylizedTerrain_GenerateChunks_mE100C21F4F6C5ACB780519E263ABECE491D8B0B3(L_51, L_52, L_53, /*hidden argument*/NULL);
		// for (int lod = 1; lod < lodCount; ++lod)
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_01eb:
	{
		// for (int lod = 1; lod < lodCount; ++lod)
		int32_t L_55 = V_7;
		int32_t L_56 = __this->get_U3ClodCountU3E5__5_7();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_01d7;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0205:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < step; ++i)
		int32_t L_57 = __this->get_U3CrepeatU3E5__6_8();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		int32_t L_58 = V_4;
		__this->set_U3CrepeatU3E5__6_8(L_58);
	}

IL_021e:
	{
		// for (int i = 0; i < step; ++i)
		int32_t L_59 = __this->get_U3CrepeatU3E5__6_8();
		int32_t L_60 = __this->get_U3CstepU3E5__4_6();
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0179;
		}
	}
	{
		// ForceLOD(-1);
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_61 = V_1;
		NullCheck(L_61);
		GStylizedTerrain_ForceLOD_mD9DCD69A4FEAAABC8A70F75A737CC45EE11F669C(L_61, (-1), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateChunksTimeSlicedU3Ed__94_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54458554D8ED6F2084D52117937AF10B43F09329 (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateChunksTimeSlicedU3Ed__94_System_Collections_IEnumerator_Reset_m6C5453380602123F722F934C1CAEEC3BBE716C70 (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateChunksTimeSlicedU3Ed__94_System_Collections_IEnumerator_Reset_m6C5453380602123F722F934C1CAEEC3BBE716C70_RuntimeMethod_var)));
	}
}
// System.Object Pinwheel.Griffin.GStylizedTerrain/<GenerateChunksTimeSliced>d__94::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGenerateChunksTimeSlicedU3Ed__94_System_Collections_IEnumerator_get_Current_mEAEAB1512731ED994F90176EAAB57B8FB2D15E13 (U3CGenerateChunksTimeSlicedU3Ed__94_t874DEDECEAFC7FE4BB881910C1221E655F3ED5EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightMapProcessCallback__ctor_m4F9A4D0C7CB9DF32D6B21002919A69C719521EFA (HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback::Invoke(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightMapProcessCallback_Invoke_mD8F524FEBAEB9F69F4534798D8462ED0C33857BA (HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___heightmap0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___heightmap0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___heightmap0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___heightmap0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___heightmap0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___heightmap0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___heightmap0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___heightmap0, targetMethod);
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
						GenericInterfaceActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(targetMethod, targetThis, ___heightmap0);
					else
						GenericVirtActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(targetMethod, targetThis, ___heightmap0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___heightmap0);
					else
						VirtActionInvoker1< Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___heightmap0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___heightmap0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___heightmap0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback::BeginInvoke(UnityEngine.Texture2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeightMapProcessCallback_BeginInvoke_m273F35DA47F9DF5AEB3EB969DC9F536DCED4BB11 (HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___heightmap0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___heightmap0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Pinwheel.Griffin.GStylizedTerrain/HeightMapProcessCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightMapProcessCallback_EndInvoke_mBF94472C656B6CE5EF492D4368421B12D7B518A2 (HeightMapProcessCallback_tBEDC3F683AFFFC1170C9A6AC84544F1FA7EDD3BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pinwheel.Griffin.GSubDivisionTree/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE69C6F235EEA84F3B1481633D7555CBC7EE6364F (U3CU3Ec__DisplayClass7_0_t10AE54369035AF13FCB091A0BF50880E11BAD28F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/<>c__DisplayClass7_0::<GetMaxLevel>b__0(Pinwheel.Griffin.GSubDivisionTree/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CGetMaxLevelU3Eb__0_mD1CD7613E8C5CBA80287E49037E9396B6DF8F3C3 (U3CU3Ec__DisplayClass7_0_t10AE54369035AF13FCB091A0BF50880E11BAD28F * __this, Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___n0, const RuntimeMethod* method)
{
	{
		// if (n.Level > max)
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_max_0();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		// max = n.Level;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_3 = ___n0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline(L_3, /*hidden argument*/NULL);
		__this->set_max_0(L_4);
	}

IL_001a:
	{
		// });
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
// System.Int32 Pinwheel.Griffin.GSubDivisionTree/Node::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// public int Level { get; private set; }
		int32_t L_0 = __this->get_U3CLevelU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_Level(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Level { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLevelU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v0_1();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V0_m04319EBAB959700BFB8DAF3E08A19EBC42D26431 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v0 = new Vector2(
		//     (float)System.Math.Round(value.x, 3),
		//     (float)System.Math.Round(value.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_1)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value0;
		float L_4 = L_3.get_y_1();
		double L_5;
		L_5 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_4)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_2)), ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_v0_1(L_6);
		// }
		return;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v1_2();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V1_m89538543EA0D794061BBED09A893019FCC715DF3 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v1 = new Vector2(
		//     (float)System.Math.Round(value.x, 3),
		//     (float)System.Math.Round(value.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_1)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value0;
		float L_4 = L_3.get_y_1();
		double L_5;
		L_5 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_4)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_2)), ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_v1_2(L_6);
		// }
		return;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v2_3();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_V2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_V2_m1998CB158EF6F67C0636D527F593623FBF0F3225 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v2 = new Vector2(
		//     (float)System.Math.Round(value.x, 3),
		//     (float)System.Math.Round(value.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_1)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value0;
		float L_4 = L_3.get_y_1();
		double L_5;
		L_5 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_4)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_2)), ((float)((float)L_5)), /*hidden argument*/NULL);
		__this->set_v2_3(L_6);
		// }
		return;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_VC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_VC_m7D73C2FE5E47868584CAACFD4EBBB835605288A6 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v = (V0 + V1 + V2) / 3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_4, (3.0f), /*hidden argument*/NULL);
		V_0 = L_5;
		// return new Vector2(
		//     (float)System.Math.Round(v.x, 3),
		//     (float)System.Math.Round(v.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_7)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		double L_11;
		L_11 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_10)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), ((float)((float)L_8)), ((float)((float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V01()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V01_m2CBFCB7A1C9DB4AF2A4A7E681600393442121BD9 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v = (V0 + V1) * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, (0.5f), /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector2(
		//     (float)System.Math.Round(v.x, 3),
		//     (float)System.Math.Round(v.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_5)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		double L_9;
		L_9 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_8)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), ((float)((float)L_6)), ((float)((float)L_9)), /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V12_m20FF4F0219CBCB5B9C501FBED1FE542A399FC0D1 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v = (V1 + V2) * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, (0.5f), /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector2(
		//     (float)System.Math.Round(v.x, 3),
		//     (float)System.Math.Round(v.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_5)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		double L_9;
		L_9 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_8)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), ((float)((float)L_6)), ((float)((float)L_9)), /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector2 Pinwheel.Griffin.GSubDivisionTree/Node::get_V20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V20_mBE3EB75B2CA2DCF3EB90E4BB973FAE9CB8DF26A5 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v = (V2 + V0) * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, (0.5f), /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector2(
		//     (float)System.Math.Round(v.x, 3),
		//     (float)System.Math.Round(v.y, 3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_5)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_y_1();
		double L_9;
		L_9 = Math_Round_m394EEE2C796B3A1578E65037E0D57B3D6F9B1C70(((double)((double)L_8)), 3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), ((float)((float)L_6)), ((float)((float)L_9)), /*hidden argument*/NULL);
		return L_10;
	}
}
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::get_LeftNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_LeftNode_m7A77EC05EEB03B0E4B6E0B573C1068DDB06873FE (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return leftNode;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = __this->get_leftNode_4();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_LeftNode(Pinwheel.Griffin.GSubDivisionTree/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_LeftNode_m7C68D43BC8616DD5FFE094A935E4F87201DABFF9 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___value0, const RuntimeMethod* method)
{
	{
		// leftNode = value;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = ___value0;
		__this->set_leftNode_4(L_0);
		// if (leftNode != null)
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_1 = __this->get_leftNode_4();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// leftNode.Level = Level + 1;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_2 = __this->get_leftNode_4();
		int32_t L_3;
		L_3 = Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::get_RightNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_RightNode_m688D14535330C083DBF0687A7C8EC9B6213BF17D (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return rightNode;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = __this->get_rightNode_5();
		return L_0;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::set_RightNode(Pinwheel.Griffin.GSubDivisionTree/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_RightNode_m73C018378AA90D4137975B50E93253FC902B0871 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * ___value0, const RuntimeMethod* method)
{
	{
		// rightNode = value;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = ___value0;
		__this->set_rightNode_5(L_0);
		// if (rightNode != null)
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_1 = __this->get_rightNode_5();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// rightNode.Level = Level + 1;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_2 = __this->get_rightNode_5();
		int32_t L_3;
		L_3 = Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mB274DB6A3498082A9632EE12E3A77B3460E3A6A1 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// public Node()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Level = -1;
		Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline(__this, (-1), /*hidden argument*/NULL);
		// this.V0 = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Node_set_V0_m04319EBAB959700BFB8DAF3E08A19EBC42D26431(__this, L_0, /*hidden argument*/NULL);
		// this.V1 = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Node_set_V1_m89538543EA0D794061BBED09A893019FCC715DF3(__this, L_1, /*hidden argument*/NULL);
		// this.V2 = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Node_set_V2_m1998CB158EF6F67C0636D527F593623FBF0F3225(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m8278B829E7F22A94E39BAE1B8793296DBFB003A6 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v00, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v11, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v22, const RuntimeMethod* method)
{
	{
		// public Node(Vector2 v0, Vector2 v1, Vector2 v2)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Level = -1;
		Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline(__this, (-1), /*hidden argument*/NULL);
		// this.V0 = v0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v00;
		Node_set_V0_m04319EBAB959700BFB8DAF3E08A19EBC42D26431(__this, L_0, /*hidden argument*/NULL);
		// this.V1 = v1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___v11;
		Node_set_V1_m89538543EA0D794061BBED09A893019FCC715DF3(__this, L_1, /*hidden argument*/NULL);
		// this.V2 = v2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v22;
		Node_set_V2_m1998CB158EF6F67C0636D527F593623FBF0F3225(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Pinwheel.Griffin.GSubDivisionTree/Node::Split()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_Split_mE0D4D4CA768C6C95B96239F2F3D6C77E3C96C071 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * V_0 = NULL;
	Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * V_1 = NULL;
	{
		// Vector2 v12 = (V1 + V2) * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_0, L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, (0.5f), /*hidden argument*/NULL);
		// Node n0 = new Node(v12, V0, V1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_7 = (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F *)il2cpp_codegen_object_new(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var);
		Node__ctor_m8278B829E7F22A94E39BAE1B8793296DBFB003A6(L_7, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Node n1 = new Node(v12, V2, V0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_10 = (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F *)il2cpp_codegen_object_new(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var);
		Node__ctor_m8278B829E7F22A94E39BAE1B8793296DBFB003A6(L_10, L_4, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// LeftNode = n0;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_11 = V_0;
		Node_set_LeftNode_m7C68D43BC8616DD5FFE094A935E4F87201DABFF9(__this, L_11, /*hidden argument*/NULL);
		// RightNode = n1;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_12 = V_1;
		Node_set_RightNode_m73C018378AA90D4137975B50E93253FC902B0871(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Pinwheel.Griffin.GSubDivisionTree/Node Pinwheel.Griffin.GSubDivisionTree/Node::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_Clone_mD44E39E22AE36B6334E6A8AF445796402042E976 (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * V_0 = NULL;
	{
		// Node n = new Node(V0, V1, V2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline(__this, /*hidden argument*/NULL);
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_3 = (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F *)il2cpp_codegen_object_new(Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F_il2cpp_TypeInfo_var);
		Node__ctor_m8278B829E7F22A94E39BAE1B8793296DBFB003A6(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// n.Level = Level;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_4 = V_0;
		int32_t L_5;
		L_5 = Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline(L_4, L_5, /*hidden argument*/NULL);
		// if (LeftNode != null)
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_6;
		L_6 = Node_get_LeftNode_m7A77EC05EEB03B0E4B6E0B573C1068DDB06873FE_inline(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// n.LeftNode = LeftNode.Clone();
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_7 = V_0;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_8;
		L_8 = Node_get_LeftNode_m7A77EC05EEB03B0E4B6E0B573C1068DDB06873FE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_9;
		L_9 = Node_Clone_mD44E39E22AE36B6334E6A8AF445796402042E976(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Node_set_LeftNode_m7C68D43BC8616DD5FFE094A935E4F87201DABFF9(L_7, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// if (RightNode != null)
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_10;
		L_10 = Node_get_RightNode_m688D14535330C083DBF0687A7C8EC9B6213BF17D_inline(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// n.RightNode = RightNode.Clone();
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_11 = V_0;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_12;
		L_12 = Node_get_RightNode_m688D14535330C083DBF0687A7C8EC9B6213BF17D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_13;
		L_13 = Node_Clone_mD44E39E22AE36B6334E6A8AF445796402042E976(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Node_set_RightNode_m73C018378AA90D4137975B50E93253FC902B0871(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// return n;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_14 = V_0;
		return L_14;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 (DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * __this, uint8_t ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___flag0);

}
// System.Void Pinwheel.Griffin.GTerrainData/DirtyHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirtyHandler__ctor_mE1000AD22BBF1AF6DA17D358782068E855D05836 (DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/DirtyHandler::Invoke(Pinwheel.Griffin.GTerrainData/DirtyFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirtyHandler_Invoke_m56292F1A7667CF3538C79D6404031987E60434DF (DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * __this, uint8_t ___flag0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___flag0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___flag0, targetMethod);
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
						GenericInterfaceActionInvoker1< uint8_t >::Invoke(targetMethod, targetThis, ___flag0);
					else
						GenericVirtActionInvoker1< uint8_t >::Invoke(targetMethod, targetThis, ___flag0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___flag0);
					else
						VirtActionInvoker1< uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___flag0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___flag0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___flag0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/DirtyHandler::BeginInvoke(Pinwheel.Griffin.GTerrainData/DirtyFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DirtyHandler_BeginInvoke_m6CBC404BD00A94B8E297F88010244434F335BC45 (DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * __this, uint8_t ___flag0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067_il2cpp_TypeInfo_var, &___flag0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Pinwheel.Griffin.GTerrainData/DirtyHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirtyHandler_EndInvoke_mFB4CA4086EAD6529B22C53C349F5E57CC8887455 (DirtyHandler_t6D25E1D67A87F250C78FFA4D74FDBBCCA7DE5F16 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalDirtyHandler__ctor_m025E5450440EF273606AC49FEBD4D7CFB0CE49D8 (GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler::Invoke(Pinwheel.Griffin.GTerrainData,Pinwheel.Griffin.GTerrainData/DirtyFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalDirtyHandler_Invoke_mAA2AB1F6836C12DB38F3CE2FAA03691188FF07FB (GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * __this, GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * ___data0, uint8_t ___flag1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___flag1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___flag1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint8_t >::Invoke(targetMethod, ___data0, ___flag1);
					else
						GenericVirtActionInvoker1< uint8_t >::Invoke(targetMethod, ___data0, ___flag1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0, ___flag1);
					else
						VirtActionInvoker1< uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0, ___flag1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___flag1, targetMethod);
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
						GenericInterfaceActionInvoker2< GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t >::Invoke(targetMethod, targetThis, ___data0, ___flag1);
					else
						GenericVirtActionInvoker2< GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t >::Invoke(targetMethod, targetThis, ___data0, ___flag1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___flag1);
					else
						VirtActionInvoker2< GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___flag1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___flag1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 *, uint8_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___flag1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler::BeginInvoke(Pinwheel.Griffin.GTerrainData,Pinwheel.Griffin.GTerrainData/DirtyFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GlobalDirtyHandler_BeginInvoke_mB97BF5339FD8CEEB8846B36562C07FF646BE6AA6 (GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * __this, GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * ___data0, uint8_t ___flag1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___data0;
	__d_args[1] = Box(DirtyFlags_t37FFD35BE93156B2A56CF29C13E9F42D48D55067_il2cpp_TypeInfo_var, &___flag1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Pinwheel.Griffin.GTerrainData/GlobalDirtyHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalDirtyHandler_EndInvoke_mEC3AF44788310E9FCA3171F85AE3711058F43F5D (GlobalDirtyHandler_tCA26F75D5B2D1416E9657031B8268281D2D26E3C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 (GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchChangedHandler__ctor_mD2EDB554E21C06BCEB863403B9AC07A841B1ADD0 (GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchChangedHandler_Invoke_m3C37DD67E0FD893AB8535694AB95A654C1EBF04E (GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * __this, int32_t ___index0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrassPatchChangedHandler_BeginInvoke_m63C242C976FC7AF7029605CC524D83AD33474C09 (GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchChangedHandler_EndInvoke_m6B7561B55AE9B86E54C3621B5A226040B533FEB1 (GrassPatchChangedHandler_tCF857C635947D7584B74268AA6E4663F9FE65797 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 (GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchGridSizeChangedHandler__ctor_m479CAA3405C51A20774BF4831400303942B91CC9 (GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchGridSizeChangedHandler_Invoke_mB2D6D4E7F611F9A48D6FAB41FC368B37D9163650 (GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrassPatchGridSizeChangedHandler_BeginInvoke_m8A441E86CCEBADD1FE2E4B75B791D28A19482D02 (GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPatchGridSizeChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPatchGridSizeChangedHandler_EndInvoke_mF3CBCC37C48B8F8161C4DAE01D878685D88D23CC (GrassPatchGridSizeChangedHandler_tC86952FF5C41AEA2C05ADBA7ACBB8878902AC9F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 (GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrototypeGroupChangedHandler__ctor_mA37B345E66753F23CE6C6A7D26B57CA305E9D6DC (GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrototypeGroupChangedHandler_Invoke_m6CFE0FE0ED615E1260926A353DF99C74F68B6B67 (GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrassPrototypeGroupChangedHandler_BeginInvoke_m173DCA5F5A11976D3A0A9012BBAE0AABB50DB63A (GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Pinwheel.Griffin.GTerrainData/GrassPrototypeGroupChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrototypeGroupChangedHandler_EndInvoke_m14369F5AD74F0E937EE719A33836606EBEC2D9DE (GrassPrototypeGroupChangedHandler_t8C20F56F9682329397442CE78B2E52591502C491 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 (TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Pinwheel.Griffin.GTerrainData/TreeChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeChangedHandler__ctor_mA6264985A728CF6E750AB10DD61D9EC788E6E757 (TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin.GTerrainData/TreeChangedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeChangedHandler_Invoke_m8DC4F6154B3F34F7B9B5960D3E9E29FE74F979AE (TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin.GTerrainData/TreeChangedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeChangedHandler_BeginInvoke_m0C4CB099304D3B3EA6F541F4F0233A2201564879 (TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Pinwheel.Griffin.GTerrainData/TreeChangedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeChangedHandler_EndInvoke_m3B575E18353343CD6C5F3FC09FD81690451A3990 (TreeChangedHandler_t467F914516BF9F19D68864A01ED334E36AC8A154 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBBACFBFF1484F1D2E82CDC3800D2275D18494595 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * L_0 = (U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 *)il2cpp_codegen_object_new(U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3CF490CAC4A51AE58E5D28D698DF019C7B8AE7A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3CF490CAC4A51AE58E5D28D698DF019C7B8AE7A0 (U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.PaintTool.GTerrainTexturePainter/<>c::<RefreshCustomPainterTypes>b__9_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRefreshCustomPainterTypesU3Eb__9_0_m948E697E738F60A021607C9C88251DEB02F920A2 (U3CU3Ec_t58A9C69BE6363409D957CB0202520DA8A8975157 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// t => t.GetInterface(TexturePainterInterfaceName) != null &&
		// !BUILTIN_PAINTER_NAME.Contains(t.Name));
		Type_t * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = GTerrainTexturePainter_get_TexturePainterInterfaceName_mC446238A5E4F88F7510FC23446053822C4503741(/*hidden argument*/NULL);
		NullCheck(L_0);
		Type_t * L_2;
		L_2 = Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_il2cpp_TypeInfo_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = ((GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_StaticFields*)il2cpp_codegen_static_fields_for(GTerrainTexturePainter_t6B2A6683EA899EB7EF307D09A305901D570A5AE3_il2cpp_TypeInfo_var))->get_BUILTIN_PAINTER_NAME_5();
		Type_t * L_5 = ___t0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_4, L_6, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
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
// System.Void Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m11352D23F869EFBF958F409A85998785205A4BAD (U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.PaintTool.GTreePainter/<>c__DisplayClass9_0::<HandleEraseTree>b__0(Pinwheel.Griffin.GTreeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CHandleEraseTreeU3Eb__0_mE1A417D2130D1BA20E8DC19BF97F2EBCE59A5CEB (U3CU3Ec__DisplayClass9_0_tC2FA7A25787B70745EC156F57D97A7D092C1B212 * __this, GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  ___tree0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUtilities_tD621A367BC2203A13452703004B76CC6C3C9A7E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// treeIndex = args.TreeIndices[Random.Range(0, args.TreeIndices.Count)];
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_0 = __this->get_address_of_args_1();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1;
		L_1 = GFoliagePainterArgs_get_TreeIndices_m1BDC725EFC2C360310F34F387270E940DF428660_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_0, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_2 = __this->get_address_of_args_1();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3;
		L_3 = GFoliagePainterArgs_get_TreeIndices_m1BDC725EFC2C360310F34F387270E940DF428660_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_3, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_6;
		L_6 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_1, L_5, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		__this->set_treeIndex_0(L_6);
		// localPos.Set(
		//     tree.position.x * terrainSize.x,
		//     tree.position.y * terrainSize.y,
		//     tree.position.z * terrainSize.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_localPos_2();
		GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  L_8 = ___tree0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8.get_position_1();
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_terrainSize_3();
		float L_12 = L_11->get_x_2();
		GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  L_13 = ___tree0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13.get_position_1();
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_terrainSize_3();
		float L_17 = L_16->get_y_3();
		GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  L_18 = ___tree0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18.get_position_1();
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_terrainSize_3();
		float L_22 = L_21->get_z_4();
		Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_12)), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)), ((float)il2cpp_codegen_multiply((float)L_20, (float)L_22)), /*hidden argument*/NULL);
		// worldPos = terrain.transform.TransformPoint(localPos);
		GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * L_23 = __this->get_terrain_5();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_localPos_2();
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_24, L_25, /*hidden argument*/NULL);
		__this->set_worldPos_4(L_26);
		// GUtilities.CalculateBarycentricCoord(
		//         new Vector2(worldPos.x, worldPos.z),
		//         new Vector2(args.WorldPointCorners[0].x, args.WorldPointCorners[0].z),
		//         new Vector2(args.WorldPointCorners[1].x, args.WorldPointCorners[1].z),
		//         new Vector2(args.WorldPointCorners[2].x, args.WorldPointCorners[2].z),
		//         ref bary0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_worldPos_4();
		float L_28 = L_27->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_worldPos_4();
		float L_30 = L_29->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), L_28, L_30, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_32 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_33;
		L_33 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		float L_34 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_35 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36;
		L_36 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		float L_37 = ((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_38), L_34, L_37, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_39 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40;
		L_40 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		float L_41 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_42 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_43;
		L_43 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		float L_44 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_45), L_41, L_44, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_46 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_47;
		L_47 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		float L_48 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_49 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_50;
		L_50 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		float L_51 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_52), L_48, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = __this->get_address_of_bary0_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUtilities_tD621A367BC2203A13452703004B76CC6C3C9A7E0_il2cpp_TypeInfo_var);
		GUtilities_CalculateBarycentricCoord_m0684E21EEED2460919C29D1A7C223D48EDAC5105(L_31, L_38, L_45, L_52, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_53, /*hidden argument*/NULL);
		// GUtilities.CalculateBarycentricCoord(
		//     new Vector2(worldPos.x, worldPos.z),
		//     new Vector2(args.WorldPointCorners[0].x, args.WorldPointCorners[0].z),
		//     new Vector2(args.WorldPointCorners[2].x, args.WorldPointCorners[2].z),
		//     new Vector2(args.WorldPointCorners[3].x, args.WorldPointCorners[3].z),
		//     ref bary1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_worldPos_4();
		float L_55 = L_54->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = __this->get_address_of_worldPos_4();
		float L_57 = L_56->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_58), L_55, L_57, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_59 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_60;
		L_60 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		float L_61 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_62 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_63;
		L_63 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		float L_64 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_65), L_61, L_64, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_66 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_67;
		L_67 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		float L_68 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_69 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_70;
		L_70 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		float L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_72), L_68, L_71, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_73 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74;
		L_74 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		float L_75 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->get_x_2();
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_76 = __this->get_address_of_args_1();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_77;
		L_77 = GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		float L_78 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_79), L_75, L_78, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_80 = __this->get_address_of_bary1_7();
		GUtilities_CalculateBarycentricCoord_m0684E21EEED2460919C29D1A7C223D48EDAC5105(L_58, L_65, L_72, L_79, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_80, /*hidden argument*/NULL);
		// if (bary0.x >= 0 && bary0.y >= 0 && bary0.z >= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_81 = __this->get_address_of_bary0_6();
		float L_82 = L_81->get_x_2();
		if ((!(((float)L_82) >= ((float)(0.0f)))))
		{
			goto IL_0294;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_83 = __this->get_address_of_bary0_6();
		float L_84 = L_83->get_y_3();
		if ((!(((float)L_84) >= ((float)(0.0f)))))
		{
			goto IL_0294;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = __this->get_address_of_bary0_6();
		float L_86 = L_85->get_z_4();
		if ((!(((float)L_86) >= ((float)(0.0f)))))
		{
			goto IL_0294;
		}
	}
	{
		// maskUv = bary0.x * Vector2.zero + bary0.y * Vector2.up + bary0.z * Vector2.one;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_87 = __this->get_address_of_bary0_6();
		float L_88 = L_87->get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89;
		L_89 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90;
		L_90 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_88, L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_91 = __this->get_address_of_bary0_6();
		float L_92 = L_91->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_93;
		L_93 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		L_94 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_92, L_93, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_95;
		L_95 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_90, L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_96 = __this->get_address_of_bary0_6();
		float L_97 = L_96->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_98;
		L_98 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_99;
		L_99 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_97, L_98, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_100;
		L_100 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_95, L_99, /*hidden argument*/NULL);
		__this->set_maskUv_8(L_100);
		// }
		goto IL_031d;
	}

IL_0294:
	{
		// else if (bary1.x >= 0 && bary1.y >= 0 && bary1.z >= 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_101 = __this->get_address_of_bary1_7();
		float L_102 = L_101->get_x_2();
		if ((!(((float)L_102) >= ((float)(0.0f)))))
		{
			goto IL_031b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_103 = __this->get_address_of_bary1_7();
		float L_104 = L_103->get_y_3();
		if ((!(((float)L_104) >= ((float)(0.0f)))))
		{
			goto IL_031b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_105 = __this->get_address_of_bary1_7();
		float L_106 = L_105->get_z_4();
		if ((!(((float)L_106) >= ((float)(0.0f)))))
		{
			goto IL_031b;
		}
	}
	{
		// maskUv = bary1.x * Vector2.zero + bary1.y * Vector2.one + bary1.z * Vector2.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_107 = __this->get_address_of_bary1_7();
		float L_108 = L_107->get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_109;
		L_109 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_110;
		L_110 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_108, L_109, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_111 = __this->get_address_of_bary1_7();
		float L_112 = L_111->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_113;
		L_113 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_114;
		L_114 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_112, L_113, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_115;
		L_115 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_110, L_114, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_116 = __this->get_address_of_bary1_7();
		float L_117 = L_116->get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_118;
		L_118 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_119;
		L_119 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_117, L_118, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_120;
		L_120 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_115, L_119, /*hidden argument*/NULL);
		__this->set_maskUv_8(L_120);
		// }
		goto IL_031d;
	}

IL_031b:
	{
		// return false;
		return (bool)0;
	}

IL_031d:
	{
		// if (clonedMask != null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_121 = __this->get_clonedMask_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_122;
		L_122 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_121, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_0372;
		}
	}
	{
		// maskColor = clonedMask.GetPixelBilinear(maskUv.x, maskUv.y);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_123 = __this->get_clonedMask_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_124 = __this->get_address_of_maskUv_8();
		float L_125 = L_124->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_126 = __this->get_address_of_maskUv_8();
		float L_127 = L_126->get_y_1();
		NullCheck(L_123);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_128;
		L_128 = Texture2D_GetPixelBilinear_mE25550DD7E9FD26DA7CB1E38FFCA2101F9D3D28D(L_123, L_125, L_127, /*hidden argument*/NULL);
		__this->set_maskColor_10(L_128);
		// if (Random.value > maskColor.grayscale * args.EraseRatio)
		float L_129;
		L_129 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_130 = __this->get_address_of_maskColor_10();
		float L_131;
		L_131 = Color_get_grayscale_m5F2C3B10392EB415FB8F3F9ABBF6221FD6BAA355((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)L_130, /*hidden argument*/NULL);
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_132 = __this->get_address_of_args_1();
		float L_133;
		L_133 = GFoliagePainterArgs_get_EraseRatio_m7DB276EB3FC858D5006C60E50E0605AF22A2660C_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_132, /*hidden argument*/NULL);
		if ((!(((float)L_129) > ((float)((float)il2cpp_codegen_multiply((float)L_131, (float)L_133))))))
		{
			goto IL_0372;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0372:
	{
		// if (args.EnableTerrainMask)
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_134 = __this->get_address_of_args_1();
		bool L_135;
		L_135 = GFoliagePainterArgs_get_EnableTerrainMask_mFC59072A8818BA55B4A5FAA14F487310BE7AFC53_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_134, /*hidden argument*/NULL);
		if (!L_135)
		{
			goto IL_03ba;
		}
	}
	{
		// maskColor = terrainMask.GetPixelBilinear(tree.position.x, tree.position.z);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_136 = __this->get_terrainMask_11();
		GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  L_137 = ___tree0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = L_137.get_position_1();
		float L_139 = L_138.get_x_2();
		GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC  L_140 = ___tree0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = L_140.get_position_1();
		float L_142 = L_141.get_z_4();
		NullCheck(L_136);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_143;
		L_143 = Texture2D_GetPixelBilinear_mE25550DD7E9FD26DA7CB1E38FFCA2101F9D3D28D(L_136, L_139, L_142, /*hidden argument*/NULL);
		__this->set_maskColor_10(L_143);
		// if (Random.value < maskColor.r)
		float L_144;
		L_144 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_145 = __this->get_address_of_maskColor_10();
		float L_146 = L_145->get_r_0();
		if ((!(((float)L_144) < ((float)L_146))))
		{
			goto IL_03ba;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_03ba:
	{
		// if (args.ActionType == GPainterActionType.Negative &&
		//     tree.PrototypeIndex == treeIndex)
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_147 = __this->get_address_of_args_1();
		int32_t L_148;
		L_148 = GFoliagePainterArgs_get_ActionType_m7B1B8AB0C45F7309866169E427B4B7CB7C4BE146_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_147, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_148) == ((uint32_t)1))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_149;
		L_149 = GTreeInstance_get_PrototypeIndex_mDC06684C2956402F317C132227989511A447B822_inline((GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC *)(&___tree0), /*hidden argument*/NULL);
		int32_t L_150 = __this->get_treeIndex_0();
		if ((!(((uint32_t)L_149) == ((uint32_t)L_150))))
		{
			goto IL_03d9;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_03d9:
	{
		// else if (args.ActionType == GPainterActionType.Alternative)
		GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * L_151 = __this->get_address_of_args_1();
		int32_t L_152;
		L_152 = GFoliagePainterArgs_get_ActionType_m7B1B8AB0C45F7309866169E427B4B7CB7C4BE146_inline((GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC *)L_151, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_152) == ((uint32_t)2))))
		{
			goto IL_03e9;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_03e9:
	{
		// return false;
		return (bool)0;
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
// Conversion methods for marshalling of: Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_pinvoke(const PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D& unmarshaled, PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___billboardMesh_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'billboardMesh' of type 'PrototypeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___billboardMesh_5Exception, NULL);
}
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_pinvoke_back(const PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_pinvoke& marshaled, PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D& unmarshaled)
{
	Exception_t* ___billboardMesh_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'billboardMesh' of type 'PrototypeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___billboardMesh_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_pinvoke_cleanup(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_com(const PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D& unmarshaled, PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_com& marshaled)
{
	Exception_t* ___billboardMesh_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'billboardMesh' of type 'PrototypeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___billboardMesh_5Exception, NULL);
}
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_com_back(const PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_com& marshaled, PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D& unmarshaled)
{
	Exception_t* ___billboardMesh_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'billboardMesh' of type 'PrototypeCache': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___billboardMesh_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: Pinwheel.Griffin.Rendering.GTreeRenderer/PrototypeCache
IL2CPP_EXTERN_C void PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshal_com_cleanup(PrototypeCache_t87F8F2D6FAB23E1A5806B6A10E605EE810951E0D_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CategorizeHandler__ctor_m2F2D9093C802FCBBB8A12D7FC2C43EA35290D321 (CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CategorizeHandler_Invoke_mD6C7EF02447404E1AAC412FF1592BB8D2234F91E (CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___o0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CategorizeHandler_BeginInvoke_m598000BCEC751500BD7DB41396004682AB58D742 (CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F * __this, RuntimeObject * ___o0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object Pinwheel.Griffin._GSelectionGridArgs/CategorizeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CategorizeHandler_EndInvoke_mE36A826F41492FAD845B8BADADFA101665218D19 (CategorizeHandler_tD29DB55E385412D7BBBA576F54D59098A85A766F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pinwheel.Griffin._GSelectionGridArgs/DrawHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawHandler__ctor_m0A8FB4CD7EF65E06441079491F79C5AB8801E889 (DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Pinwheel.Griffin._GSelectionGridArgs/DrawHandler::Invoke(UnityEngine.Rect,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawHandler_Invoke_mC31CE1D7F2B82A118346EB69F8A3F2B8C4C81F04 (DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r0, RuntimeObject * ___o1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___r0, ___o1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___o1, targetMethod);
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
						GenericInterfaceActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject * >::Invoke(targetMethod, targetThis, ___r0, ___o1);
					else
						GenericVirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject * >::Invoke(targetMethod, targetThis, ___r0, ___o1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___r0, ___o1);
					else
						VirtActionInvoker2< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___r0, ___o1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___r0) - 1), ___o1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 , RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___r0, ___o1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Pinwheel.Griffin._GSelectionGridArgs/DrawHandler::BeginInvoke(UnityEngine.Rect,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrawHandler_BeginInvoke_m3020DCE3146F27AA6280A280959D2F3368EDDD1A (DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___r0, RuntimeObject * ___o1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_il2cpp_TypeInfo_var, &___r0);
	__d_args[1] = ___o1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Pinwheel.Griffin._GSelectionGridArgs/DrawHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawHandler_EndInvoke_m14B227D58283F9D90D528AF154D296877AD694F9 (DrawHandler_t19B0BC30F148EF9FA43EF0102A5D9242D68DFDCF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipHandler__ctor_m485A9D2462154065291A7DC5301515A2A5E3A2CF (TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TooltipHandler_Invoke_mBA8944FD4CBAFD2AEDE6C4F212536829711B01F6 (TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	String_t* result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___o0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
					else
						result = GenericVirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0);
					else
						result = VirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TooltipHandler_BeginInvoke_m8B74C65936D4237B0C9FF1B3A5DE9A0A4997E8FF (TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA * __this, RuntimeObject * ___o0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Pinwheel.Griffin._GSelectionGridArgs/TooltipHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TooltipHandler_EndInvoke_mBF1633F3E7829B6EB2DA41573CB29B0053A6151A (TooltipHandler_t44F367953DFE8C4D63A4A3EF8C5E35DF3D00F9BA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m35F7F69340576B659FAE2EE4F8BFD7C33029AE08 (U3CU3Ec__DisplayClass3_0_tCCD93A13FA1F5C4BE49151023E37355346DD5FE5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass3_0::<FindMaterialTemplate>b__0(Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CFindMaterialTemplateU3Eb__0_m2BBC68D48D701259A0B141F0D3FE0B5625E5E078 (U3CU3Ec__DisplayClass3_0_tCCD93A13FA1F5C4BE49151023E37355346DD5FE5 * __this, TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return t.material != null && t.material.shader == shader;
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_0 = ___t0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0->get_material_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_3 = ___t0;
		NullCheck(L_3);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_3->get_material_3();
		NullCheck(L_4);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5;
		L_5 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_4, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_6 = __this->get_shader_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
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
// System.Void Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mE86BDF23B4D08E513150E15C7C0FC6C9ADD78CA9 (U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::<GetClonedMaterial>b__0(Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CGetClonedMaterialU3Eb__0_mD6B4F43B1E73416A349B59A3AFED2324652E87AE (U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F * __this, TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * ___m0, const RuntimeMethod* method)
{
	{
		// return m.lightingModel == light && m.texturingModel == texturing;
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_0 = ___m0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_lightingModel_0();
		int32_t L_2 = __this->get_light_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_3 = ___m0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_texturingModel_1();
		int32_t L_5 = __this->get_texturing_1();
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/<>c__DisplayClass4_0::<GetClonedMaterial>b__1(Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CGetClonedMaterialU3Eb__1_m2D76B4EB4F670B61B71017CE59FEFE7AD1817D32 (U3CU3Ec__DisplayClass4_0_tD733AFF781C3CB0610F3293817664C9013DF2A0F * __this, TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * ___m0, const RuntimeMethod* method)
{
	{
		// return m.lightingModel == light && m.texturingModel == texturing && m.splatsModel == splats;
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_0 = ___m0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_lightingModel_0();
		int32_t L_2 = __this->get_light_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_3 = ___m0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_texturingModel_1();
		int32_t L_5 = __this->get_texturing_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * L_6 = ___m0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_splatsModel_2();
		int32_t L_8 = __this->get_splats_2();
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
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
// System.Void Pinwheel.Griffin.GRuntimeSettings/TerrainRenderingSettings/TerrainMaterialTemplate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainMaterialTemplate__ctor_mDFD6E50FC3518951792F4B543C04EF2BF360CA5B (TerrainMaterialTemplate_t9B5026DA66F6FC2D4315CBC340EF1764F6076859 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GTerrainChunk_get_Index_mD406FC122160D09481668894C8F3BE82ECE98AB5_inline (GTerrainChunk_t77DD62388C32A462E1AEA6A5D2A736CFE570EC1F * __this, const RuntimeMethod* method)
{
	{
		// return index;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_index_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * GStylizedTerrain_get_TerrainData_m4D0AFF2EE0DB4FF20895640771AB2D4876C8B559_inline (GStylizedTerrain_t65034DCB1718CF91A07110742869C24B6BF0F0F1 * __this, const RuntimeMethod* method)
{
	{
		// return terrainData;
		GTerrainData_t11F50543496F4FB169B6A71C2E265DB8DFE7C047 * L_0 = __this->get_terrainData_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GGeometry_get_LODCount_mCA99BD89D77E5C2DC21669E31239745D8688A5BB_inline (GGeometry_t9C96CAB64BA00D83DA08A76888D16FBF309EF873 * __this, const RuntimeMethod* method)
{
	{
		// return lodCount;
		int32_t L_0 = __this->get_lodCount_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Node_get_Level_m68E529FDD7A18110B12C52283A85300EB4F427BB_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// public int Level { get; private set; }
		int32_t L_0 = __this->get_U3CLevelU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V0_m83EBA5994D505888E6F62564316637A5E1F61BBF_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v0_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V1_mF0CB4E78D80EAC190C9A33245F3687BCB5F906D6_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v1_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Node_get_V2_m8867D2E47725A9B30F64853E4F31FDCC19B74A45_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return v2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_v2_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Node_set_Level_m4B16EA2C04F16D8C04AADF64C977AE660329337D_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Level { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLevelU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_LeftNode_m7A77EC05EEB03B0E4B6E0B573C1068DDB06873FE_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return leftNode;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = __this->get_leftNode_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * Node_get_RightNode_m688D14535330C083DBF0687A7C8EC9B6213BF17D_inline (Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * __this, const RuntimeMethod* method)
{
	{
		// return rightNode;
		Node_t9CECD0E59D78F73A4E5F3C325F9231FF339AEB6F * L_0 = __this->get_rightNode_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * GFoliagePainterArgs_get_TreeIndices_m1BDC725EFC2C360310F34F387270E940DF428660_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method)
{
	{
		// public List<int> TreeIndices { get; set; }
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_U3CTreeIndicesU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m12EA2C6DF9F94ABD0462F422A20959A53EED90D7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method)
{
	{
		float L_0 = ___newX0;
		__this->set_x_2(L_0);
		float L_1 = ___newY1;
		__this->set_y_3(L_1);
		float L_2 = ___newZ2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* GFoliagePainterArgs_get_WorldPointCorners_m1D667F8827B44EFC786A6B0F67C3D14EFE1BC83D_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method)
{
	{
		// public Vector3[] WorldPointCorners { get; internal set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_U3CWorldPointCornersU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GFoliagePainterArgs_get_EraseRatio_m7DB276EB3FC858D5006C60E50E0605AF22A2660C_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method)
{
	{
		// public float EraseRatio { get; internal set; }
		float L_0 = __this->get_U3CEraseRatioU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GFoliagePainterArgs_get_EnableTerrainMask_mFC59072A8818BA55B4A5FAA14F487310BE7AFC53_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableTerrainMask { get; set; }
		bool L_0 = __this->get_U3CEnableTerrainMaskU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GFoliagePainterArgs_get_ActionType_m7B1B8AB0C45F7309866169E427B4B7CB7C4BE146_inline (GFoliagePainterArgs_t481AEA8F2746CCFCD52A38BD6A36E04B7CAD4ADC * __this, const RuntimeMethod* method)
{
	{
		// public GPainterActionType ActionType { get; set; }
		int32_t L_0 = __this->get_U3CActionTypeU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GTreeInstance_get_PrototypeIndex_mDC06684C2956402F317C132227989511A447B822_inline (GTreeInstance_t810A3061EFFED92A10D72D1E0DFBF326A4CE93FC * __this, const RuntimeMethod* method)
{
	{
		// return prototypeIndex;
		int32_t L_0 = __this->get_prototypeIndex_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
