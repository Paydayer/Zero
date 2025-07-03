#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct Dictionary_2_tF05918543C0BAB161343DF5A885F60CCB43CF408;
struct Dictionary_2_tC53819722189CEC79169C5668BD3E2AADBD5745E;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_tEF047571998AB7257C64E7EB83F2C24663DD928E;
struct Dictionary_2_tED4A08C2AC197D1663B91B0D3829C8256D2E1631;
struct FunctionPointer_t243B798809AE7A569F16E1535724BCB5FA4B5D7D;
struct GetFunctionPointer_tD3CC5D25F2484DCE46D9B2725CB14562AC6AEDED;
struct GetFunctionPointer_t83589E7613EF34A57CCE4C7353DDD5F71F80131B;
struct List_1_t08F80C705AAD1021C6BA05BF31D89B6104DFE04F;
struct List_1_t9EF3AD711458FCFCB381A6FBF1EAE2AA5691497C;
struct SetFunctionPointer_t59A0C9EB0BEC069A9FA04E5323210848F72F5BBF;
struct SetFunctionPointer_tE579194A4E202A74EEA75DE39CC341F2B8D91C3F;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C;
struct BehaviorTreeTask_t91DC4B4159C2EBF10A0F55BF66A6086993ABFBC0;
struct CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933;
struct IInstanceMember_t425648FB47BC659D23E1A3AFD4D799AAF73E7184;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IMethod_t956C8007106F2D5CB1B74FCB5234F1A1484283D7;
struct NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5;
struct String_t;
struct Variables_tFFD794697ED3AA7ACC73D7FFEC9B87838707236D;
struct CTagObjectDescriptor_tAAFA6C7BFD22FED856AE534D0ECFCBDFC11A9F3A;
struct U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB;
struct CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E;
struct FunctionPointer_t05A22809AC5A75DE364FC264E9EEDE553F8CEEE6;

IL2CPP_EXTERN_C RuntimeClass* AgentMeta_tCDBA6FB36AFF011CD5C935941AB09B8AB9E0F444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceMember_t425648FB47BC659D23E1A3AFD4D799AAF73E7184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentMeta_ParseProperty_TisIList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_m56FA0C43382A7C52B6F0CBAAFC19AB1B93AA6477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_RuntimeMethod_var;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C  : public RuntimeObject
{
	String_t* ___name;
	List_1_t08F80C705AAD1021C6BA05BF31D89B6104DFE04F* ___m_behaviorTreeTasks;
	List_1_t9EF3AD711458FCFCB381A6FBF1EAE2AA5691497C* ___m_btStack;
	BehaviorTreeTask_t91DC4B4159C2EBF10A0F55BF66A6086993ABFBC0* ___m_currentBT;
	BehaviorTreeTask_t91DC4B4159C2EBF10A0F55BF66A6086993ABFBC0* ___m_excutingTreeTask;
	int32_t ___m_id;
	bool ___m_bActive;
	bool ___m_referencetree;
	int32_t ___m_priority;
	int32_t ___m_contextId;
	uint32_t ___m_idFlag;
	String_t* ___m_debug_name;
	CTagObjectDescriptor_tAAFA6C7BFD22FED856AE534D0ECFCBDFC11A9F3A* ___m_objectDescriptor;
	Variables_tFFD794697ED3AA7ACC73D7FFEC9B87838707236D* ___m_variables;
	Dictionary_2_tED4A08C2AC197D1663B91B0D3829C8256D2E1631* ____members;
	int32_t ___m_debug_in_exec;
	int32_t ___m_debug_count;
};
struct CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933  : public RuntimeObject
{
	String_t* ____instance;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB  : public RuntimeObject
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5  : public Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C
{
	String_t* ___name;
	int32_t ___age;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D547_t667A2815FFC7A3D6FA98C26791FBE7803B845F7F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D547_t667A2815FFC7A3D6FA98C26791FBE7803B845F7F__padding[547];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D659_tA8AEF86FE4AD77DF5D5907B23B9E2429B5BD8D62 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D659_tA8AEF86FE4AD77DF5D5907B23B9E2429B5BD8D62__padding[659];
	};
};
#pragma pack(pop, tp)
struct CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E  : public CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933
{
	RuntimeObject* ____param0;
	RuntimeObject* ____param1;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D547_t667A2815FFC7A3D6FA98C26791FBE7803B845F7F ___6FD160987329C823426BD10E70F7C4A51DAD2773E7FF44903A576D9738823799;
	__StaticArrayInitTypeSizeU3D659_tA8AEF86FE4AD77DF5D5907B23B9E2429B5BD8D62 ___80F35331EC08BE2B2038A13BA24ACF875B6582E6542C8B871DCFAE8348FB7BBC;
};
struct Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_StaticFields
{
	Dictionary_2_tC53819722189CEC79169C5668BD3E2AADBD5745E* ___ms_agents;
	uint32_t ___ms_idMask;
	int32_t ___ms_agent_index;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___ms_agent_type_index;
	Dictionary_2_tEF047571998AB7257C64E7EB83F2C24663DD928E* ___ms_names;
	Dictionary_2_tF05918543C0BAB161343DF5A885F60CCB43CF408* ___ms_metas;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_StaticFields
{
	U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* ___U3CU3E9;
	FunctionPointer_t243B798809AE7A569F16E1535724BCB5FA4B5D7D* ___U3CU3E9__5_0;
	SetFunctionPointer_t59A0C9EB0BEC069A9FA04E5323210848F72F5BBF* ___U3CU3E9__5_1;
	GetFunctionPointer_tD3CC5D25F2484DCE46D9B2725CB14562AC6AEDED* ___U3CU3E9__5_2;
	SetFunctionPointer_tE579194A4E202A74EEA75DE39CC341F2B8D91C3F* ___U3CU3E9__5_3;
	GetFunctionPointer_t83589E7613EF34A57CCE4C7353DDD5F71F80131B* ___U3CU3E9__5_4;
	FunctionPointer_t243B798809AE7A569F16E1535724BCB5FA4B5D7D* ___U3CU3E9__5_5;
	FunctionPointer_t05A22809AC5A75DE364FC264E9EEDE553F8CEEE6* ___U3CU3E9__5_6;
	FunctionPointer_t05A22809AC5A75DE364FC264E9EEDE553F8CEEE6* ___U3CU3E9__5_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_gshared (String_t* ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAgentMethodVoidBase__ctor_mEEC2B2E04BF3AC6073A11EFB763FA72C3009FF27 (CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAgentMethodVoidBase__ctor_m6A13EC02440602AB8527260EFA7A8FE2C07BC94C (CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933* __this, CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933* ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMethod_behaviac_Agent_VectorRemove__ctor_mCFFBE4B9F21E2AC65995A201D884762445EFB479 (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* ___0_rhs, const RuntimeMethod* method) ;
inline RuntimeObject* AgentMeta_ParseProperty_TisIList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_m56FA0C43382A7C52B6F0CBAAFC19AB1B93AA6477 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, const RuntimeMethod*))AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_gshared)(___0_value, method);
}
inline RuntimeObject* AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, const RuntimeMethod*))AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_gshared)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_VectorRemove_m6E69C9A40E994787F80DCD5716932503B04B02B8 (RuntimeObject* ___0_vector, RuntimeObject* ___1_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB32D1AF2197AE48671764EDCFE33076F91DC000 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_LogMessage_m459744AC483CB8B5CD4B32D06090ECEB12338E41 (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewAgent_SayAge_mD4C711414595D0F461AAC003A92835D41A5C4DF3 (NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewAgent_SayName_m304C41A8FDE169E61B805ADA2D9801C7BEAE560A (NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMethod_behaviac_Agent_VectorRemove__ctor_m9080C654E30735DE4217AA0DBFC4210CE68C6A4D (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, const RuntimeMethod* method) 
{
	{
		CAgentMethodVoidBase__ctor_mEEC2B2E04BF3AC6073A11EFB763FA72C3009FF27(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMethod_behaviac_Agent_VectorRemove__ctor_mCFFBE4B9F21E2AC65995A201D884762445EFB479 (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* ___0_rhs, const RuntimeMethod* method) 
{
	{
		CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* L_0 = ___0_rhs;
		CAgentMethodVoidBase__ctor_m6A13EC02440602AB8527260EFA7A8FE2C07BC94C(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CMethod_behaviac_Agent_VectorRemove_Clone_mE7A60DE7E47C23F3B42F9615A7654FBC42F0A188 (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* L_0 = (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E*)il2cpp_codegen_object_new(CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E_il2cpp_TypeInfo_var);
		CMethod_behaviac_Agent_VectorRemove__ctor_mCFFBE4B9F21E2AC65995A201D884762445EFB479(L_0, __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMethod_behaviac_Agent_VectorRemove_Load_mFA0ED68913627C3469AF7B4BACB0A7EF2B2E79B8 (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, String_t* ___0_instance, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_paramStrs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentMeta_ParseProperty_TisIList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_m56FA0C43382A7C52B6F0CBAAFC19AB1B93AA6477_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentMeta_tCDBA6FB36AFF011CD5C935941AB09B8AB9E0F444_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_instance;
		((CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933*)__this)->____instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CAgentMethodVoidBase_t7D89B89498FC6EAB6A19A548112FBB09AFBED933*)__this)->____instance), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___1_paramStrs;
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(AgentMeta_tCDBA6FB36AFF011CD5C935941AB09B8AB9E0F444_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = AgentMeta_ParseProperty_TisIList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_m56FA0C43382A7C52B6F0CBAAFC19AB1B93AA6477(L_3, AgentMeta_ParseProperty_TisIList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_m56FA0C43382A7C52B6F0CBAAFC19AB1B93AA6477_RuntimeMethod_var);
		__this->____param0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____param0), (void*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___1_paramStrs;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8;
		L_8 = AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34(L_7, AgentMeta_ParseProperty_TisRuntimeObject_m43AE624454BF3B71ACE08DF50C98895ED9152C34_RuntimeMethod_var);
		__this->____param1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____param1), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMethod_behaviac_Agent_VectorRemove_Run_m751BD91FADED64768354CA7B53438DF5591106F8 (CMethod_behaviac_Agent_VectorRemove_t12464B442E336DEF1BB1D641E5DD1878C033ED1E* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceMember_t425648FB47BC659D23E1A3AFD4D799AAF73E7184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____param0;
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_1 = ___0_self;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* >::Invoke(2, IInstanceMember_t425648FB47BC659D23E1A3AFD4D799AAF73E7184_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_3 = __this->____param1;
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_4 = ___0_self;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* >::Invoke(2, IInstanceMember_t425648FB47BC659D23E1A3AFD4D799AAF73E7184_il2cpp_TypeInfo_var, L_3, L_4);
		il2cpp_codegen_runtime_class_init_inline(Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		Agent_VectorRemove_m6E69C9A40E994787F80DCD5716932503B04B02B8(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), L_5, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9697F663366A53D7159D9B1C3E5AD879E0CA1669 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* L_0 = (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB*)il2cpp_codegen_object_new(U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDB32D1AF2197AE48671764EDCFE33076F91DC000(L_0, NULL);
		((U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDB32D1AF2197AE48671764EDCFE33076F91DC000 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_0_m68F84DD408F7A13E4FDA1B32BF75BB1954F7F0EF (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, String_t* ___0_param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_param0;
		il2cpp_codegen_runtime_class_init_inline(Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		Agent_LogMessage_m459744AC483CB8B5CD4B32D06090ECEB12338E41(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_1_m69E92357FAF7615FDFF71C8B1587FB4878698950 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		int32_t L_1 = ___1_value;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var))->___age = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CLoadU3Eb__5_2_m024BF03A64CCD395A355E00A66F8DC9C04456C07 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		int32_t L_1 = ((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var))->___age;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_3_mFF022CC72DCC40C9A791B4BE639A483779FADDB6 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		String_t* L_1 = ___1_value;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var))->___name = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var))->___name), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CLoadU3Eb__5_4_m82530B29BD61E621AB39B5D710C57213700A6889 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		String_t* L_1 = ((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var))->___name;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_5_m90810FB1326A29F6AD22CA3BBA154E8189785BD4 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, String_t* ___0_param0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_param0;
		il2cpp_codegen_runtime_class_init_inline(Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C_il2cpp_TypeInfo_var);
		Agent_LogMessage_m459744AC483CB8B5CD4B32D06090ECEB12338E41(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_6_mFC09442B2D3D6935F3D5F4E7264ECE38E5BF5C69 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		NewAgent_SayAge_mD4C711414595D0F461AAC003A92835D41A5C4DF3(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CLoadU3Eb__5_7_m603A7EB4BE50C3E0E2C5BD40A5F5155E30F74D87 (U3CU3Ec_t1789E14E0D2273769BBBB0B781504A40F89138BB* __this, Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Agent_t53C6A33A328AC359F8E12CCE7CA4BDD9E56C4A0C* L_0 = ___0_self;
		NullCheck(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)));
		NewAgent_SayName_m304C41A8FDE169E61B805ADA2D9801C7BEAE560A(((NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5*)CastclassClass((RuntimeObject*)L_0, NewAgent_t11DD92037A45EA7BC0B4A1D6109A206A9B335AE5_il2cpp_TypeInfo_var)), NULL);
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
