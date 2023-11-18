#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VintageFast__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VintageFast__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VintageFast__Fields_DEFINED)
#include <Modloader/app/structs/LookupFilter3D__Fields.h>
#include <Modloader/app/structs/Vintage_InstragramFilter__Enum.h>
#if defined(IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vintage_InstragramFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_VintageFast__Fields_DEFINED
struct VintageFast__Fields {
    struct LookupFilter3D__Fields _;
    Vintage_InstragramFilter__Enum Filter;

    Vintage_InstragramFilter__Enum m_CurrentFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VintageFast__Fields_FWDDECL)
#define IL2CPP_STRUCT_VintageFast__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VintageFast__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VintageFast__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VintageFast__Fields_FWDDECL)
#include <Modloader/app/structs/VintageFast__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VintageFast__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
