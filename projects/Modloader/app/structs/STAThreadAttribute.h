#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_STAThreadAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_STAThreadAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_STAThreadAttribute_DEFINED)
#define IL2CPP_STRUCT_STAThreadAttribute_DEFINED
struct STAThreadAttribute__Class;
struct STAThreadAttribute {
    struct STAThreadAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_STAThreadAttribute_FWDDECL)
#define IL2CPP_STRUCT_STAThreadAttribute_FWDDECL
#include <Modloader/app/structs/STAThreadAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_STAThreadAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_STAThreadAttribute_DEFINED) && !defined(IL2CPP_STRUCT_STAThreadAttribute_FWDDECL)
#include <Modloader/app/structs/STAThreadAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/STAThreadAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
