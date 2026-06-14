#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatter_DEFINED)
#define IL2CPP_STRUCT_IFormatter_DEFINED
struct IFormatter__Class;
struct IFormatter {
    struct IFormatter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFormatter_FWDDECL)
#define IL2CPP_STRUCT_IFormatter_FWDDECL
#include <Modloader/app/structs/IFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_IFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatter_DEFINED) && !defined(IL2CPP_STRUCT_IFormatter_FWDDECL)
#include <Modloader/app/structs/IFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
