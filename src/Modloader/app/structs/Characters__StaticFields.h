#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Characters__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Characters__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Characters__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Characters__StaticFields_DEFINED
struct ICharacter;
struct SeinCharacter;
struct BabySein;
struct Naru;
struct Ku;
struct Ori;
struct Characters__StaticFields {
    bool HasSein;
    bool HasBabySein;
    bool HasNaru;
    bool HasKu;
    bool HasCurrent;
    struct ICharacter* _Current_k__BackingField;
    struct SeinCharacter* m_sein;
    struct BabySein* m_babySein;
    struct Naru* m_naru;
    struct Ku* m_ku;
    bool HasOri;
    struct Ori* m_ori;
};
#endif
#if !defined(IL2CPP_STRUCT_Characters__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Characters__StaticFields_FWDDECL
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/Ori.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_Characters__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Characters__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Characters__StaticFields_FWDDECL)
#include <Modloader/app/structs/Characters__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Characters__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
