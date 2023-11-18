#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyBuilder_DEFINED)
#define IL2CPP_STRUCT_KeyBuilder_DEFINED
struct KeyBuilder__Class;
struct KeyBuilder {
    struct KeyBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyBuilder_FWDDECL)
#define IL2CPP_STRUCT_KeyBuilder_FWDDECL
#include <Modloader/app/structs/KeyBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyBuilder_DEFINED) && !defined(IL2CPP_STRUCT_KeyBuilder_FWDDECL)
#include <Modloader/app/structs/KeyBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
