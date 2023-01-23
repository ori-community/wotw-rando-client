#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEquipableOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEquipableOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEquipableOwner_DEFINED)
#define IL2CPP_STRUCT_IEquipableOwner_DEFINED
struct IEquipableOwner__Class;
struct IEquipableOwner {
    struct IEquipableOwner__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEquipableOwner_FWDDECL)
#define IL2CPP_STRUCT_IEquipableOwner_FWDDECL
#include <Modloader/app/structs/IEquipableOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_IEquipableOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEquipableOwner_DEFINED) && !defined(IL2CPP_STRUCT_IEquipableOwner_FWDDECL)
#include <Modloader/app/structs/IEquipableOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEquipableOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
