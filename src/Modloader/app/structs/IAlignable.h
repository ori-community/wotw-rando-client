#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAlignable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAlignable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAlignable_DEFINED)
#define IL2CPP_STRUCT_IAlignable_DEFINED
struct IAlignable__Class;
struct IAlignable {
    struct IAlignable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAlignable_FWDDECL)
#define IL2CPP_STRUCT_IAlignable_FWDDECL
#include <Modloader/app/structs/IAlignable__Class.h>
#endif
#undef IL2CPP_STRUCT_IAlignable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAlignable_DEFINED) && !defined(IL2CPP_STRUCT_IAlignable_FWDDECL)
#include <Modloader/app/structs/IAlignable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAlignable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
