#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateAggregate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateAggregate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateAggregate_DEFINED)
#define IL2CPP_STRUCT_IUberStateAggregate_DEFINED
struct IUberStateAggregate__Class;
struct IUberStateAggregate {
    struct IUberStateAggregate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateAggregate_FWDDECL)
#define IL2CPP_STRUCT_IUberStateAggregate_FWDDECL
#include <Modloader/app/structs/IUberStateAggregate__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberStateAggregate_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateAggregate_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateAggregate_FWDDECL)
#include <Modloader/app/structs/IUberStateAggregate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateAggregate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
