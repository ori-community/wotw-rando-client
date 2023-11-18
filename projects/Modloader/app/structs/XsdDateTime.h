#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDateTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_XsdDateTime_DEFINED
struct XsdDateTime {
    struct DateTime dt;
    uint32_t extra;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdDateTime_FWDDECL)
#define IL2CPP_STRUCT_XsdDateTime_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdDateTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTime_DEFINED) && !defined(IL2CPP_STRUCT_XsdDateTime_FWDDECL)
#include <Modloader/app/structs/XsdDateTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDateTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
