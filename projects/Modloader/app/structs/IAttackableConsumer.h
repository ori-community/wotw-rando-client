#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAttackableConsumer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAttackableConsumer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackableConsumer_DEFINED)
#define IL2CPP_STRUCT_IAttackableConsumer_DEFINED
struct IAttackableConsumer__Class;
struct IAttackableConsumer {
    struct IAttackableConsumer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAttackableConsumer_FWDDECL)
#define IL2CPP_STRUCT_IAttackableConsumer_FWDDECL
#include <Modloader/app/structs/IAttackableConsumer__Class.h>
#endif
#undef IL2CPP_STRUCT_IAttackableConsumer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAttackableConsumer_DEFINED) && !defined(IL2CPP_STRUCT_IAttackableConsumer_FWDDECL)
#include <Modloader/app/structs/IAttackableConsumer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAttackableConsumer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
