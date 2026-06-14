#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisabledProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisabledProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisabledProperty_DEFINED)
#define IL2CPP_STRUCT_DisabledProperty_DEFINED
struct DisabledProperty__Class;
struct DisabledProperty {
    struct DisabledProperty__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DisabledProperty_FWDDECL)
#define IL2CPP_STRUCT_DisabledProperty_FWDDECL
#include <Modloader/app/structs/DisabledProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_DisabledProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisabledProperty_DEFINED) && !defined(IL2CPP_STRUCT_DisabledProperty_FWDDECL)
#include <Modloader/app/structs/DisabledProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisabledProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
