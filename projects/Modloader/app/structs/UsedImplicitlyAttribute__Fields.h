#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_DEFINED)
#include <Modloader/app/structs/ImplicitUseKindFlags__Enum.h>
#include <Modloader/app/structs/ImplicitUseTargetFlags__Enum.h>
#if defined(IL2CPP_STRUCT_ImplicitUseKindFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_ImplicitUseTargetFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_DEFINED
struct __declspec(align(8)) UsedImplicitlyAttribute__Fields {
    ImplicitUseKindFlags__Enum _UseKindFlags_k__BackingField;

    ImplicitUseTargetFlags__Enum _TargetFlags_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/UsedImplicitlyAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UsedImplicitlyAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
