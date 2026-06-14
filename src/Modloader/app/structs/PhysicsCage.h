#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsCage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage_DEFINED)
#include <Modloader/app/structs/PhysicsCage__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsCage__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsCage_DEFINED
struct PhysicsCage__Class;
struct PhysicsCage {
    struct PhysicsCage__Class* klass;
    MonitorData* monitor;
    struct PhysicsCage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsCage_FWDDECL)
#define IL2CPP_STRUCT_PhysicsCage_FWDDECL
#include <Modloader/app/structs/PhysicsCage__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsCage_FWDDECL)
#include <Modloader/app/structs/PhysicsCage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsCage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
