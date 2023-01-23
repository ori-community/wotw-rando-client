#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDynamicProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDynamicProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicProperty_DEFINED)
#define IL2CPP_STRUCT_IDynamicProperty_DEFINED
struct IDynamicProperty__Class;
struct IDynamicProperty {
    struct IDynamicProperty__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDynamicProperty_FWDDECL)
#define IL2CPP_STRUCT_IDynamicProperty_FWDDECL
#include <Modloader/app/structs/IDynamicProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_IDynamicProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDynamicProperty_DEFINED) && !defined(IL2CPP_STRUCT_IDynamicProperty_FWDDECL)
#include <Modloader/app/structs/IDynamicProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDynamicProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
