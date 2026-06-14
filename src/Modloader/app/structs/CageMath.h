#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageMath_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageMath_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageMath_DEFINED)
#include <Modloader/app/structs/CageMath__Fields.h>
#if defined(IL2CPP_STRUCT_CageMath__Fields_DEFINED)
#define IL2CPP_STRUCT_CageMath_DEFINED
struct CageMath__Class;
struct CageMath {
    struct CageMath__Class* klass;
    MonitorData* monitor;
    struct CageMath__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageMath_FWDDECL)
#define IL2CPP_STRUCT_CageMath_FWDDECL
#include <Modloader/app/structs/CageMath__Class.h>
#endif
#undef IL2CPP_STRUCT_CageMath_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageMath_DEFINED) && !defined(IL2CPP_STRUCT_CageMath_FWDDECL)
#include <Modloader/app/structs/CageMath.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageMath.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
