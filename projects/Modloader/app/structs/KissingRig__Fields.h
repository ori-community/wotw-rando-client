#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KissingRig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KissingRig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KissingRig__Fields_DEFINED
struct KissingRig_Partner;
struct KissingRig__Fields {
    struct MonoBehaviour__Fields _;
    struct KissingRig_Partner* partner1;
    struct KissingRig_Partner* partner2;
    float weight;
    int32_t iterations;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KissingRig__Fields_FWDDECL)
#define IL2CPP_STRUCT_KissingRig__Fields_FWDDECL
#include <Modloader/app/structs/KissingRig_Partner.h>
#endif
#undef IL2CPP_STRUCT_KissingRig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KissingRig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KissingRig__Fields_FWDDECL)
#include <Modloader/app/structs/KissingRig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KissingRig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
