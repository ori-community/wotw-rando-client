#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballStayInPlace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballStayInPlace_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballStayInPlace_DEFINED)
#include <Modloader/app/structs/GasballStayInPlace__Fields.h>
#if defined(IL2CPP_STRUCT_GasballStayInPlace__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballStayInPlace_DEFINED
struct GasballStayInPlace__Class;
struct GasballStayInPlace {
    struct GasballStayInPlace__Class* klass;
    MonitorData* monitor;
    struct GasballStayInPlace__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballStayInPlace_FWDDECL)
#define IL2CPP_STRUCT_GasballStayInPlace_FWDDECL
#include <Modloader/app/structs/GasballStayInPlace__Class.h>
#endif
#undef IL2CPP_STRUCT_GasballStayInPlace_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballStayInPlace_DEFINED) && !defined(IL2CPP_STRUCT_GasballStayInPlace_FWDDECL)
#include <Modloader/app/structs/GasballStayInPlace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballStayInPlace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
