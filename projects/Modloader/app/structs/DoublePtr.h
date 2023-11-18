#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoublePtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoublePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoublePtr_DEFINED)
#define IL2CPP_STRUCT_DoublePtr_DEFINED
struct DoublePtr__Class;
struct DoublePtr {
    struct DoublePtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DoublePtr_FWDDECL)
#define IL2CPP_STRUCT_DoublePtr_FWDDECL
#include <Modloader/app/structs/DoublePtr__Class.h>
#endif
#undef IL2CPP_STRUCT_DoublePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoublePtr_DEFINED) && !defined(IL2CPP_STRUCT_DoublePtr_FWDDECL)
#include <Modloader/app/structs/DoublePtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoublePtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
