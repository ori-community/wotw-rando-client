#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBashAttackable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBashAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBashAttackable_DEFINED)
#define IL2CPP_STRUCT_IBashAttackable_DEFINED
struct IBashAttackable__Class;
struct IBashAttackable {
    struct IBashAttackable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBashAttackable_FWDDECL)
#define IL2CPP_STRUCT_IBashAttackable_FWDDECL
#include <Modloader/app/structs/IBashAttackable__Class.h>
#endif
#undef IL2CPP_STRUCT_IBashAttackable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBashAttackable_DEFINED) && !defined(IL2CPP_STRUCT_IBashAttackable_FWDDECL)
#include <Modloader/app/structs/IBashAttackable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBashAttackable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
