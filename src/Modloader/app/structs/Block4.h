#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Block4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Block4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block4_DEFINED)
#include <Modloader/app/structs/Block4__Fields.h>
#if defined(IL2CPP_STRUCT_Block4__Fields_DEFINED)
#define IL2CPP_STRUCT_Block4_DEFINED
struct Block4__Class;
struct Block4 {
    struct Block4__Class* klass;
    MonitorData* monitor;
    struct Block4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Block4_FWDDECL)
#define IL2CPP_STRUCT_Block4_FWDDECL
#include <Modloader/app/structs/Block4__Class.h>
#endif
#undef IL2CPP_STRUCT_Block4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Block4_DEFINED) && !defined(IL2CPP_STRUCT_Block4_FWDDECL)
#include <Modloader/app/structs/Block4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Block4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
