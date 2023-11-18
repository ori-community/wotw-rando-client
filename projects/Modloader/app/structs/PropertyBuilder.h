#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyBuilder_DEFINED)
#define IL2CPP_STRUCT_PropertyBuilder_DEFINED
struct PropertyBuilder__Class;
struct PropertyBuilder {
    struct PropertyBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyBuilder_FWDDECL)
#define IL2CPP_STRUCT_PropertyBuilder_FWDDECL
#include <Modloader/app/structs/PropertyBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyBuilder_DEFINED) && !defined(IL2CPP_STRUCT_PropertyBuilder_FWDDECL)
#include <Modloader/app/structs/PropertyBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
