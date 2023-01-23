#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClothCage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClothCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClothCage_DEFINED)
#include <Modloader/app/structs/ClothCage__Fields.h>
#if defined(IL2CPP_STRUCT_ClothCage__Fields_DEFINED)
#define IL2CPP_STRUCT_ClothCage_DEFINED
struct ClothCage__Class;
struct ClothCage {
    struct ClothCage__Class* klass;
    MonitorData* monitor;
    struct ClothCage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClothCage_FWDDECL)
#define IL2CPP_STRUCT_ClothCage_FWDDECL
#include <Modloader/app/structs/ClothCage__Class.h>
#endif
#undef IL2CPP_STRUCT_ClothCage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClothCage_DEFINED) && !defined(IL2CPP_STRUCT_ClothCage_FWDDECL)
#include <Modloader/app/structs/ClothCage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClothCage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
