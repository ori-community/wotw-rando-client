#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupBlock__Fields_DEFINED
struct EntityWithLineage;
struct EntityKey_5;
struct __declspec(align(8)) GroupBlock__Fields {
    struct EntityWithLineage* Entity;
    struct EntityKey_5* Group;
};
#endif
#if !defined(IL2CPP_STRUCT_GroupBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupBlock__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#include <Modloader/app/structs/EntityWithLineage.h>
#endif
#undef IL2CPP_STRUCT_GroupBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupBlock__Fields_FWDDECL)
#include <Modloader/app/structs/GroupBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
