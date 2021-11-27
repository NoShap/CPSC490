#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB;
// System.Func`1<System.Nullable`1<System.Int32>>
struct Func_1_tDC30C5284AE787359DC813472C98404F72620D79;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean>
struct Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.String>
struct Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36;
// System.Func`2<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel,System.Boolean>
struct Func_2_t0B41E011C508D4A9114973798676A8E737FC1522;
// System.Func`2<Vuforia.ObserverBehaviour,System.Boolean>
struct Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct IDictionary_2_tDD38EE0A7BD9CD204A53723E8AB7269730B7FBCF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IList_1_t3B6D56F1FAB574422D58B0F381112EAC3E0A18BA;
// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_tDFCE5D160688937EFB20C4EDB4C44DBD25D39B9C;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.WebCamProfile/ProfileData>[]
struct EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Vuforia.Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Vuforia.Internal.Core.IEngine
struct IEngine_t708DCFFA8A0A96615D4AC23FF9621DA3A280AC3E;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tDE0C8AF5F4AAABB85ACC09BC42BE7ABD6FCC961F;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F;
// Vuforia.Newtonsoft.Json.Linq.JContainer
struct JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC;
// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426;
// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01;
// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Vuforia.Internal.Rendering.TextureRenderer
struct TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Vuforia.Internal.Utility.VuforiaCoroutineUtility
struct VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544;
// Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E;
// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B;
// Vuforia.VuforiaConfiguration/PackageInfo
struct PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F;
// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF;
// Vuforia.VuforiaConfiguration/RequiredShaders
struct RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986;
// Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1
struct U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4;
// Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25
struct U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893;
// Vuforia.World/<>c
struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18;
// Vuforia.Internal.Core.WorldOriginProvider/<>c
struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A;
// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61;
// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c
struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58;

IL2CPP_EXTERN_C RuntimeClass* Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6;
IL2CPP_EXTERN_C String_t* _stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1;
IL2CPP_EXTERN_C String_t* _stringLiteral677774D8B69150E8300A8C0C3378D6703951B692;
IL2CPP_EXTERN_C String_t* _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187;
IL2CPP_EXTERN_C String_t* _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForFirstWebCamFrameU3Ed__25_System_Collections_IEnumerator_Reset_m7F0FB6504FE80026EE84B0638FF9C956DAF82949_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___entries_1)); }
	inline EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___keys_7)); }
	inline KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___values_8)); }
	inline ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JContainer Vuforia.Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * ____parent_1;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_previous
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____previous_2;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_next
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____next_3;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____parent_1)); }
	inline JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * get__parent_1() const { return ____parent_1; }
	inline JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____previous_2)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__previous_2() const { return ____previous_2; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____next_3)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__next_3() const { return ____next_3; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer Vuforia.Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * ____equalityComparer_0;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___BooleanTypes_5;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___NumberTypes_6;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___StringTypes_7;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___GuidTypes_8;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___TimeSpanTypes_9;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___UriTypes_10;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___CharTypes_11;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___DateTimeTypes_12;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
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

// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC, ____token_0)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__token_0() const { return ____token_0; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/PackageInfo
struct PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/PackageInfo::ARFoundationVersion
	String_t* ___ARFoundationVersion_0;

public:
	inline static int32_t get_offset_of_ARFoundationVersion_0() { return static_cast<int32_t>(offsetof(PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F, ___ARFoundationVersion_0)); }
	inline String_t* get_ARFoundationVersion_0() const { return ___ARFoundationVersion_0; }
	inline String_t** get_address_of_ARFoundationVersion_0() { return &___ARFoundationVersion_0; }
	inline void set_ARFoundationVersion_0(String_t* value)
	{
		___ARFoundationVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFoundationVersion_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/RequiredShaders
struct RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE  : public RuntimeObject
{
public:
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/RequiredShaders::depthMaskShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___depthMaskShader_0;

public:
	inline static int32_t get_offset_of_depthMaskShader_0() { return static_cast<int32_t>(offsetof(RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE, ___depthMaskShader_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_depthMaskShader_0() const { return ___depthMaskShader_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_depthMaskShader_0() { return &___depthMaskShader_0; }
	inline void set_depthMaskShader_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___depthMaskShader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthMaskShader_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::numDivisions
	int32_t ___numDivisions_0;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___videoBackgroundShader_1;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::unlitShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___unlitShader_2;
	// System.Boolean Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundEnabled
	bool ___videoBackgroundEnabled_3;

public:
	inline static int32_t get_offset_of_numDivisions_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___numDivisions_0)); }
	inline int32_t get_numDivisions_0() const { return ___numDivisions_0; }
	inline int32_t* get_address_of_numDivisions_0() { return &___numDivisions_0; }
	inline void set_numDivisions_0(int32_t value)
	{
		___numDivisions_0 = value;
	}

	inline static int32_t get_offset_of_videoBackgroundShader_1() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___videoBackgroundShader_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_videoBackgroundShader_1() const { return ___videoBackgroundShader_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_videoBackgroundShader_1() { return &___videoBackgroundShader_1; }
	inline void set_videoBackgroundShader_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___videoBackgroundShader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackgroundShader_1), (void*)value);
	}

	inline static int32_t get_offset_of_unlitShader_2() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___unlitShader_2)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_unlitShader_2() const { return ___unlitShader_2; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_unlitShader_2() { return &___unlitShader_2; }
	inline void set_unlitShader_2(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___unlitShader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unlitShader_2), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackgroundEnabled_3() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___videoBackgroundEnabled_3)); }
	inline bool get_videoBackgroundEnabled_3() const { return ___videoBackgroundEnabled_3; }
	inline bool* get_address_of_videoBackgroundEnabled_3() { return &___videoBackgroundEnabled_3; }
	inline void set_videoBackgroundEnabled_3(bool value)
	{
		___videoBackgroundEnabled_3 = value;
	}
};


// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::mDeviceName
	String_t* ___mDeviceName_1;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_2;

public:
	inline static int32_t get_offset_of_mDeviceName_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986, ___mDeviceName_1)); }
	inline String_t* get_mDeviceName_1() const { return ___mDeviceName_1; }
	inline String_t** get_address_of_mDeviceName_1() { return &___mDeviceName_1; }
	inline void set_mDeviceName_1(String_t* value)
	{
		___mDeviceName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceName_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderTextureLayer_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986, ___renderTextureLayer_2)); }
	inline int32_t get_renderTextureLayer_2() const { return ___renderTextureLayer_2; }
	inline int32_t* get_address_of_renderTextureLayer_2() { return &___renderTextureLayer_2; }
	inline void set_renderTextureLayer_2(int32_t value)
	{
		___renderTextureLayer_2 = value;
	}
};


// Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1
struct U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::timeout
	float ___timeout_2;
	// System.Collections.IEnumerator Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::routine
	RuntimeObject* ___routine_3;
	// System.Action`1<System.Boolean> Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::onComplete
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onComplete_4;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<timer>5__2
	float ___U3CtimerU3E5__2_5;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<start>5__3
	float ___U3CstartU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_2() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___timeout_2)); }
	inline float get_timeout_2() const { return ___timeout_2; }
	inline float* get_address_of_timeout_2() { return &___timeout_2; }
	inline void set_timeout_2(float value)
	{
		___timeout_2 = value;
	}

	inline static int32_t get_offset_of_routine_3() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___routine_3)); }
	inline RuntimeObject* get_routine_3() const { return ___routine_3; }
	inline RuntimeObject** get_address_of_routine_3() { return &___routine_3; }
	inline void set_routine_3(RuntimeObject* value)
	{
		___routine_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routine_3), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_4() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___onComplete_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_onComplete_4() const { return ___onComplete_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_onComplete_4() { return &___onComplete_4; }
	inline void set_onComplete_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___onComplete_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CtimerU3E5__2_5)); }
	inline float get_U3CtimerU3E5__2_5() const { return ___U3CtimerU3E5__2_5; }
	inline float* get_address_of_U3CtimerU3E5__2_5() { return &___U3CtimerU3E5__2_5; }
	inline void set_U3CtimerU3E5__2_5(float value)
	{
		___U3CtimerU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CstartU3E5__3_6)); }
	inline float get_U3CstartU3E5__3_6() const { return ___U3CstartU3E5__3_6; }
	inline float* get_address_of_U3CstartU3E5__3_6() { return &___U3CstartU3E5__3_6; }
	inline void set_U3CstartU3E5__3_6(float value)
	{
		___U3CstartU3E5__3_6 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities/SimulatorVars
struct SimulatorVars_t5EDFE68636380E8A90A85E739A11EFF566745BFC  : public RuntimeObject
{
public:

public:
};


// Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25
struct U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.WebCam Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::<>4__this
	WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893, ___U3CU3E4__this_2)); }
	inline WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.World/<>c
struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields
{
public:
	// Vuforia.World/<>c Vuforia.World/<>c::<>9
	U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.ObserverBehaviour,System.Boolean> Vuforia.World/<>c::<>9__28_0
	Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * ___U3CU3E9__28_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields, ___U3CU3E9__28_0_1)); }
	inline Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * get_U3CU3E9__28_0_1() const { return ___U3CU3E9__28_0_1; }
	inline Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB ** get_address_of_U3CU3E9__28_0_1() { return &___U3CU3E9__28_0_1; }
	inline void set_U3CU3E9__28_0_1(Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * value)
	{
		___U3CU3E9__28_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_1), (void*)value);
	}
};


// Vuforia.Internal.Core.WorldOriginProvider/<>c
struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields
{
public:
	// Vuforia.Internal.Core.WorldOriginProvider/<>c Vuforia.Internal.Core.WorldOriginProvider/<>c::<>9
	U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * ___U3CU3E9_0;
	// System.Func`1<System.Nullable`1<System.Int32>> Vuforia.Internal.Core.WorldOriginProvider/<>c::<>9__7_0
	Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_1_tDC30C5284AE787359DC813472C98404F72620D79 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CU3E2__current_1;
	// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E2__current_1)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E4__this_2)); }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c
struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9
	U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__29_0_1;
	// System.Func`2<System.String,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_1
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__29_1_2;
	// System.Func`2<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_2
	Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * ___U3CU3E9__29_2_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__30_0
	Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * ___U3CU3E9__30_0_4;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.String> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__30_1
	Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * ___U3CU3E9__30_1_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_1_2)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__29_1_2() const { return ___U3CU3E9__29_1_2; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__29_1_2() { return &___U3CU3E9__29_1_2; }
	inline void set_U3CU3E9__29_1_2(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__29_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_2_3)); }
	inline Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * get_U3CU3E9__29_2_3() const { return ___U3CU3E9__29_2_3; }
	inline Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 ** get_address_of_U3CU3E9__29_2_3() { return &___U3CU3E9__29_2_3; }
	inline void set_U3CU3E9__29_2_3(Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * value)
	{
		___U3CU3E9__29_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__30_0_4)); }
	inline Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * get_U3CU3E9__30_0_4() const { return ___U3CU3E9__30_0_4; }
	inline Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA ** get_address_of_U3CU3E9__30_0_4() { return &___U3CU3E9__30_0_4; }
	inline void set_U3CU3E9__30_0_4(Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * value)
	{
		___U3CU3E9__30_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__30_1_5)); }
	inline Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * get_U3CU3E9__30_1_5() const { return ___U3CU3E9__30_1_5; }
	inline Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 ** get_address_of_U3CU3E9__30_1_5() { return &___U3CU3E9__30_1_5; }
	inline void set_U3CU3E9__30_1_5(Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * value)
	{
		___U3CU3E9__30_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_5), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD, ___value_1)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_value_1() const { return ___value_1; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
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


// Vuforia.CameraDevice/AndroidDevice/Int64Range
struct Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D 
{
public:
	// System.Int64 Vuforia.CameraDevice/AndroidDevice/Int64Range::fromInt
	int64_t ___fromInt_0;
	// System.Int64 Vuforia.CameraDevice/AndroidDevice/Int64Range::toInt
	int64_t ___toInt_1;

public:
	inline static int32_t get_offset_of_fromInt_0() { return static_cast<int32_t>(offsetof(Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D, ___fromInt_0)); }
	inline int64_t get_fromInt_0() const { return ___fromInt_0; }
	inline int64_t* get_address_of_fromInt_0() { return &___fromInt_0; }
	inline void set_fromInt_0(int64_t value)
	{
		___fromInt_0 = value;
	}

	inline static int32_t get_offset_of_toInt_1() { return static_cast<int32_t>(offsetof(Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D, ___toInt_1)); }
	inline int64_t get_toInt_1() const { return ___toInt_1; }
	inline int64_t* get_address_of_toInt_1() { return &___toInt_1; }
	inline void set_toInt_1(int64_t value)
	{
		___toInt_1 = value;
	}
};


// Vuforia.Internal.VuforiaDriver.CameraIntrinsics
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 
{
public:
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthX
	float ___FocalLengthX_0;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthY
	float ___FocalLengthY_1;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointX
	float ___PrincipalPointX_2;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointY
	float ___PrincipalPointY_3;
	// System.Single[] Vuforia.Internal.VuforiaDriver.CameraIntrinsics::DistortionCoefficients
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___DistortionCoefficients_4;

public:
	inline static int32_t get_offset_of_FocalLengthX_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthX_0)); }
	inline float get_FocalLengthX_0() const { return ___FocalLengthX_0; }
	inline float* get_address_of_FocalLengthX_0() { return &___FocalLengthX_0; }
	inline void set_FocalLengthX_0(float value)
	{
		___FocalLengthX_0 = value;
	}

	inline static int32_t get_offset_of_FocalLengthY_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthY_1)); }
	inline float get_FocalLengthY_1() const { return ___FocalLengthY_1; }
	inline float* get_address_of_FocalLengthY_1() { return &___FocalLengthY_1; }
	inline void set_FocalLengthY_1(float value)
	{
		___FocalLengthY_1 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointX_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointX_2)); }
	inline float get_PrincipalPointX_2() const { return ___PrincipalPointX_2; }
	inline float* get_address_of_PrincipalPointX_2() { return &___PrincipalPointX_2; }
	inline void set_PrincipalPointX_2(float value)
	{
		___PrincipalPointX_2 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointY_3() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointY_3)); }
	inline float get_PrincipalPointY_3() const { return ___PrincipalPointY_3; }
	inline float* get_address_of_PrincipalPointY_3() { return &___PrincipalPointY_3; }
	inline void set_PrincipalPointY_3(float value)
	{
		___PrincipalPointY_3 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_4() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___DistortionCoefficients_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_DistortionCoefficients_4() const { return ___DistortionCoefficients_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_DistortionCoefficients_4() { return &___DistortionCoefficients_4; }
	inline void set_DistortionCoefficients_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___DistortionCoefficients_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistortionCoefficients_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)

// Vuforia.CameraMode
struct CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA 
{
public:
	// System.Int32 Vuforia.CameraMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA, ___value___2)); }
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

// Vuforia.DriverPixelFormat
struct DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4 
{
public:
	// System.Int32 Vuforia.DriverPixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType
struct JsonSchemaType_t89F923BA09FA940BF213F37AFFF80A9A90992AC3 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Schema.JsonSchemaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonSchemaType_t89F923BA09FA940BF213F37AFFF80A9A90992AC3, ___value___2)); }
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

// Vuforia.PixelFormat
struct PixelFormat_t2860701D64A90BB02319BA76DB89A5C7DB02C366 
{
public:
	// System.Int32 Vuforia.PixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PixelFormat_t2860701D64A90BB02319BA76DB89A5C7DB02C366, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.PlayModeType
struct PlayModeType_t3C7C677F324184B66D14175150CD9F783D74B07C 
{
public:
	// System.Int32 Vuforia.PlayModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayModeType_t3C7C677F324184B66D14175150CD9F783D74B07C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Status
struct Status_t507773DC9329777DFF23BBE12880E1A5331F8826 
{
public:
	// System.Int32 Vuforia.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t507773DC9329777DFF23BBE12880E1A5331F8826, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.StatusInfo
struct StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD 
{
public:
	// System.Int32 Vuforia.StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VirtualButtonSensitivity
struct VirtualButtonSensitivity_tF1FAFB55AC69ACF9C0A5F01C8BC8C00383A9BF72 
{
public:
	// System.Int32 Vuforia.VirtualButtonSensitivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VirtualButtonSensitivity_tF1FAFB55AC69ACF9C0A5F01C8BC8C00383A9BF72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRuntime/InitState
struct InitState_tC6C6DE1DAF40A658C505A8537551CDD6BCBB2E6D 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_tC6C6DE1DAF40A658C505A8537551CDD6BCBB2E6D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities/DriverType
struct DriverType_tFE2F18CF0D03567B127B5E272D05858680BB9B9D 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities/DriverType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverType_tFE2F18CF0D03567B127B5E272D05858680BB9B9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.WebCamProfile/ProfileData
struct ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE 
{
public:
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___RequestedTextureSize_0;
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedTextureSize_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___ResampledTextureSize_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};


// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement
struct ARCoreRequirement_t61E1D646ED96CE13616C433911D6B51ED4D009BE 
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoreRequirement_t61E1D646ED96CE13616C433911D6B51ED4D009BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice/AndroidDevice/CameraField/DataType
struct DataType_t9FD64BCD3E1843E96DB85A06DFC97E392316C2EF 
{
public:
	// System.Int32 Vuforia.CameraDevice/AndroidDevice/CameraField/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t9FD64BCD3E1843E96DB85A06DFC97E392316C2EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.VuforiaDriver.CameraImage
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C 
{
public:
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::Timestamp
	int64_t ___Timestamp_0;
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::ExposureTime
	int64_t ___ExposureTime_1;
	// System.IntPtr Vuforia.Internal.VuforiaDriver.CameraImage::Buffer
	intptr_t ___Buffer_2;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::BufferSize
	int32_t ___BufferSize_3;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Index
	int32_t ___Index_4;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Width
	int32_t ___Width_5;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Height
	int32_t ___Height_6;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Stride
	int32_t ___Stride_7;
	// Vuforia.DriverPixelFormat Vuforia.Internal.VuforiaDriver.CameraImage::Format
	int32_t ___Format_8;
	// Vuforia.Internal.VuforiaDriver.CameraIntrinsics Vuforia.Internal.VuforiaDriver.CameraImage::Intrinsics
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  ___Intrinsics_9;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Timestamp_0)); }
	inline int64_t get_Timestamp_0() const { return ___Timestamp_0; }
	inline int64_t* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(int64_t value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_ExposureTime_1() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___ExposureTime_1)); }
	inline int64_t get_ExposureTime_1() const { return ___ExposureTime_1; }
	inline int64_t* get_address_of_ExposureTime_1() { return &___ExposureTime_1; }
	inline void set_ExposureTime_1(int64_t value)
	{
		___ExposureTime_1 = value;
	}

	inline static int32_t get_offset_of_Buffer_2() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Buffer_2)); }
	inline intptr_t get_Buffer_2() const { return ___Buffer_2; }
	inline intptr_t* get_address_of_Buffer_2() { return &___Buffer_2; }
	inline void set_Buffer_2(intptr_t value)
	{
		___Buffer_2 = value;
	}

	inline static int32_t get_offset_of_BufferSize_3() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___BufferSize_3)); }
	inline int32_t get_BufferSize_3() const { return ___BufferSize_3; }
	inline int32_t* get_address_of_BufferSize_3() { return &___BufferSize_3; }
	inline void set_BufferSize_3(int32_t value)
	{
		___BufferSize_3 = value;
	}

	inline static int32_t get_offset_of_Index_4() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Index_4)); }
	inline int32_t get_Index_4() const { return ___Index_4; }
	inline int32_t* get_address_of_Index_4() { return &___Index_4; }
	inline void set_Index_4(int32_t value)
	{
		___Index_4 = value;
	}

	inline static int32_t get_offset_of_Width_5() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Width_5)); }
	inline int32_t get_Width_5() const { return ___Width_5; }
	inline int32_t* get_address_of_Width_5() { return &___Width_5; }
	inline void set_Width_5(int32_t value)
	{
		___Width_5 = value;
	}

	inline static int32_t get_offset_of_Height_6() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Height_6)); }
	inline int32_t get_Height_6() const { return ___Height_6; }
	inline int32_t* get_address_of_Height_6() { return &___Height_6; }
	inline void set_Height_6(int32_t value)
	{
		___Height_6 = value;
	}

	inline static int32_t get_offset_of_Stride_7() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Stride_7)); }
	inline int32_t get_Stride_7() const { return ___Stride_7; }
	inline int32_t* get_address_of_Stride_7() { return &___Stride_7; }
	inline void set_Stride_7(int32_t value)
	{
		___Stride_7 = value;
	}

	inline static int32_t get_offset_of_Format_8() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Format_8)); }
	inline int32_t get_Format_8() const { return ___Format_8; }
	inline int32_t* get_address_of_Format_8() { return &___Format_8; }
	inline void set_Format_8(int32_t value)
	{
		___Format_8 = value;
	}

	inline static int32_t get_offset_of_Intrinsics_9() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Intrinsics_9)); }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  get_Intrinsics_9() const { return ___Intrinsics_9; }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 * get_address_of_Intrinsics_9() { return &___Intrinsics_9; }
	inline void set_Intrinsics_9(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  value)
	{
		___Intrinsics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_pinvoke
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke ___Intrinsics_9;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_com
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com ___Intrinsics_9;
};
#pragma pack(pop, tp)

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Required>k__BackingField
	bool ___U3CRequiredU3Ek__BackingField_0;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MinimumLength>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinimumLengthU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MaximumLength>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMaximumLengthU3Ek__BackingField_3;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<DivisibleBy>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CDivisibleByU3Ek__BackingField_4;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Minimum>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CMinimumU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Maximum>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CMaximumU3Ek__BackingField_6;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<ExclusiveMinimum>k__BackingField
	bool ___U3CExclusiveMinimumU3Ek__BackingField_7;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<ExclusiveMaximum>k__BackingField
	bool ___U3CExclusiveMaximumU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MinimumItems>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinimumItemsU3Ek__BackingField_9;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MaximumItems>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMaximumItemsU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<System.String> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Patterns>k__BackingField
	RuntimeObject* ___U3CPatternsU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_12;
	// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_13;
	// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<PatternProperties>k__BackingField
	RuntimeObject* ___U3CPatternPropertiesU3Ek__BackingField_14;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AdditionalProperties>k__BackingField
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___U3CAdditionalPropertiesU3Ek__BackingField_15;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AdditionalItems>k__BackingField
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___U3CAdditionalItemsU3Ek__BackingField_16;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<PositionalItemsValidation>k__BackingField
	bool ___U3CPositionalItemsValidationU3Ek__BackingField_17;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AllowAdditionalProperties>k__BackingField
	bool ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AllowAdditionalItems>k__BackingField
	bool ___U3CAllowAdditionalItemsU3Ek__BackingField_19;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<UniqueItems>k__BackingField
	bool ___U3CUniqueItemsU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Enum>k__BackingField
	RuntimeObject* ___U3CEnumU3Ek__BackingField_21;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Disallow>k__BackingField
	int32_t ___U3CDisallowU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CRequiredU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CRequiredU3Ek__BackingField_0)); }
	inline bool get_U3CRequiredU3Ek__BackingField_0() const { return ___U3CRequiredU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CRequiredU3Ek__BackingField_0() { return &___U3CRequiredU3Ek__BackingField_0; }
	inline void set_U3CRequiredU3Ek__BackingField_0(bool value)
	{
		___U3CRequiredU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumLengthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumLengthU3Ek__BackingField_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinimumLengthU3Ek__BackingField_2() const { return ___U3CMinimumLengthU3Ek__BackingField_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinimumLengthU3Ek__BackingField_2() { return &___U3CMinimumLengthU3Ek__BackingField_2; }
	inline void set_U3CMinimumLengthU3Ek__BackingField_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinimumLengthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumLengthU3Ek__BackingField_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMaximumLengthU3Ek__BackingField_3() const { return ___U3CMaximumLengthU3Ek__BackingField_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMaximumLengthU3Ek__BackingField_3() { return &___U3CMaximumLengthU3Ek__BackingField_3; }
	inline void set_U3CMaximumLengthU3Ek__BackingField_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMaximumLengthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDivisibleByU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CDivisibleByU3Ek__BackingField_4)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CDivisibleByU3Ek__BackingField_4() const { return ___U3CDivisibleByU3Ek__BackingField_4; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CDivisibleByU3Ek__BackingField_4() { return &___U3CDivisibleByU3Ek__BackingField_4; }
	inline void set_U3CDivisibleByU3Ek__BackingField_4(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CDivisibleByU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumU3Ek__BackingField_5)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CMinimumU3Ek__BackingField_5() const { return ___U3CMinimumU3Ek__BackingField_5; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CMinimumU3Ek__BackingField_5() { return &___U3CMinimumU3Ek__BackingField_5; }
	inline void set_U3CMinimumU3Ek__BackingField_5(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CMinimumU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CMaximumU3Ek__BackingField_6() const { return ___U3CMaximumU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CMaximumU3Ek__BackingField_6() { return &___U3CMaximumU3Ek__BackingField_6; }
	inline void set_U3CMaximumU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CMaximumU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMinimumU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CExclusiveMinimumU3Ek__BackingField_7)); }
	inline bool get_U3CExclusiveMinimumU3Ek__BackingField_7() const { return ___U3CExclusiveMinimumU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CExclusiveMinimumU3Ek__BackingField_7() { return &___U3CExclusiveMinimumU3Ek__BackingField_7; }
	inline void set_U3CExclusiveMinimumU3Ek__BackingField_7(bool value)
	{
		___U3CExclusiveMinimumU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMaximumU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CExclusiveMaximumU3Ek__BackingField_8)); }
	inline bool get_U3CExclusiveMaximumU3Ek__BackingField_8() const { return ___U3CExclusiveMaximumU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CExclusiveMaximumU3Ek__BackingField_8() { return &___U3CExclusiveMaximumU3Ek__BackingField_8; }
	inline void set_U3CExclusiveMaximumU3Ek__BackingField_8(bool value)
	{
		___U3CExclusiveMaximumU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumItemsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumItemsU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinimumItemsU3Ek__BackingField_9() const { return ___U3CMinimumItemsU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinimumItemsU3Ek__BackingField_9() { return &___U3CMinimumItemsU3Ek__BackingField_9; }
	inline void set_U3CMinimumItemsU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinimumItemsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumItemsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumItemsU3Ek__BackingField_10)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMaximumItemsU3Ek__BackingField_10() const { return ___U3CMaximumItemsU3Ek__BackingField_10; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMaximumItemsU3Ek__BackingField_10() { return &___U3CMaximumItemsU3Ek__BackingField_10; }
	inline void set_U3CMaximumItemsU3Ek__BackingField_10(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMaximumItemsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPatternsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPatternsU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CPatternsU3Ek__BackingField_11() const { return ___U3CPatternsU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CPatternsU3Ek__BackingField_11() { return &___U3CPatternsU3Ek__BackingField_11; }
	inline void set_U3CPatternsU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CPatternsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPatternsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CItemsU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CItemsU3Ek__BackingField_12() const { return ___U3CItemsU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CItemsU3Ek__BackingField_12() { return &___U3CItemsU3Ek__BackingField_12; }
	inline void set_U3CItemsU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CItemsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPropertiesU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CPropertiesU3Ek__BackingField_13() const { return ___U3CPropertiesU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CPropertiesU3Ek__BackingField_13() { return &___U3CPropertiesU3Ek__BackingField_13; }
	inline void set_U3CPropertiesU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPatternPropertiesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPatternPropertiesU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CPatternPropertiesU3Ek__BackingField_14() const { return ___U3CPatternPropertiesU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CPatternPropertiesU3Ek__BackingField_14() { return &___U3CPatternPropertiesU3Ek__BackingField_14; }
	inline void set_U3CPatternPropertiesU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CPatternPropertiesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPatternPropertiesU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdditionalPropertiesU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAdditionalPropertiesU3Ek__BackingField_15)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_U3CAdditionalPropertiesU3Ek__BackingField_15() const { return ___U3CAdditionalPropertiesU3Ek__BackingField_15; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_U3CAdditionalPropertiesU3Ek__BackingField_15() { return &___U3CAdditionalPropertiesU3Ek__BackingField_15; }
	inline void set_U3CAdditionalPropertiesU3Ek__BackingField_15(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___U3CAdditionalPropertiesU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalPropertiesU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdditionalItemsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAdditionalItemsU3Ek__BackingField_16)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_U3CAdditionalItemsU3Ek__BackingField_16() const { return ___U3CAdditionalItemsU3Ek__BackingField_16; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_U3CAdditionalItemsU3Ek__BackingField_16() { return &___U3CAdditionalItemsU3Ek__BackingField_16; }
	inline void set_U3CAdditionalItemsU3Ek__BackingField_16(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___U3CAdditionalItemsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalItemsU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPositionalItemsValidationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPositionalItemsValidationU3Ek__BackingField_17)); }
	inline bool get_U3CPositionalItemsValidationU3Ek__BackingField_17() const { return ___U3CPositionalItemsValidationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CPositionalItemsValidationU3Ek__BackingField_17() { return &___U3CPositionalItemsValidationU3Ek__BackingField_17; }
	inline void set_U3CPositionalItemsValidationU3Ek__BackingField_17(bool value)
	{
		___U3CPositionalItemsValidationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18)); }
	inline bool get_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() const { return ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() { return &___U3CAllowAdditionalPropertiesU3Ek__BackingField_18; }
	inline void set_U3CAllowAdditionalPropertiesU3Ek__BackingField_18(bool value)
	{
		___U3CAllowAdditionalPropertiesU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAllowAdditionalItemsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAllowAdditionalItemsU3Ek__BackingField_19)); }
	inline bool get_U3CAllowAdditionalItemsU3Ek__BackingField_19() const { return ___U3CAllowAdditionalItemsU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAllowAdditionalItemsU3Ek__BackingField_19() { return &___U3CAllowAdditionalItemsU3Ek__BackingField_19; }
	inline void set_U3CAllowAdditionalItemsU3Ek__BackingField_19(bool value)
	{
		___U3CAllowAdditionalItemsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CUniqueItemsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CUniqueItemsU3Ek__BackingField_20)); }
	inline bool get_U3CUniqueItemsU3Ek__BackingField_20() const { return ___U3CUniqueItemsU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CUniqueItemsU3Ek__BackingField_20() { return &___U3CUniqueItemsU3Ek__BackingField_20; }
	inline void set_U3CUniqueItemsU3Ek__BackingField_20(bool value)
	{
		___U3CUniqueItemsU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CEnumU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CEnumU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CEnumU3Ek__BackingField_21() const { return ___U3CEnumU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CEnumU3Ek__BackingField_21() { return &___U3CEnumU3Ek__BackingField_21; }
	inline void set_U3CEnumU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CEnumU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnumU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisallowU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CDisallowU3Ek__BackingField_22)); }
	inline int32_t get_U3CDisallowU3Ek__BackingField_22() const { return ___U3CDisallowU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CDisallowU3Ek__BackingField_22() { return &___U3CDisallowU3Ek__BackingField_22; }
	inline void set_U3CDisallowU3Ek__BackingField_22(int32_t value)
	{
		___U3CDisallowU3Ek__BackingField_22 = value;
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


// Vuforia.TargetStatus
struct TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 
{
public:
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_0() const { return ___U3CStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_0() { return &___U3CStatusU3Ek__BackingField_0; }
	inline void set_U3CStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatusInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusInfoU3Ek__BackingField_1)); }
	inline int32_t get_U3CStatusInfoU3Ek__BackingField_1() const { return ___U3CStatusInfoU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStatusInfoU3Ek__BackingField_1() { return &___U3CStatusInfoU3Ek__BackingField_1; }
	inline void set_U3CStatusInfoU3Ek__BackingField_1(int32_t value)
	{
		___U3CStatusInfoU3Ek__BackingField_1 = value;
	}
};


// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_2;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_3;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_4;
	// Vuforia.CameraMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_6;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_7;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::previousVirtualSceneScaleFactor
	float ___previousVirtualSceneScaleFactor_8;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::virtualSceneScaleFactor
	float ___virtualSceneScaleFactor_9;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_10;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::modelTargetRecoWhileExtendedTracked
	bool ___modelTargetRecoWhileExtendedTracked_11;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::shareRecordingsInITunes
	bool ___shareRecordingsInITunes_12;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_13;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_14;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___vuforiaLicenseKey_2)); }
	inline String_t* get_vuforiaLicenseKey_2() const { return ___vuforiaLicenseKey_2; }
	inline String_t** get_address_of_vuforiaLicenseKey_2() { return &___vuforiaLicenseKey_2; }
	inline void set_vuforiaLicenseKey_2(String_t* value)
	{
		___vuforiaLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforiaLicenseKey_2), (void*)value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___ufoLicenseKey_3)); }
	inline String_t* get_ufoLicenseKey_3() const { return ___ufoLicenseKey_3; }
	inline String_t** get_address_of_ufoLicenseKey_3() { return &___ufoLicenseKey_3; }
	inline void set_ufoLicenseKey_3(String_t* value)
	{
		___ufoLicenseKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ufoLicenseKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_delayedInitialization_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___delayedInitialization_4)); }
	inline bool get_delayedInitialization_4() const { return ___delayedInitialization_4; }
	inline bool* get_address_of_delayedInitialization_4() { return &___delayedInitialization_4; }
	inline void set_delayedInitialization_4(bool value)
	{
		___delayedInitialization_4 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___cameraDeviceModeSetting_5)); }
	inline int32_t get_cameraDeviceModeSetting_5() const { return ___cameraDeviceModeSetting_5; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_5() { return &___cameraDeviceModeSetting_5; }
	inline void set_cameraDeviceModeSetting_5(int32_t value)
	{
		___cameraDeviceModeSetting_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___maxSimultaneousImageTargets_6)); }
	inline int32_t get_maxSimultaneousImageTargets_6() const { return ___maxSimultaneousImageTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_6() { return &___maxSimultaneousImageTargets_6; }
	inline void set_maxSimultaneousImageTargets_6(int32_t value)
	{
		___maxSimultaneousImageTargets_6 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___maxSimultaneousObjectTargets_7)); }
	inline int32_t get_maxSimultaneousObjectTargets_7() const { return ___maxSimultaneousObjectTargets_7; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_7() { return &___maxSimultaneousObjectTargets_7; }
	inline void set_maxSimultaneousObjectTargets_7(int32_t value)
	{
		___maxSimultaneousObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_previousVirtualSceneScaleFactor_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___previousVirtualSceneScaleFactor_8)); }
	inline float get_previousVirtualSceneScaleFactor_8() const { return ___previousVirtualSceneScaleFactor_8; }
	inline float* get_address_of_previousVirtualSceneScaleFactor_8() { return &___previousVirtualSceneScaleFactor_8; }
	inline void set_previousVirtualSceneScaleFactor_8(float value)
	{
		___previousVirtualSceneScaleFactor_8 = value;
	}

	inline static int32_t get_offset_of_virtualSceneScaleFactor_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___virtualSceneScaleFactor_9)); }
	inline float get_virtualSceneScaleFactor_9() const { return ___virtualSceneScaleFactor_9; }
	inline float* get_address_of_virtualSceneScaleFactor_9() { return &___virtualSceneScaleFactor_9; }
	inline void set_virtualSceneScaleFactor_9(float value)
	{
		___virtualSceneScaleFactor_9 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___useDelayedLoadingObjectTargets_10)); }
	inline bool get_useDelayedLoadingObjectTargets_10() const { return ___useDelayedLoadingObjectTargets_10; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_10() { return &___useDelayedLoadingObjectTargets_10; }
	inline void set_useDelayedLoadingObjectTargets_10(bool value)
	{
		___useDelayedLoadingObjectTargets_10 = value;
	}

	inline static int32_t get_offset_of_modelTargetRecoWhileExtendedTracked_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___modelTargetRecoWhileExtendedTracked_11)); }
	inline bool get_modelTargetRecoWhileExtendedTracked_11() const { return ___modelTargetRecoWhileExtendedTracked_11; }
	inline bool* get_address_of_modelTargetRecoWhileExtendedTracked_11() { return &___modelTargetRecoWhileExtendedTracked_11; }
	inline void set_modelTargetRecoWhileExtendedTracked_11(bool value)
	{
		___modelTargetRecoWhileExtendedTracked_11 = value;
	}

	inline static int32_t get_offset_of_shareRecordingsInITunes_12() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___shareRecordingsInITunes_12)); }
	inline bool get_shareRecordingsInITunes_12() const { return ___shareRecordingsInITunes_12; }
	inline bool* get_address_of_shareRecordingsInITunes_12() { return &___shareRecordingsInITunes_12; }
	inline void set_shareRecordingsInITunes_12(bool value)
	{
		___shareRecordingsInITunes_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___version_13)); }
	inline String_t* get_version_13() const { return ___version_13; }
	inline String_t** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(String_t* value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_14() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___eulaAcceptedVersions_14)); }
	inline String_t* get_eulaAcceptedVersions_14() const { return ___eulaAcceptedVersions_14; }
	inline String_t** get_address_of_eulaAcceptedVersions_14() { return &___eulaAcceptedVersions_14; }
	inline void set_eulaAcceptedVersions_14(String_t* value)
	{
		___eulaAcceptedVersions_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eulaAcceptedVersions_14), (void*)value);
	}
};

struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::VirtualSceneScaleFactorUpdated
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___VirtualSceneScaleFactorUpdated_1;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactorUpdated_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields, ___VirtualSceneScaleFactorUpdated_1)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_VirtualSceneScaleFactorUpdated_1() const { return ___VirtualSceneScaleFactorUpdated_1; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_VirtualSceneScaleFactorUpdated_1() { return &___VirtualSceneScaleFactorUpdated_1; }
	inline void set_VirtualSceneScaleFactorUpdated_1(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___VirtualSceneScaleFactorUpdated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualSceneScaleFactorUpdated_1), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/PlayModeConfiguration::mSequencePath
	String_t* ___mSequencePath_0;
	// Vuforia.PlayModeType Vuforia.VuforiaConfiguration/PlayModeConfiguration::playModeType
	int32_t ___playModeType_1;

public:
	inline static int32_t get_offset_of_mSequencePath_0() { return static_cast<int32_t>(offsetof(PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF, ___mSequencePath_0)); }
	inline String_t* get_mSequencePath_0() const { return ___mSequencePath_0; }
	inline String_t** get_address_of_mSequencePath_0() { return &___mSequencePath_0; }
	inline void set_mSequencePath_0(String_t* value)
	{
		___mSequencePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSequencePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_playModeType_1() { return static_cast<int32_t>(offsetof(PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF, ___playModeType_1)); }
	inline int32_t get_playModeType_1() const { return ___playModeType_1; }
	inline int32_t* get_address_of_playModeType_1() { return &___playModeType_1; }
	inline void set_playModeType_1(int32_t value)
	{
		___playModeType_1 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities/GlobalVars
struct GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6  : public RuntimeObject
{
public:

public:
};

struct GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields
{
public:
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GLTF_ASSET_LOCATION
	String_t* ___GLTF_ASSET_LOCATION_12;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::MODEL_TARGET_DEVICE_TRACKER_WARNING
	String_t* ___MODEL_TARGET_DEVICE_TRACKER_WARNING_35;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GROUND_PLANE_DEVICE_TRACKER_ERROR
	String_t* ___GROUND_PLANE_DEVICE_TRACKER_ERROR_36;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GROUND_PLANE_SMART_TERRAIN_ERROR
	String_t* ___GROUND_PLANE_SMART_TERRAIN_ERROR_37;

public:
	inline static int32_t get_offset_of_GLTF_ASSET_LOCATION_12() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GLTF_ASSET_LOCATION_12)); }
	inline String_t* get_GLTF_ASSET_LOCATION_12() const { return ___GLTF_ASSET_LOCATION_12; }
	inline String_t** get_address_of_GLTF_ASSET_LOCATION_12() { return &___GLTF_ASSET_LOCATION_12; }
	inline void set_GLTF_ASSET_LOCATION_12(String_t* value)
	{
		___GLTF_ASSET_LOCATION_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GLTF_ASSET_LOCATION_12), (void*)value);
	}

	inline static int32_t get_offset_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_35() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___MODEL_TARGET_DEVICE_TRACKER_WARNING_35)); }
	inline String_t* get_MODEL_TARGET_DEVICE_TRACKER_WARNING_35() const { return ___MODEL_TARGET_DEVICE_TRACKER_WARNING_35; }
	inline String_t** get_address_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_35() { return &___MODEL_TARGET_DEVICE_TRACKER_WARNING_35; }
	inline void set_MODEL_TARGET_DEVICE_TRACKER_WARNING_35(String_t* value)
	{
		___MODEL_TARGET_DEVICE_TRACKER_WARNING_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MODEL_TARGET_DEVICE_TRACKER_WARNING_35), (void*)value);
	}

	inline static int32_t get_offset_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_36() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GROUND_PLANE_DEVICE_TRACKER_ERROR_36)); }
	inline String_t* get_GROUND_PLANE_DEVICE_TRACKER_ERROR_36() const { return ___GROUND_PLANE_DEVICE_TRACKER_ERROR_36; }
	inline String_t** get_address_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_36() { return &___GROUND_PLANE_DEVICE_TRACKER_ERROR_36; }
	inline void set_GROUND_PLANE_DEVICE_TRACKER_ERROR_36(String_t* value)
	{
		___GROUND_PLANE_DEVICE_TRACKER_ERROR_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GROUND_PLANE_DEVICE_TRACKER_ERROR_36), (void*)value);
	}

	inline static int32_t get_offset_of_GROUND_PLANE_SMART_TERRAIN_ERROR_37() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GROUND_PLANE_SMART_TERRAIN_ERROR_37)); }
	inline String_t* get_GROUND_PLANE_SMART_TERRAIN_ERROR_37() const { return ___GROUND_PLANE_SMART_TERRAIN_ERROR_37; }
	inline String_t** get_address_of_GROUND_PLANE_SMART_TERRAIN_ERROR_37() { return &___GROUND_PLANE_SMART_TERRAIN_ERROR_37; }
	inline void set_GROUND_PLANE_SMART_TERRAIN_ERROR_37(String_t* value)
	{
		___GROUND_PLANE_SMART_TERRAIN_ERROR_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GROUND_PLANE_SMART_TERRAIN_ERROR_37), (void*)value);
	}
};


// Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3, ___DefaultProfile_0)); }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3, ___Profiles_1)); }
	inline Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Profiles_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke
{
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com
{
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;
};

// Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736 
{
public:
	// Vuforia.CameraDevice/AndroidDevice/CameraField/DataType Vuforia.CameraDevice/AndroidDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/AndroidDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E  : public RuntimeObject
{
public:
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_0;
	// Vuforia.Internal.Utility.VuforiaCoroutineUtility Vuforia.WebCam::mVuforiaCoroutineUtility
	VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * ___mVuforiaCoroutineUtility_1;
	// Vuforia.Internal.Core.IEngine Vuforia.WebCam::mEngine
	RuntimeObject* ___mEngine_2;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_3;
	// UnityEngine.Camera Vuforia.WebCam::mARCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mARCamera_4;
	// System.Int32 Vuforia.WebCam::mOriginalCameraCullMask
	int32_t ___mOriginalCameraCullMask_5;
	// Vuforia.Internal.Rendering.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * ___mTextureRenderer_6;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mBufferReadTexture_7;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mReadPixelsRect_8;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___mWebCamProfile_9;
	// System.Boolean Vuforia.WebCam::mWebCamPlaying
	bool ___mWebCamPlaying_10;
	// Vuforia.Internal.VuforiaDriver.CameraImage Vuforia.WebCam::mCameraImage
	CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  ___mCameraImage_11;
	// System.IntPtr Vuforia.WebCam::mCameraImagePtr
	intptr_t ___mCameraImagePtr_12;
	// System.Boolean Vuforia.WebCam::mDisposed
	bool ___mDisposed_13;
	// System.Func`1<System.Boolean> Vuforia.WebCam::mOnCameraReady
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___mOnCameraReady_14;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamTexture_0)); }
	inline RuntimeObject* get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline RuntimeObject** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(RuntimeObject* value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWebCamTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_mVuforiaCoroutineUtility_1() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mVuforiaCoroutineUtility_1)); }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * get_mVuforiaCoroutineUtility_1() const { return ___mVuforiaCoroutineUtility_1; }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 ** get_address_of_mVuforiaCoroutineUtility_1() { return &___mVuforiaCoroutineUtility_1; }
	inline void set_mVuforiaCoroutineUtility_1(VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * value)
	{
		___mVuforiaCoroutineUtility_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaCoroutineUtility_1), (void*)value);
	}

	inline static int32_t get_offset_of_mEngine_2() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mEngine_2)); }
	inline RuntimeObject* get_mEngine_2() const { return ___mEngine_2; }
	inline RuntimeObject** get_address_of_mEngine_2() { return &___mEngine_2; }
	inline void set_mEngine_2(RuntimeObject* value)
	{
		___mEngine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mRenderTextureLayer_3)); }
	inline int32_t get_mRenderTextureLayer_3() const { return ___mRenderTextureLayer_3; }
	inline int32_t* get_address_of_mRenderTextureLayer_3() { return &___mRenderTextureLayer_3; }
	inline void set_mRenderTextureLayer_3(int32_t value)
	{
		___mRenderTextureLayer_3 = value;
	}

	inline static int32_t get_offset_of_mARCamera_4() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mARCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mARCamera_4() const { return ___mARCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mARCamera_4() { return &___mARCamera_4; }
	inline void set_mARCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mARCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mARCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_5() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOriginalCameraCullMask_5)); }
	inline int32_t get_mOriginalCameraCullMask_5() const { return ___mOriginalCameraCullMask_5; }
	inline int32_t* get_address_of_mOriginalCameraCullMask_5() { return &___mOriginalCameraCullMask_5; }
	inline void set_mOriginalCameraCullMask_5(int32_t value)
	{
		___mOriginalCameraCullMask_5 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_6() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mTextureRenderer_6)); }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * get_mTextureRenderer_6() const { return ___mTextureRenderer_6; }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 ** get_address_of_mTextureRenderer_6() { return &___mTextureRenderer_6; }
	inline void set_mTextureRenderer_6(TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * value)
	{
		___mTextureRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextureRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_7() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mBufferReadTexture_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mBufferReadTexture_7() const { return ___mBufferReadTexture_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mBufferReadTexture_7() { return &___mBufferReadTexture_7; }
	inline void set_mBufferReadTexture_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mBufferReadTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBufferReadTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_8() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mReadPixelsRect_8)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mReadPixelsRect_8() const { return ___mReadPixelsRect_8; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mReadPixelsRect_8() { return &___mReadPixelsRect_8; }
	inline void set_mReadPixelsRect_8(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mReadPixelsRect_8 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_9() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamProfile_9)); }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  get_mWebCamProfile_9() const { return ___mWebCamProfile_9; }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE * get_address_of_mWebCamProfile_9() { return &___mWebCamProfile_9; }
	inline void set_mWebCamProfile_9(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  value)
	{
		___mWebCamProfile_9 = value;
	}

	inline static int32_t get_offset_of_mWebCamPlaying_10() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamPlaying_10)); }
	inline bool get_mWebCamPlaying_10() const { return ___mWebCamPlaying_10; }
	inline bool* get_address_of_mWebCamPlaying_10() { return &___mWebCamPlaying_10; }
	inline void set_mWebCamPlaying_10(bool value)
	{
		___mWebCamPlaying_10 = value;
	}

	inline static int32_t get_offset_of_mCameraImage_11() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImage_11)); }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  get_mCameraImage_11() const { return ___mCameraImage_11; }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C * get_address_of_mCameraImage_11() { return &___mCameraImage_11; }
	inline void set_mCameraImage_11(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  value)
	{
		___mCameraImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mCameraImage_11))->___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCameraImagePtr_12() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImagePtr_12)); }
	inline intptr_t get_mCameraImagePtr_12() const { return ___mCameraImagePtr_12; }
	inline intptr_t* get_address_of_mCameraImagePtr_12() { return &___mCameraImagePtr_12; }
	inline void set_mCameraImagePtr_12(intptr_t value)
	{
		___mCameraImagePtr_12 = value;
	}

	inline static int32_t get_offset_of_mDisposed_13() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mDisposed_13)); }
	inline bool get_mDisposed_13() const { return ___mDisposed_13; }
	inline bool* get_address_of_mDisposed_13() { return &___mDisposed_13; }
	inline void set_mDisposed_13(bool value)
	{
		___mDisposed_13 = value;
	}

	inline static int32_t get_offset_of_mOnCameraReady_14() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOnCameraReady_14)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_mOnCameraReady_14() const { return ___mOnCameraReady_14; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_mOnCameraReady_14() { return &___mOnCameraReady_14; }
	inline void set_mOnCameraReady_14(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___mOnCameraReady_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnCameraReady_14), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_4;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * ___OnTargetStatusChanged_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___OnBehaviourDestroyed_7;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_8;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___U3CTargetStatusU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_mTrackableName_4() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mTrackableName_4)); }
	inline String_t* get_mTrackableName_4() const { return ___mTrackableName_4; }
	inline String_t** get_address_of_mTrackableName_4() { return &___mTrackableName_4; }
	inline void set_mTrackableName_4(String_t* value)
	{
		___mTrackableName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_4), (void*)value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_OnTargetStatusChanged_6() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnTargetStatusChanged_6)); }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * get_OnTargetStatusChanged_6() const { return ___OnTargetStatusChanged_6; }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 ** get_address_of_OnTargetStatusChanged_6() { return &___OnTargetStatusChanged_6; }
	inline void set_OnTargetStatusChanged_6(Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * value)
	{
		___OnTargetStatusChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetStatusChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnBehaviourDestroyed_7() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnBehaviourDestroyed_7)); }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * get_OnBehaviourDestroyed_7() const { return ___OnBehaviourDestroyed_7; }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 ** get_address_of_OnBehaviourDestroyed_7() { return &___OnBehaviourDestroyed_7; }
	inline void set_OnBehaviourDestroyed_7(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * value)
	{
		___OnBehaviourDestroyed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBehaviourDestroyed_7), (void*)value);
	}

	inline static int32_t get_offset_of_mObserver_8() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mObserver_8)); }
	inline RuntimeObject* get_mObserver_8() const { return ___mObserver_8; }
	inline RuntimeObject** get_address_of_mObserver_8() { return &___mObserver_8; }
	inline void set_mObserver_8(RuntimeObject* value)
	{
		___mObserver_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserver_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetStatusU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___U3CTargetStatusU3Ek__BackingField_9)); }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  get_U3CTargetStatusU3Ek__BackingField_9() const { return ___U3CTargetStatusU3Ek__BackingField_9; }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * get_address_of_U3CTargetStatusU3Ek__BackingField_9() { return &___U3CTargetStatusU3Ek__BackingField_9; }
	inline void set_U3CTargetStatusU3Ek__BackingField_9(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  value)
	{
		___U3CTargetStatusU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
inline void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *, float, float, const RuntimeMethod*))Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsUfoEnabled(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsUfoEnabled_mF543E08136F058347A01A81E0F24715D15732CE7 (String_t* ___licenseKey0, String_t* ___ufoKey1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_mB78EA38B04FF82E5203D096B7666C467238BEFE6 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayModeEditorUtility_get_Instance_m4594A185A6FCED429AAB4FDE2370FE747FC007FF (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String Vuforia.PosixPath::Join(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosixPath_Join_m3CC12510571F5865DB77D465E985CE18477937EB (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___subPaths0, const RuntimeMethod* method);
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5 (ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method);
// System.Void Vuforia.World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, const RuntimeMethod* method);
// Vuforia.TargetStatus Vuforia.ObserverBehaviour::get_TargetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method);
// Vuforia.Status Vuforia.TargetStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::get_UniqueItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>::get_Value()
inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_inline (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD * __this, const RuntimeMethod* method)
{
	return ((  JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * (*) (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::get_Required()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_inline (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::add_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_add_VirtualSceneScaleFactorUpdated_mEB9994BA65EC4D74BEA825E81045520082AF4430 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_1()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::remove_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_remove_VirtualSceneScaleFactorUpdated_mD7E5C07FA3CFB73D91B5B1180212EFF0A42567C3 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_1()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m8AA6D2ECB5A580D638BD35D85C6D493E1733FA32 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_LicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_LicenseKey_m66C1F09EDAB24D3E3FE7BD7CE0E12294B822C1A3 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_vuforiaLicenseKey_2(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_UfoLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_UfoLicenseKey_m5579BA4E4E8241A7A7D258E85D728F2CD3FBD9B1 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ufoLicenseKey_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_UfoLicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_UfoLicenseKey_m8EEBC96C87D419FA8D77F7EA17F69DCE77EF7CFA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_ufoLicenseKey_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_DelayedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_DelayedInitialization_m0AE6E1AE86DD92C0F6588F61C18321D787C69F3B (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_delayedInitialization_4();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_DelayedInitialization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_DelayedInitialization_m3635B9463224300B0A6FA732933560DC36C4F1E2 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_delayedInitialization_4(L_0);
		return;
	}
}
// Vuforia.CameraMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_CameraDeviceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_CameraDeviceMode_m9FE7F72DD99F8F13FA4295E404DA446542B2E551 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_cameraDeviceModeSetting_5();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_CameraDeviceMode(Vuforia.CameraMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_CameraDeviceMode_m0597FCEE4BA74E33E29C190E2BD5609FDC676C2F (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_cameraDeviceModeSetting_5(L_0);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_MaxSimultaneousImageTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_MaxSimultaneousImageTargets_m463E19C52E3BB22C276EDBCCFF85A3FA940427CE (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxSimultaneousImageTargets_6();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_MaxSimultaneousImageTargets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_mE50E90FE1C14937BC64A63611B8D5F39C85AC333 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxSimultaneousImageTargets_6(L_0);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_MaxSimultaneousObjectTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_MaxSimultaneousObjectTargets_m41B7FD019B712DFF018551B5C99B6DA0F8CD825F (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxSimultaneousObjectTargets_7();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_MaxSimultaneousObjectTargets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousObjectTargets_m3DF0C92E4E57594AF4BCB93B2C87638DD36C5DAD (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxSimultaneousObjectTargets_7(L_0);
		return;
	}
}
// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_VirtualSceneScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GenericVuforiaConfiguration_get_VirtualSceneScaleFactor_mDE8ED9A77EF95C3D92688DF516D0FD6F71AADFFA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_virtualSceneScaleFactor_9();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_VirtualSceneScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_VirtualSceneScaleFactor_mC586410BCD12E0C87352B3F3504BD8B9DEF6A230 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B2_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B1_0 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0017;
	}

IL_000b:
	{
		float L_2 = __this->get_virtualSceneScaleFactor_9();
		float L_3 = ___value0;
		NullCheck(G_B2_0);
		Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89(G_B2_0, L_2, L_3, /*hidden argument*/Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
	}

IL_0017:
	{
		float L_4 = ___value0;
		float L_5;
		L_5 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, (1.40129846E-45f), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		__this->set_virtualSceneScaleFactor_9(L_5);
		float L_6 = __this->get_virtualSceneScaleFactor_9();
		__this->set_previousVirtualSceneScaleFactor_8(L_6);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_UseDelayedLoadingObjectTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_UseDelayedLoadingObjectTargets_m9DA280F599E96CD48B9118ABD4755588790FA03A (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useDelayedLoadingObjectTargets_10();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_UseDelayedLoadingObjectTargets(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_UseDelayedLoadingObjectTargets_m424F36A7B9C4024ABE78F56B6F28860DCE40E56B (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useDelayedLoadingObjectTargets_10(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_ContinuousModelTargetSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_ContinuousModelTargetSearch_m7D7A4DD29500FDFCC92038E763A50A971EC250E3 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_modelTargetRecoWhileExtendedTracked_11();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_ContinuousModelTargetSearch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ContinuousModelTargetSearch_mCEB78BCACD911164031139AA6BE5230B220C99E9 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_modelTargetRecoWhileExtendedTracked_11(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_ShareRecordingsInITunes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_ShareRecordingsInITunes_m18AB25C30EF13E0B0EDF69B9B1856CF5BB824CD9 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_shareRecordingsInITunes_12();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_ShareRecordingsInITunes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ShareRecordingsInITunes_m3760E5AF6E73FE4835F6B2D5EE37718721F74273 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_shareRecordingsInITunes_12(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_Version_m43312F09C8080EAB50E61E473ECE21135F883239 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_13();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_Version_m25A27F63BDC8CCFC3400DFBAFA9C6097DD6AD830 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_version_13(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_EULAAcceptedVersions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_EULAAcceptedVersions_m3731D08304336B7317E1C5B562AF21D28261C7FD (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_eulaAcceptedVersions_14();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_EULAAcceptedVersions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_EULAAcceptedVersions_m502F8BCD70DE5AA8A1055AA8FA8597AD08415BEA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_eulaAcceptedVersions_14(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::IsUFOEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_IsUFOEnabled_m3CBCCB8A0EE02325FFE3937ACF2FA4E08E974BB1 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_2();
		String_t* L_1 = __this->get_ufoLicenseKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = VuforiaRuntimeUtilities_IsUfoEnabled_mF543E08136F058347A01A81E0F24715D15732CE7(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ValidateScaleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_ValidateScaleChange_m21D2C87FDF4A99A708E894FC8AA62F459F77794E (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B4_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B3_0 = NULL;
	{
		float L_0 = __this->get_previousVirtualSceneScaleFactor_8();
		float L_1 = __this->get_virtualSceneScaleFactor_9();
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		float L_2 = __this->get_virtualSceneScaleFactor_9();
		float L_3;
		L_3 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_2, (1.40129846E-45f), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		__this->set_virtualSceneScaleFactor_9(L_3);
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_4 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0035;
		}
	}
	{
		goto IL_0046;
	}

IL_0035:
	{
		float L_6 = __this->get_previousVirtualSceneScaleFactor_8();
		float L_7 = __this->get_virtualSceneScaleFactor_9();
		NullCheck(G_B4_0);
		Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89(G_B4_0, L_6, L_7, /*hidden argument*/Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
	}

IL_0046:
	{
		float L_8 = __this->get_virtualSceneScaleFactor_9();
		__this->set_previousVirtualSceneScaleFactor_8(L_8);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration__ctor_mF593EC6A709798CBB4038B11B50F2D550A51238F (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_vuforiaLicenseKey_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_ufoLicenseKey_3(_stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6);
		__this->set_cameraDeviceModeSetting_5((-1));
		__this->set_maxSimultaneousImageTargets_6(1);
		__this->set_maxSimultaneousObjectTargets_7(1);
		__this->set_previousVirtualSceneScaleFactor_8((1.0f));
		__this->set_virtualSceneScaleFactor_9((1.0f));
		__this->set_modelTargetRecoWhileExtendedTracked_11((bool)1);
		__this->set_version_13(_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		__this->set_eulaAcceptedVersions_14(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaConfiguration/PackageInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageInfo__ctor_m068B565492962D347A6DB5C156918E8F38DA5A1B (PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ARFoundationVersion_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Vuforia.VuforiaConfiguration/PlayModeConfiguration::get_SequencePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayModeConfiguration_get_SequencePath_mD53AAE4431C18EB118D396E9E627659007516837 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mSequencePath_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::set_SequencePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration_set_SequencePath_m1F6B07B8ACEEB7AF7A1D22A456207D23E6CE7D22 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mSequencePath_0(L_0);
		return;
	}
}
// Vuforia.PlayModeType Vuforia.VuforiaConfiguration/PlayModeConfiguration::get_PlayModeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayModeConfiguration_get_PlayModeType_mE2CA1195C4FA5F05B904A18BDD462DFD3D73C0D1 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_playModeType_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::set_PlayModeType(Vuforia.PlayModeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration_set_PlayModeType_m214DB961A0313D929A6FD5FF240961194C3ED409 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_playModeType_1(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration__ctor_mAA1D1812EAE7C41E80FD97B25FACB136CD8AE11F (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Shader Vuforia.VuforiaConfiguration/RequiredShaders::get_DepthMaskShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * RequiredShaders_get_DepthMaskShader_mC43F52CB81E6462CF2AA40E2A144D8317E46854E (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_depthMaskShader_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/RequiredShaders::set_DepthMaskShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredShaders_set_DepthMaskShader_mB77774EBE9E38C724AF9A881AC034E8EEE9513D7 (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_depthMaskShader_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/RequiredShaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredShaders__ctor_m9C7A53F5BA8A9CC525F784F99C4EF8BCDE432CBD (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_NumDivisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoBackgroundConfiguration_get_NumDivisions_mAC177EADD398AC22C04E932F1B146FB8664117B5 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_numDivisions_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_NumDivisions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_NumDivisions_m0EEE3395E01D21EAA278C90B73EACE886AE2A520 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_numDivisions_0(L_0);
		return;
	}
}
// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_VideoBackgroundShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * VideoBackgroundConfiguration_get_VideoBackgroundShader_m999FBC9D2853C0046485593982805B3C1D8BDB28 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_videoBackgroundShader_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_VideoBackgroundShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundShader_m2838F80BB9637E5A2FFAAD932923A5ED41A96E52 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_videoBackgroundShader_1(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_VideoBackgroundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoBackgroundConfiguration_get_VideoBackgroundEnabled_m6325CB6B7740D69F2B902CCD60C33FD387B34525 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_videoBackgroundEnabled_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_VideoBackgroundEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundEnabled_mB0D079180D13A0AFAD534177D925DF4BCAF7003B (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_videoBackgroundEnabled_3(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration__ctor_m3FEFDDB2EBCBFA4AE651129E695FF74D9A85BC26 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numDivisions_0(2);
		__this->set_videoBackgroundEnabled_3((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamConfiguration_get_DeviceNameSetInEditor_mA5E560EF91EB3EF91D0A8977A84661270FDB0D09 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsPlayMode_mB78EA38B04FF82E5203D096B7666C467238BEFE6(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_1 = __this->get_mDeviceName_1();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = __this->get_mDeviceName_1();
		return L_3;
	}

IL_001b:
	{
		RuntimeObject* L_4;
		L_4 = PlayModeEditorUtility_get_Instance_m4594A185A6FCED429AAB4FDE2370FE747FC007FF(/*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String Vuforia.IPlayModeEditorUtility::GetEditorPrefsString(System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_4, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		return L_5;
	}

IL_002b:
	{
		RuntimeObject* L_6;
		L_6 = PlayModeEditorUtility_get_Instance_m4594A185A6FCED429AAB4FDE2370FE747FC007FF(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String Vuforia.IPlayModeEditorUtility::GetEditorPrefsString(System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_6, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		return L_7;
	}
}
// System.Void Vuforia.VuforiaConfiguration/WebCamConfiguration::set_DeviceNameSetInEditor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamConfiguration_set_DeviceNameSetInEditor_m80070DDAB7B7D793BA4F45AE1C51272C5C5A0B26 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsPlayMode_mB78EA38B04FF82E5203D096B7666C467238BEFE6(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->set_mDeviceName_1(L_1);
		return;
	}

IL_000f:
	{
		RuntimeObject* L_2;
		L_2 = PlayModeEditorUtility_get_Instance_m4594A185A6FCED429AAB4FDE2370FE747FC007FF(/*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void Vuforia.IPlayModeEditorUtility::SetEditorPrefsString(System.String,System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_2, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A, L_3);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::get_RenderTextureLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamConfiguration_get_RenderTextureLayer_m1BCD29FF4E428E93E6F9F0C0DA5CB936A6C0FCC5 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_renderTextureLayer_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/WebCamConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamConfiguration__ctor_m4AF09698E01A2909C2CC68F324B9C01F322AB9F7 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	{
		__this->set_renderTextureLayer_2(((int32_t)30));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1__ctor_mA74219097B395EB4D90B6D7B0EEDD58FE075688F (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1_System_IDisposable_Dispose_m2768AB16996C63609FD82CE46069480B33812AB8 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunCoroutineWithTimeoutU3Ed__1_MoveNext_m373D5970CAF6DE48448D7E80B36CC8ABD9050F8D (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B10_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B9_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_3 = __this->get_timeout_2();
		__this->set_U3CtimerU3E5__2_5(L_3);
		goto IL_006a;
	}

IL_0025:
	{
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartU3E5__3_6(L_4);
		RuntimeObject* L_5 = __this->get_routine_3();
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_7 = __this->get_U3CtimerU3E5__2_5();
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_U3CstartU3E5__3_6();
		__this->set_U3CtimerU3E5__2_5(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))));
	}

IL_006a:
	{
		RuntimeObject* L_10 = __this->get_routine_3();
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		float L_12 = __this->get_U3CtimerU3E5__2_5();
		if ((((float)L_12) > ((float)(0.0f))))
		{
			goto IL_0025;
		}
	}

IL_0084:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_13 = __this->get_onComplete_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_0090;
		}
	}
	{
		goto IL_00a5;
	}

IL_0090:
	{
		float L_15 = __this->get_U3CtimerU3E5__2_5();
		NullCheck(G_B10_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B10_0, (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_00a5:
	{
		return (bool)0;
	}
}
// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m32E2275B0887CA49B6A8F6D521F50E6331B96854 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_get_Current_mC8801461F2227DCC0F2F2973A6BEE618E761CF60 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
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
// System.Void Vuforia.VuforiaRuntimeUtilities/GlobalVars::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVars__cctor_mCC8E2C02638F7D8F7A307321F428DF1878F45B8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677774D8B69150E8300A8C0C3378D6703951B692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		String_t* L_3;
		L_3 = PosixPath_Join_m3CC12510571F5865DB77D465E985CE18477937EB(L_2, /*hidden argument*/NULL);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GLTF_ASSET_LOCATION_12(L_3);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_MODEL_TARGET_DEVICE_TRACKER_WARNING_35(_stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GROUND_PLANE_DEVICE_TRACKER_ERROR_36(_stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GROUND_PLANE_SMART_TERRAIN_ERROR_37(_stringLiteral677774D8B69150E8300A8C0C3378D6703951B692);
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
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__25__ctor_m9DF43F651847D83517C14C079DB44CD62769AD36 (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__25_System_IDisposable_Dispose_m227667D1B0083F780EC8D0DECF10C8A0F863543E (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForFirstWebCamFrameU3Ed__25_MoveNext_mB24F872F5B357EE8E1D0C22C9FC1107B9A7B4457 (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_mWebCamPlaying_10();
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_mWebCamTexture_0();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Vuforia.IWebCamTexAdaptor::CheckPermissions() */, IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var, L_7);
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_mWebCamTexture_0();
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var, L_9);
		if (!L_10)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFirstWebCamFrameU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C8EAB1F4F41AB9D367A44C48029E21D134C2110 (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__25_System_Collections_IEnumerator_Reset_m7F0FB6504FE80026EE84B0638FF9C956DAF82949 (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForFirstWebCamFrameU3Ed__25_System_Collections_IEnumerator_Reset_m7F0FB6504FE80026EE84B0638FF9C956DAF82949_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFirstWebCamFrameU3Ed__25_System_Collections_IEnumerator_get_Current_m2E437F97783936DD2BD5F8F1548C4B95C976B180 (U3CWaitForFirstWebCamFrameU3Ed__25_tD7CC6B97C0717DB5C20FCBDAF3B597026727F893 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke_back(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke_cleanup(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com_back(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com_cleanup(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5 (ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5_AdjustorThunk (RuntimeObject * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * _thisAdjusted = reinterpret_cast<ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 *>(__this + _offset);
	ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
// System.Void Vuforia.World/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3B343D4F741B6BC86985C2E12D724C660B011A73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * L_0 = (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 *)il2cpp_codegen_object_new(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.World/<>c::<GetTrackedObserverBehaviours>b__28_0(Vuforia.ObserverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetTrackedObserverBehavioursU3Eb__28_0_mAA4FB43D61FD9B6EE7DAF103CC7E76DA19D7E490 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___o0, const RuntimeMethod* method)
{
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = ___o0;
		NullCheck(L_0);
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_1;
		L_1 = ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD533B63B1C831A77B6878492109948B98ACC8661 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * L_0 = (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A *)il2cpp_codegen_object_new(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Int32> Vuforia.Internal.Core.WorldOriginProvider/<>c::<.ctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  U3CU3Ec_U3C_ctorU3Eb__7_0_m80887622E26D7C2AA79804416EF4F6260DEA6133 (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method)
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = V_0;
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
// Conversion methods for marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke_back(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_string_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke_cleanup(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
}
// Conversion methods for marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com_back(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com_cleanup(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
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
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m73E5EDBD042B3B9589BD12419424D0F4E22AE696 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m6449647BDE3CC808205F3B85174854E25D4D8B31 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m29CA5E02B0FCEB6929EE66096EEFE27F8FFA1463 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_4 = V_1;
		NullCheck(L_4);
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_5 = L_4->get__token_0();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_6 = V_1;
		NullCheck(L_6);
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		return (bool)0;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Vuforia.Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_get_Current_mB889A6AF6C39371E916B605CB8C420CA171BA593 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m77B37296FBBF40890ED4794E469E32F357B13CB4 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA1A33CA00EB3DC4CFCF3EA45230E517E73F9A571 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * L_0 = (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 *)il2cpp_codegen_object_new(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__29_0_mAD60C4DF9CB4E3B7463BBAD46E057FFD753FA755 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		return L_0;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__29_1_mC282DF076D6C1098F311420F81EB27E81A59B878 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_2(Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__29_2_mB0916DEC3A194B3F908E3F34EDE603E9E9D5A359 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___s0, const RuntimeMethod* method)
{
	{
		JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * L_0 = ___s0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<GetRequiredProperties>b__30_0(System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRequiredPropertiesU3Eb__30_0_m5248B69C6F291527CA331E92F348EAD88F61C99B (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * L_0;
		L_0 = KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_inline((KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *)(&___p0), /*hidden argument*/KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<GetRequiredProperties>b__30_1(System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetRequiredPropertiesU3Eb__30_1_m1B9DBCA34048D359CF839EF895424B7A00E99A03 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_inline((KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *)(&___p0), /*hidden argument*/KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method)
{
	{
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_0 = __this->get_U3CTargetStatusU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CUniqueItemsU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CRequiredU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
