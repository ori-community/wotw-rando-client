#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitStack_DEFINED)
#include <Modloader/app/structs/BitStack__Fields.h>
#if defined(IL2CPP_STRUCT_BitStack__Fields_DEFINED)
#define IL2CPP_STRUCT_BitStack_DEFINED
struct BitStack__Class;
struct BitStack {
    struct BitStack__Class* klass;
    MonitorData* monitor;
    struct BitStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitStack_FWDDECL)
#define IL2CPP_STRUCT_BitStack_FWDDECL
#include <Modloader/app/structs/BitStack__Class.h>
#endif
#undef IL2CPP_STRUCT_BitStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitStack_DEFINED) && !defined(IL2CPP_STRUCT_BitStack_FWDDECL)
#include <Modloader/app/structs/BitStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
