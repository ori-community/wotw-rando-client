#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRange_DEFINED)
#define IL2CPP_STRUCT_CFRange_DEFINED
struct CFRange {
    void* Location;
    void* Length;
};
#endif
#if !defined(IL2CPP_STRUCT_CFRange_FWDDECL)
#define IL2CPP_STRUCT_CFRange_FWDDECL
#endif
#undef IL2CPP_STRUCT_CFRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFRange_DEFINED) && !defined(IL2CPP_STRUCT_CFRange_FWDDECL)
#include <Modloader/app/structs/CFRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
