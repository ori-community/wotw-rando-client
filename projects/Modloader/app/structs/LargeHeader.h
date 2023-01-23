#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LargeHeader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LargeHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeHeader_DEFINED)
#include <Modloader/app/structs/LargeHeader__Fields.h>
#if defined(IL2CPP_STRUCT_LargeHeader__Fields_DEFINED)
#define IL2CPP_STRUCT_LargeHeader_DEFINED
struct LargeHeader__Class;
struct LargeHeader {
    struct LargeHeader__Class* klass;
    MonitorData* monitor;
    struct LargeHeader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LargeHeader_FWDDECL)
#define IL2CPP_STRUCT_LargeHeader_FWDDECL
#include <Modloader/app/structs/LargeHeader__Class.h>
#endif
#undef IL2CPP_STRUCT_LargeHeader_INITIALIZING
#if !defined(IL2CPP_STRUCT_LargeHeader_DEFINED) && !defined(IL2CPP_STRUCT_LargeHeader_FWDDECL)
#include <Modloader/app/structs/LargeHeader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LargeHeader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
