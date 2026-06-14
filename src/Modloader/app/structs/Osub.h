#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Osub_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Osub_INITIALIZING
#if !defined(IL2CPP_STRUCT_Osub_DEFINED)
#define IL2CPP_STRUCT_Osub_DEFINED
struct SubSegment;
struct Osub {
    struct SubSegment* seg;
    int32_t orient;
};
#endif
#if !defined(IL2CPP_STRUCT_Osub_FWDDECL)
#define IL2CPP_STRUCT_Osub_FWDDECL
#include <Modloader/app/structs/SubSegment.h>
#endif
#undef IL2CPP_STRUCT_Osub_INITIALIZING
#if !defined(IL2CPP_STRUCT_Osub_DEFINED) && !defined(IL2CPP_STRUCT_Osub_FWDDECL)
#include <Modloader/app/structs/Osub.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Osub.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
