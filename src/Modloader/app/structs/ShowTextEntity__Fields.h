#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowTextEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextEntity__Fields_DEFINED)
#include <Modloader/app/structs/ShowFixedTimeTextEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowTextEntity__Fields_DEFINED
struct ShowTextEntity__Fields {
    struct ShowFixedTimeTextEntity__Fields _;
    bool AllowSkippingLines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowTextEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowTextEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShowTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowTextEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ShowTextEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowTextEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
