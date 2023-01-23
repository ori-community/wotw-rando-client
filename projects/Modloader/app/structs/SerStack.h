#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerStack_DEFINED)
#include <Modloader/app/structs/SerStack__Fields.h>
#if defined(IL2CPP_STRUCT_SerStack__Fields_DEFINED)
#define IL2CPP_STRUCT_SerStack_DEFINED
struct SerStack__Class;
struct SerStack {
    struct SerStack__Class* klass;
    MonitorData* monitor;
    struct SerStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerStack_FWDDECL)
#define IL2CPP_STRUCT_SerStack_FWDDECL
#include <Modloader/app/structs/SerStack__Class.h>
#endif
#undef IL2CPP_STRUCT_SerStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerStack_DEFINED) && !defined(IL2CPP_STRUCT_SerStack_FWDDECL)
#include <Modloader/app/structs/SerStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
