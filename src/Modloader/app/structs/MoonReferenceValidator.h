#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonReferenceValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonReferenceValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReferenceValidator_DEFINED)
#define IL2CPP_STRUCT_MoonReferenceValidator_DEFINED
struct MoonReferenceValidator__Class;
struct MoonReferenceValidator {
    struct MoonReferenceValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonReferenceValidator_FWDDECL)
#define IL2CPP_STRUCT_MoonReferenceValidator_FWDDECL
#include <Modloader/app/structs/MoonReferenceValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonReferenceValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReferenceValidator_DEFINED) && !defined(IL2CPP_STRUCT_MoonReferenceValidator_FWDDECL)
#include <Modloader/app/structs/MoonReferenceValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonReferenceValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
