#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_DEFINED)
#include <Modloader/app/structs/ByRefUpdater__Fields.h>
#include <Modloader/app/structs/Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_.h>
#if defined(IL2CPP_STRUCT_ByRefUpdater__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition__DEFINED)
#define IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_DEFINED
struct MethodInfo_1;
struct LocalDefinition__Array;
struct IndexMethodByRefUpdater__Fields {
    struct ByRefUpdater__Fields _;
    struct MethodInfo_1* _indexer;
    struct Nullable_1_System_Linq_Expressions_Interpreter_LocalDefinition_ _obj;
    struct LocalDefinition__Array* _args;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_FWDDECL)
#define IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_FWDDECL
#include <Modloader/app/structs/LocalDefinition__Array.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#endif
#undef IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IndexMethodByRefUpdater__Fields_FWDDECL)
#include <Modloader/app/structs/IndexMethodByRefUpdater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexMethodByRefUpdater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
