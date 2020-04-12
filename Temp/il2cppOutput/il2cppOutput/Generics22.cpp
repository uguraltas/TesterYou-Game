﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5BBF33C66D868C3B9C722A703D57C2AD3F18EE30;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6AEF21B80E2C499BFFB48F8148C3026FBBA3FD72;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>
struct List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>>
struct List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Int32>>
struct Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<System.Object>
struct Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.ICloneable
struct ICloneable_tB0EF2757D90DF969033D641822566814815EB134;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.IPlayableBehaviour
struct IPlayableBehaviour_t32311BCB9F89BA86E1E396B39B28E334722F4A8F;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Timeline.IntervalTreeNode[]
struct IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197;
// UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>[]
struct EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965;
// UnityEngine.Timeline.IntervalTree`1<System.Object>
struct IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4;
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenCallback
struct ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0;
// UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54;
// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterval_t46143B0C674E8072277343E9E4F3F5A171A904BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00;
IL2CPP_EXTERN_C String_t* _stringLiteral03610397B10FD1D4F9813C1618E587023F172685;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7F1D4313DB18F6DB79C6CEABD99B7C7F59D3FB;
IL2CPP_EXTERN_C String_t* _stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58;
IL2CPP_EXTERN_C String_t* _stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1_Add_mCDA3ECBFBDD719234243FEB1E34DEC353FD625DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1_IntersectsWith_m84A885BB0C7FC6213CE145CB92E0E144E4CF657A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1_Query_m00C76D84C1C81FB620D8E8AE04D3B0455874299D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1_Rebuild_m0A067ED70AEB73F5B19E1AFE227C1F1CF230E285_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1_Rebuild_m3F8E6766F4E7A0E97CB8C4CD25477C61FB9F5E14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntervalTree_1__ctor_m6D43F543164DF753E5AAC772D22AEA891FD27DD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct  Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___entries_1)); }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE3A30635C5B794ABD7983F09075F9D4F740716D9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___keys_7)); }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB1E184E62B476E7158FE8C957CD5108B6937A01F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ___values_8)); }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7B108E5949AABED7EBC85ED1016365781619DAB7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t026D7A8C4D989218772DB3E051A624F753A60859  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____items_1)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>
struct  List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E, ____items_1)); }
	inline IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* get__items_1() const { return ____items_1; }
	inline IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E_StaticFields, ____emptyArray_5)); }
	inline IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTree`1_Entry<System.Object>>
struct  List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0, ____items_1)); }
	inline EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0_StaticFields, ____emptyArray_5)); }
	inline EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EntryU5BU5D_t0B62B6C9B61F5D17F880BCA59A82A6376602E965* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____items_1)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____items_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____items_1)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_t51402C154FFFCF7217A9BEC4B834F0B726C10F66* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12, ___m_buf_0)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buf_0), (void*)value);
	}
};

struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringReaderBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_4), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Object>
struct  SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Objects_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Callback_3)); }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Objects_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Callback_3)); }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Objects_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Callback_3)); }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Timeline.IntervalTree`1<System.Object>
struct  IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTree`1_Entry<T>> UnityEngine.Timeline.IntervalTree`1::m_Entries
	List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * ___m_Entries_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode> UnityEngine.Timeline.IntervalTree`1::m_Nodes
	List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * ___m_Nodes_1;
	// System.Boolean UnityEngine.Timeline.IntervalTree`1::<dirty>k__BackingField
	bool ___U3CdirtyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Entries_0() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4, ___m_Entries_0)); }
	inline List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * get_m_Entries_0() const { return ___m_Entries_0; }
	inline List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 ** get_address_of_m_Entries_0() { return &___m_Entries_0; }
	inline void set_m_Entries_0(List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * value)
	{
		___m_Entries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entries_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Nodes_1() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4, ___m_Nodes_1)); }
	inline List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * get_m_Nodes_1() const { return ___m_Nodes_1; }
	inline List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E ** get_address_of_m_Nodes_1() { return &___m_Nodes_1; }
	inline void set_m_Nodes_1(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * value)
	{
		___m_Nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Nodes_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirtyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4, ___U3CdirtyU3Ek__BackingField_2)); }
	inline bool get_U3CdirtyU3Ek__BackingField_2() const { return ___U3CdirtyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CdirtyU3Ek__BackingField_2() { return &___U3CdirtyU3Ek__BackingField_2; }
	inline void set_U3CdirtyU3Ek__BackingField_2(bool value)
	{
		___U3CdirtyU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_List_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3, ___m_Dictionary_1)); }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dictionary_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct  TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF  : public RuntimeObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	RuntimeObject* ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineContainer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF, ___m_Tween_1)); }
	inline RuntimeObject* get_m_Tween_1() const { return ___m_Tween_1; }
	inline RuntimeObject** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(RuntimeObject* value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tween_1), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<System.Object>
struct  ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Color32>
struct  ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>
struct  ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector2>
struct  ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ListPool`1<UnityEngine.Vector4>
struct  ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540  : public RuntimeObject
{
public:

public:
};

struct ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * ___s_ListPool_0;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ListPool_0), (void*)value);
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct  ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_Stack_0)); }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t8ED9361704EE55886287883510EF4B939F0AED1A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>
struct  ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_Stack_0)); }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t83EEA6C9C9B43999F0FB28B378D20F56711A9DB7 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_Stack_0)); }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAB00ED192772B336CD7CEC73F2A8E5E43A564E23 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnGet_1)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_Stack_0)); }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t0B6ED5C73E83FC760F209CA15A574ACB790B7184 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_Stack_0)); }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tF5A24C9426EE280ED418674889292C2C9023A79C * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_Stack_0)); }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t3918258A91BC9F82A72E455813692665DFCC426A * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_Stack_0)); }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t132DB7B895008F05941F75827E88B3E17F4F0B71 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.UI.ObjectPool`1<System.Object>
struct  ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UI.ObjectPool`1::m_Stack
	Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * ___m_Stack_0;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnGet
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnGet_1;
	// UnityEngine.Events.UnityAction`1<T> UnityEngine.UI.ObjectPool`1::m_ActionOnRelease
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___m_ActionOnRelease_2;
	// System.Int32 UnityEngine.UI.ObjectPool`1::<countAll>k__BackingField
	int32_t ___U3CcountAllU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_Stack_0)); }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnGet_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnGet_1() const { return ___m_ActionOnGet_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnGet_1() { return &___m_ActionOnGet_1; }
	inline void set_m_ActionOnGet_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnGet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___m_ActionOnRelease_2)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_m_ActionOnRelease_2() const { return ___m_ActionOnRelease_2; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_m_ActionOnRelease_2() { return &___m_ActionOnRelease_2; }
	inline void set_m_ActionOnRelease_2(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___m_ActionOnRelease_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountAllU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9, ___U3CcountAllU3Ek__BackingField_3)); }
	inline int32_t get_U3CcountAllU3Ek__BackingField_3() const { return ___U3CcountAllU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcountAllU3Ek__BackingField_3() { return &___U3CcountAllU3Ek__BackingField_3; }
	inline void set_U3CcountAllU3Ek__BackingField_3(int32_t value)
	{
		___U3CcountAllU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Single>
struct  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	float ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___list_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_list_0() const { return ___list_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___current_3)); }
	inline float get_current_3() const { return ___current_3; }
	inline float* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(float value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.UInt32>
struct  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___list_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_list_0() const { return ___list_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};


// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Zero_2 = value;
	}
};


// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};


// UnityEngine.Networking.UIntFloat
struct  UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};


// UnityEngine.Timeline.IntervalTreeNode
struct  IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF 
{
public:
	// System.Int64 UnityEngine.Timeline.IntervalTreeNode::center
	int64_t ___center_0;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::first
	int32_t ___first_1;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::last
	int32_t ___last_2;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::right
	int32_t ___right_4;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF, ___center_0)); }
	inline int64_t get_center_0() const { return ___center_0; }
	inline int64_t* get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(int64_t value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_first_1() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF, ___first_1)); }
	inline int32_t get_first_1() const { return ___first_1; }
	inline int32_t* get_address_of_first_1() { return &___first_1; }
	inline void set_first_1(int32_t value)
	{
		___first_1 = value;
	}

	inline static int32_t get_offset_of_last_2() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF, ___last_2)); }
	inline int32_t get_last_2() const { return ___last_2; }
	inline int32_t* get_address_of_last_2() { return &___last_2; }
	inline void set_last_2(int32_t value)
	{
		___last_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_right_4() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF, ___right_4)); }
	inline int32_t get_right_4() const { return ___right_4; }
	inline int32_t* get_address_of_right_4() { return &___right_4; }
	inline void set_right_4(int32_t value)
	{
		___right_4 = value;
	}
};


// UnityEngine.Timeline.IntervalTree`1_Entry<System.Object>
struct  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 
{
public:
	// System.Int64 UnityEngine.Timeline.IntervalTree`1_Entry::intervalStart
	int64_t ___intervalStart_0;
	// System.Int64 UnityEngine.Timeline.IntervalTree`1_Entry::intervalEnd
	int64_t ___intervalEnd_1;
	// T UnityEngine.Timeline.IntervalTree`1_Entry::item
	RuntimeObject * ___item_2;

public:
	inline static int32_t get_offset_of_intervalStart_0() { return static_cast<int32_t>(offsetof(Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5, ___intervalStart_0)); }
	inline int64_t get_intervalStart_0() const { return ___intervalStart_0; }
	inline int64_t* get_address_of_intervalStart_0() { return &___intervalStart_0; }
	inline void set_intervalStart_0(int64_t value)
	{
		___intervalStart_0 = value;
	}

	inline static int32_t get_offset_of_intervalEnd_1() { return static_cast<int32_t>(offsetof(Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5, ___intervalEnd_1)); }
	inline int64_t get_intervalEnd_1() const { return ___intervalEnd_1; }
	inline int64_t* get_address_of_intervalEnd_1() { return &___intervalEnd_1; }
	inline void set_intervalEnd_1(int64_t value)
	{
		___intervalEnd_1 = value;
	}

	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5, ___item_2)); }
	inline RuntimeObject * get_item_2() const { return ___item_2; }
	inline RuntimeObject ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(RuntimeObject * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_2), (void*)value);
	}
};


// UnityEngine.UI.CoroutineTween.FloatTween
struct  FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A 
{
public:
	// UnityEngine.UI.CoroutineTween.FloatTween_FloatTweenCallback UnityEngine.UI.CoroutineTween.FloatTween::m_Target
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_StartValue
	float ___m_StartValue_1;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_TargetValue
	float ___m_TargetValue_2;
	// System.Single UnityEngine.UI.CoroutineTween.FloatTween::m_Duration
	float ___m_Duration_3;
	// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Target_0)); }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartValue_1() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_StartValue_1)); }
	inline float get_m_StartValue_1() const { return ___m_StartValue_1; }
	inline float* get_address_of_m_StartValue_1() { return &___m_StartValue_1; }
	inline void set_m_StartValue_1(float value)
	{
		___m_StartValue_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_2() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_TargetValue_2)); }
	inline float get_m_TargetValue_2() const { return ___m_TargetValue_2; }
	inline float* get_address_of_m_TargetValue_2() { return &___m_TargetValue_2; }
	inline void set_m_TargetValue_2(float value)
	{
		___m_TargetValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Duration_3() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_Duration_3)); }
	inline float get_m_Duration_3() const { return ___m_Duration_3; }
	inline float* get_address_of_m_Duration_3() { return &___m_Duration_3; }
	inline void set_m_Duration_3(float value)
	{
		___m_Duration_3 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_4() { return static_cast<int32_t>(offsetof(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A, ___m_IgnoreTimeScale_4)); }
	inline bool get_m_IgnoreTimeScale_4() const { return ___m_IgnoreTimeScale_4; }
	inline bool* get_address_of_m_IgnoreTimeScale_4() { return &___m_IgnoreTimeScale_4; }
	inline void set_m_IgnoreTimeScale_4(bool value)
	{
		___m_IgnoreTimeScale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_pinvoke
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.FloatTween
struct FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A_marshaled_com
{
	FloatTweenCallback_t69056DA8AAB3BCDA97012834C1F1F265F7617502 * ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030, ___m_Buffer_1)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_1), (void*)value);
	}
};

struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringWriteBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  value)
	{
		___s_FloatConverter_4 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Object>
struct  Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Single>
struct  Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.UInt32>
struct  Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode
struct  ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F 
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorTweenMode_tDCE018D37330F576ACCD00D16CAF91AE55315F2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>
struct  U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___tweenInfo_2)); }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.UI.CoroutineTween.ColorTween
struct  ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 
{
public:
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenCallback UnityEngine.UI.CoroutineTween.ColorTween::m_Target
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_StartColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::m_TargetColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	// UnityEngine.UI.CoroutineTween.ColorTween_ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::m_TweenMode
	int32_t ___m_TweenMode_3;
	// System.Single UnityEngine.UI.CoroutineTween.ColorTween::m_Duration
	float ___m_Duration_4;
	// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_5;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Target_0)); }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * get_m_Target_0() const { return ___m_Target_0; }
	inline ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartColor_1() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_StartColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_StartColor_1() const { return ___m_StartColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_StartColor_1() { return &___m_StartColor_1; }
	inline void set_m_StartColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_StartColor_1 = value;
	}

	inline static int32_t get_offset_of_m_TargetColor_2() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TargetColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_TargetColor_2() const { return ___m_TargetColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_TargetColor_2() { return &___m_TargetColor_2; }
	inline void set_m_TargetColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_m_TweenMode_3() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_TweenMode_3)); }
	inline int32_t get_m_TweenMode_3() const { return ___m_TweenMode_3; }
	inline int32_t* get_address_of_m_TweenMode_3() { return &___m_TweenMode_3; }
	inline void set_m_TweenMode_3(int32_t value)
	{
		___m_TweenMode_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_5() { return static_cast<int32_t>(offsetof(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228, ___m_IgnoreTimeScale_5)); }
	inline bool get_m_IgnoreTimeScale_5() const { return ___m_IgnoreTimeScale_5; }
	inline bool* get_address_of_m_IgnoreTimeScale_5() { return &___m_IgnoreTimeScale_5; }
	inline void set_m_IgnoreTimeScale_5(bool value)
	{
		___m_IgnoreTimeScale_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_pinvoke
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
// Native definition for COM marshalling of UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228_marshaled_com
{
	ColorTweenCallback_tA2357F5ECB0BB12F303C2D6EE5A628CFD14C91C0 * ___m_Target_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_StartColor_1;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};

// System.Comparison`1<System.Object>
struct  Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct  UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Object>>
struct  UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Color32>>
struct  UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct  UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector2>>
struct  UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Vector4>>
struct  UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>
struct  SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>
struct  SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>
struct  SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>
struct  U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::tweenInfo
	ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo_2;
	// System.Single UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenInfo_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___tweenInfo_2)); }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  get_tweenInfo_2() const { return ___tweenInfo_2; }
	inline ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * get_address_of_tweenInfo_2() { return &___tweenInfo_2; }
	inline void set_tweenInfo_2(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  value)
	{
		___tweenInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tweenInfo_2))->___m_Target_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB, ___U3CelapsedTimeU3E5__2_3)); }
	inline float get_U3CelapsedTimeU3E5__2_3() const { return ___U3CelapsedTimeU3E5__2_3; }
	inline float* get_address_of_U3CelapsedTimeU3E5__2_3() { return &___U3CelapsedTimeU3E5__2_3; }
	inline void set_U3CelapsedTimeU3E5__2_3(float value)
	{
		___U3CelapsedTimeU3E5__2_3 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_MyView_8)); }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MyView_8), (void*)value);
	}
};

struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour_Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CmdHandlerDelegates_9), (void*)value);
	}
};


// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_SceneId_4)); }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_AssetId_5)); }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetId_11)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToServer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ObserverConnections_17)); }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObserverConnections_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Observers_18)); }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientAuthorityOwner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity_ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
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
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Timeline.IntervalTreeNode[]
struct IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  m_Items[1];

public:
	inline IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___other0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_gshared_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_gshared_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954_gshared (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394_gshared (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54_gshared (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8_gshared (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___index0, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9_gshared (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4 (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, int16_t ___msgType0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___contextObj0, NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___writer1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
inline void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648 (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 , const RuntimeMethod*))ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared)(__this, ___handle0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableGraph::CreatePlayableHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableGraph_CreatePlayableHandle_m76B85CFBF25E71838C5F32AB29BC4F26C891D92C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetScriptInstance_mFF8C477ADCE7BAF1F6300DE02CB537B999A0F740 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, RuntimeObject * ___scriptInstance0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Object_Instantiate_m17AA3123A55239124BC54A907AEEE509034F0830 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___original0, const RuntimeMethod* method);
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mCC5D0A1480AC0CDA190A63120B39C2C531428FC8 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method)
{
	return ((  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  (*) (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *, const RuntimeMethod*))ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared)(__this, method);
}
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
inline RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF_gshared)(__this, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
inline RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389 (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
inline bool ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *, ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 , const RuntimeMethod*))ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_gshared)(__this, ___other0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::get_Count()
inline int32_t List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, const RuntimeMethod*))List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::get_Item(System.Int32)
inline IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, int32_t, const RuntimeMethod*))List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::Clear()
inline void List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954 (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, const RuntimeMethod*))List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394 (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::Add(!0)
inline void List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54 (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF , const RuntimeMethod*))List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54_gshared)(__this, ___item0, method);
}
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Int64 System.Math::Max(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Max_m13FD4D7B921C359B34176CDF2A51FB2F96965E45 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8 (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___index0, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, int32_t, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF , const RuntimeMethod*))List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Timeline.IntervalTreeNode>::.ctor()
inline void List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9 (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *, const RuntimeMethod*))List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9_gshared)(__this, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2 (const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749 (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::ValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.CoroutineTween.FloatTween::get_ignoreTimeScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.CoroutineTween.FloatTween::get_duration()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.CoroutineTween.FloatTween::TweenValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, float ___floatPercentage0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mDDB3745A70D8AB8302ACAD1EEB19E1AAEB441B91_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m9764997BE44D14E581256A6FB395269E8FACCCB4_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * SyncList_1_get_Callback_m20E24906A31F41D9F1937C600CBBE86301850994_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m1FE2DB3A33EDF7DEA75278C69828ED589FE64BD8_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m9E5233B6B3869707E0C95960BD03C9A7158BB360_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, RuntimeObject * ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		RuntimeObject * L_22 = ___item2;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, RuntimeObject * >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Object>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (RuntimeObject *)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_33 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_34 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mBBBAE26A0F85309D06F8FA716FA78F7F567A90D7_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m7F8AD633E6405A82303D80E9102F897BE5CA69C6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Object>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (RuntimeObject *)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_9 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_15 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14);
		((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		RuntimeObject * L_20 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, (int32_t)L_19, (RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_21 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_22 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22);
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m4AA586E4EB7BFE218BE0BFCD4018CEF4A2FB1FA6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mE173FF64092798EAEF0C19527A494E830AB91C15_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mFE2457D2BABDC536E39BCB3A784926573611E4E6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mE9925F7E61DE2C0F3508C8CFE9918DECB7883A1A_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m32CDC644CD385320FE4A88DC1D6D97AFAC4E2B6D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mEAAF5318DE88AC6687DAC665C3694AED59B9277D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_m8EB3A1E1ED19516ACE719F34D90E8CC9BBF3C7EF_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = ___item1;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)2, (int32_t)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m37B3302E3190BC679FBD06A44D87896BD8F00C09_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		RuntimeObject * L_4 = ___item0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)3, (int32_t)0, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m8048DD22538A1E3F543C3D7A06C8418C377887A9_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m2B49962EC74E2287446B0C982ED048B12B13A39C_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)6, (int32_t)L_0, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_m57B77B62E54F2CCB1907379E651EFB95CCF748AE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_mE10812F910EBBACCF6A3461B7EFD2FD9B4E9D874_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (value == null)
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (RuntimeObject *)L_6;
		RuntimeObject * L_7 = ___value1;
		NullCheck((RuntimeObject *)(V_1));
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_1), (RuntimeObject *)L_7);
		V_0 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_10 = ___i0;
		RuntimeObject * L_11 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_13 = ___i0;
		RuntimeObject * L_14 = ___value1;
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)5, (int32_t)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m3D928CBF99237EEF31163BF55C886673E18A9CAE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_1 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m70D70E97406458CD44D17ABD5CEC771CC1E413C0_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		NullCheck((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m193925AC0DC6CD416CDFCB25F0C50F219D2DC490_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mE6D989EF63944773A0C8963CB0D258C1E0EB27EA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mB2AB79D68D93AAD00E1F8443308AED727DB20F07_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * SyncList_1_get_Callback_m6AFC36CC469E5D3CC16C969C9FD8CEB7971625B7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m2F2B7CDEFA7D37ECEB981B62D944073DE010A812_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m79D617273D080282A3EDE963553F109F014A4894_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, float ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		float L_22 = ___item2;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, float >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Single>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (float)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_33 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_34 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_34);
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m65B07DCAE32D55A117BC804C437BB05DC7B0CFE3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m056C4D8FF7378B3197458797EDD10EC030B09D45_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		float L_5 = VirtFuncInvoker1< float, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Single>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (float)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_8 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_9 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_8);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_10 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_10);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		float L_13 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_14 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_15 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_14);
		((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_14, (float)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_16 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_16);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_18 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		float L_20 = V_2;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_18);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_18, (int32_t)L_19, (float)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_21 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_22 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_22);
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mCD26D99DCC66569C81313168C2887AE45AA5099E_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mA1DB0248A3DBE9F01EFADBEEC45E4356BEAEF4D3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_2 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_4 = ___item0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m40B9DB3EEC6D28BE8C960A373BC2D618672D7BE7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m89669E45649CC81A778AA607F2BE1B059931B6AA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m3F5C626CD476A8FBA3C418A529C4BC2C0E1C7046_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mF2C2F81E318206B047F98F9F27FFBF691BBD24C5_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mF9C9216B27ED33E16C6F563B62EF39509E25508A_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		float L_2 = ___item1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		float L_4 = ___item1;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)2, (int32_t)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m2B6A1D2327947DEDBE61FFF41BBA593717A9E9C4_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		float L_4 = ___item0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)3, (int32_t)0, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m0377FF1A27E91CB0AAF5102A1525CE28856A1FB9_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m28A7A063F9A8D4056900C009E13C249502C54311_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_1 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_1);
		float L_3 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)6, (int32_t)L_0, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_mFC231403EC08B98E4891CAD8681AA325E4248B92_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m4042501A69B9BE095B4A3656263D730881628D48_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, float ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_4 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_4);
		float L_6 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (float)L_6;
		float L_7 = ___value1;
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16((float*)(float*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		float L_13 = ___value1;
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11);
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		float L_16 = ___value1;
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)5, (int32_t)L_15, (float)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m7E79618E1133C66DC2AA9D17FDDBA09ED58367C0_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		NullCheck((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0);
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_1 = ((  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2C6A97F08DA04D74CC990C2825A2ED0F060B9954_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		NullCheck((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m4F2232A5EF0BE18785DA4D9C357E9642A2D4D0F6_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m477A2ED05BB22DC1E9CB80A5FBF084E1DD48A866_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m80C51D5FF71A67512EB415CA19F5649F86F52EE6_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * SyncList_1_get_Callback_mB94ADF0A296618486FB9EFE883B5CDDB9478E324_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m12197649E902CDA084D2902017B8775CE3C4BBDC_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mF159E49D488220DC87E0398A01E2068E92166585_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, uint32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3);
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8);
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11);
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NullCheck((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13);
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17);
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19);
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		uint32_t L_22 = ___item2;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, uint32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (uint32_t)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NullCheck((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23);
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29);
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NullCheck((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31);
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_33 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_34 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		NullCheck((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_34);
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m47CD9D607320F8912D05D9B2C7CC7AB0FE011044_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m4492E3D13DDC40C5CA23D94265B8DB9BB914D3C1_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0);
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		NullCheck((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2);
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		uint32_t L_5 = VirtFuncInvoker1< uint32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.UInt32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (uint32_t)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_8 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_9 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_8);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_8, (uint32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_10 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_10);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_14 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_15 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_14);
		((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_14, (uint32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_16 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_16);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_18 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_18);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_18, (int32_t)L_19, (uint32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_21 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_22 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_22);
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mD85298653F599E3BF7297D5E34AB0160FB267898_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m50AACA6E70666A9462410B65BE86B5B5CCF07639_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_2 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m196B5CD3228535A361FBBAA94C284CFE2E215FBB_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mD2941C51CC476BEE5C181C5C3D183A68F7EAF35F_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_mE0B5ABBD7F2F92C12CB443792A804400F7E970E7_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m74F91DCB69A209813838685681B952AE0CDE7189_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		int32_t L_2 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mC111E9856E76542D83663AC2AA72FB34BEF1E961_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = ___item1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		uint32_t L_4 = ___item1;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)2, (int32_t)L_3, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mF04C662A1BC3EC6AFEA9F89963CBE13A35A9686B_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		uint32_t L_4 = ___item0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)3, (int32_t)0, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m41D4B99E19DF04F1FC5934D1E1115D0C2181284D_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m97EB0387816ABE4540E46D88BDD1206C2EA80DBD_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_1 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_1);
		uint32_t L_3 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)6, (int32_t)L_0, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_m8D671E7C84FD0C968D60488553A568E9C31FEFC3_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m3D81172C28BDD0A6997376863AEEB3CC367F2282_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, uint32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_4 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_4);
		uint32_t L_6 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (uint32_t)L_6;
		uint32_t L_7 = ___value1;
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3((uint32_t*)(uint32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		uint32_t L_13 = ___value1;
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11);
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		uint32_t L_16 = ___value1;
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)5, (int32_t)L_15, (uint32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m2D8E20107EFF81EC73C806B373FF762E0CD24A78_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		NullCheck((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0);
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_1 = ((  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m0D4C05B534CF3521BDF05B7B54BCCE6CD00D39EF_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		NullCheck((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mBBC4C3820B8E74954702F4B0B8CB6ADE0BFDF76A_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_get_Null_m8C69C36F63F7FD363B2F72C997395CF4434BFBDA_gshared (const RuntimeMethod* method)
{
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_0 = ((ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_m_NullPlayable_1();
		V_0 = (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 )L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_Create_mCB0EAF3B738D54C2C229A229B9A5AC2FCB1DB2F2_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_1;
		int32_t L_2 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ((  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA )L_0, (RuntimeObject *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_3;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = V_0;
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_5), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_2 = (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 )L_5;
		goto IL_001b;
	}

IL_001b:
	{
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateHandle(UnityEngine.Playables.PlayableGraph,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeObject * ___template1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateHandle_mF3A8AFE758710C0BCF9D74BF6BC7EA16D90C262A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		V_0 = (RuntimeObject *)NULL;
		RuntimeObject * L_0 = ___template1;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		goto IL_0028;
	}

IL_001a:
	{
		RuntimeObject * L_3 = ___template1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		V_0 = (RuntimeObject *)L_4;
	}

IL_0028:
	{
		RuntimeObject * L_5 = V_0;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_8);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE((String_t*)_stringLiteral03610397B10FD1D4F9813C1618E587023F172685, (String_t*)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_11 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_4 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_11;
		goto IL_0091;
	}

IL_0059:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_12 = PlayableGraph_CreatePlayableHandle_m76B85CFBF25E71838C5F32AB29BC4F26C891D92C((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		V_1 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_12;
		bool L_13 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_1), /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_15 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_4 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_15;
		goto IL_0091;
	}

IL_007a:
	{
		int32_t L_16 = ___inputCount2;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_1), (int32_t)L_16, /*hidden argument*/NULL);
		RuntimeObject * L_17 = V_0;
		PlayableHandle_SetScriptInstance_mFF8C477ADCE7BAF1F6300DE02CB537B999A0F740((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_1), (RuntimeObject *)L_17, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_18 = V_1;
		V_4 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_18;
		goto IL_0091;
	}

IL_0091:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_19 = V_4;
		return L_19;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CreateScriptInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CreateScriptInstance_mD1FED4EC532337B9139DEECE32E0633FA7C5A180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_1, (Type_t *)L_3);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_8 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D((Type_t *)L_7, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4))), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4)));
		goto IL_004c;
	}

IL_0041:
	{
		RuntimeObject * L_9 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_0 = (RuntimeObject*)L_9;
	}

IL_004c:
	{
		RuntimeObject* L_10 = V_0;
		V_2 = (RuntimeObject *)L_10;
		goto IL_0050;
	}

IL_0050:
	{
		RuntimeObject * L_11 = V_2;
		return L_11;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstance_m1A625CA1BB813C13370613C09BE72E7B68836296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)IsInst((RuntimeObject*)L_0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var));
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = (bool)L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		V_3 = (RuntimeObject *)L_5;
		goto IL_003a;
	}

IL_001c:
	{
		RuntimeObject* L_6 = ___source0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_3 = (RuntimeObject *)L_10;
		goto IL_003a;
	}

IL_0036:
	{
		V_3 = (RuntimeObject *)NULL;
		goto IL_003a;
	}

IL_003a:
	{
		RuntimeObject * L_11 = V_3;
		return L_11;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromEngineObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_gshared (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromEngineObject_m54480F28193A91630B99395F7D0D8E0BCEBF2686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = Object_Instantiate_m17AA3123A55239124BC54A907AEEE509034F0830((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, /*hidden argument*/NULL);
		V_0 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_1;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_2 = V_0;
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_5 = V_0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_6 = (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5;
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_6);
		int32_t L_7 = Object_get_hideFlags_mCC5D0A1480AC0CDA190A63120B39C2C531428FC8((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_6, /*hidden argument*/NULL);
		NullCheck((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_6);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_6, (int32_t)((int32_t)((int32_t)L_7|(int32_t)((int32_t)52))), /*hidden argument*/NULL);
	}

IL_0025:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_8 = V_0;
		V_2 = (RuntimeObject *)L_8;
		goto IL_0029;
	}

IL_0029:
	{
		RuntimeObject * L_9 = V_2;
		return L_9;
	}
}
// System.Object UnityEngine.Playables.ScriptPlayable`1<System.Object>::CloneScriptInstanceFromIClonable(System.ICloneable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_CloneScriptInstanceFromIClonable_mD834410040DDFC50A7BCA39928E7835D9ECCD5A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.ICloneable::Clone() */, ICloneable_tB0EF2757D90DF969033D641822566814815EB134_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (RuntimeObject *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = (bool)L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		Type_t * L_4 = PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		bool L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_3, (Type_t *)L_4);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		Type_t * L_7 = PlayableHandle_GetPlayableType_m962BE384C093FF07EAF156DA373806C2D6EF1AD1((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->klass)->rgctx_data, 7)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_8, /*hidden argument*/NULL);
		String_t* L_10 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A((String_t*)_stringLiteral6E7F1D4313DB18F6DB79C6CEABD99B7C7F59D3FB, (RuntimeObject *)L_7, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_11 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_RuntimeMethod_var);
	}

IL_004b:
	{
	}

IL_004c:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_12 = ___handle0;
		__this->set_m_Handle_0(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *>(__this + _offset);
	ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )__this->get_m_Handle_0();
		V_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *>(__this + _offset);
	return ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF(_thisAdjusted, method);
}
// T UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)__this->get_address_of_m_Handle_0();
		RuntimeObject * L_1 = PlayableHandle_GetObject_TisRuntimeObject_mD3D4D5F15ED728247693C75E83EB358B8B55BDFF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (RuntimeObject *)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *>(__this + _offset);
	return ScriptPlayable_1_GetBehaviour_mA09CBA9730AC80E48578D8F3EF33EBFCE5F1A389(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9EAB3B552405A6DF1C2DAC402E792EC2D54F3E7E_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)(&___playable0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/NULL);
		V_0 = (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ScriptPlayable_1_op_Explicit_m8164D46EB091E8DC3F521E6A747A5FCCE5C5D9DF_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = Playable_GetHandle_m952F17BACFC90BEACD3CB9880E65E69B3271108A((Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 *)(&___playable0), /*hidden argument*/NULL);
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Playables.ScriptPlayable`1<System.Object>::Equals(UnityEngine.Playables.ScriptPlayable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_gshared (ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * __this, ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = ScriptPlayable_1_GetHandle_m91905E1AA49E71057252168DD130DE0D1B7698EF((ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)(ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D_AdjustorThunk (RuntimeObject * __this, ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 * _thisAdjusted = reinterpret_cast<ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556 *>(__this + _offset);
	return ScriptPlayable_1_Equals_mB7BDD650CD7291D5E8E4C8780FDA95C2D9F8C74D(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Playables.ScriptPlayable`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptPlayable_1__cctor_mBD14994A6A539555759436490FCDCF3217A000DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScriptPlayable_1__ctor_mE48F064F653E626EF44A1629FC97AB40C3896648((&L_1), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((ScriptPlayable_1_tDAC177C47C5A1017ACBAD542EBF96F0939F2D556_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_m_NullPlayable_1(L_1);
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
// System.Boolean UnityEngine.Timeline.IntervalTree`1<System.Object>::get_dirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntervalTree_1_get_dirty_mA606574A990F3D3AA17D23DA25931BB9AE0DEAE0_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, const RuntimeMethod* method)
{
	{
		// public bool dirty { get; internal set; }
		bool L_0 = (bool)__this->get_U3CdirtyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::set_dirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1_set_dirty_m1CB68BB947B7A6A6832076809808EB46E690C0B1_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool dirty { get; internal set; }
		bool L_0 = ___value0;
		__this->set_U3CdirtyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1_Add_mCDA3ECBFBDD719234243FEB1E34DEC353FD625DF_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Add_mCDA3ECBFBDD719234243FEB1E34DEC353FD625DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (item == null)
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Entries.Add(
		//     new Entry()
		//     {
		//         intervalStart = item.intervalStart,
		//         intervalEnd = item.intervalEnd,
		//         item = item
		//     }
		// );
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_1 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 ));
		NullCheck((RuntimeObject*)(___item0));
		int64_t L_2 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 UnityEngine.Timeline.IInterval::get_intervalStart() */, IInterval_t46143B0C674E8072277343E9E4F3F5A171A904BD_il2cpp_TypeInfo_var, (RuntimeObject*)(___item0));
		(&V_0)->set_intervalStart_0(L_2);
		NullCheck((RuntimeObject*)(___item0));
		int64_t L_3 = InterfaceFuncInvoker0< int64_t >::Invoke(1 /* System.Int64 UnityEngine.Timeline.IInterval::get_intervalEnd() */, IInterval_t46143B0C674E8072277343E9E4F3F5A171A904BD_il2cpp_TypeInfo_var, (RuntimeObject*)(___item0));
		(&V_0)->set_intervalEnd_1(L_3);
		RuntimeObject * L_4 = ___item0;
		(&V_0)->set_item_2(L_4);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_5 = V_0;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_1);
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_1, (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// dirty = true;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::IntersectsWith(System.Int64,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1_IntersectsWith_m84A885BB0C7FC6213CE145CB92E0E144E4CF657A_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, int64_t ___value0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___results1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_IntersectsWith_m84A885BB0C7FC6213CE145CB92E0E144E4CF657A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Entries.Count == 0)
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_0 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (dirty)
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		bool L_2 = ((  bool (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Rebuild();
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// dirty = false;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_0023:
	{
		// if (m_Nodes.Count > 0)
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_3 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_3);
		int32_t L_4 = List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_3, /*hidden argument*/List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		// Query(m_Nodes[0], value, results);
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_5 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_5);
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_6 = List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_5, (int32_t)0, /*hidden argument*/List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_RuntimeMethod_var);
		int64_t L_7 = ___value0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = ___results1;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF , int64_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_6, (int64_t)L_7, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::Query(UnityEngine.Timeline.IntervalTreeNode,System.Int64,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1_Query_m00C76D84C1C81FB620D8E8AE04D3B0455874299D_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  ___intervalTreeNode0, int64_t ___value1, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___results2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Query_m00C76D84C1C81FB620D8E8AE04D3B0455874299D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = intervalTreeNode.first; i <= intervalTreeNode.last; i++)
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_0 = ___intervalTreeNode0;
		int32_t L_1 = (int32_t)L_0.get_first_1();
		V_0 = (int32_t)L_1;
		goto IL_0038;
	}

IL_0009:
	{
		// var entry = m_Entries[i];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_2 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_2);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_4 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_1 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_4;
		// if (value >= entry.intervalStart && value < entry.intervalEnd)
		int64_t L_5 = ___value1;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_6 = V_1;
		int64_t L_7 = (int64_t)L_6.get_intervalStart_0();
		if ((((int64_t)L_5) < ((int64_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		int64_t L_8 = ___value1;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_9 = V_1;
		int64_t L_10 = (int64_t)L_9.get_intervalEnd_1();
		if ((((int64_t)L_8) >= ((int64_t)L_10)))
		{
			goto IL_0034;
		}
	}
	{
		// results.Add(entry.item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = ___results2;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_12 = V_1;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_item_2();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0034:
	{
		// for (int i = intervalTreeNode.first; i <= intervalTreeNode.last; i++)
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = intervalTreeNode.first; i <= intervalTreeNode.last; i++)
		int32_t L_15 = V_0;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_16 = ___intervalTreeNode0;
		int32_t L_17 = (int32_t)L_16.get_last_2();
		if ((((int32_t)L_15) <= ((int32_t)L_17)))
		{
			goto IL_0009;
		}
	}
	{
		// if (intervalTreeNode.center == kCenterUnknown)
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_18 = ___intervalTreeNode0;
		int64_t L_19 = (int64_t)L_18.get_center_0();
		if ((!(((uint64_t)L_19) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0053;
		}
	}
	{
		// return;
		return;
	}

IL_0053:
	{
		// if (intervalTreeNode.left != kInvalidNode && value < intervalTreeNode.center)
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_20 = ___intervalTreeNode0;
		int32_t L_21 = (int32_t)L_20.get_left_3();
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_007e;
		}
	}
	{
		int64_t L_22 = ___value1;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_23 = ___intervalTreeNode0;
		int64_t L_24 = (int64_t)L_23.get_center_0();
		if ((((int64_t)L_22) >= ((int64_t)L_24)))
		{
			goto IL_007e;
		}
	}
	{
		// Query(m_Nodes[intervalTreeNode.left], value, results);
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_25 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_26 = ___intervalTreeNode0;
		int32_t L_27 = (int32_t)L_26.get_left_3();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_25);
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_28 = List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_25, (int32_t)L_27, /*hidden argument*/List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_RuntimeMethod_var);
		int64_t L_29 = ___value1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_30 = ___results2;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF , int64_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_28, (int64_t)L_29, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_007e:
	{
		// if (intervalTreeNode.right != kInvalidNode && value > intervalTreeNode.center)
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_31 = ___intervalTreeNode0;
		int32_t L_32 = (int32_t)L_31.get_right_4();
		if ((((int32_t)L_32) == ((int32_t)(-1))))
		{
			goto IL_00a9;
		}
	}
	{
		int64_t L_33 = ___value1;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_34 = ___intervalTreeNode0;
		int64_t L_35 = (int64_t)L_34.get_center_0();
		if ((((int64_t)L_33) <= ((int64_t)L_35)))
		{
			goto IL_00a9;
		}
	}
	{
		// Query(m_Nodes[intervalTreeNode.right], value, results);
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_36 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_37 = ___intervalTreeNode0;
		int32_t L_38 = (int32_t)L_37.get_right_4();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_36);
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_39 = List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_36, (int32_t)L_38, /*hidden argument*/List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_RuntimeMethod_var);
		int64_t L_40 = ___value1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_41 = ___results2;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  void (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF , int64_t, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_39, (int64_t)L_40, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1_Rebuild_m0A067ED70AEB73F5B19E1AFE227C1F1CF230E285_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Rebuild_m0A067ED70AEB73F5B19E1AFE227C1F1CF230E285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Nodes.Clear();
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_0 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_0);
		List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_0, /*hidden argument*/List_1_Clear_m6A8826FDE0538CAA8A757351DE4460C0D41A5954_RuntimeMethod_var);
		// m_Nodes.Capacity = m_Entries.Capacity;
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_1 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_2 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_1);
		List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_1, (int32_t)L_3, /*hidden argument*/List_1_set_Capacity_m7C66E1FF59A0F6ABC66FE54BD8B91D5A25B6E394_RuntimeMethod_var);
		// Rebuild(0, m_Entries.Count - 1);
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_4 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		((  int32_t (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Timeline.IntervalTree`1<System.Object>::Rebuild(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntervalTree_1_Rebuild_m3F8E6766F4E7A0E97CB8C4CD25477C61FB9F5E14_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, int32_t ___start0, int32_t ___end1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1_Rebuild_m3F8E6766F4E7A0E97CB8C4CD25477C61FB9F5E14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		// IntervalTreeNode intervalTreeNode = new IntervalTreeNode();
		il2cpp_codegen_initobj((&V_0), sizeof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF ));
		// int count = end - start + 1;
		int32_t L_0 = ___end1;
		int32_t L_1 = ___start0;
		// if (count < kMinNodeSize)
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1))) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0066;
		}
	}
	{
		// intervalTreeNode = new IntervalTreeNode() {center = kCenterUnknown, first = start, last = end, left = kInvalidNode, right = kInvalidNode};
		il2cpp_codegen_initobj((&V_7), sizeof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF ));
		(&V_7)->set_center_0(((int64_t)(std::numeric_limits<int64_t>::max)()));
		int32_t L_2 = ___start0;
		(&V_7)->set_first_1(L_2);
		int32_t L_3 = ___end1;
		(&V_7)->set_last_2(L_3);
		(&V_7)->set_left_3((-1));
		(&V_7)->set_right_4((-1));
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_4 = V_7;
		V_0 = (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_4;
		// m_Nodes.Add(intervalTreeNode);
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_5 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_6 = V_0;
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_5);
		List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_5, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_6, /*hidden argument*/List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54_RuntimeMethod_var);
		// return m_Nodes.Count - 1;
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_7 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_7);
		int32_t L_8 = List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_7, /*hidden argument*/List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0066:
	{
		// var min = Int64.MaxValue;
		V_1 = (int64_t)((int64_t)(std::numeric_limits<int64_t>::max)());
		// var max = Int64.MinValue;
		V_2 = (int64_t)((int64_t)(std::numeric_limits<int64_t>::min)());
		// for (int i = start; i <= end; i++)
		int32_t L_9 = ___start0;
		V_8 = (int32_t)L_9;
		goto IL_00b0;
	}

IL_007f:
	{
		// var o = m_Entries[i];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_10 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_11 = V_8;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_10);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_12 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_9 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_12;
		// min = Math.Min(min, o.intervalStart);
		int64_t L_13 = V_1;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_14 = V_9;
		int64_t L_15 = (int64_t)L_14.get_intervalStart_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int64_t L_16 = Math_Min_mA2FECF96DCE00528FBA2A3835BEB4B9B1E97CDD3((int64_t)L_13, (int64_t)L_15, /*hidden argument*/NULL);
		V_1 = (int64_t)L_16;
		// max = Math.Max(max, o.intervalEnd);
		int64_t L_17 = V_2;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_18 = V_9;
		int64_t L_19 = (int64_t)L_18.get_intervalEnd_1();
		int64_t L_20 = Math_Max_m13FD4D7B921C359B34176CDF2A51FB2F96965E45((int64_t)L_17, (int64_t)L_19, /*hidden argument*/NULL);
		V_2 = (int64_t)L_20;
		// for (int i = start; i <= end; i++)
		int32_t L_21 = V_8;
		V_8 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00b0:
	{
		// for (int i = start; i <= end; i++)
		int32_t L_22 = V_8;
		int32_t L_23 = ___end1;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_007f;
		}
	}
	{
		// var center = (max + min) / 2;
		int64_t L_24 = V_2;
		int64_t L_25 = V_1;
		V_3 = (int64_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)L_25))/(int64_t)(((int64_t)((int64_t)2)))));
		// intervalTreeNode.center = center;
		int64_t L_26 = V_3;
		(&V_0)->set_center_0(L_26);
		// int x = start;
		int32_t L_27 = ___start0;
		V_4 = (int32_t)L_27;
		// int y = end;
		int32_t L_28 = ___end1;
		V_5 = (int32_t)L_28;
		goto IL_00d2;
	}

IL_00cc:
	{
		// x++;
		int32_t L_29 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00d2:
	{
		// while (x <= end && m_Entries[x].intervalEnd < center)
		int32_t L_30 = V_4;
		int32_t L_31 = ___end1;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_00f4;
		}
	}
	{
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_32 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_33 = V_4;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_32);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_34 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_32, (int32_t)L_33, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int64_t L_35 = (int64_t)L_34.get_intervalEnd_1();
		int64_t L_36 = V_3;
		if ((((int64_t)L_35) < ((int64_t)L_36)))
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_00f4;
	}

IL_00ee:
	{
		// y--;
		int32_t L_37 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
	}

IL_00f4:
	{
		// while (y >= start && m_Entries[y].intervalEnd >= center)
		int32_t L_38 = V_5;
		int32_t L_39 = ___start0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_010e;
		}
	}
	{
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_40 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_41 = V_5;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_40);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_42 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_40, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int64_t L_43 = (int64_t)L_42.get_intervalEnd_1();
		int64_t L_44 = V_3;
		if ((((int64_t)L_43) >= ((int64_t)L_44)))
		{
			goto IL_00ee;
		}
	}

IL_010e:
	{
		// if (x > y)
		int32_t L_45 = V_4;
		int32_t L_46 = V_5;
		if ((((int32_t)L_45) > ((int32_t)L_46)))
		{
			goto IL_0152;
		}
	}
	{
		// var nodeX = m_Entries[x];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_47 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_48 = V_4;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_47);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_49 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_47, (int32_t)L_48, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_10 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_49;
		// var nodeY = m_Entries[y];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_50 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_51 = V_5;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_50);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_52 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_50, (int32_t)L_51, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_11 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_52;
		// m_Entries[y] = nodeX;
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_53 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_54 = V_5;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_55 = V_10;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_53);
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_53, (int32_t)L_54, (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_55, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// m_Entries[x] = nodeY;
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_56 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_57 = V_4;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_58 = V_11;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_56);
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_56, (int32_t)L_57, (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_58, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// while (true)
		goto IL_00d2;
	}

IL_0152:
	{
		// intervalTreeNode.first = x;
		int32_t L_59 = V_4;
		(&V_0)->set_first_1(L_59);
		// y = end;
		int32_t L_60 = ___end1;
		V_5 = (int32_t)L_60;
		goto IL_0166;
	}

IL_0160:
	{
		// x++;
		int32_t L_61 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0166:
	{
		// while (x <= end && m_Entries[x].intervalStart <= center)
		int32_t L_62 = V_4;
		int32_t L_63 = ___end1;
		if ((((int32_t)L_62) > ((int32_t)L_63)))
		{
			goto IL_0188;
		}
	}
	{
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_64 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_65 = V_4;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_64);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_66 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_64, (int32_t)L_65, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int64_t L_67 = (int64_t)L_66.get_intervalStart_0();
		int64_t L_68 = V_3;
		if ((((int64_t)L_67) <= ((int64_t)L_68)))
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0188;
	}

IL_0182:
	{
		// y--;
		int32_t L_69 = V_5;
		V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
	}

IL_0188:
	{
		// while (y >= start && m_Entries[y].intervalStart > center)
		int32_t L_70 = V_5;
		int32_t L_71 = ___start0;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_01a2;
		}
	}
	{
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_72 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_73 = V_5;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_72);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_74 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_72, (int32_t)L_73, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		int64_t L_75 = (int64_t)L_74.get_intervalStart_0();
		int64_t L_76 = V_3;
		if ((((int64_t)L_75) > ((int64_t)L_76)))
		{
			goto IL_0182;
		}
	}

IL_01a2:
	{
		// if (x > y)
		int32_t L_77 = V_4;
		int32_t L_78 = V_5;
		if ((((int32_t)L_77) > ((int32_t)L_78)))
		{
			goto IL_01e6;
		}
	}
	{
		// var nodeX = m_Entries[x];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_79 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_80 = V_4;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_79);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_81 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_79, (int32_t)L_80, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_12 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_81;
		// var nodeY = m_Entries[y];
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_82 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_83 = V_5;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_82);
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_84 = ((  Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_82, (int32_t)L_83, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_13 = (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_84;
		// m_Entries[y] = nodeX;
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_85 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_86 = V_5;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_87 = V_12;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_85);
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_85, (int32_t)L_86, (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_87, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// m_Entries[x] = nodeY;
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_88 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)__this->get_m_Entries_0();
		int32_t L_89 = V_4;
		Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5  L_90 = V_13;
		NullCheck((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_88);
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, int32_t, Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)L_88, (int32_t)L_89, (Entry_t5904CDA6DE7A6C98E28431C6EF13C167CDC7EEC5 )L_90, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// while (true)
		goto IL_0166;
	}

IL_01e6:
	{
		// intervalTreeNode.last = y;
		int32_t L_91 = V_5;
		(&V_0)->set_last_2(L_91);
		// m_Nodes.Add(new IntervalTreeNode());
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_92 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		il2cpp_codegen_initobj((&V_7), sizeof(IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF ));
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_93 = V_7;
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_92);
		List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_92, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_93, /*hidden argument*/List_1_Add_m624860FD3B4A1732813B0C0979EB8242D4163B54_RuntimeMethod_var);
		// int index = m_Nodes.Count - 1;
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_94 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_94);
		int32_t L_95 = List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_inline((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_94, /*hidden argument*/List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_RuntimeMethod_var);
		V_6 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1));
		// intervalTreeNode.left = kInvalidNode;
		(&V_0)->set_left_3((-1));
		// intervalTreeNode.right = kInvalidNode;
		(&V_0)->set_right_4((-1));
		// if (start < intervalTreeNode.first)
		int32_t L_96 = ___start0;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_97 = V_0;
		int32_t L_98 = (int32_t)L_97.get_first_1();
		if ((((int32_t)L_96) >= ((int32_t)L_98)))
		{
			goto IL_0242;
		}
	}
	{
		// intervalTreeNode.left = Rebuild(start, intervalTreeNode.first - 1);
		int32_t L_99 = ___start0;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_100 = V_0;
		int32_t L_101 = (int32_t)L_100.get_first_1();
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		int32_t L_102 = ((  int32_t (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (int32_t)L_99, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		(&V_0)->set_left_3(L_102);
	}

IL_0242:
	{
		// if (end > intervalTreeNode.last)
		int32_t L_103 = ___end1;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_104 = V_0;
		int32_t L_105 = (int32_t)L_104.get_last_2();
		if ((((int32_t)L_103) <= ((int32_t)L_105)))
		{
			goto IL_0261;
		}
	}
	{
		// intervalTreeNode.right = Rebuild(intervalTreeNode.last + 1, end);
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_106 = V_0;
		int32_t L_107 = (int32_t)L_106.get_last_2();
		int32_t L_108 = ___end1;
		NullCheck((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this);
		int32_t L_109 = ((  int32_t (*) (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1)), (int32_t)L_108, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		(&V_0)->set_right_4(L_109);
	}

IL_0261:
	{
		// m_Nodes[index] = intervalTreeNode;
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_110 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)__this->get_m_Nodes_1();
		int32_t L_111 = V_6;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_112 = V_0;
		NullCheck((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_110);
		List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8((List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)L_110, (int32_t)L_111, (IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF )L_112, /*hidden argument*/List_1_set_Item_mDF90F07C1A199F0689727858F5121859697B44D8_RuntimeMethod_var);
		// return index;
		int32_t L_113 = V_6;
		return L_113;
	}
}
// System.Void UnityEngine.Timeline.IntervalTree`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntervalTree_1__ctor_m6D43F543164DF753E5AAC772D22AEA891FD27DD9_gshared (IntervalTree_1_t1956EC1BECD601F37BC224CA82DA5CEFE6CCF0E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntervalTree_1__ctor_m6D43F543164DF753E5AAC772D22AEA891FD27DD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<Entry> m_Entries = new List<Entry>();
		List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 * L_0 = (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12));
		((  void (*) (List_1_t28C82C5A28874BDAF3977A0C92077B62E730D1C0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		__this->set_m_Entries_0(L_0);
		// readonly List<IntervalTreeNode> m_Nodes = new List<IntervalTreeNode>();
		List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * L_1 = (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E *)il2cpp_codegen_object_new(List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9(L_1, /*hidden argument*/List_1__ctor_mB2BC6F58D730ADE9882D24113CCEBD1D6BFCDFE9_RuntimeMethod_var);
		__this->set_m_Nodes_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Add_m0DBD135B8F3890966228AD853997DDA56594BBB5_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_1 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_2 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_3 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		int32_t L_5 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_2, (RuntimeObject *)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::AddUnique(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_AddUnique_m90A07ACAD8A4E562C11674ED9598E5DE3AFE5F48_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// if (m_Dictionary.ContainsKey(item))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// m_List.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_3 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		RuntimeObject * L_4 = ___item0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// m_Dictionary.Add(item, m_List.Count - 1);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = ___item0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_7 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7);
		int32_t L_8 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Remove_m8C62E0808CB2D9452B58F1CB736C431F04CA1F4B_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (!m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0014:
	{
		// RemoveAt(index);
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		((  void (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_GetEnumerator_m862DD23AD8DA8A6F6E7BFAC10CF75F0639758E44_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_mCF3FE522F4B06100050E73BCDE298D8F8D7A3EE8_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Clear_m689CFB50CED51E5F519BEEF51B8D8C6FFBF41FB9_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// m_List.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// m_Dictionary.Clear();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// }
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_Contains_mCA290D982CEDEE20068188B38AC28A45CDDC9D13_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Dictionary.ContainsKey(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_CopyTo_m4254FBBA5B5B56B791828D193E5F4CA665CF7852_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// m_List.CopyTo(array, arrayIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// }
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_get_Count_mA8B3EBDB71AD001C6D39FA35D79D7516C1C267E4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_List.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedSet_1_get_IsReadOnly_m01297860A8BC8B4B6C66DC72C406933ED9D9937D_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IndexedSet_1_IndexOf_m6BB93EC59B8E7F835F15A3340E9884CAB29401AB_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int index = -1;
		V_0 = (int32_t)(-1);
		// if (m_Dictionary.TryGetValue(item, out index))
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_0 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_1 = ___item0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0);
		bool L_2 = ((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_0, (RuntimeObject *)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return index;
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0014:
	{
		// return -1;
		return (-1);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("Random Insertion is semantically invalid, since this structure does not guarantee ordering.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, (String_t*)_stringLiteralDFADDFA065E9D92CFE8B8F06444DD5652DFC1D58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IndexedSet_1_Insert_m5C71AFDD8507ABF24809AE66F0461CDB8D0693F4_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAt_mBFCEF1CBBC140206B5DFCAE8205161429441E0EA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// if (index == m_List.Count - 1)
		int32_t L_5 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_6 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6);
		int32_t L_7 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1))))))
		{
			goto IL_0037;
		}
	}
	{
		// m_List.RemoveAt(index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_9 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return;
	}

IL_0037:
	{
		// int replaceItemIndex = m_List.Count - 1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		// T replaceItem = m_List[replaceItemIndex];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_12 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_13 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12);
		RuntimeObject * L_14 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_2 = (RuntimeObject *)L_14;
		// m_List[index] = replaceItem;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_15 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_16 = ___index0;
		RuntimeObject * L_17 = V_2;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_15, (int32_t)L_16, (RuntimeObject *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary[replaceItem] = index;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_18 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_19 = V_2;
		int32_t L_20 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_18, (RuntimeObject *)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// m_List.RemoveAt(replaceItemIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_22 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		// }
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IndexedSet_1_get_Item_m982CBDB4CDA1A497EC25A60EC17AB8F7B2D51BC0_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get { return m_List[index]; }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_set_Item_m507562D8C316C7A1C0E521284172D4DB5D8A46BA_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// T item = m_List[index];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = ___index0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_2;
		// m_Dictionary.Remove(item);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_3 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_4 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3);
		((  bool (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// m_List[index] = value;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_6 = ___index0;
		RuntimeObject * L_7 = ___value1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_5, (int32_t)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// m_Dictionary.Add(item, index);
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_8 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_8, (RuntimeObject *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_RemoveAll_m2215BF66C8BA3D7439D16985AD52B0A6A66AD541_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// int i = 0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_0004:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_1 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_2;
		// if (match(item))
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_3 = ___match0;
		RuntimeObject * L_4 = V_1;
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3);
		bool L_5 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// Remove(item);
		RuntimeObject * L_6 = V_1;
		NullCheck((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this);
		((  bool (*) (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 *)__this, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		goto IL_0028;
	}

IL_0024:
	{
		// i++;
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// while (i < m_List.Count)
		int32_t L_8 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9);
		int32_t L_10 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1_Sort_m0365BC9CE6449DBD358C479FB244D07FE72F36E7_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * ___sortLayoutFunction0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// m_List.Sort(sortLayoutFunction);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 * L_1 = ___sortLayoutFunction0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (Comparison_1_tD9DBDF7B2E4774B4D35E113A76D75828A24641F4 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// for (int i = 0; i < m_List.Count; ++i)
		V_0 = (int32_t)0;
		goto IL_002e;
	}

IL_0010:
	{
		// T item = m_List[i];
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		int32_t L_3 = V_0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (RuntimeObject *)L_4;
		// m_Dictionary[item] = i;
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_5 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)__this->get_m_Dictionary_1();
		RuntimeObject * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5);
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, RuntimeObject *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)L_5, (RuntimeObject *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < m_List.Count; ++i)
		int32_t L_9 = V_0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_List_0();
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10);
		int32_t L_11 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedSet_1__ctor_mA9E3CAA05341D4863E3080C31170AB64AAED0573_gshared (IndexedSet_1_tBC520330ED014FACA69A5A730B4C03ABD49AB4C3 * __this, const RuntimeMethod* method)
{
	{
		// readonly List<T> m_List = new List<T>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		__this->set_m_List_0(L_0);
		// Dictionary<T, int> m_Dictionary = new Dictionary<T, int>();
		Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * L_1 = (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Dictionary_1(L_1);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m6FC80299A2464A5F19E422273392ADBEE6805533_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m3AFD56D8AAA6B170D4C5FEF021CC672C2F885C9A_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m60167073DFDFFC72E0494F1178A8927098A64D12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_3 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_4 = ColorTween_ValidTarget_mA5469658CB631C87CF97FC5AE2B9089A06678696((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_6 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		bool L_7 = ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_11 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_12 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_14 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_17 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		float L_18 = ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * L_19 = (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)__this->get_address_of_tweenInfo_2();
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF79BB0AA7D52BC685ED74FE04086C3155BE46893_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m7EE0C78F076E4D95B3838BE82929AAA21433CA5D_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mC5F1F242C0EE5549C75A5721204FD9207EB716A6_gshared (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m2AE86242B5268C78D780861B343B1227E2479CE2_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mBD909D28E90E3EB5172683C41EDB69A5CEC3B29A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_MoveNext_m0EE17EEE1FD4E844C9CDA2AA8815CBECBB0DBA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B8_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * G_B9_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!tweenInfo.ValidTarget())
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_3 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_4 = FloatTween_ValidTarget_m7DFE9AC7C8C0EBEF441D80472635CF4F38632E5E((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_002f:
	{
		// var elapsedTime = 0.0f;
		__this->set_U3CelapsedTimeU3E5__2_3((0.0f));
		goto IL_00af;
	}

IL_003c:
	{
		// elapsedTime += tweenInfo.ignoreTimeScale ? Time.unscaledDeltaTime : Time.deltaTime;
		float L_5 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_6 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		bool L_7 = FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_6, /*hidden argument*/NULL);
		G_B7_0 = L_5;
		G_B7_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
		if (L_7)
		{
			G_B8_0 = L_5;
			G_B8_1 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(__this));
			goto IL_005d;
		}
	}
	{
		float L_8 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		G_B9_0 = L_8;
		G_B9_1 = G_B7_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B7_1));
		goto IL_0062;
	}

IL_005d:
	{
		float L_9 = Time_get_unscaledDeltaTime_mA0AE7A144C88AE8AABB42DF17B0F3F0714BA06B2(/*hidden argument*/NULL);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_0;
		G_B9_2 = ((U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)(G_B8_1));
	}

IL_0062:
	{
		NullCheck(G_B9_2);
		G_B9_2->set_U3CelapsedTimeU3E5__2_3(((float)il2cpp_codegen_add((float)G_B9_1, (float)G_B9_0)));
		// var percentage = Mathf.Clamp01(elapsedTime / tweenInfo.duration);
		float L_10 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_11 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_12 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B((float)((float)((float)L_10/(float)L_12)), /*hidden argument*/NULL);
		V_1 = (float)L_13;
		// tweenInfo.TweenValue(percentage);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_14 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_15 = V_1;
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_14, (float)L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00af:
	{
		// while (elapsedTime < tweenInfo.duration)
		float L_16 = (float)__this->get_U3CelapsedTimeU3E5__2_3();
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_17 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		float L_18 = FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_17, /*hidden argument*/NULL);
		if ((((float)L_16) < ((float)L_18)))
		{
			goto IL_003c;
		}
	}
	{
		// tweenInfo.TweenValue(1.0f);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * L_19 = (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)__this->get_address_of_tweenInfo_2();
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)L_19, (float)(1.0f), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD32BEE6827A03105EAE2BB0DD9D3D46620BD131C_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mB7C54CC93F1970C36AF5D027FD9827EEEB31E323_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1_<Start>d__2<UnityEngine.UI.CoroutineTween.FloatTween>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mD96F6DCD598679604A87A46CC51E64FD2B23019A_gshared (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mC2568158E444C4708AB2AE4A41715412B27675D4_gshared (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_0 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB * L_1 = (U3CStartU3Ed__2_t3117D5DE8A33C13E45D9874BB9E324E2102075BB *)L_0;
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_mB9D1917305679C4620D9F3D8DEE2215DFCAB3057_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mA10B864FF4FF1D68D8B117B94B06FF35F5373FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this);
		((  void (*) (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		ColorTween_TweenValue_m4EF3CDDDDC3986BA6D06D4DB785310B131958749((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m144D05B742FE3B45CAF9E39F351DFE015B8D72A9_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mDFB148DCD4CD644010BDFD27F1D0DABA9BB528F7_gshared (TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Start(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m138F7317CB8D005AE5859487FBD18C15E5171F76_gshared (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___tweenInfo0, const RuntimeMethod* method)
{
	{
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_0 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		((  void (*) (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E * L_1 = (U3CStartU3Ed__2_tF4BC79409CDBECA691561F2017756F22785A840E *)L_0;
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_2 = ___tweenInfo0;
		NullCheck(L_1);
		L_1->set_tweenInfo_2(L_2);
		return L_1;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::Init(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m36554C1037EC37B2D67A1BDE9B4D2407FE2C7657_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___coroutineContainer0, const RuntimeMethod* method)
{
	{
		// m_CoroutineContainer = coroutineContainer;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = ___coroutineContainer0;
		__this->set_m_CoroutineContainer_0(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StartTween(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenRunner_1_StartTween_mCD6A38F2A78EADA8BFD4D710333E6263D32DAEFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoroutineContainer == null)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_0 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogWarning("Coroutine container not configured... did you forget to call Init?");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568((RuntimeObject *)_stringLiteralA413973124713A2B7B3570CE8D97C7151C8628A9, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// StopTween();
		NullCheck((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this);
		((  void (*) (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// if (!m_CoroutineContainer.gameObject.activeInHierarchy)
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_2 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3);
		bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		// info.TweenValue(1.0f);
		FloatTween_TweenValue_m78FEB902E18BE0882BC487BC29B6EA3905E4F05C((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A *)(&___info0), (float)(1.0f), /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0044:
	{
		// m_Tween = Start(info);
		FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A  L_5 = ___info0;
		RuntimeObject* L_6 = ((  RuntimeObject* (*) (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Tween_1(L_6);
		// m_CoroutineContainer.StartCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_7 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_8 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_7, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::StopTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m7EA08229E2A074D42B52A1F63C74871F48B3A748_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		// if (m_Tween != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_m_Tween_1();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_CoroutineContainer.StopCoroutine(m_Tween);
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_1 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)__this->get_m_CoroutineContainer_0();
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_m_Tween_1();
		NullCheck((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1);
		MonoBehaviour_StopCoroutine_m3CDD6C046CC660D4CD6583FCE97F88A9735FD5FA((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		// m_Tween = null;
		__this->set_m_Tween_1((RuntimeObject*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mBCECADAAC67B34851BF7AE7F23AAA7BEDD17CDAE_gshared (TweenRunner_1_tA7C92F52BF30E9A20EDA2DD956E11A1493D098EF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mDFC87A2C3A59C78CE3F2BFBF6394BAF88A791973_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = ___l0;
		NullCheck((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0);
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Int32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ListPool_1_Get_mE24C8BF45625DFCEC780B128AF4F5CACCDAD4E84_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m21C2836B76CF178B2B4EADBAB1F8E2CEFE1D7A3B_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_0 = ((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0);
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)L_0, (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Int32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mEDDF3833673FBF22292A8CE001267CE47A06D4E7_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 * L_0 = (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A * L_1 = (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t48C51546A6490B0D277E7174EC40AC275206F47A *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)NULL, (UnityAction_1_t9F617E4F89335DB02DC3387128A9DFD903C3F584 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t3E619A8E79CAF23BEEF32265E5CEDAB29A8735AF_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m4B97511A75755BD2A11A6213F00B2E36ADF3F0B8_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = ___l0;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ListPool_1_Get_mEE963F0CFA2D9BE7F593624F2825F9C8E326217D_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ((  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mA153831D5786A134340D88D3C5C14451A188C6B6_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_0 = ((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0);
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)L_0, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m2378D0E35B8BFADD0DBC1896B035099042BF39E9_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 * L_0 = (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E * L_1 = (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tBB1F4B8FFD59A7625C9BECA17EA8D0ED7645425E *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)NULL, (UnityAction_1_t8AD8F8E44992547CC00157160617BE8482809363 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t66B0CA6885E680896C9747F9C0E28458D59743BE_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m7E0463074AFDE74F6941D20F82B563D9855CA51F_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_0 = ___l0;
		NullCheck((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0);
		((  void (*) (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ListPool_1_Get_mFA5B1FE71203BEA07EC99A8187CAFC9801601275_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ((  List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m13C60947514129CCE106341D6F821D7CC8CB7927_gshared (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_0 = ((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0);
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)L_0, (List_1_t749ADA5233D9B421293A000DCB83608A24C3D5D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Color32>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m6F6BB1DEAEBDCC1348DB47B9E0E10C0A1E36F68C_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D * L_0 = (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 * L_1 = (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tE4BDC8176A2B3887B4FFBD4271885668BE630A99 *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)NULL, (UnityAction_1_tE3DCD90F58E3904680E8CB55673236424DD51B9D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tFB4F0894A1EF21042E633BD1514A9258601CB1F1_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mCA5F9E34875E7BE7BF5093AA41CB68AA14782B9A_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_0 = ___l0;
		NullCheck((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0);
		((  void (*) (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ListPool_1_Get_m269C301744C63E55CDD01465B1BDCD0FA9802244_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ((  List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m6653E07E399B9C444F12BEEE866B60F2F99F8D69_gshared (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_0 = ((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0);
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)L_0, (List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.UIVertex>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_mB9695B98AC5B1F1D1A9B8E899684DAECA74B5E8C_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A * L_0 = (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 * L_1 = (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t8D674BD57F5334E4FE67AD2DDD17ACBC77A451B1 *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)NULL, (UnityAction_1_t81CC8066FFA7C46AA839E5C8548255B1E557F95A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tC140413ABBDAF87428D43AA5EFDD842394341CF6_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m3C051B0DE1D02A52725D7579945480EED3C9FE8E_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_0 = ___l0;
		NullCheck((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0);
		((  void (*) (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ListPool_1_Get_m11B7B6B7B0A7397CE137967BD7B5DE5A89B50FD0_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ((  List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mE0437FA6DA0DDBF3E142087FD60E5C1546D00378_gshared (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_0 = ((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0);
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)L_0, (List_1_t0737D51EB43DAAA1BDC9C2B83B393A4B9B9BE8EB *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector2>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m72914A2BE483C25F9A1F466683250D88B2E3CE07_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C * L_0 = (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 * L_1 = (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_t960C46814C671925E8CB6557536B6B66F99564B1 *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)NULL, (UnityAction_1_t8A73E5E38CB0B8D4007EC6DF30D9825B34363F0C *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tEC2CD2FE52DC3A8B1F3E2BF498E60420B6ABDDF8_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_mAB96DA37D0FB4B06F1603AA1070DD09866B3B220_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___l0;
		NullCheck((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0);
		((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ListPool_1_Get_m37FA5515EC4738DA642BD39C6776AAD939257066_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ((  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_mEEEA52258097A3C1D70BCA0C1E44F2FE2D7FA5F0_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_0 = ((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0);
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)L_0, (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector3>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m9BC9B0BFB33F3DF6E196D870C49E7D8227EDA837_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 * L_0 = (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 * L_1 = (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tA4C9CCD24A9F4C28D9498D1314367B3E35B4EE49 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)NULL, (UnityAction_1_t1774CF29AA6EF9D1D2B15FDF2C1A13C8B4A3A239 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_t5E8D36B177BEE61E319DF7927E463DFBAC58E09D_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Clear(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Clear_m548445516D0160B74B6DD63031666DFF0A8D0047_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___l0, const RuntimeMethod* method)
{
	{
		// static void Clear(List<T> l) { l.Clear(); }
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_0 = ___l0;
		NullCheck((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0);
		((  void (*) (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// static void Clear(List<T> l) { l.Clear(); }
		return;
	}
}
// System.Collections.Generic.List`1<T> UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ListPool_1_Get_mFF001445D71845169AA17846983938A308ABCBEB_gshared (const RuntimeMethod* method)
{
	{
		// return s_ListPool.Get();
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ((  List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::Release(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1_Release_m9C3BDAB2B2F59B29C028861D014CDFABA3B7F648_gshared (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * ___toRelease0, const RuntimeMethod* method)
{
	{
		// s_ListPool.Release(toRelease);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_0 = ((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->get_s_ListPool_0();
		List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 * L_1 = ___toRelease0;
		NullCheck((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0);
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)L_0, (List_1_tFF4005B40E5BA433006DA11C56DB086B1E2FC955 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.UI.ListPool`1<UnityEngine.Vector4>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPool_1__cctor_m672E25A57B4521532BFB0CC9717C346E57B88DFD_gshared (const RuntimeMethod* method)
{
	{
		// private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, Clear);
		UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 * L_0 = (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		((  void (*) (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, RuntimeObject *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)(L_0, (RuntimeObject *)NULL, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 * L_1 = (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (ObjectPool_1_tAB501182C8C0328D82184BBD0435CC6D6767BA54 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(L_1, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)NULL, (UnityAction_1_t1FE626F17578115700E45769612596C6BD6C1D76 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		((ListPool_1_tD46C00F7C693AF94203B6B004906149A661AA540_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->set_s_ListPool_0(L_1);
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
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countAll_mC773F09A80F4F0FE9AF2A3831AF76CCBED566D3F_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CcountAllU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_countAll_mAF458EE2DD8B26D48576D0FFA139136AAA5180BF_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int countAll { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CcountAllU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countActive_m4730514BD98185504151694E8E8DF02A52AF1576_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countActive { get { return countAll - countInactive; } }
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		int32_t L_0 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		int32_t L_1 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_countInactive_mDD0DBF2D2FAD68149708F5443A79FD27D6285D11_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	{
		// public int countInactive { get { return m_Stack.Count; } }
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m5A29AD1D0B7DD5C4F207B1659FF168D4BF7C0D01_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnGet0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___actionOnRelease1, const RuntimeMethod* method)
{
	{
		// private readonly Stack<T> m_Stack = new Stack<T>();
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_m_Stack_0(L_0);
		// public ObjectPool(UnityAction<T> actionOnGet, UnityAction<T> actionOnRelease)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		// m_ActionOnGet = actionOnGet;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___actionOnGet0;
		__this->set_m_ActionOnGet_1(L_1);
		// m_ActionOnRelease = actionOnRelease;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___actionOnRelease1;
		__this->set_m_ActionOnRelease_2(L_2);
		// }
		return;
	}
}
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m6478DC644CCD8FE64CF24AF5490B2E1054FB4F78_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (m_Stack.Count == 0)
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// element = new T();
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_2;
		// countAll++;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		int32_t L_3 = ((  int32_t (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_1 = (int32_t)L_3;
		int32_t L_4 = V_1;
		NullCheck((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this);
		((  void (*) (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 *)__this, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// }
		goto IL_0031;
	}

IL_0025:
	{
		// element = m_Stack.Pop();
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_5 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		V_0 = (RuntimeObject *)L_6;
	}

IL_0031:
	{
		// if (m_ActionOnGet != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		// m_ActionOnGet(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnGet_1();
		RuntimeObject * L_9 = V_0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0045:
	{
		// return element;
		RuntimeObject * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_gshared (ObjectPool_1_t5BE4172BA33477BCA8E88EF395C26D7558DEB7E9 * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_mC1D66E968E7A04252A79426F4F2D45ED0F292B86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Stack.Count > 0 && ReferenceEquals(m_Stack.Peek(), element))
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_0 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_2 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject * L_4 = ___element0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError("Internal error. Trying to destroy object that is already released to pool.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (m_ActionOnRelease != null)
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// m_ActionOnRelease(element);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_m_ActionOnRelease_2();
		RuntimeObject * L_7 = ___element0;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0044:
	{
		// m_Stack.Push(element);
		Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * L_8 = (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)__this->get_m_Stack_0();
		RuntimeObject * L_9 = ___element0;
		NullCheck((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8);
		((  void (*) (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method)
{
	{
		// public NetworkInstanceId netId { get { return m_NetId; } }
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_0 = __this->get_m_NetId_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mF935C53CA27D67D47AE0021A0DB8D92C392EF56B_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float ColorTween_get_duration_m7E952A00A8A606D7886422812EFB24A6D5BFB508_inline (ColorTween_t4CBBF5875FA391053DB62E98D8D9603040413228 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8281CB2B12F1697A512D2E2515F5DA058B429FD0_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreTimeScale; }
		bool L_0 = __this->get_m_IgnoreTimeScale_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float FloatTween_get_duration_m17CD4518038CD642D714B3633236133D309EF13B_inline (FloatTween_tF6BB24C266F36BD80E20C91AED453F7CE516919A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Duration; }
		float L_0 = __this->get_m_Duration_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE45B4CA6E59779B4D2FE9C466E5A4C97211D5726_gshared_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  List_1_get_Item_m3805FBD62245E7BE24C04A7AEA632703C72D674B_gshared_inline (List_1_t52BB19B82216178B5D36F8CD0AD000849D78932E * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197* L_2 = (IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197*)__this->get__items_1();
		int32_t L_3 = ___index0;
		IntervalTreeNode_t8B8DEA2E855E332B62B759E97E279495300C3FEF  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((IntervalTreeNodeU5BU5D_t27FF739284CA737E9F91025EB753925A51BD1197*)L_2, (int32_t)L_3);
		return L_4;
	}
}
