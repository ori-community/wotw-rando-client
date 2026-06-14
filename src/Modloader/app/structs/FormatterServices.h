#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatterServices_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatterServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterServices_DEFINED)
#define IL2CPP_STRUCT_FormatterServices_DEFINED
struct FormatterServices__Class;
struct FormatterServices {
    struct FormatterServices__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatterServices_FWDDECL)
#define IL2CPP_STRUCT_FormatterServices_FWDDECL
#include <Modloader/app/structs/FormatterServices__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatterServices_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterServices_DEFINED) && !defined(IL2CPP_STRUCT_FormatterServices_FWDDECL)
#include <Modloader/app/structs/FormatterServices.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatterServices.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
