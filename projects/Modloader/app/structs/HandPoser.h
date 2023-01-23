#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandPoser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandPoser_DEFINED)
#include <Modloader/app/structs/HandPoser__Fields.h>
#if defined(IL2CPP_STRUCT_HandPoser__Fields_DEFINED)
#define IL2CPP_STRUCT_HandPoser_DEFINED
struct HandPoser__Class;
struct HandPoser {
    struct HandPoser__Class* klass;
    MonitorData* monitor;
    struct HandPoser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandPoser_FWDDECL)
#define IL2CPP_STRUCT_HandPoser_FWDDECL
#include <Modloader/app/structs/HandPoser__Class.h>
#endif
#undef IL2CPP_STRUCT_HandPoser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandPoser_DEFINED) && !defined(IL2CPP_STRUCT_HandPoser_FWDDECL)
#include <Modloader/app/structs/HandPoser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandPoser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
