#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Block2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Block2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block2_DEFINED)
#include <Modloader/app/structs/Block2__Fields.h>
#if defined(IL2CPP_STRUCT_Block2__Fields_DEFINED)
#define IL2CPP_STRUCT_Block2_DEFINED
struct Block2__Class;
struct Block2 {
    struct Block2__Class* klass;
    MonitorData* monitor;
    struct Block2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Block2_FWDDECL)
#define IL2CPP_STRUCT_Block2_FWDDECL
#include <Modloader/app/structs/Block2__Class.h>
#endif
#undef IL2CPP_STRUCT_Block2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block2_DEFINED) && !defined(IL2CPP_STRUCT_Block2_FWDDECL)
#include <Modloader/app/structs/Block2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Block2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
