
// Generated from R:/Documents/_INSA/4/PLD COMP/MapleCompiler/front-end\MapleGrammar.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  MapleGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    MACRO = 45, WS = 46, SC = 47, TYPE = 48, TYPE_VOID = 49, CHAR = 50, 
    INTEGER = 51, ID = 52, COMMENT = 53, LINE_COMMENT = 54
  };

  enum {
    RuleStart = 0, RuleProgram = 1, RuleValue = 2, RuleOpUnaryPostfix = 3, 
    RuleOpUnaryPrefix = 4, RuleOpMultiplicative = 5, RuleOpAdditive = 6, 
    RuleOpBinaryShift = 7, RuleOpCompareRelational = 8, RuleOpCompareEquality = 9, 
    RuleOpBinaryAnd = 10, RuleOpBinaryXor = 11, RuleOpBinaryOr = 12, RuleOpAnd = 13, 
    RuleOpOr = 14, RuleOpAffectation = 15, RuleExpr = 16, RuleDeclarationVar = 17, 
    RuleDeclarationTab = 18, RuleDeclaration = 19, RuleDefinitionTab = 20, 
    RuleAssignment = 21, RuleAccessorTab = 22, RuleAccessorVar = 23, RuleAccessorFunction = 24, 
    RuleLeftValue = 25, RuleAccessor = 26, RuleIfStatement = 27, RuleElseStatement = 28, 
    RuleWhileStatement = 29, RuleFunctionDefinition = 30, RuleReturnStatement = 31, 
    RuleBlockFunction = 32, RuleArgumentList = 33, RuleTypeList = 34, RuleBlock = 35, 
    RuleStatement = 36, RuleInstruction = 37
  };

  MapleGrammarParser(antlr4::TokenStream *input);
  ~MapleGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartContext;
  class ProgramContext;
  class ValueContext;
  class OpUnaryPostfixContext;
  class OpUnaryPrefixContext;
  class OpMultiplicativeContext;
  class OpAdditiveContext;
  class OpBinaryShiftContext;
  class OpCompareRelationalContext;
  class OpCompareEqualityContext;
  class OpBinaryAndContext;
  class OpBinaryXorContext;
  class OpBinaryOrContext;
  class OpAndContext;
  class OpOrContext;
  class OpAffectationContext;
  class ExprContext;
  class DeclarationVarContext;
  class DeclarationTabContext;
  class DeclarationContext;
  class DefinitionTabContext;
  class AssignmentContext;
  class AccessorTabContext;
  class AccessorVarContext;
  class AccessorFunctionContext;
  class LeftValueContext;
  class AccessorContext;
  class IfStatementContext;
  class ElseStatementContext;
  class WhileStatementContext;
  class FunctionDefinitionContext;
  class ReturnStatementContext;
  class BlockFunctionContext;
  class ArgumentListContext;
  class TypeListContext;
  class BlockContext;
  class StatementContext;
  class InstructionContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProgramContext *> program();
    ProgramContext* program(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  OpUnaryPostfixContext : public antlr4::ParserRuleContext {
  public:
    OpUnaryPostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpUnaryPostfixContext* opUnaryPostfix();

  class  OpUnaryPrefixContext : public antlr4::ParserRuleContext {
  public:
    OpUnaryPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpUnaryPrefixContext* opUnaryPrefix();

  class  OpMultiplicativeContext : public antlr4::ParserRuleContext {
  public:
    OpMultiplicativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpMultiplicativeContext* opMultiplicative();

  class  OpAdditiveContext : public antlr4::ParserRuleContext {
  public:
    OpAdditiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpAdditiveContext* opAdditive();

  class  OpBinaryShiftContext : public antlr4::ParserRuleContext {
  public:
    OpBinaryShiftContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpBinaryShiftContext* opBinaryShift();

  class  OpCompareRelationalContext : public antlr4::ParserRuleContext {
  public:
    OpCompareRelationalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpCompareRelationalContext* opCompareRelational();

  class  OpCompareEqualityContext : public antlr4::ParserRuleContext {
  public:
    OpCompareEqualityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpCompareEqualityContext* opCompareEquality();

  class  OpBinaryAndContext : public antlr4::ParserRuleContext {
  public:
    OpBinaryAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpBinaryAndContext* opBinaryAnd();

  class  OpBinaryXorContext : public antlr4::ParserRuleContext {
  public:
    OpBinaryXorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpBinaryXorContext* opBinaryXor();

  class  OpBinaryOrContext : public antlr4::ParserRuleContext {
  public:
    OpBinaryOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpBinaryOrContext* opBinaryOr();

  class  OpAndContext : public antlr4::ParserRuleContext {
  public:
    OpAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpAndContext* opAnd();

  class  OpOrContext : public antlr4::ParserRuleContext {
  public:
    OpOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpOrContext* opOr();

  class  OpAffectationContext : public antlr4::ParserRuleContext {
  public:
    OpAffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpAffectationContext* opAffectation();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprAdditiveContext : public ExprContext {
  public:
    ExprAdditiveContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpAdditiveContext *opAdditive();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprValueContext : public ExprContext {
  public:
    ExprValueContext(ExprContext *ctx);

    ValueContext *value();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprBinaryShiftContext : public ExprContext {
  public:
    ExprBinaryShiftContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpBinaryShiftContext *opBinaryShift();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAffectationContext : public ExprContext {
  public:
    ExprAffectationContext(ExprContext *ctx);

    LeftValueContext *leftValue();
    OpAffectationContext *opAffectation();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprBinaryXorContext : public ExprContext {
  public:
    ExprBinaryXorContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpBinaryXorContext *opBinaryXor();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprBinaryAndContext : public ExprContext {
  public:
    ExprBinaryAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpBinaryAndContext *opBinaryAnd();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprOrContext : public ExprContext {
  public:
    ExprOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpOrContext *opOr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprUnaryPostfixContext : public ExprContext {
  public:
    ExprUnaryPostfixContext(ExprContext *ctx);

    ExprContext *expr();
    OpUnaryPostfixContext *opUnaryPostfix();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMultiplicativeContext : public ExprContext {
  public:
    ExprMultiplicativeContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpMultiplicativeContext *opMultiplicative();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAccessorContext : public ExprContext {
  public:
    ExprAccessorContext(ExprContext *ctx);

    AccessorContext *accessor();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAndContext : public ExprContext {
  public:
    ExprAndContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpAndContext *opAnd();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprParenthesisContext : public ExprContext {
  public:
    ExprParenthesisContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprBinaryOrContext : public ExprContext {
  public:
    ExprBinaryOrContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpBinaryOrContext *opBinaryOr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCompareRelationalContext : public ExprContext {
  public:
    ExprCompareRelationalContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpCompareRelationalContext *opCompareRelational();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprCompareEqualityContext : public ExprContext {
  public:
    ExprCompareEqualityContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    OpCompareEqualityContext *opCompareEquality();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprUnaryPrefixContext : public ExprContext {
  public:
    ExprUnaryPrefixContext(ExprContext *ctx);

    OpUnaryPrefixContext *opUnaryPrefix();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  DeclarationVarContext : public antlr4::ParserRuleContext {
  public:
    DeclarationVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *SC();
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationVarContext* declarationVar();

  class  DeclarationTabContext : public antlr4::ParserRuleContext {
  public:
    DeclarationTabContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SC();
    DefinitionTabContext *definitionTab();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationTabContext* declarationTab();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationVarContext *declarationVar();
    DeclarationTabContext *declarationTab();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  DefinitionTabContext : public antlr4::ParserRuleContext {
  public:
    DefinitionTabContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionTabContext* definitionTab();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  AccessorTabContext : public antlr4::ParserRuleContext {
  public:
    AccessorTabContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessorTabContext* accessorTab();

  class  AccessorVarContext : public antlr4::ParserRuleContext {
  public:
    AccessorVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessorVarContext* accessorVar();

  class  AccessorFunctionContext : public antlr4::ParserRuleContext {
  public:
    AccessorFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ArgumentListContext *argumentList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessorFunctionContext* accessorFunction();

  class  LeftValueContext : public antlr4::ParserRuleContext {
  public:
    LeftValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessorTabContext *accessorTab();
    AccessorVarContext *accessorVar();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftValueContext* leftValue();

  class  AccessorContext : public antlr4::ParserRuleContext {
  public:
    AccessorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeftValueContext *leftValue();
    AccessorFunctionContext *accessorFunction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessorContext* accessor();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    InstructionContext *instruction();
    ElseStatementContext *elseStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InstructionContext *instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    InstructionContext *instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    BlockFunctionContext *blockFunction();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> TYPE_VOID();
    antlr4::tree::TerminalNode* TYPE_VOID(size_t i);
    TypeListContext *typeList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  BlockFunctionContext : public antlr4::ParserRuleContext {
  public:
    BlockFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockFunctionContext* blockFunction();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeListContext* typeList();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InstructionContext *> instruction();
    InstructionContext* instruction(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    BlockContext *block();
    ReturnStatementContext *returnStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

