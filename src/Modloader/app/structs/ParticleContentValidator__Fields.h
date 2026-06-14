#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleContentValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleContentValidator__Fields_DEFINED)
#include <Modloader/app/structs/ContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_ParticleContentValidator__Fields_DEFINED
struct SymbolsDictionary;
struct Positions;
struct Stack;
struct SyntaxTreeNode;
struct ParticleContentValidator__Fields {
    struct ContentValidator__Fields _;
    struct SymbolsDictionary* symbols;
    struct Positions* positions;
    struct Stack* stack;
    struct SyntaxTreeNode* contentNode;
    bool isPartial;
    int32_t minMaxNodesCount;
    bool enableUpaCheck;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleContentValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParticleContentValidator__Fields_FWDDECL
#include <Modloader/app/structs/Positions.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/SymbolsDictionary.h>
#include <Modloader/app/structs/SyntaxTreeNode.h>
#endif
#undef IL2CPP_STRUCT_ParticleContentValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleContentValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParticleContentValidator__Fields_FWDDECL)
#include <Modloader/app/structs/ParticleContentValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleContentValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
