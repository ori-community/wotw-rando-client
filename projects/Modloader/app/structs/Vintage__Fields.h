#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vintage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vintage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vintage__Fields_DEFINED)
#include <Modloader/app/structs/LookupFilter__Fields.h>
#include <Modloader/app/structs/Vintage_InstragramFilter__Enum.h>
#if defined(IL2CPP_STRUCT_LookupFilter__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vintage_InstragramFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_Vintage__Fields_DEFINED
struct Vintage__Fields {
    struct LookupFilter__Fields _;
    Vintage_InstragramFilter__Enum Filter;

    Vintage_InstragramFilter__Enum m_CurrentFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vintage__Fields_FWDDECL)
#define IL2CPP_STRUCT_Vintage__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Vintage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vintage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Vintage__Fields_FWDDECL)
#include <Modloader/app/structs/Vintage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vintage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
