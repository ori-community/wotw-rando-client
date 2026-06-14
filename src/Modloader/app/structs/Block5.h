#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Block5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Block5_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block5_DEFINED)
#include <Modloader/app/structs/Block5__Fields.h>
#if defined(IL2CPP_STRUCT_Block5__Fields_DEFINED)
#define IL2CPP_STRUCT_Block5_DEFINED
struct Block5__Class;
struct Block5 {
    struct Block5__Class* klass;
    MonitorData* monitor;
    struct Block5__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Block5_FWDDECL)
#define IL2CPP_STRUCT_Block5_FWDDECL
#include <Modloader/app/structs/Block5__Class.h>
#endif
#undef IL2CPP_STRUCT_Block5_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block5_DEFINED) && !defined(IL2CPP_STRUCT_Block5_FWDDECL)
#include <Modloader/app/structs/Block5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Block5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
