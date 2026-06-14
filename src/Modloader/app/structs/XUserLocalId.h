#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XUserLocalId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XUserLocalId_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserLocalId_DEFINED)
#define IL2CPP_STRUCT_XUserLocalId_DEFINED
struct XUserLocalId {
    uint64_t value;
};
#endif
#if !defined(IL2CPP_STRUCT_XUserLocalId_FWDDECL)
#define IL2CPP_STRUCT_XUserLocalId_FWDDECL
#endif
#undef IL2CPP_STRUCT_XUserLocalId_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserLocalId_DEFINED) && !defined(IL2CPP_STRUCT_XUserLocalId_FWDDECL)
#include <Modloader/app/structs/XUserLocalId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XUserLocalId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
