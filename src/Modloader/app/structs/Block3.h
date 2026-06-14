#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Block3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Block3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block3_DEFINED)
#include <Modloader/app/structs/Block3__Fields.h>
#if defined(IL2CPP_STRUCT_Block3__Fields_DEFINED)
#define IL2CPP_STRUCT_Block3_DEFINED
struct Block3__Class;
struct Block3 {
    struct Block3__Class* klass;
    MonitorData* monitor;
    struct Block3__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Block3_FWDDECL)
#define IL2CPP_STRUCT_Block3_FWDDECL
#include <Modloader/app/structs/Block3__Class.h>
#endif
#undef IL2CPP_STRUCT_Block3_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block3_DEFINED) && !defined(IL2CPP_STRUCT_Block3_FWDDECL)
#include <Modloader/app/structs/Block3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Block3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
