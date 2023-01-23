#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDirectionMapProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDirectionMapProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty_DEFINED)
#include <Modloader/app/structs/LightDirectionMapProperty__Fields.h>
#if defined(IL2CPP_STRUCT_LightDirectionMapProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDirectionMapProperty_DEFINED
struct LightDirectionMapProperty__Class;
struct LightDirectionMapProperty {
    struct LightDirectionMapProperty__Class* klass;
    MonitorData* monitor;
    struct LightDirectionMapProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty_FWDDECL)
#define IL2CPP_STRUCT_LightDirectionMapProperty_FWDDECL
#include <Modloader/app/structs/LightDirectionMapProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_LightDirectionMapProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty_DEFINED) && !defined(IL2CPP_STRUCT_LightDirectionMapProperty_FWDDECL)
#include <Modloader/app/structs/LightDirectionMapProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDirectionMapProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
