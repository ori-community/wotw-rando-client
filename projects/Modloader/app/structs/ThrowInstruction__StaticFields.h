#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThrowInstruction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThrowInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowInstruction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ThrowInstruction__StaticFields_DEFINED
struct ThrowInstruction;
struct ConstructorInfo;
struct ThrowInstruction__StaticFields {
    struct ThrowInstruction* Throw;
    struct ThrowInstruction* VoidThrow;
    struct ThrowInstruction* Rethrow;
    struct ThrowInstruction* VoidRethrow;
    struct ConstructorInfo* _runtimeWrappedExceptionCtor;
};
#endif
#if !defined(IL2CPP_STRUCT_ThrowInstruction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ThrowInstruction__StaticFields_FWDDECL
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/ThrowInstruction.h>
#endif
#undef IL2CPP_STRUCT_ThrowInstruction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowInstruction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ThrowInstruction__StaticFields_FWDDECL)
#include <Modloader/app/structs/ThrowInstruction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThrowInstruction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
