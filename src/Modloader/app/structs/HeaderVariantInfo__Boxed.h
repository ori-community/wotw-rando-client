#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderVariantInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderVariantInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo__Boxed_DEFINED)
#include <Modloader/app/structs/HeaderVariantInfo.h>
#if defined(IL2CPP_STRUCT_HeaderVariantInfo_DEFINED)
#define IL2CPP_STRUCT_HeaderVariantInfo__Boxed_DEFINED
struct HeaderVariantInfo__Class;
struct HeaderVariantInfo__Boxed {
    struct HeaderVariantInfo__Class* klass;
    MonitorData* monitor;
    struct HeaderVariantInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HeaderVariantInfo__Boxed_FWDDECL
#include <Modloader/app/structs/HeaderVariantInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderVariantInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HeaderVariantInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/HeaderVariantInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderVariantInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
