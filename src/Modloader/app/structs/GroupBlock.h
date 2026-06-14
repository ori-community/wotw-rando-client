#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock_DEFINED)
#include <Modloader/app/structs/GroupBlock__Fields.h>
#if defined(IL2CPP_STRUCT_GroupBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupBlock_DEFINED
struct GroupBlock__Class;
struct GroupBlock {
    struct GroupBlock__Class* klass;
    MonitorData* monitor;
    struct GroupBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupBlock_FWDDECL)
#define IL2CPP_STRUCT_GroupBlock_FWDDECL
#include <Modloader/app/structs/GroupBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupBlock_DEFINED) && !defined(IL2CPP_STRUCT_GroupBlock_FWDDECL)
#include <Modloader/app/structs/GroupBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
