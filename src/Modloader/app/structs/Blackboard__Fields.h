#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blackboard__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blackboard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blackboard__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Blackboard__Fields_DEFINED
struct Blackboard_BlackboardMoonTypes;
struct Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_;
struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_;
struct List_1_Moon_BehaviourSystem_BlackboardVariable_;
struct Blackboard__Fields {
    struct MonoBehaviour__Fields _;
    struct Blackboard_BlackboardMoonTypes* m_moonTypes;
    struct Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_* m_varDict;
    struct Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_* m_varDictById;
    struct List_1_Moon_BehaviourSystem_BlackboardVariable_* m_tempVariableList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Blackboard__Fields_FWDDECL)
#define IL2CPP_STRUCT_Blackboard__Fields_FWDDECL
#include <Modloader/app/structs/Blackboard_BlackboardMoonTypes.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_BehaviourSystem_BlackboardVariable_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BlackboardVariable_.h>
#endif
#undef IL2CPP_STRUCT_Blackboard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blackboard__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Blackboard__Fields_FWDDECL)
#include <Modloader/app/structs/Blackboard__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blackboard__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
