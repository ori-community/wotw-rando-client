#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Normalization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Normalization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Normalization_DEFINED)
#define IL2CPP_STRUCT_Normalization_DEFINED
struct Normalization__Class;
struct Normalization {
    struct Normalization__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Normalization_FWDDECL)
#define IL2CPP_STRUCT_Normalization_FWDDECL
#include <Modloader/app/structs/Normalization__Class.h>
#endif
#undef IL2CPP_STRUCT_Normalization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Normalization_DEFINED) && !defined(IL2CPP_STRUCT_Normalization_FWDDECL)
#include <Modloader/app/structs/Normalization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Normalization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
